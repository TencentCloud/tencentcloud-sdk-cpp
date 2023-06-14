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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEKSCLUSTERREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEKSCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/DnsServerConf.h>
#include <tencentcloud/tke/v20180525/model/TagSpecification.h>
#include <tencentcloud/tke/v20180525/model/SubnetInfos.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateEKSCluster请求参数结构体
                */
                class CreateEKSClusterRequest : public AbstractModel
                {
                public:
                    CreateEKSClusterRequest();
                    ~CreateEKSClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取k8s版本号。可为1.18.4 1.20.6。
                     * @return K8SVersion k8s版本号。可为1.18.4 1.20.6。
                     * 
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置k8s版本号。可为1.18.4 1.20.6。
                     * @param _k8SVersion k8s版本号。可为1.18.4 1.20.6。
                     * 
                     */
                    void SetK8SVersion(const std::string& _k8SVersion);

                    /**
                     * 判断参数 K8SVersion 是否已赋值
                     * @return K8SVersion 是否已赋值
                     * 
                     */
                    bool K8SVersionHasBeenSet() const;

                    /**
                     * 获取vpc 的Id
                     * @return VpcId vpc 的Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc 的Id
                     * @param _vpcId vpc 的Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
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
                     * 获取集群描述信息
                     * @return ClusterDesc 集群描述信息
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置集群描述信息
                     * @param _clusterDesc 集群描述信息
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
                     * 获取Service CIDR 或 Serivce 所在子网Id
                     * @return ServiceSubnetId Service CIDR 或 Serivce 所在子网Id
                     * 
                     */
                    std::string GetServiceSubnetId() const;

                    /**
                     * 设置Service CIDR 或 Serivce 所在子网Id
                     * @param _serviceSubnetId Service CIDR 或 Serivce 所在子网Id
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
                     * 获取集群自定义的Dns服务器信息
                     * @return DnsServers 集群自定义的Dns服务器信息
                     * 
                     */
                    std::vector<DnsServerConf> GetDnsServers() const;

                    /**
                     * 设置集群自定义的Dns服务器信息
                     * @param _dnsServers 集群自定义的Dns服务器信息
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

                    /**
                     * 获取是否在用户集群内开启Dns。默认为true
                     * @return EnableVpcCoreDNS 是否在用户集群内开启Dns。默认为true
                     * 
                     */
                    bool GetEnableVpcCoreDNS() const;

                    /**
                     * 设置是否在用户集群内开启Dns。默认为true
                     * @param _enableVpcCoreDNS 是否在用户集群内开启Dns。默认为true
                     * 
                     */
                    void SetEnableVpcCoreDNS(const bool& _enableVpcCoreDNS);

                    /**
                     * 判断参数 EnableVpcCoreDNS 是否已赋值
                     * @return EnableVpcCoreDNS 是否已赋值
                     * 
                     */
                    bool EnableVpcCoreDNSHasBeenSet() const;

                    /**
                     * 获取标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到集群实例。
                     * @return TagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到集群实例。
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到集群实例。
                     * @param _tagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到集群实例。
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取子网信息列表
                     * @return SubnetInfos 子网信息列表
                     * 
                     */
                    std::vector<SubnetInfos> GetSubnetInfos() const;

                    /**
                     * 设置子网信息列表
                     * @param _subnetInfos 子网信息列表
                     * 
                     */
                    void SetSubnetInfos(const std::vector<SubnetInfos>& _subnetInfos);

                    /**
                     * 判断参数 SubnetInfos 是否已赋值
                     * @return SubnetInfos 是否已赋值
                     * 
                     */
                    bool SubnetInfosHasBeenSet() const;

                private:

                    /**
                     * k8s版本号。可为1.18.4 1.20.6。
                     */
                    std::string m_k8SVersion;
                    bool m_k8SVersionHasBeenSet;

                    /**
                     * vpc 的Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 子网Id 列表
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 集群描述信息
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * Service CIDR 或 Serivce 所在子网Id
                     */
                    std::string m_serviceSubnetId;
                    bool m_serviceSubnetIdHasBeenSet;

                    /**
                     * 集群自定义的Dns服务器信息
                     */
                    std::vector<DnsServerConf> m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                    /**
                     * 扩展参数。须是map[string]string 的json 格式。
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * 是否在用户集群内开启Dns。默认为true
                     */
                    bool m_enableVpcCoreDNS;
                    bool m_enableVpcCoreDNSHasBeenSet;

                    /**
                     * 标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到集群实例。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 子网信息列表
                     */
                    std::vector<SubnetInfos> m_subnetInfos;
                    bool m_subnetInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEKSCLUSTERREQUEST_H_
