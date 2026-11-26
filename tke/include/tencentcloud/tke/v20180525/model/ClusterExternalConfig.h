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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTEREXTERNALCONFIG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTEREXTERNALCONFIG_H_

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
                * 开启注册节点池支持配置信息
                */
                class ClusterExternalConfig : public AbstractModel
                {
                public:
                    ClusterExternalConfig();
                    ~ClusterExternalConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>容器网络类型，支持：HostNetwork、CiliumBGP</p>
                     * @return NetworkType <p>容器网络类型，支持：HostNetwork、CiliumBGP</p>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>容器网络类型，支持：HostNetwork、CiliumBGP</p>
                     * @param _networkType <p>容器网络类型，支持：HostNetwork、CiliumBGP</p>
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取<p>子网ID</p>
                     * @return SubnetId <p>子网ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetId <p>子网ID</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>集群CIDR，网络模式HostNetwork 时无需填写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterCIDR <p>集群CIDR，网络模式HostNetwork 时无需填写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 设置<p>集群CIDR，网络模式HostNetwork 时无需填写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterCIDR <p>集群CIDR，网络模式HostNetwork 时无需填写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterCIDR(const std::string& _clusterCIDR);

                    /**
                     * 判断参数 ClusterCIDR 是否已赋值
                     * @return ClusterCIDR 是否已赋值
                     * 
                     */
                    bool ClusterCIDRHasBeenSet() const;

                    /**
                     * 获取<p>【已废弃】是否开启专线连接能力</p>
                     * @return Enabled <p>【已废弃】是否开启专线连接能力</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>【已废弃】是否开启专线连接能力</p>
                     * @param _enabled <p>【已废弃】是否开启专线连接能力</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>ProxyCLBMode</p><p>枚举值：</p><ul><li>Dedicated： 默认，独立专属 CLB 元素</li><li>Shared： 复用支撑面 CLB</li></ul><p>默认值：Dedicated</p>
                     * @return ProxyCLBMode <p>ProxyCLBMode</p><p>枚举值：</p><ul><li>Dedicated： 默认，独立专属 CLB 元素</li><li>Shared： 复用支撑面 CLB</li></ul><p>默认值：Dedicated</p>
                     * 
                     */
                    std::string GetProxyCLBMode() const;

                    /**
                     * 设置<p>ProxyCLBMode</p><p>枚举值：</p><ul><li>Dedicated： 默认，独立专属 CLB 元素</li><li>Shared： 复用支撑面 CLB</li></ul><p>默认值：Dedicated</p>
                     * @param _proxyCLBMode <p>ProxyCLBMode</p><p>枚举值：</p><ul><li>Dedicated： 默认，独立专属 CLB 元素</li><li>Shared： 复用支撑面 CLB</li></ul><p>默认值：Dedicated</p>
                     * 
                     */
                    void SetProxyCLBMode(const std::string& _proxyCLBMode);

                    /**
                     * 判断参数 ProxyCLBMode 是否已赋值
                     * @return ProxyCLBMode 是否已赋值
                     * 
                     */
                    bool ProxyCLBModeHasBeenSet() const;

                private:

                    /**
                     * <p>容器网络类型，支持：HostNetwork、CiliumBGP</p>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>集群CIDR，网络模式HostNetwork 时无需填写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * <p>【已废弃】是否开启专线连接能力</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>ProxyCLBMode</p><p>枚举值：</p><ul><li>Dedicated： 默认，独立专属 CLB 元素</li><li>Shared： 复用支撑面 CLB</li></ul><p>默认值：Dedicated</p>
                     */
                    std::string m_proxyCLBMode;
                    bool m_proxyCLBModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTEREXTERNALCONFIG_H_
