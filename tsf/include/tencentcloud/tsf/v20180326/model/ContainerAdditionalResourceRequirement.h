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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERADDITIONALRESOURCEREQUIREMENT_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERADDITIONALRESOURCEREQUIREMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 应用使用容器部署时需要的额外资源
                */
                class ContainerAdditionalResourceRequirement : public AbstractModel
                {
                public:
                    ContainerAdditionalResourceRequirement();
                    ~ContainerAdditionalResourceRequirement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU 核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu CPU 核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置CPU 核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu CPU 核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpu(const std::string& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存 MiB 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mem 内存 MiB 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMem() const;

                    /**
                     * 设置内存 MiB 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mem 内存 MiB 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMem(const std::string& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                private:

                    /**
                     * CPU 核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存 MiB 数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mem;
                    bool m_memHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERADDITIONALRESOURCEREQUIREMENT_H_
