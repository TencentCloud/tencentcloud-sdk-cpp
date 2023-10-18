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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQSMOOTHMIGRATIONTASKRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQSMOOTHMIGRATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQTopicDistribution.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQMigrationTopicDistribution.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQSmoothMigrationTask返回参数结构体
                */
                class DescribeRocketMQSmoothMigrationTaskResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQSmoothMigrationTaskResponse();
                    ~DescribeRocketMQSmoothMigrationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取目标集群ID
                     * @return ClusterId 目标集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取源集群名称
                     * @return SourceClusterName 源集群名称
                     * 
                     */
                    std::string GetSourceClusterName() const;

                    /**
                     * 判断参数 SourceClusterName 是否已赋值
                     * @return SourceClusterName 是否已赋值
                     * 
                     */
                    bool SourceClusterNameHasBeenSet() const;

                    /**
                     * 获取网络连接类型，
PUBLIC 公网
VPC 私有网络
OTHER 其它
                     * @return ConnectionType 网络连接类型，
PUBLIC 公网
VPC 私有网络
OTHER 其它
                     * 
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取源集群NameServer地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceClusterNameServer 源集群NameServer地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceClusterNameServer() const;

                    /**
                     * 判断参数 SourceClusterNameServer 是否已赋值
                     * @return SourceClusterNameServer 是否已赋值
                     * 
                     */
                    bool SourceClusterNameServerHasBeenSet() const;

                    /**
                     * 获取源集群所在私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 源集群所在私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取源集群所在子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 源集群所在子网ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启ACL
                     * @return EnableACL 是否开启ACL
                     * 
                     */
                    bool GetEnableACL() const;

                    /**
                     * 判断参数 EnableACL 是否已赋值
                     * @return EnableACL 是否已赋值
                     * 
                     */
                    bool EnableACLHasBeenSet() const;

                    /**
                     * 获取源集群AccessKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessKey 源集群AccessKey
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取元集群SecretKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey 元集群SecretKey
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取配置源集群时发生的错误
TIMEOUT 连接超时，
SERVER_ERROR 服务错误，
INTERNAL_ERROR 内部错误，
CONNECT_NAMESERVER_ERROR 连接nameserver错误
CONNECT_BROKER_ERROR 连接broker错误
ACL_WRONG ACL信息不正确

注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskError 配置源集群时发生的错误
TIMEOUT 连接超时，
SERVER_ERROR 服务错误，
INTERNAL_ERROR 内部错误，
CONNECT_NAMESERVER_ERROR 连接nameserver错误
CONNECT_BROKER_ERROR 连接broker错误
ACL_WRONG ACL信息不正确

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskError() const;

                    /**
                     * 判断参数 TaskError 是否已赋值
                     * @return TaskError 是否已赋值
                     * 
                     */
                    bool TaskErrorHasBeenSet() const;

                    /**
                     * 获取任务状态
Configuration 迁移配置
SourceConnecting 连接源集群中
SourceConnectionFailure 连接源集群失败
MetaDataImport 元数据导入
EndpointSetup 切换接入点
ServiceMigration 切流中
Completed 已完成
Cancelled 已取消
                     * @return TaskStatus 任务状态
Configuration 迁移配置
SourceConnecting 连接源集群中
SourceConnectionFailure 连接源集群失败
MetaDataImport 元数据导入
EndpointSetup 切换接入点
ServiceMigration 切流中
Completed 已完成
Cancelled 已取消
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取主题类型分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicTypeDistribution 主题类型分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RocketMQTopicDistribution> GetTopicTypeDistribution() const;

                    /**
                     * 判断参数 TopicTypeDistribution 是否已赋值
                     * @return TopicTypeDistribution 是否已赋值
                     * 
                     */
                    bool TopicTypeDistributionHasBeenSet() const;

                    /**
                     * 获取主题迁移进度分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicStageDistribution 主题迁移进度分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RocketMQMigrationTopicDistribution> GetTopicStageDistribution() const;

                    /**
                     * 判断参数 TopicStageDistribution 是否已赋值
                     * @return TopicStageDistribution 是否已赋值
                     * 
                     */
                    bool TopicStageDistributionHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 目标集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 源集群名称
                     */
                    std::string m_sourceClusterName;
                    bool m_sourceClusterNameHasBeenSet;

                    /**
                     * 网络连接类型，
PUBLIC 公网
VPC 私有网络
OTHER 其它
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * 源集群NameServer地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceClusterNameServer;
                    bool m_sourceClusterNameServerHasBeenSet;

                    /**
                     * 源集群所在私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 源集群所在子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 是否开启ACL
                     */
                    bool m_enableACL;
                    bool m_enableACLHasBeenSet;

                    /**
                     * 源集群AccessKey
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 元集群SecretKey
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 配置源集群时发生的错误
TIMEOUT 连接超时，
SERVER_ERROR 服务错误，
INTERNAL_ERROR 内部错误，
CONNECT_NAMESERVER_ERROR 连接nameserver错误
CONNECT_BROKER_ERROR 连接broker错误
ACL_WRONG ACL信息不正确

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskError;
                    bool m_taskErrorHasBeenSet;

                    /**
                     * 任务状态
Configuration 迁移配置
SourceConnecting 连接源集群中
SourceConnectionFailure 连接源集群失败
MetaDataImport 元数据导入
EndpointSetup 切换接入点
ServiceMigration 切流中
Completed 已完成
Cancelled 已取消
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 主题类型分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RocketMQTopicDistribution> m_topicTypeDistribution;
                    bool m_topicTypeDistributionHasBeenSet;

                    /**
                     * 主题迁移进度分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RocketMQMigrationTopicDistribution> m_topicStageDistribution;
                    bool m_topicStageDistributionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQSMOOTHMIGRATIONTASKRESPONSE_H_
