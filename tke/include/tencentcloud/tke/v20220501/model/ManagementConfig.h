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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_MANAGEMENTCONFIG_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_MANAGEMENTCONFIG_H_

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
                * 托管节点池Management配置
                */
                class ManagementConfig : public AbstractModel
                {
                public:
                    ManagementConfig();
                    ~ManagementConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取dns 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nameservers dns 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNameservers() const;

                    /**
                     * 设置dns 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameservers dns 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameservers(const std::vector<std::string>& _nameservers);

                    /**
                     * 判断参数 Nameservers 是否已赋值
                     * @return Nameservers 是否已赋值
                     * 
                     */
                    bool NameserversHasBeenSet() const;

                    /**
                     * 获取hosts 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hosts hosts 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置hosts 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hosts hosts 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取内核参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KernelArgs 内核参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKernelArgs() const;

                    /**
                     * 设置内核参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kernelArgs 内核参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKernelArgs(const std::vector<std::string>& _kernelArgs);

                    /**
                     * 判断参数 KernelArgs 是否已赋值
                     * @return KernelArgs 是否已赋值
                     * 
                     */
                    bool KernelArgsHasBeenSet() const;

                private:

                    /**
                     * dns 配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nameservers;
                    bool m_nameserversHasBeenSet;

                    /**
                     * hosts 配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 内核参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_kernelArgs;
                    bool m_kernelArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_MANAGEMENTCONFIG_H_
