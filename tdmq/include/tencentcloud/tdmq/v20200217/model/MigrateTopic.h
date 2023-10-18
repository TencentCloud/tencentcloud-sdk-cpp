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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MIGRATETOPIC_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MIGRATETOPIC_H_

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
                * 迁移topic列表数据
                */
                class MigrateTopic : public AbstractModel
                {
                public:
                    MigrateTopic();
                    ~MigrateTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicName topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取迁移状态
S_RW_D_NA 源集群读写
S_RW_D_R 源集群读写目标集群读
S_RW_D_RW 源集群读写目标集群读写
S_R_D_RW 源集群读目标集群读写
S_NA_D_RW 目标集群读写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MigrationStatus 迁移状态
S_RW_D_NA 源集群读写
S_RW_D_R 源集群读写目标集群读
S_RW_D_RW 源集群读写目标集群读写
S_R_D_RW 源集群读目标集群读写
S_NA_D_RW 目标集群读写
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMigrationStatus() const;

                    /**
                     * 设置迁移状态
S_RW_D_NA 源集群读写
S_RW_D_R 源集群读写目标集群读
S_RW_D_RW 源集群读写目标集群读写
S_R_D_RW 源集群读目标集群读写
S_NA_D_RW 目标集群读写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _migrationStatus 迁移状态
S_RW_D_NA 源集群读写
S_RW_D_R 源集群读写目标集群读
S_RW_D_RW 源集群读写目标集群读写
S_R_D_RW 源集群读目标集群读写
S_NA_D_RW 目标集群读写
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMigrationStatus(const std::string& _migrationStatus);

                    /**
                     * 判断参数 MigrationStatus 是否已赋值
                     * @return MigrationStatus 是否已赋值
                     * 
                     */
                    bool MigrationStatusHasBeenSet() const;

                    /**
                     * 获取是否完成健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckPassed 是否完成健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHealthCheckPassed() const;

                    /**
                     * 设置是否完成健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckPassed 是否完成健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheckPassed(const bool& _healthCheckPassed);

                    /**
                     * 判断参数 HealthCheckPassed 是否已赋值
                     * @return HealthCheckPassed 是否已赋值
                     * 
                     */
                    bool HealthCheckPassedHasBeenSet() const;

                    /**
                     * 获取上次健康检查返回的错误信息，仅在HealthCheckPassed为false时有效。
NotChecked 未执行检查，
Unknown 未知错误,
TopicNotImported 主题未导入,
 TopicNotExistsInSourceCluster  主题在源集群中不存在,
    TopicNotExistsInTargetCluster 主题在目标集群中不存在,
    ConsumerConnectedOnTarget 目标集群上存在消费者连接,
    SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入,
TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入,
    SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入,
TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入,
    ConsumerGroupCountNotMatch 订阅组数量不一致,
    SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息,
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckError 上次健康检查返回的错误信息，仅在HealthCheckPassed为false时有效。
NotChecked 未执行检查，
Unknown 未知错误,
TopicNotImported 主题未导入,
 TopicNotExistsInSourceCluster  主题在源集群中不存在,
    TopicNotExistsInTargetCluster 主题在目标集群中不存在,
    ConsumerConnectedOnTarget 目标集群上存在消费者连接,
    SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入,
TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入,
    SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入,
TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入,
    ConsumerGroupCountNotMatch 订阅组数量不一致,
    SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息,
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHealthCheckError() const;

                    /**
                     * 设置上次健康检查返回的错误信息，仅在HealthCheckPassed为false时有效。
NotChecked 未执行检查，
Unknown 未知错误,
TopicNotImported 主题未导入,
 TopicNotExistsInSourceCluster  主题在源集群中不存在,
    TopicNotExistsInTargetCluster 主题在目标集群中不存在,
    ConsumerConnectedOnTarget 目标集群上存在消费者连接,
    SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入,
TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入,
    SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入,
TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入,
    ConsumerGroupCountNotMatch 订阅组数量不一致,
    SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息,
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckError 上次健康检查返回的错误信息，仅在HealthCheckPassed为false时有效。
NotChecked 未执行检查，
Unknown 未知错误,
TopicNotImported 主题未导入,
 TopicNotExistsInSourceCluster  主题在源集群中不存在,
    TopicNotExistsInTargetCluster 主题在目标集群中不存在,
    ConsumerConnectedOnTarget 目标集群上存在消费者连接,
    SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入,
TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入,
    SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入,
TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入,
    ConsumerGroupCountNotMatch 订阅组数量不一致,
    SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息,
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheckError(const std::string& _healthCheckError);

                    /**
                     * 判断参数 HealthCheckError 是否已赋值
                     * @return HealthCheckError 是否已赋值
                     * 
                     */
                    bool HealthCheckErrorHasBeenSet() const;

                private:

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 迁移状态
S_RW_D_NA 源集群读写
S_RW_D_R 源集群读写目标集群读
S_RW_D_RW 源集群读写目标集群读写
S_R_D_RW 源集群读目标集群读写
S_NA_D_RW 目标集群读写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_migrationStatus;
                    bool m_migrationStatusHasBeenSet;

                    /**
                     * 是否完成健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_healthCheckPassed;
                    bool m_healthCheckPassedHasBeenSet;

                    /**
                     * 上次健康检查返回的错误信息，仅在HealthCheckPassed为false时有效。
NotChecked 未执行检查，
Unknown 未知错误,
TopicNotImported 主题未导入,
 TopicNotExistsInSourceCluster  主题在源集群中不存在,
    TopicNotExistsInTargetCluster 主题在目标集群中不存在,
    ConsumerConnectedOnTarget 目标集群上存在消费者连接,
    SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入,
TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入,
    SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入,
TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入,
    ConsumerGroupCountNotMatch 订阅组数量不一致,
    SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息,
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_healthCheckError;
                    bool m_healthCheckErrorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MIGRATETOPIC_H_
