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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ClustersZone.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 集群的详细信息，如集群ID，名称，类型，可用区，标签等
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群唯一ID
                     * @return ClusterId 集群唯一ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群唯一ID
                     * @param _clusterId 集群唯一ID
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
                     * 获取集群类型，如TGW，STGW，VPCGW
                     * @return ClusterType 集群类型，如TGW，STGW，VPCGW
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型，如TGW，STGW，VPCGW
                     * @param _clusterType 集群类型，如TGW，STGW，VPCGW
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群标签，只有TGW/STGW集群有标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterTag 集群标签，只有TGW/STGW集群有标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterTag() const;

                    /**
                     * 设置集群标签，只有TGW/STGW集群有标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterTag 集群标签，只有TGW/STGW集群有标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterTag(const std::string& _clusterTag);

                    /**
                     * 判断参数 ClusterTag 是否已赋值
                     * @return ClusterTag 是否已赋值
                     * 
                     */
                    bool ClusterTagHasBeenSet() const;

                    /**
                     * 获取集群所在可用区，如ap-guangzhou-1
                     * @return Zone 集群所在可用区，如ap-guangzhou-1
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置集群所在可用区，如ap-guangzhou-1
                     * @param _zone 集群所在可用区，如ap-guangzhou-1
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取集群网络类型，如Public，Private
                     * @return Network 集群网络类型，如Public，Private
                     * 
                     */
                    std::string GetNetwork() const;

                    /**
                     * 设置集群网络类型，如Public，Private
                     * @param _network 集群网络类型，如Public，Private
                     * 
                     */
                    void SetNetwork(const std::string& _network);

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取最大连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxConn 最大连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置最大连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxConn 最大连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxConn(const int64_t& _maxConn);

                    /**
                     * 判断参数 MaxConn 是否已赋值
                     * @return MaxConn 是否已赋值
                     * 
                     */
                    bool MaxConnHasBeenSet() const;

                    /**
                     * 获取最大入带宽Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxInFlow 最大入带宽Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxInFlow() const;

                    /**
                     * 设置最大入带宽Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxInFlow 最大入带宽Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxInFlow(const int64_t& _maxInFlow);

                    /**
                     * 判断参数 MaxInFlow 是否已赋值
                     * @return MaxInFlow 是否已赋值
                     * 
                     */
                    bool MaxInFlowHasBeenSet() const;

                    /**
                     * 获取最大入包量（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxInPkg 最大入包量（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxInPkg() const;

                    /**
                     * 设置最大入包量（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxInPkg 最大入包量（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxInPkg(const int64_t& _maxInPkg);

                    /**
                     * 判断参数 MaxInPkg 是否已赋值
                     * @return MaxInPkg 是否已赋值
                     * 
                     */
                    bool MaxInPkgHasBeenSet() const;

                    /**
                     * 获取最大出带宽Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxOutFlow 最大出带宽Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxOutFlow() const;

                    /**
                     * 设置最大出带宽Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxOutFlow 最大出带宽Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxOutFlow(const int64_t& _maxOutFlow);

                    /**
                     * 判断参数 MaxOutFlow 是否已赋值
                     * @return MaxOutFlow 是否已赋值
                     * 
                     */
                    bool MaxOutFlowHasBeenSet() const;

                    /**
                     * 获取最大出包量（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxOutPkg 最大出包量（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxOutPkg() const;

                    /**
                     * 设置最大出包量（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxOutPkg 最大出包量（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxOutPkg(const int64_t& _maxOutPkg);

                    /**
                     * 判断参数 MaxOutPkg 是否已赋值
                     * @return MaxOutPkg 是否已赋值
                     * 
                     */
                    bool MaxOutPkgHasBeenSet() const;

                    /**
                     * 获取最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxNewConn 最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxNewConn() const;

                    /**
                     * 设置最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxNewConn 最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxNewConn(const int64_t& _maxNewConn);

                    /**
                     * 判断参数 MaxNewConn 是否已赋值
                     * @return MaxNewConn 是否已赋值
                     * 
                     */
                    bool MaxNewConnHasBeenSet() const;

                    /**
                     * 获取http最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HTTPMaxNewConn http最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHTTPMaxNewConn() const;

                    /**
                     * 设置http最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hTTPMaxNewConn http最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHTTPMaxNewConn(const int64_t& _hTTPMaxNewConn);

                    /**
                     * 判断参数 HTTPMaxNewConn 是否已赋值
                     * @return HTTPMaxNewConn 是否已赋值
                     * 
                     */
                    bool HTTPMaxNewConnHasBeenSet() const;

                    /**
                     * 获取https最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HTTPSMaxNewConn https最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHTTPSMaxNewConn() const;

                    /**
                     * 设置https最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hTTPSMaxNewConn https最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHTTPSMaxNewConn(const int64_t& _hTTPSMaxNewConn);

                    /**
                     * 判断参数 HTTPSMaxNewConn 是否已赋值
                     * @return HTTPSMaxNewConn 是否已赋值
                     * 
                     */
                    bool HTTPSMaxNewConnHasBeenSet() const;

                    /**
                     * 获取http QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HTTPQps http QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHTTPQps() const;

                    /**
                     * 设置http QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hTTPQps http QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHTTPQps(const int64_t& _hTTPQps);

                    /**
                     * 判断参数 HTTPQps 是否已赋值
                     * @return HTTPQps 是否已赋值
                     * 
                     */
                    bool HTTPQpsHasBeenSet() const;

                    /**
                     * 获取https QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HTTPSQps https QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHTTPSQps() const;

                    /**
                     * 设置https QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hTTPSQps https QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHTTPSQps(const int64_t& _hTTPSQps);

                    /**
                     * 判断参数 HTTPSQps 是否已赋值
                     * @return HTTPSQps 是否已赋值
                     * 
                     */
                    bool HTTPSQpsHasBeenSet() const;

                    /**
                     * 获取集群内资源总数目
                     * @return ResourceCount 集群内资源总数目
                     * 
                     */
                    int64_t GetResourceCount() const;

                    /**
                     * 设置集群内资源总数目
                     * @param _resourceCount 集群内资源总数目
                     * 
                     */
                    void SetResourceCount(const int64_t& _resourceCount);

                    /**
                     * 判断参数 ResourceCount 是否已赋值
                     * @return ResourceCount 是否已赋值
                     * 
                     */
                    bool ResourceCountHasBeenSet() const;

                    /**
                     * 获取集群内空闲资源数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdleResourceCount 集群内空闲资源数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIdleResourceCount() const;

                    /**
                     * 设置集群内空闲资源数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idleResourceCount 集群内空闲资源数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdleResourceCount(const int64_t& _idleResourceCount);

                    /**
                     * 判断参数 IdleResourceCount 是否已赋值
                     * @return IdleResourceCount 是否已赋值
                     * 
                     */
                    bool IdleResourceCountHasBeenSet() const;

                    /**
                     * 获取集群内转发机的数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalanceDirectorCount 集群内转发机的数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLoadBalanceDirectorCount() const;

                    /**
                     * 设置集群内转发机的数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadBalanceDirectorCount 集群内转发机的数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadBalanceDirectorCount(const int64_t& _loadBalanceDirectorCount);

                    /**
                     * 判断参数 LoadBalanceDirectorCount 是否已赋值
                     * @return LoadBalanceDirectorCount 是否已赋值
                     * 
                     */
                    bool LoadBalanceDirectorCountHasBeenSet() const;

                    /**
                     * 获取集群的Isp属性，如："BGP","CMCC","CUCC","CTCC","INTERNAL"。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Isp 集群的Isp属性，如："BGP","CMCC","CUCC","CTCC","INTERNAL"。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置集群的Isp属性，如："BGP","CMCC","CUCC","CTCC","INTERNAL"。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isp 集群的Isp属性，如："BGP","CMCC","CUCC","CTCC","INTERNAL"。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取集群所在的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClustersZone 集群所在的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClustersZone GetClustersZone() const;

                    /**
                     * 设置集群所在的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clustersZone 集群所在的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClustersZone(const ClustersZone& _clustersZone);

                    /**
                     * 判断参数 ClustersZone 是否已赋值
                     * @return ClustersZone 是否已赋值
                     * 
                     */
                    bool ClustersZoneHasBeenSet() const;

                    /**
                     * 获取集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClustersVersion 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClustersVersion() const;

                    /**
                     * 设置集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clustersVersion 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClustersVersion(const std::string& _clustersVersion);

                    /**
                     * 判断参数 ClustersVersion 是否已赋值
                     * @return ClustersVersion 是否已赋值
                     * 
                     */
                    bool ClustersVersionHasBeenSet() const;

                    /**
                     * 获取集群容灾类型，如SINGLE-ZONE，DISASTER-RECOVERY，MUTUAL-DISASTER-RECOVERY
                     * @return DisasterRecoveryType 集群容灾类型，如SINGLE-ZONE，DISASTER-RECOVERY，MUTUAL-DISASTER-RECOVERY
                     * 
                     */
                    std::string GetDisasterRecoveryType() const;

                    /**
                     * 设置集群容灾类型，如SINGLE-ZONE，DISASTER-RECOVERY，MUTUAL-DISASTER-RECOVERY
                     * @param _disasterRecoveryType 集群容灾类型，如SINGLE-ZONE，DISASTER-RECOVERY，MUTUAL-DISASTER-RECOVERY
                     * 
                     */
                    void SetDisasterRecoveryType(const std::string& _disasterRecoveryType);

                    /**
                     * 判断参数 DisasterRecoveryType 是否已赋值
                     * @return DisasterRecoveryType 是否已赋值
                     * 
                     */
                    bool DisasterRecoveryTypeHasBeenSet() const;

                    /**
                     * 获取网络出口
                     * @return Egress 网络出口
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置网络出口
                     * @param _egress 网络出口
                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                    /**
                     * 获取IP版本
                     * @return IPVersion IP版本
                     * 
                     */
                    std::string GetIPVersion() const;

                    /**
                     * 设置IP版本
                     * @param _iPVersion IP版本
                     * 
                     */
                    void SetIPVersion(const std::string& _iPVersion);

                    /**
                     * 判断参数 IPVersion 是否已赋值
                     * @return IPVersion 是否已赋值
                     * 
                     */
                    bool IPVersionHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return Tag 标签信息
                     * 
                     */
                    std::vector<TagInfo> GetTag() const;

                    /**
                     * 设置标签信息
                     * @param _tag 标签信息
                     * 
                     */
                    void SetTag(const std::vector<TagInfo>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 集群唯一ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群类型，如TGW，STGW，VPCGW
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群标签，只有TGW/STGW集群有标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterTag;
                    bool m_clusterTagHasBeenSet;

                    /**
                     * 集群所在可用区，如ap-guangzhou-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 集群网络类型，如Public，Private
                     */
                    std::string m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * 最大连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * 最大入带宽Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxInFlow;
                    bool m_maxInFlowHasBeenSet;

                    /**
                     * 最大入包量（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxInPkg;
                    bool m_maxInPkgHasBeenSet;

                    /**
                     * 最大出带宽Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxOutFlow;
                    bool m_maxOutFlowHasBeenSet;

                    /**
                     * 最大出包量（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxOutPkg;
                    bool m_maxOutPkgHasBeenSet;

                    /**
                     * 最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxNewConn;
                    bool m_maxNewConnHasBeenSet;

                    /**
                     * http最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hTTPMaxNewConn;
                    bool m_hTTPMaxNewConnHasBeenSet;

                    /**
                     * https最大新建连接数（个/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hTTPSMaxNewConn;
                    bool m_hTTPSMaxNewConnHasBeenSet;

                    /**
                     * http QPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hTTPQps;
                    bool m_hTTPQpsHasBeenSet;

                    /**
                     * https QPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hTTPSQps;
                    bool m_hTTPSQpsHasBeenSet;

                    /**
                     * 集群内资源总数目
                     */
                    int64_t m_resourceCount;
                    bool m_resourceCountHasBeenSet;

                    /**
                     * 集群内空闲资源数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_idleResourceCount;
                    bool m_idleResourceCountHasBeenSet;

                    /**
                     * 集群内转发机的数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_loadBalanceDirectorCount;
                    bool m_loadBalanceDirectorCountHasBeenSet;

                    /**
                     * 集群的Isp属性，如："BGP","CMCC","CUCC","CTCC","INTERNAL"。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 集群所在的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClustersZone m_clustersZone;
                    bool m_clustersZoneHasBeenSet;

                    /**
                     * 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clustersVersion;
                    bool m_clustersVersionHasBeenSet;

                    /**
                     * 集群容灾类型，如SINGLE-ZONE，DISASTER-RECOVERY，MUTUAL-DISASTER-RECOVERY
                     */
                    std::string m_disasterRecoveryType;
                    bool m_disasterRecoveryTypeHasBeenSet;

                    /**
                     * 网络出口
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * IP版本
                     */
                    std::string m_iPVersion;
                    bool m_iPVersionHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<TagInfo> m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTER_H_
