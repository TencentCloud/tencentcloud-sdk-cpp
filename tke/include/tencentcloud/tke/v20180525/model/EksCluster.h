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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EKSCLUSTER_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EKSCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/DnsServerConf.h>
#include <tencentcloud/tke/v20180525/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 弹性集群信息
                */
                class EksCluster : public AbstractModel
                {
                public:
                    EksCluster();
                    ~EksCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param _clusterId 集群Id
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
                     * 获取Vpc Id
                     * @return VpcId Vpc Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc Id
                     * @param _vpcId Vpc Id
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
                     * 获取子网列表
                     * @return SubnetIds 子网列表
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网列表
                     * @param _subnetIds 子网列表
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
                     * 获取k8s 版本号
                     * @return K8SVersion k8s 版本号
                     * 
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置k8s 版本号
                     * @param _k8SVersion k8s 版本号
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
                     * 获取集群状态(running 运行中，initializing 初始化中，Failed 异常，Idling 空闲中，Activating 激活中，Terminating 删除中)
                     * @return Status 集群状态(running 运行中，initializing 初始化中，Failed 异常，Idling 空闲中，Activating 激活中，Terminating 删除中)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置集群状态(running 运行中，initializing 初始化中，Failed 异常，Idling 空闲中，Activating 激活中，Terminating 删除中)
                     * @param _status 集群状态(running 运行中，initializing 初始化中，Failed 异常，Idling 空闲中，Activating 激活中，Terminating 删除中)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取集群创建时间
                     * @return CreatedTime 集群创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置集群创建时间
                     * @param _createdTime 集群创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

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
                     * 获取集群的自定义dns 服务器信息
                     * @return DnsServers 集群的自定义dns 服务器信息
                     * 
                     */
                    std::vector<DnsServerConf> GetDnsServers() const;

                    /**
                     * 设置集群的自定义dns 服务器信息
                     * @param _dnsServers 集群的自定义dns 服务器信息
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
                     * 获取是否在用户集群内开启Dns。默认为TRUE
                     * @return EnableVpcCoreDNS 是否在用户集群内开启Dns。默认为TRUE
                     * 
                     */
                    bool GetEnableVpcCoreDNS() const;

                    /**
                     * 设置是否在用户集群内开启Dns。默认为TRUE
                     * @param _enableVpcCoreDNS 是否在用户集群内开启Dns。默认为TRUE
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
                     * 获取标签描述列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSpecification 标签描述列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签描述列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSpecification 标签描述列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Vpc Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网列表
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * k8s 版本号
                     */
                    std::string m_k8SVersion;
                    bool m_k8SVersionHasBeenSet;

                    /**
                     * 集群状态(running 运行中，initializing 初始化中，Failed 异常，Idling 空闲中，Activating 激活中，Terminating 删除中)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群描述信息
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 集群创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Service 子网Id
                     */
                    std::string m_serviceSubnetId;
                    bool m_serviceSubnetIdHasBeenSet;

                    /**
                     * 集群的自定义dns 服务器信息
                     */
                    std::vector<DnsServerConf> m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                    /**
                     * 将来删除集群时是否要删除cbs。默认为 FALSE
                     */
                    bool m_needDeleteCbs;
                    bool m_needDeleteCbsHasBeenSet;

                    /**
                     * 是否在用户集群内开启Dns。默认为TRUE
                     */
                    bool m_enableVpcCoreDNS;
                    bool m_enableVpcCoreDNSHasBeenSet;

                    /**
                     * 标签描述列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EKSCLUSTER_H_
