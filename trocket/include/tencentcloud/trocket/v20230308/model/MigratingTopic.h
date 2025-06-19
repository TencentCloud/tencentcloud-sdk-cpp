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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATINGTOPIC_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATINGTOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 迁移中的主题
                */
                class MigratingTopic : public AbstractModel
                {
                public:
                    MigratingTopic();
                    ~MigratingTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名称
                     * @return TopicName 主题名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称
                     * @param _topicName 主题名称
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
S_RW_D_NA 源集群读写，
S_RW_D_R 源集群读写目标集群读，
S_RW_D_RW 源集群读写目标集群读写，
S_R_D_RW 源集群读目标集群读写，
S_NA_D_RW 目标集群读写
                     * @return MigrationStatus 迁移状态 
S_RW_D_NA 源集群读写，
S_RW_D_R 源集群读写目标集群读，
S_RW_D_RW 源集群读写目标集群读写，
S_R_D_RW 源集群读目标集群读写，
S_NA_D_RW 目标集群读写
                     * 
                     */
                    std::string GetMigrationStatus() const;

                    /**
                     * 设置迁移状态 
S_RW_D_NA 源集群读写，
S_RW_D_R 源集群读写目标集群读，
S_RW_D_RW 源集群读写目标集群读写，
S_R_D_RW 源集群读目标集群读写，
S_NA_D_RW 目标集群读写
                     * @param _migrationStatus 迁移状态 
S_RW_D_NA 源集群读写，
S_RW_D_R 源集群读写目标集群读，
S_RW_D_RW 源集群读写目标集群读写，
S_R_D_RW 源集群读目标集群读写，
S_NA_D_RW 目标集群读写
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
                     * @return HealthCheckPassed 是否完成健康检查	
                     * 
                     */
                    bool GetHealthCheckPassed() const;

                    /**
                     * 设置是否完成健康检查	
                     * @param _healthCheckPassed 是否完成健康检查	
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
                     * 获取上次健康检查返回的错误信息，仅在HealthCheckPassed为false时有效。 NotChecked 未执行检查， Unknown 未知错误, TopicNotImported 主题未导入, TopicNotExistsInSourceCluster 主题在源集群中不存在, TopicNotExistsInTargetCluster 主题在目标集群中不存在, ConsumerConnectedOnTarget 目标集群上存在消费者连接, SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入, TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入, SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, ConsumerGroupCountNotMatch 订阅组数量不一致, SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息,
                     * @return HealthCheckError 上次健康检查返回的错误信息，仅在HealthCheckPassed为false时有效。 NotChecked 未执行检查， Unknown 未知错误, TopicNotImported 主题未导入, TopicNotExistsInSourceCluster 主题在源集群中不存在, TopicNotExistsInTargetCluster 主题在目标集群中不存在, ConsumerConnectedOnTarget 目标集群上存在消费者连接, SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入, TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入, SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, ConsumerGroupCountNotMatch 订阅组数量不一致, SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息,
                     * 
                     */
                    std::string GetHealthCheckError() const;

                    /**
                     * 设置上次健康检查返回的错误信息，仅在HealthCheckPassed为false时有效。 NotChecked 未执行检查， Unknown 未知错误, TopicNotImported 主题未导入, TopicNotExistsInSourceCluster 主题在源集群中不存在, TopicNotExistsInTargetCluster 主题在目标集群中不存在, ConsumerConnectedOnTarget 目标集群上存在消费者连接, SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入, TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入, SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, ConsumerGroupCountNotMatch 订阅组数量不一致, SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息,
                     * @param _healthCheckError 上次健康检查返回的错误信息，仅在HealthCheckPassed为false时有效。 NotChecked 未执行检查， Unknown 未知错误, TopicNotImported 主题未导入, TopicNotExistsInSourceCluster 主题在源集群中不存在, TopicNotExistsInTargetCluster 主题在目标集群中不存在, ConsumerConnectedOnTarget 目标集群上存在消费者连接, SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入, TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入, SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, ConsumerGroupCountNotMatch 订阅组数量不一致, SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息,
                     * 
                     */
                    void SetHealthCheckError(const std::string& _healthCheckError);

                    /**
                     * 判断参数 HealthCheckError 是否已赋值
                     * @return HealthCheckError 是否已赋值
                     * 
                     */
                    bool HealthCheckErrorHasBeenSet() const;

                    /**
                     * 获取命名空间，仅4.x集群有效
                     * @return Namespace 命名空间，仅4.x集群有效
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，仅4.x集群有效
                     * @param _namespace 命名空间，仅4.x集群有效
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
                     * 获取4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceV4 4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceV4() const;

                    /**
                     * 设置4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceV4 4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceV4(const std::string& _namespaceV4);

                    /**
                     * 判断参数 NamespaceV4 是否已赋值
                     * @return NamespaceV4 是否已赋值
                     * 
                     */
                    bool NamespaceV4HasBeenSet() const;

                    /**
                     * 获取4.x的主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicNameV4 4.x的主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicNameV4() const;

                    /**
                     * 设置4.x的主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicNameV4 4.x的主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicNameV4(const std::string& _topicNameV4);

                    /**
                     * 判断参数 TopicNameV4 是否已赋值
                     * @return TopicNameV4 是否已赋值
                     * 
                     */
                    bool TopicNameV4HasBeenSet() const;

                    /**
                     * 获取4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullNamespaceV4 4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullNamespaceV4() const;

                    /**
                     * 设置4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullNamespaceV4 4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullNamespaceV4(const std::string& _fullNamespaceV4);

                    /**
                     * 判断参数 FullNamespaceV4 是否已赋值
                     * @return FullNamespaceV4 是否已赋值
                     * 
                     */
                    bool FullNamespaceV4HasBeenSet() const;

                    /**
                     * 获取上次健康检查返回的错误列表
                     * @return HealthCheckErrorList 上次健康检查返回的错误列表
                     * 
                     */
                    std::vector<std::string> GetHealthCheckErrorList() const;

                    /**
                     * 设置上次健康检查返回的错误列表
                     * @param _healthCheckErrorList 上次健康检查返回的错误列表
                     * 
                     */
                    void SetHealthCheckErrorList(const std::vector<std::string>& _healthCheckErrorList);

                    /**
                     * 判断参数 HealthCheckErrorList 是否已赋值
                     * @return HealthCheckErrorList 是否已赋值
                     * 
                     */
                    bool HealthCheckErrorListHasBeenSet() const;

                private:

                    /**
                     * 主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 迁移状态 
S_RW_D_NA 源集群读写，
S_RW_D_R 源集群读写目标集群读，
S_RW_D_RW 源集群读写目标集群读写，
S_R_D_RW 源集群读目标集群读写，
S_NA_D_RW 目标集群读写
                     */
                    std::string m_migrationStatus;
                    bool m_migrationStatusHasBeenSet;

                    /**
                     * 是否完成健康检查	
                     */
                    bool m_healthCheckPassed;
                    bool m_healthCheckPassedHasBeenSet;

                    /**
                     * 上次健康检查返回的错误信息，仅在HealthCheckPassed为false时有效。 NotChecked 未执行检查， Unknown 未知错误, TopicNotImported 主题未导入, TopicNotExistsInSourceCluster 主题在源集群中不存在, TopicNotExistsInTargetCluster 主题在目标集群中不存在, ConsumerConnectedOnTarget 目标集群上存在消费者连接, SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入, TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入, SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, ConsumerGroupCountNotMatch 订阅组数量不一致, SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息,
                     */
                    std::string m_healthCheckError;
                    bool m_healthCheckErrorHasBeenSet;

                    /**
                     * 命名空间，仅4.x集群有效
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceV4;
                    bool m_namespaceV4HasBeenSet;

                    /**
                     * 4.x的主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicNameV4;
                    bool m_topicNameV4HasBeenSet;

                    /**
                     * 4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullNamespaceV4;
                    bool m_fullNamespaceV4HasBeenSet;

                    /**
                     * 上次健康检查返回的错误列表
                     */
                    std::vector<std::string> m_healthCheckErrorList;
                    bool m_healthCheckErrorListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATINGTOPIC_H_
