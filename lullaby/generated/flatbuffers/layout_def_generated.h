// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_LAYOUTDEF__H_
#define FLATBUFFERS_GENERATED_LAYOUTDEF__H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"

namespace lull {

struct LayoutDef;

struct LayoutElementDef;

struct RadialLayoutDef;

/// This component will control all direct children's transforms to place them
/// in a row-column or column-row layout.
struct LayoutDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.LayoutDef";
  }
  enum {
    VT_CANVAS_SIZE = 4,
    VT_SHRINK_TO_FIT = 6,
    VT_SPACING = 8,
    VT_FILL_ORDER = 10,
    VT_HORIZONTAL_ALIGNMENT = 12,
    VT_VERTICAL_ALIGNMENT = 14,
    VT_ROW_ALIGNMENT = 16,
    VT_ELEMENTS_PER_WRAP = 18,
    VT_MAX_ELEMENTS = 20,
    VT_EMPTY_BLUEPRINT = 22,
    VT_COLUMN_ALIGNMENT = 24
  };
  /// The virtual "canvas" on which the entities will be positioned.
  const lull::Vec2 *canvas_size() const {
    return GetStruct<const lull::Vec2 *>(VT_CANVAS_SIZE);
  }
  /// If true, then the AABB of the layout will be set to the extent of the
  /// layout's children. If false, then it will be set to the size of the
  /// canvas.
  bool shrink_to_fit() const {
    return GetField<uint8_t>(VT_SHRINK_TO_FIT, 0) != 0;
  }
  /// The spacing between entities.
  const lull::Vec2 *spacing() const {
    return GetStruct<const lull::Vec2 *>(VT_SPACING);
  }
  /// The order in which elements will be added to the canvas.
  /// A fill_order is a combination of a "primary" and a "secondary"
  /// direction.  E.g. RightDown is right primary, and down secondary.
  lull::LayoutFillOrder fill_order() const {
    return static_cast<lull::LayoutFillOrder>(GetField<int32_t>(VT_FILL_ORDER, 0));
  }
  /// The anchor at which the entities will be aligned relative to the canvas
  /// horizontally.
  lull::LayoutHorizontalAlignment horizontal_alignment() const {
    return static_cast<lull::LayoutHorizontalAlignment>(GetField<int32_t>(VT_HORIZONTAL_ALIGNMENT, 0));
  }
  /// The anchor at which the completed layout aligns relative to the canvas.
  lull::LayoutVerticalAlignment vertical_alignment() const {
    return static_cast<lull::LayoutVerticalAlignment>(GetField<int32_t>(VT_VERTICAL_ALIGNMENT, 0));
  }
  /// The anchor at which the entities will be aligned within their row.
  /// Only for horizontal-first fill orders, e.g. RightDown, LeftDown
  lull::LayoutVerticalAlignment row_alignment() const {
    return static_cast<lull::LayoutVerticalAlignment>(GetField<int32_t>(VT_ROW_ALIGNMENT, 0));
  }
  /// The number of elements in the orders primary direction before wrapping.
  /// Unlimited if left as 0.
  int32_t elements_per_wrap() const {
    return GetField<int32_t>(VT_ELEMENTS_PER_WRAP, 0);
  }
  /// The maximum total number of elements the layout can hold.  Unlimited if
  /// left as 0.
  int32_t max_elements() const {
    return GetField<int32_t>(VT_MAX_ELEMENTS, 0);
  }
  /// If this and |max_elements| are set, then empty slots will be filled by
  /// instances of this blueprint.
  const flatbuffers::String *empty_blueprint() const {
    return GetPointer<const flatbuffers::String *>(VT_EMPTY_BLUEPRINT);
  }
  /// The anchor at which the entities will be aligned within their column.
  /// Only for vertical-first fill orders, e.g. DownRight
  lull::LayoutHorizontalAlignment column_alignment() const {
    return static_cast<lull::LayoutHorizontalAlignment>(GetField<int32_t>(VT_COLUMN_ALIGNMENT, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<lull::Vec2>(verifier, VT_CANVAS_SIZE) &&
           VerifyField<uint8_t>(verifier, VT_SHRINK_TO_FIT) &&
           VerifyField<lull::Vec2>(verifier, VT_SPACING) &&
           VerifyField<int32_t>(verifier, VT_FILL_ORDER) &&
           VerifyField<int32_t>(verifier, VT_HORIZONTAL_ALIGNMENT) &&
           VerifyField<int32_t>(verifier, VT_VERTICAL_ALIGNMENT) &&
           VerifyField<int32_t>(verifier, VT_ROW_ALIGNMENT) &&
           VerifyField<int32_t>(verifier, VT_ELEMENTS_PER_WRAP) &&
           VerifyField<int32_t>(verifier, VT_MAX_ELEMENTS) &&
           VerifyOffset(verifier, VT_EMPTY_BLUEPRINT) &&
           verifier.Verify(empty_blueprint()) &&
           VerifyField<int32_t>(verifier, VT_COLUMN_ALIGNMENT) &&
           verifier.EndTable();
  }
};

struct LayoutDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_canvas_size(const lull::Vec2 *canvas_size) {
    fbb_.AddStruct(LayoutDef::VT_CANVAS_SIZE, canvas_size);
  }
  void add_shrink_to_fit(bool shrink_to_fit) {
    fbb_.AddElement<uint8_t>(LayoutDef::VT_SHRINK_TO_FIT, static_cast<uint8_t>(shrink_to_fit), 0);
  }
  void add_spacing(const lull::Vec2 *spacing) {
    fbb_.AddStruct(LayoutDef::VT_SPACING, spacing);
  }
  void add_fill_order(lull::LayoutFillOrder fill_order) {
    fbb_.AddElement<int32_t>(LayoutDef::VT_FILL_ORDER, static_cast<int32_t>(fill_order), 0);
  }
  void add_horizontal_alignment(lull::LayoutHorizontalAlignment horizontal_alignment) {
    fbb_.AddElement<int32_t>(LayoutDef::VT_HORIZONTAL_ALIGNMENT, static_cast<int32_t>(horizontal_alignment), 0);
  }
  void add_vertical_alignment(lull::LayoutVerticalAlignment vertical_alignment) {
    fbb_.AddElement<int32_t>(LayoutDef::VT_VERTICAL_ALIGNMENT, static_cast<int32_t>(vertical_alignment), 0);
  }
  void add_row_alignment(lull::LayoutVerticalAlignment row_alignment) {
    fbb_.AddElement<int32_t>(LayoutDef::VT_ROW_ALIGNMENT, static_cast<int32_t>(row_alignment), 0);
  }
  void add_elements_per_wrap(int32_t elements_per_wrap) {
    fbb_.AddElement<int32_t>(LayoutDef::VT_ELEMENTS_PER_WRAP, elements_per_wrap, 0);
  }
  void add_max_elements(int32_t max_elements) {
    fbb_.AddElement<int32_t>(LayoutDef::VT_MAX_ELEMENTS, max_elements, 0);
  }
  void add_empty_blueprint(flatbuffers::Offset<flatbuffers::String> empty_blueprint) {
    fbb_.AddOffset(LayoutDef::VT_EMPTY_BLUEPRINT, empty_blueprint);
  }
  void add_column_alignment(lull::LayoutHorizontalAlignment column_alignment) {
    fbb_.AddElement<int32_t>(LayoutDef::VT_COLUMN_ALIGNMENT, static_cast<int32_t>(column_alignment), 0);
  }
  LayoutDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  LayoutDefBuilder &operator=(const LayoutDefBuilder &);
  flatbuffers::Offset<LayoutDef> Finish() {
    const auto end = fbb_.EndTable(start_, 11);
    auto o = flatbuffers::Offset<LayoutDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<LayoutDef> CreateLayoutDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    const lull::Vec2 *canvas_size = 0,
    bool shrink_to_fit = false,
    const lull::Vec2 *spacing = 0,
    lull::LayoutFillOrder fill_order = lull::LayoutFillOrder_RightDown,
    lull::LayoutHorizontalAlignment horizontal_alignment = lull::LayoutHorizontalAlignment_Left,
    lull::LayoutVerticalAlignment vertical_alignment = lull::LayoutVerticalAlignment_Top,
    lull::LayoutVerticalAlignment row_alignment = lull::LayoutVerticalAlignment_Top,
    int32_t elements_per_wrap = 0,
    int32_t max_elements = 0,
    flatbuffers::Offset<flatbuffers::String> empty_blueprint = 0,
    lull::LayoutHorizontalAlignment column_alignment = lull::LayoutHorizontalAlignment_Left) {
  LayoutDefBuilder builder_(_fbb);
  builder_.add_column_alignment(column_alignment);
  builder_.add_empty_blueprint(empty_blueprint);
  builder_.add_max_elements(max_elements);
  builder_.add_elements_per_wrap(elements_per_wrap);
  builder_.add_row_alignment(row_alignment);
  builder_.add_vertical_alignment(vertical_alignment);
  builder_.add_horizontal_alignment(horizontal_alignment);
  builder_.add_fill_order(fill_order);
  builder_.add_spacing(spacing);
  builder_.add_canvas_size(canvas_size);
  builder_.add_shrink_to_fit(shrink_to_fit);
  return builder_.Finish();
}

inline flatbuffers::Offset<LayoutDef> CreateLayoutDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const lull::Vec2 *canvas_size = 0,
    bool shrink_to_fit = false,
    const lull::Vec2 *spacing = 0,
    lull::LayoutFillOrder fill_order = lull::LayoutFillOrder_RightDown,
    lull::LayoutHorizontalAlignment horizontal_alignment = lull::LayoutHorizontalAlignment_Left,
    lull::LayoutVerticalAlignment vertical_alignment = lull::LayoutVerticalAlignment_Top,
    lull::LayoutVerticalAlignment row_alignment = lull::LayoutVerticalAlignment_Top,
    int32_t elements_per_wrap = 0,
    int32_t max_elements = 0,
    const char *empty_blueprint = nullptr,
    lull::LayoutHorizontalAlignment column_alignment = lull::LayoutHorizontalAlignment_Left) {
  return lull::CreateLayoutDef(
      _fbb,
      canvas_size,
      shrink_to_fit,
      spacing,
      fill_order,
      horizontal_alignment,
      vertical_alignment,
      row_alignment,
      elements_per_wrap,
      max_elements,
      empty_blueprint ? _fbb.CreateString(empty_blueprint) : 0,
      column_alignment);
}

/// This component is attached to a child of LayoutDef if the child wishes to be
/// resizable.  This only works on child elements that have a Def for a System
/// that supports LayoutResizeEvent.  As of 4/2017 these are supported:
///   LayoutDef
///   TextDef (flatui)
///   NinePatchDef
///
/// If the sum of all the sizes of non-weighted elements is greater than the
/// available canvas_size, then the weighted elements in that direction will be
/// hidden, including when canvas_size.y = 0 or canvas_size.x = 0.
struct LayoutElementDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.LayoutElementDef";
  }
  enum {
    VT_HORIZONTAL_WEIGHT = 4,
    VT_VERTICAL_WEIGHT = 6
  };
  /// If horizontal_weight is non-zero, then this element will fill up available
  /// space proportional to the total weight of all other weighted elements
  /// horizontally up to canvas_size.x if non-zero.
  float horizontal_weight() const {
    return GetField<float>(VT_HORIZONTAL_WEIGHT, 0.0f);
  }
  /// If vertical_weight is non-zero, then this element will fill up available
  /// space proportional to the total weight of all other weighted elements
  /// vertically up to canvas_size.y if non-zero.
  float vertical_weight() const {
    return GetField<float>(VT_VERTICAL_WEIGHT, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_HORIZONTAL_WEIGHT) &&
           VerifyField<float>(verifier, VT_VERTICAL_WEIGHT) &&
           verifier.EndTable();
  }
};

struct LayoutElementDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_horizontal_weight(float horizontal_weight) {
    fbb_.AddElement<float>(LayoutElementDef::VT_HORIZONTAL_WEIGHT, horizontal_weight, 0.0f);
  }
  void add_vertical_weight(float vertical_weight) {
    fbb_.AddElement<float>(LayoutElementDef::VT_VERTICAL_WEIGHT, vertical_weight, 0.0f);
  }
  LayoutElementDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  LayoutElementDefBuilder &operator=(const LayoutElementDefBuilder &);
  flatbuffers::Offset<LayoutElementDef> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<LayoutElementDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<LayoutElementDef> CreateLayoutElementDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    float horizontal_weight = 0.0f,
    float vertical_weight = 0.0f) {
  LayoutElementDefBuilder builder_(_fbb);
  builder_.add_vertical_weight(vertical_weight);
  builder_.add_horizontal_weight(horizontal_weight);
  return builder_.Finish();
}

struct RadialLayoutDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.RadialLayoutDef";
  }
  enum {
    VT_DEGREES_PER_ELEMENT = 4,
    VT_MAJOR_AXIS = 6,
    VT_MINOR_AXIS = 8,
    VT_MAX_ELEMENTS = 10,
    VT_EMPTY_BLUEPRINT = 12
  };
  /// The number of degrees of rotations between elements.  A value of 45 means
  /// 8 elements would fit on the circle.
  float degrees_per_element() const {
    return GetField<float>(VT_DEGREES_PER_ELEMENT, 0.0f);
  }
  /// The first axis of the circle.  The first element will be placed at
  /// major_axis.  Defaults to (1,0,0) if not set.
  const lull::Vec3 *major_axis() const {
    return GetStruct<const lull::Vec3 *>(VT_MAJOR_AXIS);
  }
  /// The second axis of the circle.  Should be perpendicular to |major_axis|.
  /// If an element is placed at 90 degrees, its pos will be minor_axis.
  /// Defaults to (0,1,0) if not set.
  const lull::Vec3 *minor_axis() const {
    return GetStruct<const lull::Vec3 *>(VT_MINOR_AXIS);
  }
  /// The maximum total number of elements the layout can hold.  Unlimited if
  /// left as 0.
  int32_t max_elements() const {
    return GetField<int32_t>(VT_MAX_ELEMENTS, 0);
  }
  /// If this and |max_elements| are set, then empty slots will be filled by
  /// instances of this blueprint.
  const flatbuffers::String *empty_blueprint() const {
    return GetPointer<const flatbuffers::String *>(VT_EMPTY_BLUEPRINT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_DEGREES_PER_ELEMENT) &&
           VerifyField<lull::Vec3>(verifier, VT_MAJOR_AXIS) &&
           VerifyField<lull::Vec3>(verifier, VT_MINOR_AXIS) &&
           VerifyField<int32_t>(verifier, VT_MAX_ELEMENTS) &&
           VerifyOffset(verifier, VT_EMPTY_BLUEPRINT) &&
           verifier.Verify(empty_blueprint()) &&
           verifier.EndTable();
  }
};

struct RadialLayoutDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_degrees_per_element(float degrees_per_element) {
    fbb_.AddElement<float>(RadialLayoutDef::VT_DEGREES_PER_ELEMENT, degrees_per_element, 0.0f);
  }
  void add_major_axis(const lull::Vec3 *major_axis) {
    fbb_.AddStruct(RadialLayoutDef::VT_MAJOR_AXIS, major_axis);
  }
  void add_minor_axis(const lull::Vec3 *minor_axis) {
    fbb_.AddStruct(RadialLayoutDef::VT_MINOR_AXIS, minor_axis);
  }
  void add_max_elements(int32_t max_elements) {
    fbb_.AddElement<int32_t>(RadialLayoutDef::VT_MAX_ELEMENTS, max_elements, 0);
  }
  void add_empty_blueprint(flatbuffers::Offset<flatbuffers::String> empty_blueprint) {
    fbb_.AddOffset(RadialLayoutDef::VT_EMPTY_BLUEPRINT, empty_blueprint);
  }
  RadialLayoutDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RadialLayoutDefBuilder &operator=(const RadialLayoutDefBuilder &);
  flatbuffers::Offset<RadialLayoutDef> Finish() {
    const auto end = fbb_.EndTable(start_, 5);
    auto o = flatbuffers::Offset<RadialLayoutDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<RadialLayoutDef> CreateRadialLayoutDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    float degrees_per_element = 0.0f,
    const lull::Vec3 *major_axis = 0,
    const lull::Vec3 *minor_axis = 0,
    int32_t max_elements = 0,
    flatbuffers::Offset<flatbuffers::String> empty_blueprint = 0) {
  RadialLayoutDefBuilder builder_(_fbb);
  builder_.add_empty_blueprint(empty_blueprint);
  builder_.add_max_elements(max_elements);
  builder_.add_minor_axis(minor_axis);
  builder_.add_major_axis(major_axis);
  builder_.add_degrees_per_element(degrees_per_element);
  return builder_.Finish();
}

inline flatbuffers::Offset<RadialLayoutDef> CreateRadialLayoutDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    float degrees_per_element = 0.0f,
    const lull::Vec3 *major_axis = 0,
    const lull::Vec3 *minor_axis = 0,
    int32_t max_elements = 0,
    const char *empty_blueprint = nullptr) {
  return lull::CreateRadialLayoutDef(
      _fbb,
      degrees_per_element,
      major_axis,
      minor_axis,
      max_elements,
      empty_blueprint ? _fbb.CreateString(empty_blueprint) : 0);
}

inline const lull::LayoutDef *GetLayoutDef(const void *buf) {
  return flatbuffers::GetRoot<lull::LayoutDef>(buf);
}

inline bool VerifyLayoutDefBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<lull::LayoutDef>(nullptr);
}

inline void FinishLayoutDefBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<lull::LayoutDef> root) {
  fbb.Finish(root);
}

}  // namespace lull

#endif  // FLATBUFFERS_GENERATED_LAYOUTDEF__H_