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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALNODESUPPORTCONFIGRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALNODESUPPORTCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Step.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeExternalNodeSupportConfig返回参数结构体
                */
                class DescribeExternalNodeSupportConfigResponse : public AbstractModel
                {
                public:
                    DescribeExternalNodeSupportConfigResponse();
                    ~DescribeExternalNodeSupportConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     * @return ClusterCIDR 用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     * 
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 判断参数 ClusterCIDR 是否已赋值
                     * @return ClusterCIDR 是否已赋值
                     * 
                     */
                    bool ClusterCIDRHasBeenSet() const;

                    /**
                     * 获取集群网络插件类型，支持：CiliumBGP、CiliumVXLan
                     * @return NetworkType 集群网络插件类型，支持：CiliumBGP、CiliumVXLan
                     * 
                     */
                    std::string GetNetworkType() const;

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
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取是否开启第三方节点专线连接支持
                     * @return Enabled 是否开启第三方节点专线连接支持
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取节点所属交换机的BGP AS 号
                     * @return AS 节点所属交换机的BGP AS 号
                     * 
                     */
                    std::string GetAS() const;

                    /**
                     * 判断参数 AS 是否已赋值
                     * @return AS 是否已赋值
                     * 
                     */
                    bool ASHasBeenSet() const;

                    /**
                     * 获取节点所属交换机的交换机 IP
                     * @return SwitchIP 节点所属交换机的交换机 IP
                     * 
                     */
                    std::string GetSwitchIP() const;

                    /**
                     * 判断参数 SwitchIP 是否已赋值
                     * @return SwitchIP 是否已赋值
                     * 
                     */
                    bool SwitchIPHasBeenSet() const;

                    /**
                     * 获取开启第三方节点池状态
                     * @return Status 开启第三方节点池状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取如果开启失败原因
                     * @return FailedReason 如果开启失败原因
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取内网访问地址
                     * @return Master 内网访问地址
                     * 
                     */
                    std::string GetMaster() const;

                    /**
                     * 判断参数 Master 是否已赋值
                     * @return Master 是否已赋值
                     * 
                     */
                    bool MasterHasBeenSet() const;

                    /**
                     * 获取镜像仓库代理地址
                     * @return Proxy 镜像仓库代理地址
                     * 
                     */
                    std::string GetProxy() const;

                    /**
                     * 判断参数 Proxy 是否已赋值
                     * @return Proxy 是否已赋值
                     * 
                     */
                    bool ProxyHasBeenSet() const;

                    /**
                     * 获取用于记录开启第三方节点的过程进行到哪一步了
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Progress 用于记录开启第三方节点的过程进行到哪一步了
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Step> GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取是否开启第三方节点公网连接支持
                     * @return EnabledPublicConnect 是否开启第三方节点公网连接支持
                     * 
                     */
                    bool GetEnabledPublicConnect() const;

                    /**
                     * 判断参数 EnabledPublicConnect 是否已赋值
                     * @return EnabledPublicConnect 是否已赋值
                     * 
                     */
                    bool EnabledPublicConnectHasBeenSet() const;

                    /**
                     * 获取注册节点公网版公网连接地址
                     * @return PublicConnectUrl 注册节点公网版公网连接地址
                     * 
                     */
                    std::string GetPublicConnectUrl() const;

                    /**
                     * 判断参数 PublicConnectUrl 是否已赋值
                     * @return PublicConnectUrl 是否已赋值
                     * 
                     */
                    bool PublicConnectUrlHasBeenSet() const;

                    /**
                     * 获取注册节点公网版自定义域名
                     * @return PublicCustomDomain 注册节点公网版自定义域名
                     * 
                     */
                    std::string GetPublicCustomDomain() const;

                    /**
                     * 判断参数 PublicCustomDomain 是否已赋值
                     * @return PublicCustomDomain 是否已赋值
                     * 
                     */
                    bool PublicCustomDomainHasBeenSet() const;

                private:

                    /**
                     * 用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * 集群网络插件类型，支持：CiliumBGP、CiliumVXLan
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 是否开启第三方节点专线连接支持
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 节点所属交换机的BGP AS 号
                     */
                    std::string m_aS;
                    bool m_aSHasBeenSet;

                    /**
                     * 节点所属交换机的交换机 IP
                     */
                    std::string m_switchIP;
                    bool m_switchIPHasBeenSet;

                    /**
                     * 开启第三方节点池状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 如果开启失败原因
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * 内网访问地址
                     */
                    std::string m_master;
                    bool m_masterHasBeenSet;

                    /**
                     * 镜像仓库代理地址
                     */
                    std::string m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * 用于记录开启第三方节点的过程进行到哪一步了
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Step> m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 是否开启第三方节点公网连接支持
                     */
                    bool m_enabledPublicConnect;
                    bool m_enabledPublicConnectHasBeenSet;

                    /**
                     * 注册节点公网版公网连接地址
                     */
                    std::string m_publicConnectUrl;
                    bool m_publicConnectUrlHasBeenSet;

                    /**
                     * 注册节点公网版自定义域名
                     */
                    std::string m_publicCustomDomain;
                    bool m_publicCustomDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALNODESUPPORTCONFIGRESPONSE_H_
