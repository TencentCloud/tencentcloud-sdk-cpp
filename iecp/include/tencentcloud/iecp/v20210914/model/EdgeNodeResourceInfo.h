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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODERESOURCEINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODERESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 边缘节点资源信息
                */
                class EdgeNodeResourceInfo : public AbstractModel
                {
                public:
                    EdgeNodeResourceInfo();
                    ~EdgeNodeResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可使用的CPU 单位: m核
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllocatedCPU 可使用的CPU 单位: m核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllocatedCPU() const;

                    /**
                     * 设置可使用的CPU 单位: m核
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allocatedCPU 可使用的CPU 单位: m核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllocatedCPU(const std::string& _allocatedCPU);

                    /**
                     * 判断参数 AllocatedCPU 是否已赋值
                     * @return AllocatedCPU 是否已赋值
                     * 
                     */
                    bool AllocatedCPUHasBeenSet() const;

                    /**
                     * 获取CPU总量 单位:m核
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCPU CPU总量 单位:m核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalCPU() const;

                    /**
                     * 设置CPU总量 单位:m核
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCPU CPU总量 单位:m核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCPU(const std::string& _totalCPU);

                    /**
                     * 判断参数 TotalCPU 是否已赋值
                     * @return TotalCPU 是否已赋值
                     * 
                     */
                    bool TotalCPUHasBeenSet() const;

                    /**
                     * 获取已分配的内存 单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllocatedMemory 已分配的内存 单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllocatedMemory() const;

                    /**
                     * 设置已分配的内存 单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allocatedMemory 已分配的内存 单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllocatedMemory(const std::string& _allocatedMemory);

                    /**
                     * 判断参数 AllocatedMemory 是否已赋值
                     * @return AllocatedMemory 是否已赋值
                     * 
                     */
                    bool AllocatedMemoryHasBeenSet() const;

                    /**
                     * 获取内存总量 单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalMemory 内存总量 单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalMemory() const;

                    /**
                     * 设置内存总量 单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalMemory 内存总量 单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalMemory(const std::string& _totalMemory);

                    /**
                     * 判断参数 TotalMemory 是否已赋值
                     * @return TotalMemory 是否已赋值
                     * 
                     */
                    bool TotalMemoryHasBeenSet() const;

                    /**
                     * 获取已分配的GPU资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllocatedGPU 已分配的GPU资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllocatedGPU() const;

                    /**
                     * 设置已分配的GPU资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allocatedGPU 已分配的GPU资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllocatedGPU(const std::string& _allocatedGPU);

                    /**
                     * 判断参数 AllocatedGPU 是否已赋值
                     * @return AllocatedGPU 是否已赋值
                     * 
                     */
                    bool AllocatedGPUHasBeenSet() const;

                    /**
                     * 获取GPU总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalGPU GPU总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalGPU() const;

                    /**
                     * 设置GPU总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalGPU GPU总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalGPU(const std::string& _totalGPU);

                    /**
                     * 判断参数 TotalGPU 是否已赋值
                     * @return TotalGPU 是否已赋值
                     * 
                     */
                    bool TotalGPUHasBeenSet() const;

                    /**
                     * 获取可使用的CPU 单位: m核
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableCPU 可使用的CPU 单位: m核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvailableCPU() const;

                    /**
                     * 设置可使用的CPU 单位: m核
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableCPU 可使用的CPU 单位: m核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableCPU(const std::string& _availableCPU);

                    /**
                     * 判断参数 AvailableCPU 是否已赋值
                     * @return AvailableCPU 是否已赋值
                     * 
                     */
                    bool AvailableCPUHasBeenSet() const;

                    /**
                     * 获取可使用的内存 单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableMemory 可使用的内存 单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvailableMemory() const;

                    /**
                     * 设置可使用的内存 单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableMemory 可使用的内存 单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableMemory(const std::string& _availableMemory);

                    /**
                     * 判断参数 AvailableMemory 是否已赋值
                     * @return AvailableMemory 是否已赋值
                     * 
                     */
                    bool AvailableMemoryHasBeenSet() const;

                    /**
                     * 获取可使用的GPU资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableGPU 可使用的GPU资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvailableGPU() const;

                    /**
                     * 设置可使用的GPU资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableGPU 可使用的GPU资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableGPU(const std::string& _availableGPU);

                    /**
                     * 判断参数 AvailableGPU 是否已赋值
                     * @return AvailableGPU 是否已赋值
                     * 
                     */
                    bool AvailableGPUHasBeenSet() const;

                private:

                    /**
                     * 可使用的CPU 单位: m核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allocatedCPU;
                    bool m_allocatedCPUHasBeenSet;

                    /**
                     * CPU总量 单位:m核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalCPU;
                    bool m_totalCPUHasBeenSet;

                    /**
                     * 已分配的内存 单位G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allocatedMemory;
                    bool m_allocatedMemoryHasBeenSet;

                    /**
                     * 内存总量 单位G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalMemory;
                    bool m_totalMemoryHasBeenSet;

                    /**
                     * 已分配的GPU资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allocatedGPU;
                    bool m_allocatedGPUHasBeenSet;

                    /**
                     * GPU总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalGPU;
                    bool m_totalGPUHasBeenSet;

                    /**
                     * 可使用的CPU 单位: m核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_availableCPU;
                    bool m_availableCPUHasBeenSet;

                    /**
                     * 可使用的内存 单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_availableMemory;
                    bool m_availableMemoryHasBeenSet;

                    /**
                     * 可使用的GPU资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_availableGPU;
                    bool m_availableGPUHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODERESOURCEINFO_H_
