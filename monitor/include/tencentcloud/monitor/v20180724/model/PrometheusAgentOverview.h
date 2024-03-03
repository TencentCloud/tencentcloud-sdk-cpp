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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSAGENTOVERVIEW_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSAGENTOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Label.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 托管prometheus agent概览
                */
                class PrometheusAgentOverview : public AbstractModel
                {
                public:
                    PrometheusAgentOverview();
                    ~PrometheusAgentOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群类型
                     * @return ClusterType 集群类型
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
                     * @param _clusterType 集群类型
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
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取agent状态
normal = 正常
abnormal = 异常
                     * @return Status agent状态
normal = 正常
abnormal = 异常
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置agent状态
normal = 正常
abnormal = 异常
                     * @param _status agent状态
normal = 正常
abnormal = 异常
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
                     * 获取额外labels
本集群的所有指标都会带上这几个label
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalLabels 额外labels
本集群的所有指标都会带上这几个label
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Label> GetExternalLabels() const;

                    /**
                     * 设置额外labels
本集群的所有指标都会带上这几个label
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalLabels 额外labels
本集群的所有指标都会带上这几个label
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalLabels(const std::vector<Label>& _externalLabels);

                    /**
                     * 判断参数 ExternalLabels 是否已赋值
                     * @return ExternalLabels 是否已赋值
                     * 
                     */
                    bool ExternalLabelsHasBeenSet() const;

                    /**
                     * 获取集群所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 集群所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置集群所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 集群所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取集群所在VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 集群所在VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置集群所在VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 集群所在VPC ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取记录关联等操作的失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedReason 记录关联等操作的失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置记录关联等操作的失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedReason 记录关联等操作的失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取agent名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name agent名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置agent名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name agent名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否已开启公网访问，true 开启，false 未开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableExternal 是否已开启公网访问，true 开启，false 未开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableExternal() const;

                    /**
                     * 设置是否已开启公网访问，true 开启，false 未开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableExternal 是否已开启公网访问，true 开启，false 未开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableExternal(const bool& _enableExternal);

                    /**
                     * 判断参数 EnableExternal 是否已赋值
                     * @return EnableExternal 是否已赋值
                     * 
                     */
                    bool EnableExternalHasBeenSet() const;

                    /**
                     * 获取采集agent期望pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DesiredAgentNum 采集agent期望pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDesiredAgentNum() const;

                    /**
                     * 设置采集agent期望pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desiredAgentNum 采集agent期望pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesiredAgentNum(const int64_t& _desiredAgentNum);

                    /**
                     * 判断参数 DesiredAgentNum 是否已赋值
                     * @return DesiredAgentNum 是否已赋值
                     * 
                     */
                    bool DesiredAgentNumHasBeenSet() const;

                    /**
                     * 获取采集agent已正常启动pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadyAgentNum 采集agent已正常启动pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReadyAgentNum() const;

                    /**
                     * 设置采集agent已正常启动pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readyAgentNum 采集agent已正常启动pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadyAgentNum(const int64_t& _readyAgentNum);

                    /**
                     * 判断参数 ReadyAgentNum 是否已赋值
                     * @return ReadyAgentNum 是否已赋值
                     * 
                     */
                    bool ReadyAgentNumHasBeenSet() const;

                private:

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * agent状态
normal = 正常
abnormal = 异常
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 额外labels
本集群的所有指标都会带上这几个label
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Label> m_externalLabels;
                    bool m_externalLabelsHasBeenSet;

                    /**
                     * 集群所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 集群所在VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 记录关联等操作的失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * agent名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否已开启公网访问，true 开启，false 未开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableExternal;
                    bool m_enableExternalHasBeenSet;

                    /**
                     * 采集agent期望pod数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_desiredAgentNum;
                    bool m_desiredAgentNumHasBeenSet;

                    /**
                     * 采集agent已正常启动pod数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_readyAgentNum;
                    bool m_readyAgentNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSAGENTOVERVIEW_H_
