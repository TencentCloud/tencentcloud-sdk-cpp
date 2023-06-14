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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEKSCLUSTERREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEKSCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterPublicLB.h>
#include <tencentcloud/tke/v20180525/model/ClusterInternalLB.h>
#include <tencentcloud/tke/v20180525/model/DnsServerConf.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpdateEKSCluster请求参数结构体
                */
                class UpdateEKSClusterRequest : public AbstractModel
                {
                public:
                    UpdateEKSClusterRequest();
                    ~UpdateEKSClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性集群Id
                     * @return ClusterId 弹性集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置弹性集群Id
                     * @param _clusterId 弹性集群Id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取弹性集群名称
                     * @return ClusterName 弹性集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置弹性集群名称
                     * @param _clusterName 弹性集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取弹性集群描述信息
                     * @return ClusterDesc 弹性集群描述信息
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置弹性集群描述信息
                     * @param _clusterDesc 弹性集群描述信息
                     * 
                     */
                    void SetClusterDesc(const std::string& _clusterDesc);

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     * 
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取子网Id 列表
                     * @return SubnetIds 子网Id 列表
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网Id 列表
                     * @param _subnetIds 子网Id 列表
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取弹性容器集群公网访问LB信息
                     * @return PublicLB 弹性容器集群公网访问LB信息
                     * 
                     */
                    ClusterPublicLB GetPublicLB() const;

                    /**
                     * 设置弹性容器集群公网访问LB信息
                     * @param _publicLB 弹性容器集群公网访问LB信息
                     * 
                     */
                    void SetPublicLB(const ClusterPublicLB& _publicLB);

                    /**
                     * 判断参数 PublicLB 是否已赋值
                     * @return PublicLB 是否已赋值
                     * 
                     */
                    bool PublicLBHasBeenSet() const;

                    /**
                     * 获取弹性容器集群内网访问LB信息
                     * @return InternalLB 弹性容器集群内网访问LB信息
                     * 
                     */
                    ClusterInternalLB GetInternalLB() const;

                    /**
                     * 设置弹性容器集群内网访问LB信息
                     * @param _internalLB 弹性容器集群内网访问LB信息
                     * 
                     */
                    void SetInternalLB(const ClusterInternalLB& _internalLB);

                    /**
                     * 判断参数 InternalLB 是否已赋值
                     * @return InternalLB 是否已赋值
                     * 
                     */
                    bool InternalLBHasBeenSet() const;

                    /**
                     * 获取Service 子网Id
                     * @return ServiceSubnetId Service 子网Id
                     * 
                     */
                    std::string GetServiceSubnetId() const;

                    /**
                     * 设置Service 子网Id
                     * @param _serviceSubnetId Service 子网Id
                     * 
                     */
                    void SetServiceSubnetId(const std::string& _serviceSubnetId);

                    /**
                     * 判断参数 ServiceSubnetId 是否已赋值
                     * @return ServiceSubnetId 是否已赋值
                     * 
                     */
                    bool ServiceSubnetIdHasBeenSet() const;

                    /**
                     * 获取集群自定义的dns 服务器信息
                     * @return DnsServers 集群自定义的dns 服务器信息
                     * 
                     */
                    std::vector<DnsServerConf> GetDnsServers() const;

                    /**
                     * 设置集群自定义的dns 服务器信息
                     * @param _dnsServers 集群自定义的dns 服务器信息
                     * 
                     */
                    void SetDnsServers(const std::vector<DnsServerConf>& _dnsServers);

                    /**
                     * 判断参数 DnsServers 是否已赋值
                     * @return DnsServers 是否已赋值
                     * 
                     */
                    bool DnsServersHasBeenSet() const;

                    /**
                     * 获取是否清空自定义dns 服务器设置。为1 表示 是。其他表示 否。
                     * @return ClearDnsServer 是否清空自定义dns 服务器设置。为1 表示 是。其他表示 否。
                     * 
                     */
                    std::string GetClearDnsServer() const;

                    /**
                     * 设置是否清空自定义dns 服务器设置。为1 表示 是。其他表示 否。
                     * @param _clearDnsServer 是否清空自定义dns 服务器设置。为1 表示 是。其他表示 否。
                     * 
                     */
                    void SetClearDnsServer(const std::string& _clearDnsServer);

                    /**
                     * 判断参数 ClearDnsServer 是否已赋值
                     * @return ClearDnsServer 是否已赋值
                     * 
                     */
                    bool ClearDnsServerHasBeenSet() const;

                    /**
                     * 获取将来删除集群时是否要删除cbs。默认为 FALSE
                     * @return NeedDeleteCbs 将来删除集群时是否要删除cbs。默认为 FALSE
                     * 
                     */
                    bool GetNeedDeleteCbs() const;

                    /**
                     * 设置将来删除集群时是否要删除cbs。默认为 FALSE
                     * @param _needDeleteCbs 将来删除集群时是否要删除cbs。默认为 FALSE
                     * 
                     */
                    void SetNeedDeleteCbs(const bool& _needDeleteCbs);

                    /**
                     * 判断参数 NeedDeleteCbs 是否已赋值
                     * @return NeedDeleteCbs 是否已赋值
                     * 
                     */
                    bool NeedDeleteCbsHasBeenSet() const;

                    /**
                     * 获取标记是否是新的内外网。默认为false
                     * @return ProxyLB 标记是否是新的内外网。默认为false
                     * 
                     */
                    bool GetProxyLB() const;

                    /**
                     * 设置标记是否是新的内外网。默认为false
                     * @param _proxyLB 标记是否是新的内外网。默认为false
                     * 
                     */
                    void SetProxyLB(const bool& _proxyLB);

                    /**
                     * 判断参数 ProxyLB 是否已赋值
                     * @return ProxyLB 是否已赋值
                     * 
                     */
                    bool ProxyLBHasBeenSet() const;

                    /**
                     * 获取扩展参数。须是map[string]string 的json 格式。
                     * @return ExtraParam 扩展参数。须是map[string]string 的json 格式。
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置扩展参数。须是map[string]string 的json 格式。
                     * @param _extraParam 扩展参数。须是map[string]string 的json 格式。
                     * 
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                private:

                    /**
                     * 弹性集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 弹性集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 弹性集群描述信息
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 子网Id 列表
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 弹性容器集群公网访问LB信息
                     */
                    ClusterPublicLB m_publicLB;
                    bool m_publicLBHasBeenSet;

                    /**
                     * 弹性容器集群内网访问LB信息
                     */
                    ClusterInternalLB m_internalLB;
                    bool m_internalLBHasBeenSet;

                    /**
                     * Service 子网Id
                     */
                    std::string m_serviceSubnetId;
                    bool m_serviceSubnetIdHasBeenSet;

                    /**
                     * 集群自定义的dns 服务器信息
                     */
                    std::vector<DnsServerConf> m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                    /**
                     * 是否清空自定义dns 服务器设置。为1 表示 是。其他表示 否。
                     */
                    std::string m_clearDnsServer;
                    bool m_clearDnsServerHasBeenSet;

                    /**
                     * 将来删除集群时是否要删除cbs。默认为 FALSE
                     */
                    bool m_needDeleteCbs;
                    bool m_needDeleteCbsHasBeenSet;

                    /**
                     * 标记是否是新的内外网。默认为false
                     */
                    bool m_proxyLB;
                    bool m_proxyLBHasBeenSet;

                    /**
                     * 扩展参数。须是map[string]string 的json 格式。
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEKSCLUSTERREQUEST_H_
