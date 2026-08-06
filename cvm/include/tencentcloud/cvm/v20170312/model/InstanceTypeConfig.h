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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIG_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述实例机型配置信息
                */
                class InstanceTypeConfig : public AbstractModel
                {
                public:
                    InstanceTypeConfig();
                    ~InstanceTypeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>可用区。</p>
                     * @return Zone <p>可用区。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区。</p>
                     * @param _zone <p>可用区。</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>实例机型。</p>
                     * @return InstanceType <p>实例机型。</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例机型。</p>
                     * @param _instanceType <p>实例机型。</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例机型系列。</p>
                     * @return InstanceFamily <p>实例机型系列。</p>
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置<p>实例机型系列。</p>
                     * @param _instanceFamily <p>实例机型系列。</p>
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取<p>GPU核数，单位：核。</p>
                     * @return GPU <p>GPU核数，单位：核。</p>
                     * 
                     */
                    int64_t GetGPU() const;

                    /**
                     * 设置<p>GPU核数，单位：核。</p>
                     * @param _gPU <p>GPU核数，单位：核。</p>
                     * 
                     */
                    void SetGPU(const int64_t& _gPU);

                    /**
                     * 判断参数 GPU 是否已赋值
                     * @return GPU 是否已赋值
                     * 
                     */
                    bool GPUHasBeenSet() const;

                    /**
                     * 获取<p>CPU核数，单位：核。</p>
                     * @return CPU <p>CPU核数，单位：核。</p>
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置<p>CPU核数，单位：核。</p>
                     * @param _cPU <p>CPU核数，单位：核。</p>
                     * 
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取<p>内存容量，单位：<code>GiB</code>。</p>
                     * @return Memory <p>内存容量，单位：<code>GiB</code>。</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>内存容量，单位：<code>GiB</code>。</p>
                     * @param _memory <p>内存容量，单位：<code>GiB</code>。</p>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>FPGA核数，单位：核。</p>
                     * @return FPGA <p>FPGA核数，单位：核。</p>
                     * 
                     */
                    int64_t GetFPGA() const;

                    /**
                     * 设置<p>FPGA核数，单位：核。</p>
                     * @param _fPGA <p>FPGA核数，单位：核。</p>
                     * 
                     */
                    void SetFPGA(const int64_t& _fPGA);

                    /**
                     * 判断参数 FPGA 是否已赋值
                     * @return FPGA 是否已赋值
                     * 
                     */
                    bool FPGAHasBeenSet() const;

                    /**
                     * 获取<p>实例机型映射的物理GPU卡数，单位：卡。vGPU卡型小于1，直通卡型大于等于1。vGPU是通过分片虚拟化技术，将物理GPU卡重新划分，同一块GPU卡经虚拟化分割后可分配至不同的实例使用。直通卡型会将GPU设备直接挂载给实例使用。</p>
                     * @return GpuCount <p>实例机型映射的物理GPU卡数，单位：卡。vGPU卡型小于1，直通卡型大于等于1。vGPU是通过分片虚拟化技术，将物理GPU卡重新划分，同一块GPU卡经虚拟化分割后可分配至不同的实例使用。直通卡型会将GPU设备直接挂载给实例使用。</p>
                     * 
                     */
                    double GetGpuCount() const;

                    /**
                     * 设置<p>实例机型映射的物理GPU卡数，单位：卡。vGPU卡型小于1，直通卡型大于等于1。vGPU是通过分片虚拟化技术，将物理GPU卡重新划分，同一块GPU卡经虚拟化分割后可分配至不同的实例使用。直通卡型会将GPU设备直接挂载给实例使用。</p>
                     * @param _gpuCount <p>实例机型映射的物理GPU卡数，单位：卡。vGPU卡型小于1，直通卡型大于等于1。vGPU是通过分片虚拟化技术，将物理GPU卡重新划分，同一块GPU卡经虚拟化分割后可分配至不同的实例使用。直通卡型会将GPU设备直接挂载给实例使用。</p>
                     * 
                     */
                    void SetGpuCount(const double& _gpuCount);

                    /**
                     * 判断参数 GpuCount 是否已赋值
                     * @return GpuCount 是否已赋值
                     * 
                     */
                    bool GpuCountHasBeenSet() const;

                    /**
                     * 获取<p>实例GPU类型</p>
                     * @return GpuType <p>实例GPU类型</p>
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>实例GPU类型</p>
                     * @param _gpuType <p>实例GPU类型</p>
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
                     * 获取<p>实例GPU单块显存,单位：GiB。</p>
                     * @return GpuMemory <p>实例GPU单块显存,单位：GiB。</p>
                     * 
                     */
                    double GetGpuMemory() const;

                    /**
                     * 设置<p>实例GPU单块显存,单位：GiB。</p>
                     * @param _gpuMemory <p>实例GPU单块显存,单位：GiB。</p>
                     * 
                     */
                    void SetGpuMemory(const double& _gpuMemory);

                    /**
                     * 判断参数 GpuMemory 是否已赋值
                     * @return GpuMemory 是否已赋值
                     * 
                     */
                    bool GpuMemoryHasBeenSet() const;

                private:

                    /**
                     * <p>可用区。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例机型。</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例机型系列。</p>
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * <p>GPU核数，单位：核。</p>
                     */
                    int64_t m_gPU;
                    bool m_gPUHasBeenSet;

                    /**
                     * <p>CPU核数，单位：核。</p>
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>内存容量，单位：<code>GiB</code>。</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>FPGA核数，单位：核。</p>
                     */
                    int64_t m_fPGA;
                    bool m_fPGAHasBeenSet;

                    /**
                     * <p>实例机型映射的物理GPU卡数，单位：卡。vGPU卡型小于1，直通卡型大于等于1。vGPU是通过分片虚拟化技术，将物理GPU卡重新划分，同一块GPU卡经虚拟化分割后可分配至不同的实例使用。直通卡型会将GPU设备直接挂载给实例使用。</p>
                     */
                    double m_gpuCount;
                    bool m_gpuCountHasBeenSet;

                    /**
                     * <p>实例GPU类型</p>
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>实例GPU单块显存,单位：GiB。</p>
                     */
                    double m_gpuMemory;
                    bool m_gpuMemoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIG_H_
