use ultraviolet as uv;

mod ffi {
    #[link(name = "uv-glm")]
    extern {
        pub fn glm_ortho(dst: *mut f32);
    }
}

pub fn glm_ortho() -> [f32; 16] {
    let mut ret: [f32; 16] = [0.0; 16];
    unsafe {
        ffi::glm_ortho(ret.as_mut_ptr());
    }
    ret
}


fn main() {
    {
        let glm_ortho = glm_ortho();
        let uv_ortho = uv::projection::orthographic_vk(0.0, 1024.0, 768.0, 0.0, 0.1, 100.0);

        println!("{:?}\n\t{:?}\n\t{:?}", glm_ortho == *uv_ortho.as_slice(), glm_ortho, uv_ortho.as_slice());

    }


}
