#ifndef _PBJ_Internal_home_daniel_sirikata_libcore_src_Physics
#define _PBJ_Internal_home_daniel_sirikata_libcore_src_Physics
#include "pbj.hpp"
#include "/home/daniel/sirikata/libcore/src/Physics.pb.h"
namespace Sirikata {
namespace Physics {
namespace Protocol {
    class ICollisionBegin : public PBJ::Message< ICollisionBegin > {
    protected:
        _PBJ_Internal::CollisionBegin *super;
    public:
        _PBJ_Internal::CollisionBegin* _PBJSuper(){ return super; }
        const _PBJ_Internal::CollisionBegin* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::CollisionBegin _PBJ_SubType;
        ICollisionBegin(_PBJ_Internal::CollisionBegin &reference):PBJ::Message< ICollisionBegin >(&reference) {
            super=&reference;
        }
        template <class T> ICollisionBegin(const PBJ::RefClass<T> &other) : PBJ::Message<ICollisionBegin>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> ICollisionBegin& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        ICollisionBegin(ICollisionBegin &reference):PBJ::Message< ICollisionBegin >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        ICollisionBegin& operator=(ICollisionBegin &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const ICollisionBegin& default_instance() {
            static _PBJ_Internal::CollisionBegin def_inst=_PBJ_Internal::CollisionBegin::default_instance();
            static ICollisionBegin _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::CollisionBegin::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_timestamp() {return super->clear_timestamp();}
        enum {
            timestamp_field_tag=2
        };
        inline bool has_timestamp() const {return super->has_timestamp()&&_PBJValidate<PBJ::Time>()(super->timestamp());}
        inline PBJ::Time timestamp() const {
            if (has_timestamp()) {
                return (PBJ::Time)_PBJCast< PBJ::Time>()(super->timestamp());
            } else {
                return _PBJCast < PBJ::Time> ()();
            }
        }
        inline void set_timestamp(const PBJ::Time &value) const {
            super->set_timestamp(_PBJConstruct< PBJ::Time>()(value));
        }
        inline void clear_this_position() {return super->clear_this_position();}
        enum {
            this_position_field_tag=3
        };
        inline int this_position_size() const {return super->this_position_size()/3;}
        inline bool has_this_position(int index) const {assert(index<this_position_size()&&index>=0);return true;}
        inline PBJ::Vector3d this_position(int index) const {
            if (has_this_position(index)) {
                return _PBJCast< PBJ::Vector3d>()(super->this_position(index*3+0),super->this_position(index*3+1),super->this_position(index*3+2));
            } else {
                return _PBJCast< PBJ::Vector3d>()();
            }
        }
        inline void add_this_position(const PBJ::Vector3d &value) {
            _PBJConstruct< PBJ::Vector3d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3d>()(value);
            super->add_this_position(_PBJtempArray[0]);
            super->add_this_position(_PBJtempArray[1]);
            super->add_this_position(_PBJtempArray[2]);
        }
        inline void set_this_position(int index, const PBJ::Vector3d &value) {
            _PBJConstruct< PBJ::Vector3d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3d>()(value);
            super->set_this_position(index*3+0,_PBJtempArray[0]);
            super->set_this_position(index*3+1,_PBJtempArray[1]);
            super->set_this_position(index*3+2,_PBJtempArray[2]);
        }
        inline void clear_other_position() {return super->clear_other_position();}
        enum {
            other_position_field_tag=4
        };
        inline int other_position_size() const {return super->other_position_size()/3;}
        inline bool has_other_position(int index) const {assert(index<other_position_size()&&index>=0);return true;}
        inline PBJ::Vector3d other_position(int index) const {
            if (has_other_position(index)) {
                return _PBJCast< PBJ::Vector3d>()(super->other_position(index*3+0),super->other_position(index*3+1),super->other_position(index*3+2));
            } else {
                return _PBJCast< PBJ::Vector3d>()();
            }
        }
        inline void add_other_position(const PBJ::Vector3d &value) {
            _PBJConstruct< PBJ::Vector3d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3d>()(value);
            super->add_other_position(_PBJtempArray[0]);
            super->add_other_position(_PBJtempArray[1]);
            super->add_other_position(_PBJtempArray[2]);
        }
        inline void set_other_position(int index, const PBJ::Vector3d &value) {
            _PBJConstruct< PBJ::Vector3d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3d>()(value);
            super->set_other_position(index*3+0,_PBJtempArray[0]);
            super->set_other_position(index*3+1,_PBJtempArray[1]);
            super->set_other_position(index*3+2,_PBJtempArray[2]);
        }
        inline void clear_this_normal() {return super->clear_this_normal();}
        enum {
            this_normal_field_tag=5
        };
        inline int this_normal_size() const {return super->this_normal_size()/2;}
        inline bool has_this_normal(int index) const {assert(index<this_normal_size()&&index>=0);return true;}
        inline PBJ::Vector3f this_normal(int index) const {
            if (has_this_normal(index)) {
                return _PBJCast< PBJ::normal>()(super->this_normal(index*2+0),super->this_normal(index*2+1));
            } else {
                return _PBJCast< PBJ::normal>()();
            }
        }
        inline void add_this_normal(const PBJ::Vector3f &value) {
            _PBJConstruct< PBJ::normal>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::normal>()(value);
            super->add_this_normal(_PBJtempArray[0]);
            super->add_this_normal(_PBJtempArray[1]);
        }
        inline void set_this_normal(int index, const PBJ::Vector3f &value) {
            _PBJConstruct< PBJ::normal>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::normal>()(value);
            super->set_this_normal(index*2+0,_PBJtempArray[0]);
            super->set_this_normal(index*2+1,_PBJtempArray[1]);
        }
        inline void clear_impulse() {return super->clear_impulse();}
        enum {
            impulse_field_tag=6
        };
        inline int impulse_size() const {return super->impulse_size();}
        inline bool has_impulse(int index) const {assert(index>=0&&index<impulse_size()); return _PBJValidate< float>()(super->impulse(index));}
        inline float impulse(int index) const {
            return _PBJCast< float>()(super->impulse(index));
        }
        inline void set_impulse(int index, const float &value) const {
            return super->set_impulse(index,_PBJConstruct< float>()(value));
        }
        inline void add_impulse(const float &value) const {
            super->add_impulse(_PBJConstruct< float>()(value));
        }
        inline void clear_other_object_reference() {return super->clear_other_object_reference();}
        enum {
            other_object_reference_field_tag=7
        };
        inline bool has_other_object_reference() const {return super->has_other_object_reference()&&_PBJValidate<PBJ::UUID>()(super->other_object_reference());}
        inline PBJ::UUID other_object_reference() const {
            if (has_other_object_reference()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->other_object_reference());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_other_object_reference(const PBJ::UUID &value) const {
            super->set_other_object_reference(_PBJConstruct< PBJ::UUID>()(value));
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false;
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=0,
            reserved_field_tag_start_0=0,
            reserved_field_tag_end_0=0,
            reserved_field_tag_start_1=0,
            reserved_field_tag_end_1=0,
            reserved_field_tag_start_2=0,
            reserved_field_tag_end_2=0,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class CollisionBegin : public ICollisionBegin {
    protected:
        _PBJ_Internal::CollisionBegin superconstructed;
    public:
        CollisionBegin():ICollisionBegin(superconstructed) {
            super=&superconstructed;
        }
        CollisionBegin(const _PBJ_Internal::CollisionBegin &copy):ICollisionBegin(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        CollisionBegin(_PBJ_Internal::CollisionBegin &reference):ICollisionBegin(reference) {
        }
        CollisionBegin(const ICollisionBegin &copy):ICollisionBegin(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        CollisionBegin(const CollisionBegin &copy):ICollisionBegin(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        CollisionBegin& operator=(const ICollisionBegin &copy) {
            this->PBJ::Message<ICollisionBegin>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        CollisionBegin& operator=(const CollisionBegin &copy) {
            this->PBJ::Message<ICollisionBegin>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        CollisionBegin* New()const{ return new CollisionBegin; }
    };
}
}
}
namespace Sirikata {
namespace Physics {
namespace Protocol {
    class ICollisionEnd : public PBJ::Message< ICollisionEnd > {
    protected:
        _PBJ_Internal::CollisionEnd *super;
    public:
        _PBJ_Internal::CollisionEnd* _PBJSuper(){ return super; }
        const _PBJ_Internal::CollisionEnd* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::CollisionEnd _PBJ_SubType;
        ICollisionEnd(_PBJ_Internal::CollisionEnd &reference):PBJ::Message< ICollisionEnd >(&reference) {
            super=&reference;
        }
        template <class T> ICollisionEnd(const PBJ::RefClass<T> &other) : PBJ::Message<ICollisionEnd>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> ICollisionEnd& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        ICollisionEnd(ICollisionEnd &reference):PBJ::Message< ICollisionEnd >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        ICollisionEnd& operator=(ICollisionEnd &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const ICollisionEnd& default_instance() {
            static _PBJ_Internal::CollisionEnd def_inst=_PBJ_Internal::CollisionEnd::default_instance();
            static ICollisionEnd _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::CollisionEnd::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_timestamp() {return super->clear_timestamp();}
        enum {
            timestamp_field_tag=2
        };
        inline bool has_timestamp() const {return super->has_timestamp()&&_PBJValidate<PBJ::Time>()(super->timestamp());}
        inline PBJ::Time timestamp() const {
            if (has_timestamp()) {
                return (PBJ::Time)_PBJCast< PBJ::Time>()(super->timestamp());
            } else {
                return _PBJCast < PBJ::Time> ()();
            }
        }
        inline void set_timestamp(const PBJ::Time &value) const {
            super->set_timestamp(_PBJConstruct< PBJ::Time>()(value));
        }
        inline void clear_other_object_reference() {return super->clear_other_object_reference();}
        enum {
            other_object_reference_field_tag=6
        };
        inline bool has_other_object_reference() const {return super->has_other_object_reference()&&_PBJValidate<PBJ::UUID>()(super->other_object_reference());}
        inline PBJ::UUID other_object_reference() const {
            if (has_other_object_reference()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->other_object_reference());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_other_object_reference(const PBJ::UUID &value) const {
            super->set_other_object_reference(_PBJConstruct< PBJ::UUID>()(value));
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false;
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=0,
            reserved_field_tag_start_0=0,
            reserved_field_tag_end_0=0,
            reserved_field_tag_start_1=0,
            reserved_field_tag_end_1=0,
            reserved_field_tag_start_2=0,
            reserved_field_tag_end_2=0,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class CollisionEnd : public ICollisionEnd {
    protected:
        _PBJ_Internal::CollisionEnd superconstructed;
    public:
        CollisionEnd():ICollisionEnd(superconstructed) {
            super=&superconstructed;
        }
        CollisionEnd(const _PBJ_Internal::CollisionEnd &copy):ICollisionEnd(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        CollisionEnd(_PBJ_Internal::CollisionEnd &reference):ICollisionEnd(reference) {
        }
        CollisionEnd(const ICollisionEnd &copy):ICollisionEnd(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        CollisionEnd(const CollisionEnd &copy):ICollisionEnd(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        CollisionEnd& operator=(const ICollisionEnd &copy) {
            this->PBJ::Message<ICollisionEnd>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        CollisionEnd& operator=(const CollisionEnd &copy) {
            this->PBJ::Message<ICollisionEnd>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        CollisionEnd* New()const{ return new CollisionEnd; }
    };
}
}
}
#endif
