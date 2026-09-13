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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务硬件配置。
                */
                class InferenceHardwareConfig : public AbstractModel
                {
                public:
                    InferenceHardwareConfig();
                    ~InferenceHardwareConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>推理服务单个实例分配的 GPU 卡数，当前仅支持整数值，且必须为 <code>HardwareSpecId</code> 对应规格的 <code>AllowedGPUNums</code> 中的可选值。</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 规格对应的默认 <code>GPUNum</code> 值。</p>
                     * @return GPUNum <p>推理服务单个实例分配的 GPU 卡数，当前仅支持整数值，且必须为 <code>HardwareSpecId</code> 对应规格的 <code>AllowedGPUNums</code> 中的可选值。</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 规格对应的默认 <code>GPUNum</code> 值。</p>
                     * 
                     */
                    double GetGPUNum() const;

                    /**
                     * 设置<p>推理服务单个实例分配的 GPU 卡数，当前仅支持整数值，且必须为 <code>HardwareSpecId</code> 对应规格的 <code>AllowedGPUNums</code> 中的可选值。</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 规格对应的默认 <code>GPUNum</code> 值。</p>
                     * @param _gPUNum <p>推理服务单个实例分配的 GPU 卡数，当前仅支持整数值，且必须为 <code>HardwareSpecId</code> 对应规格的 <code>AllowedGPUNums</code> 中的可选值。</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 规格对应的默认 <code>GPUNum</code> 值。</p>
                     * 
                     */
                    void SetGPUNum(const double& _gPUNum);

                    /**
                     * 判断参数 GPUNum 是否已赋值
                     * @return GPUNum 是否已赋值
                     * 
                     */
                    bool GPUNumHasBeenSet() const;

                    /**
                     * 获取<p>推理服务单个实例分配的 CPU 核数，当前仅支持整数值。</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 规格对应的默认 <code>CPUNum</code> 值。</p>
                     * @return CPUNum <p>推理服务单个实例分配的 CPU 核数，当前仅支持整数值。</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 规格对应的默认 <code>CPUNum</code> 值。</p>
                     * 
                     */
                    double GetCPUNum() const;

                    /**
                     * 设置<p>推理服务单个实例分配的 CPU 核数，当前仅支持整数值。</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 规格对应的默认 <code>CPUNum</code> 值。</p>
                     * @param _cPUNum <p>推理服务单个实例分配的 CPU 核数，当前仅支持整数值。</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 规格对应的默认 <code>CPUNum</code> 值。</p>
                     * 
                     */
                    void SetCPUNum(const double& _cPUNum);

                    /**
                     * 判断参数 CPUNum 是否已赋值
                     * @return CPUNum 是否已赋值
                     * 
                     */
                    bool CPUNumHasBeenSet() const;

                    /**
                     * 获取<p>推理服务单实例分配的内存大小。</p><p>单位：MB</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 对应规格的默认 <code>MemSize</code> 值；若填充，则必须为 <code>1024</code> 的整数倍。</p>
                     * @return MemSize <p>推理服务单实例分配的内存大小。</p><p>单位：MB</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 对应规格的默认 <code>MemSize</code> 值；若填充，则必须为 <code>1024</code> 的整数倍。</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>推理服务单实例分配的内存大小。</p><p>单位：MB</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 对应规格的默认 <code>MemSize</code> 值；若填充，则必须为 <code>1024</code> 的整数倍。</p>
                     * @param _memSize <p>推理服务单实例分配的内存大小。</p><p>单位：MB</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 对应规格的默认 <code>MemSize</code> 值；若填充，则必须为 <code>1024</code> 的整数倍。</p>
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>推理服务单实例分配的临时磁盘大小。</p><p>单位：MB</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 对应规格的默认 <code>DiskSize</code> 值；若填充，则必须为 <code>1024</code> 的整数倍。</p>
                     * @return DiskSize <p>推理服务单实例分配的临时磁盘大小。</p><p>单位：MB</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 对应规格的默认 <code>DiskSize</code> 值；若填充，则必须为 <code>1024</code> 的整数倍。</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>推理服务单实例分配的临时磁盘大小。</p><p>单位：MB</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 对应规格的默认 <code>DiskSize</code> 值；若填充，则必须为 <code>1024</code> 的整数倍。</p>
                     * @param _diskSize <p>推理服务单实例分配的临时磁盘大小。</p><p>单位：MB</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 对应规格的默认 <code>DiskSize</code> 值；若填充，则必须为 <code>1024</code> 的整数倍。</p>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * <p>推理服务单个实例分配的 GPU 卡数，当前仅支持整数值，且必须为 <code>HardwareSpecId</code> 对应规格的 <code>AllowedGPUNums</code> 中的可选值。</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 规格对应的默认 <code>GPUNum</code> 值。</p>
                     */
                    double m_gPUNum;
                    bool m_gPUNumHasBeenSet;

                    /**
                     * <p>推理服务单个实例分配的 CPU 核数，当前仅支持整数值。</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 规格对应的默认 <code>CPUNum</code> 值。</p>
                     */
                    double m_cPUNum;
                    bool m_cPUNumHasBeenSet;

                    /**
                     * <p>推理服务单实例分配的内存大小。</p><p>单位：MB</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 对应规格的默认 <code>MemSize</code> 值；若填充，则必须为 <code>1024</code> 的整数倍。</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>推理服务单实例分配的临时磁盘大小。</p><p>单位：MB</p><p>若不填充，则使用所选 <code>HardwareSpecId</code> 对应规格的默认 <code>DiskSize</code> 值；若填充，则必须为 <code>1024</code> 的整数倍。</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARECONFIG_H_
