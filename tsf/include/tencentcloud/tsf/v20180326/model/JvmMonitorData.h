/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_JVMMONITORDATA_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_JVMMONITORDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MemoryPicture.h>
#include <tencentcloud/tsf/v20180326/model/ThreadPicture.h>
#include <tencentcloud/tsf/v20180326/model/CurvePoint.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeJvmMonitor查询jvm监控数据接口返回数据封装
                */
                class JvmMonitorData : public AbstractModel
                {
                public:
                    JvmMonitorData();
                    ~JvmMonitorData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取堆内存监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeapMemory 堆内存监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemoryPicture GetHeapMemory() const;

                    /**
                     * 设置堆内存监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heapMemory 堆内存监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeapMemory(const MemoryPicture& _heapMemory);

                    /**
                     * 判断参数 HeapMemory 是否已赋值
                     * @return HeapMemory 是否已赋值
                     * 
                     */
                    bool HeapMemoryHasBeenSet() const;

                    /**
                     * 获取非堆内存监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NonHeapMemory 非堆内存监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemoryPicture GetNonHeapMemory() const;

                    /**
                     * 设置非堆内存监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nonHeapMemory 非堆内存监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNonHeapMemory(const MemoryPicture& _nonHeapMemory);

                    /**
                     * 判断参数 NonHeapMemory 是否已赋值
                     * @return NonHeapMemory 是否已赋值
                     * 
                     */
                    bool NonHeapMemoryHasBeenSet() const;

                    /**
                     * 获取伊甸园区监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EdenSpace 伊甸园区监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemoryPicture GetEdenSpace() const;

                    /**
                     * 设置伊甸园区监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _edenSpace 伊甸园区监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEdenSpace(const MemoryPicture& _edenSpace);

                    /**
                     * 判断参数 EdenSpace 是否已赋值
                     * @return EdenSpace 是否已赋值
                     * 
                     */
                    bool EdenSpaceHasBeenSet() const;

                    /**
                     * 获取幸存者区监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SurvivorSpace 幸存者区监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemoryPicture GetSurvivorSpace() const;

                    /**
                     * 设置幸存者区监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _survivorSpace 幸存者区监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSurvivorSpace(const MemoryPicture& _survivorSpace);

                    /**
                     * 判断参数 SurvivorSpace 是否已赋值
                     * @return SurvivorSpace 是否已赋值
                     * 
                     */
                    bool SurvivorSpaceHasBeenSet() const;

                    /**
                     * 获取老年代监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldSpace 老年代监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemoryPicture GetOldSpace() const;

                    /**
                     * 设置老年代监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldSpace 老年代监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldSpace(const MemoryPicture& _oldSpace);

                    /**
                     * 判断参数 OldSpace 是否已赋值
                     * @return OldSpace 是否已赋值
                     * 
                     */
                    bool OldSpaceHasBeenSet() const;

                    /**
                     * 获取元空间监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaSpace 元空间监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemoryPicture GetMetaSpace() const;

                    /**
                     * 设置元空间监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaSpace 元空间监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaSpace(const MemoryPicture& _metaSpace);

                    /**
                     * 判断参数 MetaSpace 是否已赋值
                     * @return MetaSpace 是否已赋值
                     * 
                     */
                    bool MetaSpaceHasBeenSet() const;

                    /**
                     * 获取线程监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThreadPicture 线程监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ThreadPicture GetThreadPicture() const;

                    /**
                     * 设置线程监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threadPicture 线程监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreadPicture(const ThreadPicture& _threadPicture);

                    /**
                     * 判断参数 ThreadPicture 是否已赋值
                     * @return ThreadPicture 是否已赋值
                     * 
                     */
                    bool ThreadPictureHasBeenSet() const;

                    /**
                     * 获取youngGC增量监控图,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YoungGC youngGC增量监控图,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CurvePoint> GetYoungGC() const;

                    /**
                     * 设置youngGC增量监控图,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _youngGC youngGC增量监控图,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYoungGC(const std::vector<CurvePoint>& _youngGC);

                    /**
                     * 判断参数 YoungGC 是否已赋值
                     * @return YoungGC 是否已赋值
                     * 
                     */
                    bool YoungGCHasBeenSet() const;

                    /**
                     * 获取fullGC增量监控图,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullGC fullGC增量监控图,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CurvePoint> GetFullGC() const;

                    /**
                     * 设置fullGC增量监控图,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullGC fullGC增量监控图,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullGC(const std::vector<CurvePoint>& _fullGC);

                    /**
                     * 判断参数 FullGC 是否已赋值
                     * @return FullGC 是否已赋值
                     * 
                     */
                    bool FullGCHasBeenSet() const;

                    /**
                     * 获取cpu使用率,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuUsage cpu使用率,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CurvePoint> GetCpuUsage() const;

                    /**
                     * 设置cpu使用率,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuUsage cpu使用率,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuUsage(const std::vector<CurvePoint>& _cpuUsage);

                    /**
                     * 判断参数 CpuUsage 是否已赋值
                     * @return CpuUsage 是否已赋值
                     * 
                     */
                    bool CpuUsageHasBeenSet() const;

                    /**
                     * 获取加载类数,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassCount 加载类数,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CurvePoint> GetClassCount() const;

                    /**
                     * 设置加载类数,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classCount 加载类数,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassCount(const std::vector<CurvePoint>& _classCount);

                    /**
                     * 判断参数 ClassCount 是否已赋值
                     * @return ClassCount 是否已赋值
                     * 
                     */
                    bool ClassCountHasBeenSet() const;

                private:

                    /**
                     * 堆内存监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemoryPicture m_heapMemory;
                    bool m_heapMemoryHasBeenSet;

                    /**
                     * 非堆内存监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemoryPicture m_nonHeapMemory;
                    bool m_nonHeapMemoryHasBeenSet;

                    /**
                     * 伊甸园区监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemoryPicture m_edenSpace;
                    bool m_edenSpaceHasBeenSet;

                    /**
                     * 幸存者区监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemoryPicture m_survivorSpace;
                    bool m_survivorSpaceHasBeenSet;

                    /**
                     * 老年代监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemoryPicture m_oldSpace;
                    bool m_oldSpaceHasBeenSet;

                    /**
                     * 元空间监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemoryPicture m_metaSpace;
                    bool m_metaSpaceHasBeenSet;

                    /**
                     * 线程监控图,三条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ThreadPicture m_threadPicture;
                    bool m_threadPictureHasBeenSet;

                    /**
                     * youngGC增量监控图,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CurvePoint> m_youngGC;
                    bool m_youngGCHasBeenSet;

                    /**
                     * fullGC增量监控图,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CurvePoint> m_fullGC;
                    bool m_fullGCHasBeenSet;

                    /**
                     * cpu使用率,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CurvePoint> m_cpuUsage;
                    bool m_cpuUsageHasBeenSet;

                    /**
                     * 加载类数,一条线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CurvePoint> m_classCount;
                    bool m_classCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_JVMMONITORDATA_H_
