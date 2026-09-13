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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARESPECIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARESPECIFICATION_H_

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
                * 推理硬件规格信息。
                */
                class InferenceHardwareSpecification : public AbstractModel
                {
                public:
                    InferenceHardwareSpecification();
                    ~InferenceHardwareSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规格标识。已废弃，参考使用字段 <code>HardwareSpecId</code>。</p>
                     * @return Spec <p>规格标识。已废弃，参考使用字段 <code>HardwareSpecId</code>。</p>
                     * @deprecated
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置<p>规格标识。已废弃，参考使用字段 <code>HardwareSpecId</code>。</p>
                     * @param _spec <p>规格标识。已废弃，参考使用字段 <code>HardwareSpecId</code>。</p>
                     * @deprecated
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * @deprecated
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取<p>规格唯一标识 ID。</p>
                     * @return HardwareSpecId <p>规格唯一标识 ID。</p>
                     * 
                     */
                    std::string GetHardwareSpecId() const;

                    /**
                     * 设置<p>规格唯一标识 ID。</p>
                     * @param _hardwareSpecId <p>规格唯一标识 ID。</p>
                     * 
                     */
                    void SetHardwareSpecId(const std::string& _hardwareSpecId);

                    /**
                     * 判断参数 HardwareSpecId 是否已赋值
                     * @return HardwareSpecId 是否已赋值
                     * 
                     */
                    bool HardwareSpecIdHasBeenSet() const;

                    /**
                     * 获取<p>规格名称。</p>
                     * @return Name <p>规格名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>规格名称。</p>
                     * @param _name <p>规格名称。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>规格默认分配的 GPU 卡数。</p>
                     * @return GPUNum <p>规格默认分配的 GPU 卡数。</p>
                     * 
                     */
                    double GetGPUNum() const;

                    /**
                     * 设置<p>规格默认分配的 GPU 卡数。</p>
                     * @param _gPUNum <p>规格默认分配的 GPU 卡数。</p>
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
                     * 获取<p>规格默认分配的 CPU 核数。</p>
                     * @return CPUNum <p>规格默认分配的 CPU 核数。</p>
                     * 
                     */
                    double GetCPUNum() const;

                    /**
                     * 设置<p>规格默认分配的 CPU 核数。</p>
                     * @param _cPUNum <p>规格默认分配的 CPU 核数。</p>
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
                     * 获取<p>规格默认分配的内存大小。</p><p>单位：MB</p>
                     * @return MemSize <p>规格默认分配的内存大小。</p><p>单位：MB</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>规格默认分配的内存大小。</p><p>单位：MB</p>
                     * @param _memSize <p>规格默认分配的内存大小。</p><p>单位：MB</p>
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
                     * 获取<p>规格默认分配的显存大小。</p><p>单位：MB</p>
                     * @return GPUMemSize <p>规格默认分配的显存大小。</p><p>单位：MB</p>
                     * 
                     */
                    int64_t GetGPUMemSize() const;

                    /**
                     * 设置<p>规格默认分配的显存大小。</p><p>单位：MB</p>
                     * @param _gPUMemSize <p>规格默认分配的显存大小。</p><p>单位：MB</p>
                     * 
                     */
                    void SetGPUMemSize(const int64_t& _gPUMemSize);

                    /**
                     * 判断参数 GPUMemSize 是否已赋值
                     * @return GPUMemSize 是否已赋值
                     * 
                     */
                    bool GPUMemSizeHasBeenSet() const;

                    /**
                     * 获取<p>规格默认分配的磁盘大小。</p><p>单位：MB</p>
                     * @return DiskSize <p>规格默认分配的磁盘大小。</p><p>单位：MB</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>规格默认分配的磁盘大小。</p><p>单位：MB</p>
                     * @param _diskSize <p>规格默认分配的磁盘大小。</p><p>单位：MB</p>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>规格当前支持的 GPU 卡数列表。</p><p>若不填充或填充空数组，则仅支持规格默认分配的 GPU 卡数。</p>
                     * @return AllowedGPUNums <p>规格当前支持的 GPU 卡数列表。</p><p>若不填充或填充空数组，则仅支持规格默认分配的 GPU 卡数。</p>
                     * 
                     */
                    std::vector<double> GetAllowedGPUNums() const;

                    /**
                     * 设置<p>规格当前支持的 GPU 卡数列表。</p><p>若不填充或填充空数组，则仅支持规格默认分配的 GPU 卡数。</p>
                     * @param _allowedGPUNums <p>规格当前支持的 GPU 卡数列表。</p><p>若不填充或填充空数组，则仅支持规格默认分配的 GPU 卡数。</p>
                     * 
                     */
                    void SetAllowedGPUNums(const std::vector<double>& _allowedGPUNums);

                    /**
                     * 判断参数 AllowedGPUNums 是否已赋值
                     * @return AllowedGPUNums 是否已赋值
                     * 
                     */
                    bool AllowedGPUNumsHasBeenSet() const;

                private:

                    /**
                     * <p>规格标识。已废弃，参考使用字段 <code>HardwareSpecId</code>。</p>
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>规格唯一标识 ID。</p>
                     */
                    std::string m_hardwareSpecId;
                    bool m_hardwareSpecIdHasBeenSet;

                    /**
                     * <p>规格名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>规格默认分配的 GPU 卡数。</p>
                     */
                    double m_gPUNum;
                    bool m_gPUNumHasBeenSet;

                    /**
                     * <p>规格默认分配的 CPU 核数。</p>
                     */
                    double m_cPUNum;
                    bool m_cPUNumHasBeenSet;

                    /**
                     * <p>规格默认分配的内存大小。</p><p>单位：MB</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>规格默认分配的显存大小。</p><p>单位：MB</p>
                     */
                    int64_t m_gPUMemSize;
                    bool m_gPUMemSizeHasBeenSet;

                    /**
                     * <p>规格默认分配的磁盘大小。</p><p>单位：MB</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>规格当前支持的 GPU 卡数列表。</p><p>若不填充或填充空数组，则仅支持规格默认分配的 GPU 卡数。</p>
                     */
                    std::vector<double> m_allowedGPUNums;
                    bool m_allowedGPUNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARESPECIFICATION_H_
