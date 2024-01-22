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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_EXTERNALNODEINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_EXTERNALNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 第三方节点
                */
                class ExternalNodeInfo : public AbstractModel
                {
                public:
                    ExternalNodeInfo();
                    ~ExternalNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方节点名称
                     * @return Name 第三方节点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置第三方节点名称
                     * @param _name 第三方节点名称
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
                     * 获取CPU核数，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CPU CPU核数，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置CPU核数，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cPU CPU核数，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取节点内存容量，单位：`GB`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 节点内存容量，单位：`GB`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置节点内存容量，单位：`GB`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 节点内存容量，单位：`GB`
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
                     * 获取第三方节点kubelet版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return K8SVersion 第三方节点kubelet版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置第三方节点kubelet版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _k8SVersion 第三方节点kubelet版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetK8SVersion(const std::string& _k8SVersion);

                    /**
                     * 判断参数 K8SVersion 是否已赋值
                     * @return K8SVersion 是否已赋值
                     * 
                     */
                    bool K8SVersionHasBeenSet() const;

                private:

                    /**
                     * 第三方节点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * CPU核数，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 节点内存容量，单位：`GB`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 第三方节点kubelet版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_k8SVersion;
                    bool m_k8SVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_EXTERNALNODEINFO_H_
