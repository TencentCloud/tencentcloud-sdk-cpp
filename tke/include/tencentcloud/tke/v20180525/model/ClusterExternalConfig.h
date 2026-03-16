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
                * 开启第三方节点池支持配置信息
                */
                class ClusterExternalConfig : public AbstractModel
                {
                public:
                    ClusterExternalConfig();
                    ~ClusterExternalConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群网络插件类型，支持：Flannel、CiliumBGP、CiliumVXLan
                     * @return NetworkType 集群网络插件类型，支持：Flannel、CiliumBGP、CiliumVXLan
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置集群网络插件类型，支持：Flannel、CiliumBGP、CiliumVXLan
                     * @param _networkType 集群网络插件类型，支持：Flannel、CiliumBGP、CiliumVXLan
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取Pod CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterCIDR Pod CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 设置Pod CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterCIDR Pod CIDR
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
                     * 获取是否开启第三方节点池支持
                     * @return Enabled 是否开启第三方节点池支持
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启第三方节点池支持
                     * @param _enabled 是否开启第三方节点池支持
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 集群网络插件类型，支持：Flannel、CiliumBGP、CiliumVXLan
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Pod CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * 是否开启第三方节点池支持
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTEREXTERNALCONFIG_H_
