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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQSMOOTHMIGRATIONTASKITEM_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQSMOOTHMIGRATIONTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ平滑迁移任务
                */
                class RocketMQSmoothMigrationTaskItem : public AbstractModel
                {
                public:
                    RocketMQSmoothMigrationTaskItem();
                    ~RocketMQSmoothMigrationTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取源集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceClusterName 源集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceClusterName() const;

                    /**
                     * 设置源集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceClusterName 源集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceClusterName(const std::string& _sourceClusterName);

                    /**
                     * 判断参数 SourceClusterName 是否已赋值
                     * @return SourceClusterName 是否已赋值
                     * 
                     */
                    bool SourceClusterNameHasBeenSet() const;

                    /**
                     * 获取目标集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 目标集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置目标集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 目标集群ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取网络连接类型，
PUBLIC 公网
VPC 私有网络
OTHER 其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionType 网络连接类型，
PUBLIC 公网
VPC 私有网络
OTHER 其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置网络连接类型，
PUBLIC 公网
VPC 私有网络
OTHER 其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectionType 网络连接类型，
PUBLIC 公网
VPC 私有网络
OTHER 其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取源集群NameServer地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceNameServer 源集群NameServer地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceNameServer() const;

                    /**
                     * 设置源集群NameServer地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceNameServer 源集群NameServer地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceNameServer(const std::string& _sourceNameServer);

                    /**
                     * 判断参数 SourceNameServer 是否已赋值
                     * @return SourceNameServer 是否已赋值
                     * 
                     */
                    bool SourceNameServerHasBeenSet() const;

                    /**
                     * 获取任务状态
Configuration 迁移配置
SourceConnecting 连接源集群中
MetaDataImport 元数据导入
EndpointSetup 切换接入点
ServiceMigration 切流中
Completed 已完成
Cancelled 已取消
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus 任务状态
Configuration 迁移配置
SourceConnecting 连接源集群中
MetaDataImport 元数据导入
EndpointSetup 切换接入点
ServiceMigration 切流中
Completed 已完成
Cancelled 已取消
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务状态
Configuration 迁移配置
SourceConnecting 连接源集群中
MetaDataImport 元数据导入
EndpointSetup 切换接入点
ServiceMigration 切流中
Completed 已完成
Cancelled 已取消
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskStatus 任务状态
Configuration 迁移配置
SourceConnecting 连接源集群中
MetaDataImport 元数据导入
EndpointSetup 切换接入点
ServiceMigration 切流中
Completed 已完成
Cancelled 已取消
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 源集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceClusterName;
                    bool m_sourceClusterNameHasBeenSet;

                    /**
                     * 目标集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 网络连接类型，
PUBLIC 公网
VPC 私有网络
OTHER 其他
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * 源集群NameServer地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceNameServer;
                    bool m_sourceNameServerHasBeenSet;

                    /**
                     * 任务状态
Configuration 迁移配置
SourceConnecting 连接源集群中
MetaDataImport 元数据导入
EndpointSetup 切换接入点
ServiceMigration 切流中
Completed 已完成
Cancelled 已取消
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQSMOOTHMIGRATIONTASKITEM_H_
