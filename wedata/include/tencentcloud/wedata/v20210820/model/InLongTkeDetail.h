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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INLONGTKEDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INLONGTKEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * TKE集群信息详情
                */
                class InLongTkeDetail : public AbstractModel
                {
                public:
                    InLongTkeDetail();
                    ~InLongTkeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param ClusterId 集群Id
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param ClusterName 集群名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取TKE集群状态 (Running 运行中 Creating 创建中 Idling 闲置中 Abnormal 异常)
                     * @return Status TKE集群状态 (Running 运行中 Creating 创建中 Idling 闲置中 Abnormal 异常)
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置TKE集群状态 (Running 运行中 Creating 创建中 Idling 闲置中 Abnormal 异常)
                     * @param Status TKE集群状态 (Running 运行中 Creating 创建中 Idling 闲置中 Abnormal 异常)
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否安装Agent，true: 是，false: 否
                     * @return HasAgent 是否安装Agent，true: 是，false: 否
                     */
                    bool GetHasAgent() const;

                    /**
                     * 设置是否安装Agent，true: 是，false: 否
                     * @param HasAgent 是否安装Agent，true: 是，false: 否
                     */
                    void SetHasAgent(const bool& _hasAgent);

                    /**
                     * 判断参数 HasAgent 是否已赋值
                     * @return HasAgent 是否已赋值
                     */
                    bool HasAgentHasBeenSet() const;

                    /**
                     * 获取采集器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentId 采集器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置采集器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AgentId 采集器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取TKE集群区域ID
                     * @return TkeRegion TKE集群区域ID
                     */
                    std::string GetTkeRegion() const;

                    /**
                     * 设置TKE集群区域ID
                     * @param TkeRegion TKE集群区域ID
                     */
                    void SetTkeRegion(const std::string& _tkeRegion);

                    /**
                     * 判断参数 TkeRegion 是否已赋值
                     * @return TkeRegion 是否已赋值
                     */
                    bool TkeRegionHasBeenSet() const;

                    /**
                     * 获取集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER
                     * @return ClusterType 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER
                     * @param ClusterType 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

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
                     * TKE集群状态 (Running 运行中 Creating 创建中 Idling 闲置中 Abnormal 异常)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否安装Agent，true: 是，false: 否
                     */
                    bool m_hasAgent;
                    bool m_hasAgentHasBeenSet;

                    /**
                     * 采集器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * TKE集群区域ID
                     */
                    std::string m_tkeRegion;
                    bool m_tkeRegionHasBeenSet;

                    /**
                     * 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INLONGTKEDETAIL_H_
