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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_

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
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群高级配置
                */
                class ClusterAdvancedSettings : public AbstractModel
                {
                public:
                    ClusterAdvancedSettings();
                    ~ClusterAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用IPVS
                     * @return IPVS 是否启用IPVS
                     */
                    bool GetIPVS() const;

                    /**
                     * 设置是否启用IPVS
                     * @param IPVS 是否启用IPVS
                     */
                    void SetIPVS(const bool& _iPVS);

                    /**
                     * 判断参数 IPVS 是否已赋值
                     * @return IPVS 是否已赋值
                     */
                    bool IPVSHasBeenSet() const;

                    /**
                     * 获取是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)
                     * @return AsEnabled 是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)
                     */
                    bool GetAsEnabled() const;

                    /**
                     * 设置是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)
                     * @param AsEnabled 是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)
                     */
                    void SetAsEnabled(const bool& _asEnabled);

                    /**
                     * 判断参数 AsEnabled 是否已赋值
                     * @return AsEnabled 是否已赋值
                     */
                    bool AsEnabledHasBeenSet() const;

                    /**
                     * 获取集群使用的runtime类型，包括"docker"和"containerd"两种类型，默认为"docker"
                     * @return ContainerRuntime 集群使用的runtime类型，包括"docker"和"containerd"两种类型，默认为"docker"
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置集群使用的runtime类型，包括"docker"和"containerd"两种类型，默认为"docker"
                     * @param ContainerRuntime 集群使用的runtime类型，包括"docker"和"containerd"两种类型，默认为"docker"
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip）
                     * @return NodeNameType 集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip）
                     */
                    std::string GetNodeNameType() const;

                    /**
                     * 设置集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip）
                     * @param NodeNameType 集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip）
                     */
                    void SetNodeNameType(const std::string& _nodeNameType);

                    /**
                     * 判断参数 NodeNameType 是否已赋值
                     * @return NodeNameType 是否已赋值
                     */
                    bool NodeNameTypeHasBeenSet() const;

                private:

                    /**
                     * 是否启用IPVS
                     */
                    bool m_iPVS;
                    bool m_iPVSHasBeenSet;

                    /**
                     * 是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)
                     */
                    bool m_asEnabled;
                    bool m_asEnabledHasBeenSet;

                    /**
                     * 集群使用的runtime类型，包括"docker"和"containerd"两种类型，默认为"docker"
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * 集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip）
                     */
                    std::string m_nodeNameType;
                    bool m_nodeNameTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_
