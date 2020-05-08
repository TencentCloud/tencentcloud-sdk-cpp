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
#include <tencentcloud/tke/v20180525/model/ClusterExtraArgs.h>


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
                     * 获取集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）
                     * @return NodeNameType 集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）
                     */
                    std::string GetNodeNameType() const;

                    /**
                     * 设置集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）
                     * @param NodeNameType 集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）
                     */
                    void SetNodeNameType(const std::string& _nodeNameType);

                    /**
                     * 判断参数 NodeNameType 是否已赋值
                     * @return NodeNameType 是否已赋值
                     */
                    bool NodeNameTypeHasBeenSet() const;

                    /**
                     * 获取集群自定义参数
                     * @return ExtraArgs 集群自定义参数
                     */
                    ClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置集群自定义参数
                     * @param ExtraArgs 集群自定义参数
                     */
                    void SetExtraArgs(const ClusterExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取集群网络类型（包括GR(全局路由)和VPC-CNI两种模式，默认为GR。
                     * @return NetworkType 集群网络类型（包括GR(全局路由)和VPC-CNI两种模式，默认为GR。
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置集群网络类型（包括GR(全局路由)和VPC-CNI两种模式，默认为GR。
                     * @param NetworkType 集群网络类型（包括GR(全局路由)和VPC-CNI两种模式，默认为GR。
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。
                     * @return IsNonStaticIpMode 集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。
                     */
                    bool GetIsNonStaticIpMode() const;

                    /**
                     * 设置集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。
                     * @param IsNonStaticIpMode 集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。
                     */
                    void SetIsNonStaticIpMode(const bool& _isNonStaticIpMode);

                    /**
                     * 判断参数 IsNonStaticIpMode 是否已赋值
                     * @return IsNonStaticIpMode 是否已赋值
                     */
                    bool IsNonStaticIpModeHasBeenSet() const;

                    /**
                     * 获取是否启用集群删除保护
                     * @return DeletionProtection 是否启用集群删除保护
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置是否启用集群删除保护
                     * @param DeletionProtection 是否启用集群删除保护
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     */
                    bool DeletionProtectionHasBeenSet() const;

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
                     * 集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）
                     */
                    std::string m_nodeNameType;
                    bool m_nodeNameTypeHasBeenSet;

                    /**
                     * 集群自定义参数
                     */
                    ClusterExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * 集群网络类型（包括GR(全局路由)和VPC-CNI两种模式，默认为GR。
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。
                     */
                    bool m_isNonStaticIpMode;
                    bool m_isNonStaticIpModeHasBeenSet;

                    /**
                     * 是否启用集群删除保护
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_
