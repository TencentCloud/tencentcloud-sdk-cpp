/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/GpuDetail.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 描述资源信息
                */
                class ResourceInfo : public AbstractModel
                {
                public:
                    ResourceInfo();
                    ~ResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>处理器资源, 单位为1/1000核</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu <p>处理器资源, 单位为1/1000核</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>处理器资源, 单位为1/1000核</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu <p>处理器资源, 单位为1/1000核</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>内存资源, 单位为1M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory <p>内存资源, 单位为1M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>内存资源, 单位为1M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory <p>内存资源, 单位为1M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>Gpu卡个数资源, 单位为0.01单位的GpuType.<br>Gpu=100表示使用了“一张”gpu卡, 但此处的“一张”卡有可能是虚拟化后的1/4卡, 也有可能是整张卡. 取决于实例的机型<br>例1 实例的机型带有1张虚拟gpu卡, 每张虚拟gpu卡对应1/4张实际T4卡, 则此时 GpuType=T4, Gpu=100, RealGpu=25.<br>例2 实例的机型带有4张gpu整卡, 每张卡对应1张实际T4卡, 则 此时 GpuType=T4, Gpu=400, RealGpu=400.</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gpu <p>Gpu卡个数资源, 单位为0.01单位的GpuType.<br>Gpu=100表示使用了“一张”gpu卡, 但此处的“一张”卡有可能是虚拟化后的1/4卡, 也有可能是整张卡. 取决于实例的机型<br>例1 实例的机型带有1张虚拟gpu卡, 每张虚拟gpu卡对应1/4张实际T4卡, 则此时 GpuType=T4, Gpu=100, RealGpu=25.<br>例2 实例的机型带有4张gpu整卡, 每张卡对应1张实际T4卡, 则 此时 GpuType=T4, Gpu=400, RealGpu=400.</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置<p>Gpu卡个数资源, 单位为0.01单位的GpuType.<br>Gpu=100表示使用了“一张”gpu卡, 但此处的“一张”卡有可能是虚拟化后的1/4卡, 也有可能是整张卡. 取决于实例的机型<br>例1 实例的机型带有1张虚拟gpu卡, 每张虚拟gpu卡对应1/4张实际T4卡, 则此时 GpuType=T4, Gpu=100, RealGpu=25.<br>例2 实例的机型带有4张gpu整卡, 每张卡对应1张实际T4卡, 则 此时 GpuType=T4, Gpu=400, RealGpu=400.</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpu <p>Gpu卡个数资源, 单位为0.01单位的GpuType.<br>Gpu=100表示使用了“一张”gpu卡, 但此处的“一张”卡有可能是虚拟化后的1/4卡, 也有可能是整张卡. 取决于实例的机型<br>例1 实例的机型带有1张虚拟gpu卡, 每张虚拟gpu卡对应1/4张实际T4卡, 则此时 GpuType=T4, Gpu=100, RealGpu=25.<br>例2 实例的机型带有4张gpu整卡, 每张卡对应1张实际T4卡, 则 此时 GpuType=T4, Gpu=400, RealGpu=400.</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpu(const uint64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取<p>Gpu卡型号 T4或者V100。仅展示当前 GPU 卡型号，若存在多类型同时使用，则参考 RealGpuDetailSet 的值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuType <p>Gpu卡型号 T4或者V100。仅展示当前 GPU 卡型号，若存在多类型同时使用，则参考 RealGpuDetailSet 的值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>Gpu卡型号 T4或者V100。仅展示当前 GPU 卡型号，若存在多类型同时使用，则参考 RealGpuDetailSet 的值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuType <p>Gpu卡型号 T4或者V100。仅展示当前 GPU 卡型号，若存在多类型同时使用，则参考 RealGpuDetailSet 的值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>创建或更新时无需填写，仅展示需要关注<br>后付费非整卡实例对应的实际的Gpu卡资源, 表示gpu资源对应实际的gpu卡个数.<br>RealGpu=100表示实际使用了一张gpu卡, 对应实际的实例机型, 有可能代表带有1/4卡的实例4个, 或者带有1/2卡的实例2个, 或者带有1卡的实力1个.</p>
                     * @return RealGpu <p>创建或更新时无需填写，仅展示需要关注<br>后付费非整卡实例对应的实际的Gpu卡资源, 表示gpu资源对应实际的gpu卡个数.<br>RealGpu=100表示实际使用了一张gpu卡, 对应实际的实例机型, 有可能代表带有1/4卡的实例4个, 或者带有1/2卡的实例2个, 或者带有1卡的实力1个.</p>
                     * 
                     */
                    uint64_t GetRealGpu() const;

                    /**
                     * 设置<p>创建或更新时无需填写，仅展示需要关注<br>后付费非整卡实例对应的实际的Gpu卡资源, 表示gpu资源对应实际的gpu卡个数.<br>RealGpu=100表示实际使用了一张gpu卡, 对应实际的实例机型, 有可能代表带有1/4卡的实例4个, 或者带有1/2卡的实例2个, 或者带有1卡的实力1个.</p>
                     * @param _realGpu <p>创建或更新时无需填写，仅展示需要关注<br>后付费非整卡实例对应的实际的Gpu卡资源, 表示gpu资源对应实际的gpu卡个数.<br>RealGpu=100表示实际使用了一张gpu卡, 对应实际的实例机型, 有可能代表带有1/4卡的实例4个, 或者带有1/2卡的实例2个, 或者带有1卡的实力1个.</p>
                     * 
                     */
                    void SetRealGpu(const uint64_t& _realGpu);

                    /**
                     * 判断参数 RealGpu 是否已赋值
                     * @return RealGpu 是否已赋值
                     * 
                     */
                    bool RealGpuHasBeenSet() const;

                    /**
                     * 获取<p>创建或更新时无需填写，仅展示需要关注。详细的GPU使用信息。</p>
                     * @return RealGpuDetailSet <p>创建或更新时无需填写，仅展示需要关注。详细的GPU使用信息。</p>
                     * 
                     */
                    std::vector<GpuDetail> GetRealGpuDetailSet() const;

                    /**
                     * 设置<p>创建或更新时无需填写，仅展示需要关注。详细的GPU使用信息。</p>
                     * @param _realGpuDetailSet <p>创建或更新时无需填写，仅展示需要关注。详细的GPU使用信息。</p>
                     * 
                     */
                    void SetRealGpuDetailSet(const std::vector<GpuDetail>& _realGpuDetailSet);

                    /**
                     * 判断参数 RealGpuDetailSet 是否已赋值
                     * @return RealGpuDetailSet 是否已赋值
                     * 
                     */
                    bool RealGpuDetailSetHasBeenSet() const;

                    /**
                     * 获取<p>是否开启rdma</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableRDMA <p>是否开启rdma</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableRDMA() const;

                    /**
                     * 设置<p>是否开启rdma</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableRDMA <p>是否开启rdma</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableRDMA(const bool& _enableRDMA);

                    /**
                     * 判断参数 EnableRDMA 是否已赋值
                     * @return EnableRDMA 是否已赋值
                     * 
                     */
                    bool EnableRDMAHasBeenSet() const;

                    /**
                     * 获取<p>rdma number</p>
                     * @return RdmaNumber <p>rdma number</p>
                     * 
                     */
                    uint64_t GetRdmaNumber() const;

                    /**
                     * 设置<p>rdma number</p>
                     * @param _rdmaNumber <p>rdma number</p>
                     * 
                     */
                    void SetRdmaNumber(const uint64_t& _rdmaNumber);

                    /**
                     * 判断参数 RdmaNumber 是否已赋值
                     * @return RdmaNumber 是否已赋值
                     * 
                     */
                    bool RdmaNumberHasBeenSet() const;

                    /**
                     * 获取<p>root disk size(GB)</p>
                     * @return RootDisk <p>root disk size(GB)</p>
                     * 
                     */
                    uint64_t GetRootDisk() const;

                    /**
                     * 设置<p>root disk size(GB)</p>
                     * @param _rootDisk <p>root disk size(GB)</p>
                     * 
                     */
                    void SetRootDisk(const uint64_t& _rootDisk);

                    /**
                     * 判断参数 RootDisk 是否已赋值
                     * @return RootDisk 是否已赋值
                     * 
                     */
                    bool RootDiskHasBeenSet() const;

                    /**
                     * 获取<p>data disk size(GB)</p>
                     * @return DataDisk <p>data disk size(GB)</p>
                     * 
                     */
                    uint64_t GetDataDisk() const;

                    /**
                     * 设置<p>data disk size(GB)</p>
                     * @param _dataDisk <p>data disk size(GB)</p>
                     * 
                     */
                    void SetDataDisk(const uint64_t& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取<p>rdma</p><p>取值范围：[0, 99]</p>
                     * @return Rdma <p>rdma</p><p>取值范围：[0, 99]</p>
                     * 
                     */
                    uint64_t GetRdma() const;

                    /**
                     * 设置<p>rdma</p><p>取值范围：[0, 99]</p>
                     * @param _rdma <p>rdma</p><p>取值范围：[0, 99]</p>
                     * 
                     */
                    void SetRdma(const uint64_t& _rdma);

                    /**
                     * 判断参数 Rdma 是否已赋值
                     * @return Rdma 是否已赋值
                     * 
                     */
                    bool RdmaHasBeenSet() const;

                private:

                    /**
                     * <p>处理器资源, 单位为1/1000核</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存资源, 单位为1M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Gpu卡个数资源, 单位为0.01单位的GpuType.<br>Gpu=100表示使用了“一张”gpu卡, 但此处的“一张”卡有可能是虚拟化后的1/4卡, 也有可能是整张卡. 取决于实例的机型<br>例1 实例的机型带有1张虚拟gpu卡, 每张虚拟gpu卡对应1/4张实际T4卡, 则此时 GpuType=T4, Gpu=100, RealGpu=25.<br>例2 实例的机型带有4张gpu整卡, 每张卡对应1张实际T4卡, 则 此时 GpuType=T4, Gpu=400, RealGpu=400.</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * <p>Gpu卡型号 T4或者V100。仅展示当前 GPU 卡型号，若存在多类型同时使用，则参考 RealGpuDetailSet 的值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>创建或更新时无需填写，仅展示需要关注<br>后付费非整卡实例对应的实际的Gpu卡资源, 表示gpu资源对应实际的gpu卡个数.<br>RealGpu=100表示实际使用了一张gpu卡, 对应实际的实例机型, 有可能代表带有1/4卡的实例4个, 或者带有1/2卡的实例2个, 或者带有1卡的实力1个.</p>
                     */
                    uint64_t m_realGpu;
                    bool m_realGpuHasBeenSet;

                    /**
                     * <p>创建或更新时无需填写，仅展示需要关注。详细的GPU使用信息。</p>
                     */
                    std::vector<GpuDetail> m_realGpuDetailSet;
                    bool m_realGpuDetailSetHasBeenSet;

                    /**
                     * <p>是否开启rdma</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableRDMA;
                    bool m_enableRDMAHasBeenSet;

                    /**
                     * <p>rdma number</p>
                     */
                    uint64_t m_rdmaNumber;
                    bool m_rdmaNumberHasBeenSet;

                    /**
                     * <p>root disk size(GB)</p>
                     */
                    uint64_t m_rootDisk;
                    bool m_rootDiskHasBeenSet;

                    /**
                     * <p>data disk size(GB)</p>
                     */
                    uint64_t m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * <p>rdma</p><p>取值范围：[0, 99]</p>
                     */
                    uint64_t m_rdma;
                    bool m_rdmaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEINFO_H_
