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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DOHEALTHCHECKONMIGRATINGTOPICRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DOHEALTHCHECKONMIGRATINGTOPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DoHealthCheckOnMigratingTopic返回参数结构体
                */
                class DoHealthCheckOnMigratingTopicResponse : public AbstractModel
                {
                public:
                    DoHealthCheckOnMigratingTopicResponse();
                    ~DoHealthCheckOnMigratingTopicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否通过	
                     * @return Passed 是否通过	
                     * 
                     */
                    bool GetPassed() const;

                    /**
                     * 判断参数 Passed 是否已赋值
                     * @return Passed 是否已赋值
                     * 
                     */
                    bool PassedHasBeenSet() const;

                    /**
                     * 获取健康检查返回的错误信息
NotChecked 未执行检查， 
Unknown 未知错误, 
TopicNotImported 主题未导入,
TopicNotExistsInSourceCluster 主题在源集群中不存在, 
TopicNotExistsInTargetCluster 主题在目标集群中不存在, 
ConsumerConnectedOnTarget 目标集群上存在消费者连接, 
SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入, 
TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入, 
SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, 
TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, 
ConsumerGroupCountNotMatch 订阅组数量不一致, 
SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 健康检查返回的错误信息
NotChecked 未执行检查， 
Unknown 未知错误, 
TopicNotImported 主题未导入,
TopicNotExistsInSourceCluster 主题在源集群中不存在, 
TopicNotExistsInTargetCluster 主题在目标集群中不存在, 
ConsumerConnectedOnTarget 目标集群上存在消费者连接, 
SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入, 
TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入, 
SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, 
TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, 
ConsumerGroupCountNotMatch 订阅组数量不一致, 
SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取健康检查返回的错误信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReasonList 健康检查返回的错误信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReasonList() const;

                    /**
                     * 判断参数 ReasonList 是否已赋值
                     * @return ReasonList 是否已赋值
                     * 
                     */
                    bool ReasonListHasBeenSet() const;

                private:

                    /**
                     * 是否通过	
                     */
                    bool m_passed;
                    bool m_passedHasBeenSet;

                    /**
                     * 健康检查返回的错误信息
NotChecked 未执行检查， 
Unknown 未知错误, 
TopicNotImported 主题未导入,
TopicNotExistsInSourceCluster 主题在源集群中不存在, 
TopicNotExistsInTargetCluster 主题在目标集群中不存在, 
ConsumerConnectedOnTarget 目标集群上存在消费者连接, 
SourceTopicHasNewMessagesIn5Minutes 源集群主题前5分钟内有新消息写入, 
TargetTopicHasNewMessagesIn5Minutes 目标集群主题前5分钟内有新消息写入, 
SourceTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, 
TargetTopicHasNoMessagesIn5Minutes 源集群前5分钟内没有新消息写入, 
ConsumerGroupCountNotMatch 订阅组数量不一致, 
SourceTopicHasUnconsumedMessages 源集群主题存在未消费消息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 健康检查返回的错误信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_reasonList;
                    bool m_reasonListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DOHEALTHCHECKONMIGRATINGTOPICRESPONSE_H_
