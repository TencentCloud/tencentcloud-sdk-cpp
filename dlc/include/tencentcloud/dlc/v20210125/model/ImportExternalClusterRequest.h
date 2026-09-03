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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_IMPORTEXTERNALCLUSTERREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_IMPORTEXTERNALCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ImportExternalCluster请求参数结构体
                */
                class ImportExternalClusterRequest : public AbstractModel
                {
                public:
                    ImportExternalClusterRequest();
                    ~ImportExternalClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源池对应的分区名称。</p>
                     * @return PartitionName <p>资源池对应的分区名称。</p>
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置<p>资源池对应的分区名称。</p>
                     * @param _partitionName <p>资源池对应的分区名称。</p>
                     * 
                     */
                    void SetPartitionName(const std::string& _partitionName);

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                    /**
                     * 获取<p>集群类型。TKE：直接导入裸 TKE 集群，ClusterId 填 TKE 集群 ID（如 cls-xxxxxxxx）；EMR：通过 EMR 集群导入，ClusterId 填 EMR 集群 ID（如 emr-xxxxxxxx）。</p>
                     * @return ClusterType <p>集群类型。TKE：直接导入裸 TKE 集群，ClusterId 填 TKE 集群 ID（如 cls-xxxxxxxx）；EMR：通过 EMR 集群导入，ClusterId 填 EMR 集群 ID（如 emr-xxxxxxxx）。</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型。TKE：直接导入裸 TKE 集群，ClusterId 填 TKE 集群 ID（如 cls-xxxxxxxx）；EMR：通过 EMR 集群导入，ClusterId 填 EMR 集群 ID（如 emr-xxxxxxxx）。</p>
                     * @param _clusterType <p>集群类型。TKE：直接导入裸 TKE 集群，ClusterId 填 TKE 集群 ID（如 cls-xxxxxxxx）；EMR：通过 EMR 集群导入，ClusterId 填 EMR 集群 ID（如 emr-xxxxxxxx）。</p>
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
                     * 获取<p>集群 ID。ClusterType=TKE 时填 TKE 集群 ID（如 cls-xxxxxxxx）；ClusterType=EMR 时填 EMR 集群 ID（如 emr-xxxxxxxx）。</p>
                     * @return ClusterId <p>集群 ID。ClusterType=TKE 时填 TKE 集群 ID（如 cls-xxxxxxxx）；ClusterType=EMR 时填 EMR 集群 ID（如 emr-xxxxxxxx）。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID。ClusterType=TKE 时填 TKE 集群 ID（如 cls-xxxxxxxx）；ClusterType=EMR 时填 EMR 集群 ID（如 emr-xxxxxxxx）。</p>
                     * @param _clusterId <p>集群 ID。ClusterType=TKE 时填 TKE 集群 ID（如 cls-xxxxxxxx）；ClusterType=EMR 时填 EMR 集群 ID（如 emr-xxxxxxxx）。</p>
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
                     * 获取<p>COS Bucket 名称（含 AppId 后缀），例如 my-bucket-1250000000。</p>
                     * @return CosBucketId <p>COS Bucket 名称（含 AppId 后缀），例如 my-bucket-1250000000。</p>
                     * 
                     */
                    std::string GetCosBucketId() const;

                    /**
                     * 设置<p>COS Bucket 名称（含 AppId 后缀），例如 my-bucket-1250000000。</p>
                     * @param _cosBucketId <p>COS Bucket 名称（含 AppId 后缀），例如 my-bucket-1250000000。</p>
                     * 
                     */
                    void SetCosBucketId(const std::string& _cosBucketId);

                    /**
                     * 判断参数 CosBucketId 是否已赋值
                     * @return CosBucketId 是否已赋值
                     * 
                     */
                    bool CosBucketIdHasBeenSet() const;

                    /**
                     * 获取<p>Prometheus 托管实例 ID，例如 prom-xxxxxxxx。</p>
                     * @return PrometheusInstanceId <p>Prometheus 托管实例 ID，例如 prom-xxxxxxxx。</p>
                     * 
                     */
                    std::string GetPrometheusInstanceId() const;

                    /**
                     * 设置<p>Prometheus 托管实例 ID，例如 prom-xxxxxxxx。</p>
                     * @param _prometheusInstanceId <p>Prometheus 托管实例 ID，例如 prom-xxxxxxxx。</p>
                     * 
                     */
                    void SetPrometheusInstanceId(const std::string& _prometheusInstanceId);

                    /**
                     * 判断参数 PrometheusInstanceId 是否已赋值
                     * @return PrometheusInstanceId 是否已赋值
                     * 
                     */
                    bool PrometheusInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例 ID，例如 lb-xxxxxxxx。</p>
                     * @return LoadBalancerId <p>负载均衡实例 ID，例如 lb-xxxxxxxx。</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>负载均衡实例 ID，例如 lb-xxxxxxxx。</p>
                     * @param _loadBalancerId <p>负载均衡实例 ID，例如 lb-xxxxxxxx。</p>
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>节点标签键值对（Key-Value 列表），用于将资源池调度限定到具备对应标签的节点。</p>
                     * @return NodeLabels <p>节点标签键值对（Key-Value 列表），用于将资源池调度限定到具备对应标签的节点。</p>
                     * 
                     */
                    std::vector<KVPair> GetNodeLabels() const;

                    /**
                     * 设置<p>节点标签键值对（Key-Value 列表），用于将资源池调度限定到具备对应标签的节点。</p>
                     * @param _nodeLabels <p>节点标签键值对（Key-Value 列表），用于将资源池调度限定到具备对应标签的节点。</p>
                     * 
                     */
                    void SetNodeLabels(const std::vector<KVPair>& _nodeLabels);

                    /**
                     * 判断参数 NodeLabels 是否已赋值
                     * @return NodeLabels 是否已赋值
                     * 
                     */
                    bool NodeLabelsHasBeenSet() const;

                    /**
                     * 获取<p>资源池对应的默认分区描述，透传给下游 ResourceManager 用于分区创建。</p>
                     * @return PartitionDescription <p>资源池对应的默认分区描述，透传给下游 ResourceManager 用于分区创建。</p>
                     * 
                     */
                    std::string GetPartitionDescription() const;

                    /**
                     * 设置<p>资源池对应的默认分区描述，透传给下游 ResourceManager 用于分区创建。</p>
                     * @param _partitionDescription <p>资源池对应的默认分区描述，透传给下游 ResourceManager 用于分区创建。</p>
                     * 
                     */
                    void SetPartitionDescription(const std::string& _partitionDescription);

                    /**
                     * 判断参数 PartitionDescription 是否已赋值
                     * @return PartitionDescription 是否已赋值
                     * 
                     */
                    bool PartitionDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>目标账号 AppId（跨账号导入时填写，不填则使用当前账号）。TargetAppId 和 TargetUin 必须同时填写或同时不填。</p>
                     * @return TargetAppId <p>目标账号 AppId（跨账号导入时填写，不填则使用当前账号）。TargetAppId 和 TargetUin 必须同时填写或同时不填。</p>
                     * 
                     */
                    int64_t GetTargetAppId() const;

                    /**
                     * 设置<p>目标账号 AppId（跨账号导入时填写，不填则使用当前账号）。TargetAppId 和 TargetUin 必须同时填写或同时不填。</p>
                     * @param _targetAppId <p>目标账号 AppId（跨账号导入时填写，不填则使用当前账号）。TargetAppId 和 TargetUin 必须同时填写或同时不填。</p>
                     * 
                     */
                    void SetTargetAppId(const int64_t& _targetAppId);

                    /**
                     * 判断参数 TargetAppId 是否已赋值
                     * @return TargetAppId 是否已赋值
                     * 
                     */
                    bool TargetAppIdHasBeenSet() const;

                    /**
                     * 获取<p>目标账号 UIN（跨账号导入时填写，不填则使用当前账号）。TargetAppId 和 TargetUin 必须同时填写或同时不填。</p>
                     * @return TargetUin <p>目标账号 UIN（跨账号导入时填写，不填则使用当前账号）。TargetAppId 和 TargetUin 必须同时填写或同时不填。</p>
                     * 
                     */
                    std::string GetTargetUin() const;

                    /**
                     * 设置<p>目标账号 UIN（跨账号导入时填写，不填则使用当前账号）。TargetAppId 和 TargetUin 必须同时填写或同时不填。</p>
                     * @param _targetUin <p>目标账号 UIN（跨账号导入时填写，不填则使用当前账号）。TargetAppId 和 TargetUin 必须同时填写或同时不填。</p>
                     * 
                     */
                    void SetTargetUin(const std::string& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                private:

                    /**
                     * <p>资源池对应的分区名称。</p>
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * <p>集群类型。TKE：直接导入裸 TKE 集群，ClusterId 填 TKE 集群 ID（如 cls-xxxxxxxx）；EMR：通过 EMR 集群导入，ClusterId 填 EMR 集群 ID（如 emr-xxxxxxxx）。</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>集群 ID。ClusterType=TKE 时填 TKE 集群 ID（如 cls-xxxxxxxx）；ClusterType=EMR 时填 EMR 集群 ID（如 emr-xxxxxxxx）。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>COS Bucket 名称（含 AppId 后缀），例如 my-bucket-1250000000。</p>
                     */
                    std::string m_cosBucketId;
                    bool m_cosBucketIdHasBeenSet;

                    /**
                     * <p>Prometheus 托管实例 ID，例如 prom-xxxxxxxx。</p>
                     */
                    std::string m_prometheusInstanceId;
                    bool m_prometheusInstanceIdHasBeenSet;

                    /**
                     * <p>负载均衡实例 ID，例如 lb-xxxxxxxx。</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>节点标签键值对（Key-Value 列表），用于将资源池调度限定到具备对应标签的节点。</p>
                     */
                    std::vector<KVPair> m_nodeLabels;
                    bool m_nodeLabelsHasBeenSet;

                    /**
                     * <p>资源池对应的默认分区描述，透传给下游 ResourceManager 用于分区创建。</p>
                     */
                    std::string m_partitionDescription;
                    bool m_partitionDescriptionHasBeenSet;

                    /**
                     * <p>目标账号 AppId（跨账号导入时填写，不填则使用当前账号）。TargetAppId 和 TargetUin 必须同时填写或同时不填。</p>
                     */
                    int64_t m_targetAppId;
                    bool m_targetAppIdHasBeenSet;

                    /**
                     * <p>目标账号 UIN（跨账号导入时填写，不填则使用当前账号）。TargetAppId 和 TargetUin 必须同时填写或同时不填。</p>
                     */
                    std::string m_targetUin;
                    bool m_targetUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_IMPORTEXTERNALCLUSTERREQUEST_H_
