use cmake::Config;


fn main() {
    let dst = Config::new("cpp")
        .build();
    println!("cargo:rustc-link-search=native={}/lib", dst.display());
    println!("cargo:rustc-link-lib=static=uv-glm");
    println!("cargo:rustc-link-lib=static=stdc++");
}