load('//:subdir_glob.bzl', 'subdir_glob')

cxx_binary(
  name = 'metaltorch',
  header_namespace = 'metaltorch',
  headers = subdir_glob([
    ('metaltorch/include', '**/*.hpp'),
  ]),
  srcs = glob([
    'metaltorch/src/**/*.cpp',
  ]),
  deps = [
    '//mathutils:mathutils',
  ],
)
