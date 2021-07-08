#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000014 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000015 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001C System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000022 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000023 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000024 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000027 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000028 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000029 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000002C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000040 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000045 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000050 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000051 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000052 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000053 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000054 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000055 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000056 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000057 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000059 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000005A System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000005B System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005C System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x0000005D System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x0000005E System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x0000005F System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000060 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000061 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000064 System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000068 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000069 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000006F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000070 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000071 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000072 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000073 System.Void System.Linq.Set`1::Resize()
// 0x00000074 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000075 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000076 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000077 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000078 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000079 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000007A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000007B System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000007C System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000007D TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000007E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000007F System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000080 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000081 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000082 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000083 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000084 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000085 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000086 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000087 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000088 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000089 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000008A System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000008B TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000008C System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32*,System.Int32)
extern void BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80 (void);
// 0x0000008D System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32[],System.Int32)
extern void BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB (void);
// 0x0000008E System.Void System.Collections.Generic.BitHelper::MarkBit(System.Int32)
extern void BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B (void);
// 0x0000008F System.Boolean System.Collections.Generic.BitHelper::IsMarked(System.Int32)
extern void BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608 (void);
// 0x00000090 System.Int32 System.Collections.Generic.BitHelper::ToIntArrayLength(System.Int32)
extern void BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3 (void);
// 0x00000091 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000092 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000094 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000095 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000096 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000097 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000098 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000099 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000009A System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000009B System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000009C System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000009D System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000A0 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000A1 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::IntersectWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000A4 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000A5 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A9 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1::IntersectWithHashSetWithSameEC(System.Collections.Generic.HashSet`1<T>)
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::IntersectWithEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000AC System.Int32 System.Collections.Generic.HashSet`1::InternalIndexOf(T)
// 0x000000AD System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000AE System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000AF System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000B1 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000B2 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000B3 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x000000B5 System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>)
// 0x000000B6 T[] System.Collections.Generic.ICollectionDebugView`1::get_Items()
static Il2CppMethodPointer s_methodPointers[182] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
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
	BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80,
	BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB,
	BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B,
	BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608,
	BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3,
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
static const int32_t s_InvokerIndices[182] = 
{
	7035,
	7035,
	7256,
	7256,
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
	1628,
	1980,
	3648,
	3049,
	6867,
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
static const Il2CppTokenRangePair s_rgctxIndices[60] = 
{
	{ 0x02000004, { 96, 4 } },
	{ 0x02000005, { 100, 9 } },
	{ 0x02000006, { 111, 7 } },
	{ 0x02000007, { 120, 10 } },
	{ 0x02000008, { 132, 11 } },
	{ 0x02000009, { 146, 9 } },
	{ 0x0200000A, { 158, 12 } },
	{ 0x0200000B, { 173, 1 } },
	{ 0x0200000C, { 174, 2 } },
	{ 0x0200000D, { 176, 12 } },
	{ 0x0200000E, { 188, 8 } },
	{ 0x0200000F, { 196, 11 } },
	{ 0x02000010, { 207, 2 } },
	{ 0x02000012, { 209, 8 } },
	{ 0x02000014, { 217, 3 } },
	{ 0x02000015, { 222, 5 } },
	{ 0x02000016, { 227, 7 } },
	{ 0x02000017, { 234, 3 } },
	{ 0x02000018, { 237, 7 } },
	{ 0x02000019, { 244, 4 } },
	{ 0x0200001B, { 248, 34 } },
	{ 0x0200001D, { 282, 2 } },
	{ 0x0200001E, { 284, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 1 } },
	{ 0x0600000F, { 39, 1 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 3 } },
	{ 0x06000012, { 45, 2 } },
	{ 0x06000013, { 47, 1 } },
	{ 0x06000014, { 48, 7 } },
	{ 0x06000015, { 55, 4 } },
	{ 0x06000016, { 59, 4 } },
	{ 0x06000017, { 63, 3 } },
	{ 0x06000018, { 66, 4 } },
	{ 0x06000019, { 70, 3 } },
	{ 0x0600001A, { 73, 3 } },
	{ 0x0600001B, { 76, 1 } },
	{ 0x0600001C, { 77, 1 } },
	{ 0x0600001D, { 78, 3 } },
	{ 0x0600001E, { 81, 3 } },
	{ 0x0600001F, { 84, 2 } },
	{ 0x06000020, { 86, 3 } },
	{ 0x06000021, { 89, 2 } },
	{ 0x06000022, { 91, 5 } },
	{ 0x06000032, { 109, 2 } },
	{ 0x06000037, { 118, 2 } },
	{ 0x0600003C, { 130, 2 } },
	{ 0x06000042, { 143, 3 } },
	{ 0x06000047, { 155, 3 } },
	{ 0x0600004C, { 170, 3 } },
	{ 0x06000078, { 220, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[286] = 
{
	{ (Il2CppRGCTXDataType)2, 3549 },
	{ (Il2CppRGCTXDataType)3, 14398 },
	{ (Il2CppRGCTXDataType)2, 5722 },
	{ (Il2CppRGCTXDataType)2, 5046 },
	{ (Il2CppRGCTXDataType)3, 28136 },
	{ (Il2CppRGCTXDataType)2, 3740 },
	{ (Il2CppRGCTXDataType)2, 5053 },
	{ (Il2CppRGCTXDataType)3, 28192 },
	{ (Il2CppRGCTXDataType)2, 5048 },
	{ (Il2CppRGCTXDataType)3, 28148 },
	{ (Il2CppRGCTXDataType)2, 3550 },
	{ (Il2CppRGCTXDataType)3, 14399 },
	{ (Il2CppRGCTXDataType)2, 5749 },
	{ (Il2CppRGCTXDataType)2, 5055 },
	{ (Il2CppRGCTXDataType)3, 28204 },
	{ (Il2CppRGCTXDataType)2, 3762 },
	{ (Il2CppRGCTXDataType)2, 5063 },
	{ (Il2CppRGCTXDataType)3, 28384 },
	{ (Il2CppRGCTXDataType)2, 5059 },
	{ (Il2CppRGCTXDataType)3, 28286 },
	{ (Il2CppRGCTXDataType)2, 1069 },
	{ (Il2CppRGCTXDataType)3, 89 },
	{ (Il2CppRGCTXDataType)3, 90 },
	{ (Il2CppRGCTXDataType)2, 2238 },
	{ (Il2CppRGCTXDataType)3, 10738 },
	{ (Il2CppRGCTXDataType)2, 1074 },
	{ (Il2CppRGCTXDataType)3, 115 },
	{ (Il2CppRGCTXDataType)3, 116 },
	{ (Il2CppRGCTXDataType)2, 2255 },
	{ (Il2CppRGCTXDataType)3, 10747 },
	{ (Il2CppRGCTXDataType)3, 32606 },
	{ (Il2CppRGCTXDataType)2, 1079 },
	{ (Il2CppRGCTXDataType)3, 183 },
	{ (Il2CppRGCTXDataType)3, 32612 },
	{ (Il2CppRGCTXDataType)2, 1083 },
	{ (Il2CppRGCTXDataType)3, 219 },
	{ (Il2CppRGCTXDataType)2, 4531 },
	{ (Il2CppRGCTXDataType)3, 23256 },
	{ (Il2CppRGCTXDataType)3, 11734 },
	{ (Il2CppRGCTXDataType)3, 32556 },
	{ (Il2CppRGCTXDataType)2, 1075 },
	{ (Il2CppRGCTXDataType)3, 155 },
	{ (Il2CppRGCTXDataType)2, 1480 },
	{ (Il2CppRGCTXDataType)3, 3010 },
	{ (Il2CppRGCTXDataType)3, 3011 },
	{ (Il2CppRGCTXDataType)2, 3741 },
	{ (Il2CppRGCTXDataType)3, 15415 },
	{ (Il2CppRGCTXDataType)3, 32637 },
	{ (Il2CppRGCTXDataType)2, 1613 },
	{ (Il2CppRGCTXDataType)3, 3974 },
	{ (Il2CppRGCTXDataType)2, 2667 },
	{ (Il2CppRGCTXDataType)2, 2798 },
	{ (Il2CppRGCTXDataType)3, 10745 },
	{ (Il2CppRGCTXDataType)3, 10746 },
	{ (Il2CppRGCTXDataType)3, 3975 },
	{ (Il2CppRGCTXDataType)2, 3279 },
	{ (Il2CppRGCTXDataType)2, 2466 },
	{ (Il2CppRGCTXDataType)2, 2646 },
	{ (Il2CppRGCTXDataType)2, 2790 },
	{ (Il2CppRGCTXDataType)2, 3280 },
	{ (Il2CppRGCTXDataType)2, 2467 },
	{ (Il2CppRGCTXDataType)2, 2647 },
	{ (Il2CppRGCTXDataType)2, 2791 },
	{ (Il2CppRGCTXDataType)2, 2648 },
	{ (Il2CppRGCTXDataType)2, 2792 },
	{ (Il2CppRGCTXDataType)3, 10740 },
	{ (Il2CppRGCTXDataType)2, 3281 },
	{ (Il2CppRGCTXDataType)2, 2468 },
	{ (Il2CppRGCTXDataType)2, 2649 },
	{ (Il2CppRGCTXDataType)2, 2793 },
	{ (Il2CppRGCTXDataType)2, 2650 },
	{ (Il2CppRGCTXDataType)2, 2794 },
	{ (Il2CppRGCTXDataType)3, 10741 },
	{ (Il2CppRGCTXDataType)2, 3278 },
	{ (Il2CppRGCTXDataType)2, 2645 },
	{ (Il2CppRGCTXDataType)2, 2789 },
	{ (Il2CppRGCTXDataType)2, 1822 },
	{ (Il2CppRGCTXDataType)2, 2632 },
	{ (Il2CppRGCTXDataType)2, 2633 },
	{ (Il2CppRGCTXDataType)2, 2786 },
	{ (Il2CppRGCTXDataType)3, 10737 },
	{ (Il2CppRGCTXDataType)2, 2631 },
	{ (Il2CppRGCTXDataType)2, 2785 },
	{ (Il2CppRGCTXDataType)3, 10736 },
	{ (Il2CppRGCTXDataType)2, 2465 },
	{ (Il2CppRGCTXDataType)2, 2643 },
	{ (Il2CppRGCTXDataType)2, 2644 },
	{ (Il2CppRGCTXDataType)2, 2788 },
	{ (Il2CppRGCTXDataType)3, 10739 },
	{ (Il2CppRGCTXDataType)2, 2464 },
	{ (Il2CppRGCTXDataType)3, 32529 },
	{ (Il2CppRGCTXDataType)3, 9703 },
	{ (Il2CppRGCTXDataType)2, 2083 },
	{ (Il2CppRGCTXDataType)2, 2635 },
	{ (Il2CppRGCTXDataType)2, 2787 },
	{ (Il2CppRGCTXDataType)2, 2979 },
	{ (Il2CppRGCTXDataType)3, 14400 },
	{ (Il2CppRGCTXDataType)3, 14402 },
	{ (Il2CppRGCTXDataType)2, 757 },
	{ (Il2CppRGCTXDataType)3, 14401 },
	{ (Il2CppRGCTXDataType)3, 14410 },
	{ (Il2CppRGCTXDataType)2, 3553 },
	{ (Il2CppRGCTXDataType)2, 5049 },
	{ (Il2CppRGCTXDataType)3, 28149 },
	{ (Il2CppRGCTXDataType)3, 14411 },
	{ (Il2CppRGCTXDataType)2, 2709 },
	{ (Il2CppRGCTXDataType)2, 2834 },
	{ (Il2CppRGCTXDataType)3, 10755 },
	{ (Il2CppRGCTXDataType)3, 32491 },
	{ (Il2CppRGCTXDataType)2, 5060 },
	{ (Il2CppRGCTXDataType)3, 28287 },
	{ (Il2CppRGCTXDataType)3, 14403 },
	{ (Il2CppRGCTXDataType)2, 3552 },
	{ (Il2CppRGCTXDataType)2, 5047 },
	{ (Il2CppRGCTXDataType)3, 28137 },
	{ (Il2CppRGCTXDataType)3, 10754 },
	{ (Il2CppRGCTXDataType)3, 14404 },
	{ (Il2CppRGCTXDataType)3, 32490 },
	{ (Il2CppRGCTXDataType)2, 5056 },
	{ (Il2CppRGCTXDataType)3, 28205 },
	{ (Il2CppRGCTXDataType)3, 14417 },
	{ (Il2CppRGCTXDataType)2, 3554 },
	{ (Il2CppRGCTXDataType)2, 5054 },
	{ (Il2CppRGCTXDataType)3, 28193 },
	{ (Il2CppRGCTXDataType)3, 15486 },
	{ (Il2CppRGCTXDataType)3, 7681 },
	{ (Il2CppRGCTXDataType)3, 10756 },
	{ (Il2CppRGCTXDataType)3, 7680 },
	{ (Il2CppRGCTXDataType)3, 14418 },
	{ (Il2CppRGCTXDataType)3, 32492 },
	{ (Il2CppRGCTXDataType)2, 5064 },
	{ (Il2CppRGCTXDataType)3, 28385 },
	{ (Il2CppRGCTXDataType)3, 14431 },
	{ (Il2CppRGCTXDataType)2, 3556 },
	{ (Il2CppRGCTXDataType)2, 5062 },
	{ (Il2CppRGCTXDataType)3, 28289 },
	{ (Il2CppRGCTXDataType)3, 14432 },
	{ (Il2CppRGCTXDataType)2, 2712 },
	{ (Il2CppRGCTXDataType)2, 2837 },
	{ (Il2CppRGCTXDataType)3, 10760 },
	{ (Il2CppRGCTXDataType)3, 10759 },
	{ (Il2CppRGCTXDataType)2, 5051 },
	{ (Il2CppRGCTXDataType)3, 28151 },
	{ (Il2CppRGCTXDataType)3, 32501 },
	{ (Il2CppRGCTXDataType)2, 5061 },
	{ (Il2CppRGCTXDataType)3, 28288 },
	{ (Il2CppRGCTXDataType)3, 14424 },
	{ (Il2CppRGCTXDataType)2, 3555 },
	{ (Il2CppRGCTXDataType)2, 5058 },
	{ (Il2CppRGCTXDataType)3, 28207 },
	{ (Il2CppRGCTXDataType)3, 10758 },
	{ (Il2CppRGCTXDataType)3, 10757 },
	{ (Il2CppRGCTXDataType)3, 14425 },
	{ (Il2CppRGCTXDataType)2, 5050 },
	{ (Il2CppRGCTXDataType)3, 28150 },
	{ (Il2CppRGCTXDataType)3, 32500 },
	{ (Il2CppRGCTXDataType)2, 5057 },
	{ (Il2CppRGCTXDataType)3, 28206 },
	{ (Il2CppRGCTXDataType)3, 14438 },
	{ (Il2CppRGCTXDataType)2, 3557 },
	{ (Il2CppRGCTXDataType)2, 5066 },
	{ (Il2CppRGCTXDataType)3, 28387 },
	{ (Il2CppRGCTXDataType)3, 15487 },
	{ (Il2CppRGCTXDataType)3, 7683 },
	{ (Il2CppRGCTXDataType)3, 10762 },
	{ (Il2CppRGCTXDataType)3, 10761 },
	{ (Il2CppRGCTXDataType)3, 7682 },
	{ (Il2CppRGCTXDataType)3, 14439 },
	{ (Il2CppRGCTXDataType)2, 5052 },
	{ (Il2CppRGCTXDataType)3, 28152 },
	{ (Il2CppRGCTXDataType)3, 32502 },
	{ (Il2CppRGCTXDataType)2, 5065 },
	{ (Il2CppRGCTXDataType)3, 28386 },
	{ (Il2CppRGCTXDataType)3, 10751 },
	{ (Il2CppRGCTXDataType)3, 10752 },
	{ (Il2CppRGCTXDataType)3, 10763 },
	{ (Il2CppRGCTXDataType)3, 186 },
	{ (Il2CppRGCTXDataType)3, 185 },
	{ (Il2CppRGCTXDataType)2, 2701 },
	{ (Il2CppRGCTXDataType)2, 2828 },
	{ (Il2CppRGCTXDataType)3, 10753 },
	{ (Il2CppRGCTXDataType)2, 2719 },
	{ (Il2CppRGCTXDataType)2, 2854 },
	{ (Il2CppRGCTXDataType)3, 188 },
	{ (Il2CppRGCTXDataType)2, 958 },
	{ (Il2CppRGCTXDataType)2, 1080 },
	{ (Il2CppRGCTXDataType)3, 184 },
	{ (Il2CppRGCTXDataType)3, 187 },
	{ (Il2CppRGCTXDataType)3, 221 },
	{ (Il2CppRGCTXDataType)2, 2704 },
	{ (Il2CppRGCTXDataType)2, 2830 },
	{ (Il2CppRGCTXDataType)3, 223 },
	{ (Il2CppRGCTXDataType)2, 755 },
	{ (Il2CppRGCTXDataType)2, 1084 },
	{ (Il2CppRGCTXDataType)3, 220 },
	{ (Il2CppRGCTXDataType)3, 222 },
	{ (Il2CppRGCTXDataType)3, 157 },
	{ (Il2CppRGCTXDataType)2, 4698 },
	{ (Il2CppRGCTXDataType)3, 26049 },
	{ (Il2CppRGCTXDataType)2, 2698 },
	{ (Il2CppRGCTXDataType)2, 2826 },
	{ (Il2CppRGCTXDataType)3, 26050 },
	{ (Il2CppRGCTXDataType)3, 159 },
	{ (Il2CppRGCTXDataType)2, 752 },
	{ (Il2CppRGCTXDataType)2, 1076 },
	{ (Il2CppRGCTXDataType)3, 156 },
	{ (Il2CppRGCTXDataType)3, 158 },
	{ (Il2CppRGCTXDataType)2, 5760 },
	{ (Il2CppRGCTXDataType)2, 1823 },
	{ (Il2CppRGCTXDataType)3, 9738 },
	{ (Il2CppRGCTXDataType)2, 2098 },
	{ (Il2CppRGCTXDataType)2, 5882 },
	{ (Il2CppRGCTXDataType)3, 26046 },
	{ (Il2CppRGCTXDataType)3, 26047 },
	{ (Il2CppRGCTXDataType)2, 2994 },
	{ (Il2CppRGCTXDataType)3, 26048 },
	{ (Il2CppRGCTXDataType)2, 669 },
	{ (Il2CppRGCTXDataType)2, 1077 },
	{ (Il2CppRGCTXDataType)3, 169 },
	{ (Il2CppRGCTXDataType)3, 23243 },
	{ (Il2CppRGCTXDataType)2, 4532 },
	{ (Il2CppRGCTXDataType)3, 23257 },
	{ (Il2CppRGCTXDataType)2, 1481 },
	{ (Il2CppRGCTXDataType)3, 3012 },
	{ (Il2CppRGCTXDataType)3, 23249 },
	{ (Il2CppRGCTXDataType)3, 7644 },
	{ (Il2CppRGCTXDataType)2, 798 },
	{ (Il2CppRGCTXDataType)3, 23244 },
	{ (Il2CppRGCTXDataType)2, 4528 },
	{ (Il2CppRGCTXDataType)3, 3070 },
	{ (Il2CppRGCTXDataType)2, 1504 },
	{ (Il2CppRGCTXDataType)2, 1866 },
	{ (Il2CppRGCTXDataType)3, 7650 },
	{ (Il2CppRGCTXDataType)3, 23245 },
	{ (Il2CppRGCTXDataType)3, 7639 },
	{ (Il2CppRGCTXDataType)3, 7640 },
	{ (Il2CppRGCTXDataType)3, 7638 },
	{ (Il2CppRGCTXDataType)3, 7641 },
	{ (Il2CppRGCTXDataType)2, 1862 },
	{ (Il2CppRGCTXDataType)2, 5826 },
	{ (Il2CppRGCTXDataType)3, 10749 },
	{ (Il2CppRGCTXDataType)3, 7643 },
	{ (Il2CppRGCTXDataType)2, 2600 },
	{ (Il2CppRGCTXDataType)3, 7642 },
	{ (Il2CppRGCTXDataType)2, 2471 },
	{ (Il2CppRGCTXDataType)2, 5752 },
	{ (Il2CppRGCTXDataType)2, 2668 },
	{ (Il2CppRGCTXDataType)2, 2799 },
	{ (Il2CppRGCTXDataType)3, 9719 },
	{ (Il2CppRGCTXDataType)2, 2091 },
	{ (Il2CppRGCTXDataType)3, 11414 },
	{ (Il2CppRGCTXDataType)3, 11415 },
	{ (Il2CppRGCTXDataType)3, 11423 },
	{ (Il2CppRGCTXDataType)2, 2988 },
	{ (Il2CppRGCTXDataType)3, 11420 },
	{ (Il2CppRGCTXDataType)3, 33569 },
	{ (Il2CppRGCTXDataType)2, 1870 },
	{ (Il2CppRGCTXDataType)3, 7666 },
	{ (Il2CppRGCTXDataType)1, 2593 },
	{ (Il2CppRGCTXDataType)2, 5766 },
	{ (Il2CppRGCTXDataType)3, 11419 },
	{ (Il2CppRGCTXDataType)1, 5766 },
	{ (Il2CppRGCTXDataType)1, 2988 },
	{ (Il2CppRGCTXDataType)2, 5880 },
	{ (Il2CppRGCTXDataType)2, 5766 },
	{ (Il2CppRGCTXDataType)2, 2670 },
	{ (Il2CppRGCTXDataType)2, 2801 },
	{ (Il2CppRGCTXDataType)2, 2478 },
	{ (Il2CppRGCTXDataType)3, 11417 },
	{ (Il2CppRGCTXDataType)2, 2433 },
	{ (Il2CppRGCTXDataType)3, 11416 },
	{ (Il2CppRGCTXDataType)2, 2433 },
	{ (Il2CppRGCTXDataType)3, 11426 },
	{ (Il2CppRGCTXDataType)3, 11425 },
	{ (Il2CppRGCTXDataType)3, 11428 },
	{ (Il2CppRGCTXDataType)3, 11422 },
	{ (Il2CppRGCTXDataType)3, 11421 },
	{ (Il2CppRGCTXDataType)3, 11418 },
	{ (Il2CppRGCTXDataType)3, 11427 },
	{ (Il2CppRGCTXDataType)3, 11424 },
	{ (Il2CppRGCTXDataType)3, 11429 },
	{ (Il2CppRGCTXDataType)2, 572 },
	{ (Il2CppRGCTXDataType)3, 7684 },
	{ (Il2CppRGCTXDataType)2, 767 },
	{ (Il2CppRGCTXDataType)2, 2481 },
	{ (Il2CppRGCTXDataType)2, 5768 },
};
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationSystem_Core;
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	182,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	60,
	s_rgctxIndices,
	286,
	s_rgctxValues,
	&g_DebuggerMetadataRegistrationSystem_Core,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
