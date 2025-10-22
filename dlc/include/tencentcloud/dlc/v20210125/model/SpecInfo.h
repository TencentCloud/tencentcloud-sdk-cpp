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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPECINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 节点规格信息
                */
                class SpecInfo : public AbstractModel
                {
                public:
                    SpecInfo();
                    ~SpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 规格名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取当前规格的cu数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cu 当前规格的cu数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCu() const;

                    /**
                     * 设置当前规格的cu数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cu 当前规格的cu数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCu(const int64_t& _cu);

                    /**
                     * 判断参数 Cu 是否已赋值
                     * @return Cu 是否已赋值
                     * 
                     */
                    bool CuHasBeenSet() const;

                    /**
                     * 获取当前规格的cpu数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu 当前规格的cpu数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置当前规格的cpu数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu 当前规格的cpu数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取当前规格的内存数，单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 当前规格的内存数，单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置当前规格的内存数，单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 当前规格的内存数，单位G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                private:

                    /**
                     * 规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 当前规格的cu数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cu;
                    bool m_cuHasBeenSet;

                    /**
                     * 当前规格的cpu数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 当前规格的内存数，单位G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPECINFO_H_
