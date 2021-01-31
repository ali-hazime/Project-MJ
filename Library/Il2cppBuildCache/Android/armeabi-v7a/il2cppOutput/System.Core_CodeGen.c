#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000A System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000C TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000012 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000014 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000015 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000016 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000017 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000018 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000021 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000041 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000042 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000043 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000044 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000045 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000046 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000047 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000048 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000049 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000004A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000004B System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004C System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000004D System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000004E System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000004F System.Void System.Linq.Set`1::Resize()
// 0x00000050 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000051 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000052 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000005B System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000005C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000005D System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000005E System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000005F System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000060 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000061 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000064 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000065 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000066 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000067 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000068 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000069 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x0000006A System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x0000006B System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000006C System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000006E System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x00000070 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x00000071 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000072 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000073 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000074 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000075 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000076 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000077 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[119] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[119] = 
{
	2036,
	2123,
	2123,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[35] = 
{
	{ 0x02000004, { 57, 4 } },
	{ 0x02000005, { 61, 9 } },
	{ 0x02000006, { 72, 7 } },
	{ 0x02000007, { 81, 10 } },
	{ 0x02000008, { 93, 11 } },
	{ 0x02000009, { 107, 9 } },
	{ 0x0200000A, { 119, 12 } },
	{ 0x0200000B, { 134, 1 } },
	{ 0x0200000C, { 135, 2 } },
	{ 0x0200000D, { 137, 12 } },
	{ 0x0200000E, { 149, 8 } },
	{ 0x02000010, { 157, 4 } },
	{ 0x02000011, { 161, 34 } },
	{ 0x02000013, { 195, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 1 } },
	{ 0x06000009, { 31, 2 } },
	{ 0x0600000A, { 33, 1 } },
	{ 0x0600000B, { 34, 5 } },
	{ 0x0600000C, { 39, 3 } },
	{ 0x0600000D, { 42, 2 } },
	{ 0x0600000E, { 44, 4 } },
	{ 0x0600000F, { 48, 3 } },
	{ 0x06000010, { 51, 1 } },
	{ 0x06000011, { 52, 3 } },
	{ 0x06000012, { 55, 2 } },
	{ 0x06000022, { 70, 2 } },
	{ 0x06000027, { 79, 2 } },
	{ 0x0600002C, { 91, 2 } },
	{ 0x06000032, { 104, 3 } },
	{ 0x06000037, { 116, 3 } },
	{ 0x0600003C, { 131, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[197] = 
{
	{ (Il2CppRGCTXDataType)2, 1279 },
	{ (Il2CppRGCTXDataType)3, 3168 },
	{ (Il2CppRGCTXDataType)2, 1982 },
	{ (Il2CppRGCTXDataType)2, 1690 },
	{ (Il2CppRGCTXDataType)3, 5463 },
	{ (Il2CppRGCTXDataType)2, 1341 },
	{ (Il2CppRGCTXDataType)2, 1697 },
	{ (Il2CppRGCTXDataType)3, 5481 },
	{ (Il2CppRGCTXDataType)2, 1692 },
	{ (Il2CppRGCTXDataType)3, 5470 },
	{ (Il2CppRGCTXDataType)2, 1280 },
	{ (Il2CppRGCTXDataType)3, 3169 },
	{ (Il2CppRGCTXDataType)2, 1993 },
	{ (Il2CppRGCTXDataType)2, 1699 },
	{ (Il2CppRGCTXDataType)3, 5488 },
	{ (Il2CppRGCTXDataType)2, 1355 },
	{ (Il2CppRGCTXDataType)2, 1707 },
	{ (Il2CppRGCTXDataType)3, 5518 },
	{ (Il2CppRGCTXDataType)2, 1703 },
	{ (Il2CppRGCTXDataType)3, 5502 },
	{ (Il2CppRGCTXDataType)2, 508 },
	{ (Il2CppRGCTXDataType)3, 122 },
	{ (Il2CppRGCTXDataType)3, 123 },
	{ (Il2CppRGCTXDataType)2, 886 },
	{ (Il2CppRGCTXDataType)3, 2368 },
	{ (Il2CppRGCTXDataType)2, 509 },
	{ (Il2CppRGCTXDataType)3, 126 },
	{ (Il2CppRGCTXDataType)3, 127 },
	{ (Il2CppRGCTXDataType)2, 890 },
	{ (Il2CppRGCTXDataType)3, 2370 },
	{ (Il2CppRGCTXDataType)3, 6676 },
	{ (Il2CppRGCTXDataType)2, 516 },
	{ (Il2CppRGCTXDataType)3, 170 },
	{ (Il2CppRGCTXDataType)3, 6666 },
	{ (Il2CppRGCTXDataType)3, 2077 },
	{ (Il2CppRGCTXDataType)2, 805 },
	{ (Il2CppRGCTXDataType)2, 1029 },
	{ (Il2CppRGCTXDataType)2, 1093 },
	{ (Il2CppRGCTXDataType)2, 1143 },
	{ (Il2CppRGCTXDataType)2, 657 },
	{ (Il2CppRGCTXDataType)3, 607 },
	{ (Il2CppRGCTXDataType)3, 608 },
	{ (Il2CppRGCTXDataType)2, 1342 },
	{ (Il2CppRGCTXDataType)3, 3435 },
	{ (Il2CppRGCTXDataType)2, 1229 },
	{ (Il2CppRGCTXDataType)2, 959 },
	{ (Il2CppRGCTXDataType)2, 1035 },
	{ (Il2CppRGCTXDataType)2, 1094 },
	{ (Il2CppRGCTXDataType)2, 1036 },
	{ (Il2CppRGCTXDataType)2, 1095 },
	{ (Il2CppRGCTXDataType)3, 2369 },
	{ (Il2CppRGCTXDataType)2, 1026 },
	{ (Il2CppRGCTXDataType)2, 1027 },
	{ (Il2CppRGCTXDataType)2, 1092 },
	{ (Il2CppRGCTXDataType)3, 2367 },
	{ (Il2CppRGCTXDataType)2, 958 },
	{ (Il2CppRGCTXDataType)2, 1034 },
	{ (Il2CppRGCTXDataType)3, 3170 },
	{ (Il2CppRGCTXDataType)3, 3172 },
	{ (Il2CppRGCTXDataType)2, 336 },
	{ (Il2CppRGCTXDataType)3, 3171 },
	{ (Il2CppRGCTXDataType)3, 3180 },
	{ (Il2CppRGCTXDataType)2, 1283 },
	{ (Il2CppRGCTXDataType)2, 1693 },
	{ (Il2CppRGCTXDataType)3, 5471 },
	{ (Il2CppRGCTXDataType)3, 3181 },
	{ (Il2CppRGCTXDataType)2, 1066 },
	{ (Il2CppRGCTXDataType)2, 1114 },
	{ (Il2CppRGCTXDataType)3, 2375 },
	{ (Il2CppRGCTXDataType)3, 6649 },
	{ (Il2CppRGCTXDataType)2, 1704 },
	{ (Il2CppRGCTXDataType)3, 5503 },
	{ (Il2CppRGCTXDataType)3, 3173 },
	{ (Il2CppRGCTXDataType)2, 1282 },
	{ (Il2CppRGCTXDataType)2, 1691 },
	{ (Il2CppRGCTXDataType)3, 5464 },
	{ (Il2CppRGCTXDataType)3, 2374 },
	{ (Il2CppRGCTXDataType)3, 3174 },
	{ (Il2CppRGCTXDataType)3, 6648 },
	{ (Il2CppRGCTXDataType)2, 1700 },
	{ (Il2CppRGCTXDataType)3, 5489 },
	{ (Il2CppRGCTXDataType)3, 3187 },
	{ (Il2CppRGCTXDataType)2, 1284 },
	{ (Il2CppRGCTXDataType)2, 1698 },
	{ (Il2CppRGCTXDataType)3, 5482 },
	{ (Il2CppRGCTXDataType)3, 3469 },
	{ (Il2CppRGCTXDataType)3, 1757 },
	{ (Il2CppRGCTXDataType)3, 2376 },
	{ (Il2CppRGCTXDataType)3, 1756 },
	{ (Il2CppRGCTXDataType)3, 3188 },
	{ (Il2CppRGCTXDataType)3, 6650 },
	{ (Il2CppRGCTXDataType)2, 1708 },
	{ (Il2CppRGCTXDataType)3, 5519 },
	{ (Il2CppRGCTXDataType)3, 3201 },
	{ (Il2CppRGCTXDataType)2, 1286 },
	{ (Il2CppRGCTXDataType)2, 1706 },
	{ (Il2CppRGCTXDataType)3, 5505 },
	{ (Il2CppRGCTXDataType)3, 3202 },
	{ (Il2CppRGCTXDataType)2, 1069 },
	{ (Il2CppRGCTXDataType)2, 1117 },
	{ (Il2CppRGCTXDataType)3, 2380 },
	{ (Il2CppRGCTXDataType)3, 2379 },
	{ (Il2CppRGCTXDataType)2, 1695 },
	{ (Il2CppRGCTXDataType)3, 5473 },
	{ (Il2CppRGCTXDataType)3, 6653 },
	{ (Il2CppRGCTXDataType)2, 1705 },
	{ (Il2CppRGCTXDataType)3, 5504 },
	{ (Il2CppRGCTXDataType)3, 3194 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)2, 1702 },
	{ (Il2CppRGCTXDataType)3, 5491 },
	{ (Il2CppRGCTXDataType)3, 2378 },
	{ (Il2CppRGCTXDataType)3, 2377 },
	{ (Il2CppRGCTXDataType)3, 3195 },
	{ (Il2CppRGCTXDataType)2, 1694 },
	{ (Il2CppRGCTXDataType)3, 5472 },
	{ (Il2CppRGCTXDataType)3, 6652 },
	{ (Il2CppRGCTXDataType)2, 1701 },
	{ (Il2CppRGCTXDataType)3, 5490 },
	{ (Il2CppRGCTXDataType)3, 3208 },
	{ (Il2CppRGCTXDataType)2, 1287 },
	{ (Il2CppRGCTXDataType)2, 1710 },
	{ (Il2CppRGCTXDataType)3, 5521 },
	{ (Il2CppRGCTXDataType)3, 3470 },
	{ (Il2CppRGCTXDataType)3, 1759 },
	{ (Il2CppRGCTXDataType)3, 2382 },
	{ (Il2CppRGCTXDataType)3, 2381 },
	{ (Il2CppRGCTXDataType)3, 1758 },
	{ (Il2CppRGCTXDataType)3, 3209 },
	{ (Il2CppRGCTXDataType)2, 1696 },
	{ (Il2CppRGCTXDataType)3, 5474 },
	{ (Il2CppRGCTXDataType)3, 6654 },
	{ (Il2CppRGCTXDataType)2, 1709 },
	{ (Il2CppRGCTXDataType)3, 5520 },
	{ (Il2CppRGCTXDataType)3, 2372 },
	{ (Il2CppRGCTXDataType)3, 2373 },
	{ (Il2CppRGCTXDataType)3, 2383 },
	{ (Il2CppRGCTXDataType)3, 172 },
	{ (Il2CppRGCTXDataType)3, 173 },
	{ (Il2CppRGCTXDataType)2, 1587 },
	{ (Il2CppRGCTXDataType)3, 5020 },
	{ (Il2CppRGCTXDataType)2, 1061 },
	{ (Il2CppRGCTXDataType)2, 1110 },
	{ (Il2CppRGCTXDataType)3, 5021 },
	{ (Il2CppRGCTXDataType)3, 175 },
	{ (Il2CppRGCTXDataType)2, 334 },
	{ (Il2CppRGCTXDataType)2, 517 },
	{ (Il2CppRGCTXDataType)3, 171 },
	{ (Il2CppRGCTXDataType)3, 174 },
	{ (Il2CppRGCTXDataType)3, 2110 },
	{ (Il2CppRGCTXDataType)2, 819 },
	{ (Il2CppRGCTXDataType)2, 2046 },
	{ (Il2CppRGCTXDataType)3, 5017 },
	{ (Il2CppRGCTXDataType)3, 5018 },
	{ (Il2CppRGCTXDataType)2, 1157 },
	{ (Il2CppRGCTXDataType)3, 5019 },
	{ (Il2CppRGCTXDataType)2, 266 },
	{ (Il2CppRGCTXDataType)2, 960 },
	{ (Il2CppRGCTXDataType)2, 1996 },
	{ (Il2CppRGCTXDataType)2, 1046 },
	{ (Il2CppRGCTXDataType)2, 1096 },
	{ (Il2CppRGCTXDataType)3, 2093 },
	{ (Il2CppRGCTXDataType)2, 813 },
	{ (Il2CppRGCTXDataType)3, 2540 },
	{ (Il2CppRGCTXDataType)3, 2541 },
	{ (Il2CppRGCTXDataType)2, 948 },
	{ (Il2CppRGCTXDataType)3, 2544 },
	{ (Il2CppRGCTXDataType)2, 948 },
	{ (Il2CppRGCTXDataType)3, 2545 },
	{ (Il2CppRGCTXDataType)2, 961 },
	{ (Il2CppRGCTXDataType)3, 2549 },
	{ (Il2CppRGCTXDataType)3, 2553 },
	{ (Il2CppRGCTXDataType)3, 2552 },
	{ (Il2CppRGCTXDataType)2, 2044 },
	{ (Il2CppRGCTXDataType)3, 2543 },
	{ (Il2CppRGCTXDataType)3, 2542 },
	{ (Il2CppRGCTXDataType)3, 2550 },
	{ (Il2CppRGCTXDataType)2, 1152 },
	{ (Il2CppRGCTXDataType)3, 2547 },
	{ (Il2CppRGCTXDataType)3, 6894 },
	{ (Il2CppRGCTXDataType)2, 792 },
	{ (Il2CppRGCTXDataType)3, 1750 },
	{ (Il2CppRGCTXDataType)1, 1013 },
	{ (Il2CppRGCTXDataType)2, 2002 },
	{ (Il2CppRGCTXDataType)3, 2546 },
	{ (Il2CppRGCTXDataType)1, 2002 },
	{ (Il2CppRGCTXDataType)1, 1152 },
	{ (Il2CppRGCTXDataType)2, 2044 },
	{ (Il2CppRGCTXDataType)2, 2002 },
	{ (Il2CppRGCTXDataType)2, 1048 },
	{ (Il2CppRGCTXDataType)2, 1098 },
	{ (Il2CppRGCTXDataType)3, 2551 },
	{ (Il2CppRGCTXDataType)3, 2548 },
	{ (Il2CppRGCTXDataType)3, 2554 },
	{ (Il2CppRGCTXDataType)2, 225 },
	{ (Il2CppRGCTXDataType)3, 1760 },
	{ (Il2CppRGCTXDataType)2, 345 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	119,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	35,
	s_rgctxIndices,
	197,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
