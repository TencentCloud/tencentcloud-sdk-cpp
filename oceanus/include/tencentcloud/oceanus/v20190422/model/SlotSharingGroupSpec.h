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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SLOTSHARINGGROUPSPEC_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SLOTSHARINGGROUPSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * SlotSharingGroup的规格描述
                */
                class SlotSharingGroupSpec : public AbstractModel
                {
                public:
                    SlotSharingGroupSpec();
                    ~SlotSharingGroupSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取适用的cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CPU 适用的cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCPU() const;

                    /**
                     * 设置适用的cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cPU 适用的cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCPU(const double& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeapMemory 默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHeapMemory() const;

                    /**
                     * 设置默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heapMemory 默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeapMemory(const std::string& _heapMemory);

                    /**
                     * 判断参数 HeapMemory 是否已赋值
                     * @return HeapMemory 是否已赋值
                     * 
                     */
                    bool HeapMemoryHasBeenSet() const;

                    /**
                     * 获取默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OffHeapMemory 默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffHeapMemory() const;

                    /**
                     * 设置默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offHeapMemory 默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffHeapMemory(const std::string& _offHeapMemory);

                    /**
                     * 判断参数 OffHeapMemory 是否已赋值
                     * @return OffHeapMemory 是否已赋值
                     * 
                     */
                    bool OffHeapMemoryHasBeenSet() const;

                    /**
                     * 获取默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManagedMemory 默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManagedMemory() const;

                    /**
                     * 设置默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _managedMemory 默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManagedMemory(const std::string& _managedMemory);

                    /**
                     * 判断参数 ManagedMemory 是否已赋值
                     * @return ManagedMemory 是否已赋值
                     * 
                     */
                    bool ManagedMemoryHasBeenSet() const;

                private:

                    /**
                     * 适用的cpu
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_heapMemory;
                    bool m_heapMemoryHasBeenSet;

                    /**
                     * 默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offHeapMemory;
                    bool m_offHeapMemoryHasBeenSet;

                    /**
                     * 默认为b, 支持单位有 b, kb, mb, gb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_managedMemory;
                    bool m_managedMemoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SLOTSHARINGGROUPSPEC_H_
