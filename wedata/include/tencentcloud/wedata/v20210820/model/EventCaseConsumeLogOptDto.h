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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASECONSUMELOGOPTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASECONSUMELOGOPTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 事件消费记录
                */
                class EventCaseConsumeLogOptDto : public AbstractModel
                {
                public:
                    EventCaseConsumeLogOptDto();
                    ~EventCaseConsumeLogOptDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumeLogId 消费ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumeLogId() const;

                    /**
                     * 设置消费ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumeLogId 消费ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumeLogId(const std::string& _consumeLogId);

                    /**
                     * 判断参数 ConsumeLogId 是否已赋值
                     * @return ConsumeLogId 是否已赋值
                     * 
                     */
                    bool ConsumeLogIdHasBeenSet() const;

                    /**
                     * 获取事件案例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventCaseId 事件案例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventCaseId() const;

                    /**
                     * 设置事件案例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventCaseId 事件案例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventCaseId(const std::string& _eventCaseId);

                    /**
                     * 判断参数 EventCaseId 是否已赋值
                     * @return EventCaseId 是否已赋值
                     * 
                     */
                    bool EventCaseIdHasBeenSet() const;

                    /**
                     * 获取消费者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerId 消费者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置消费者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerId 消费者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerId(const std::string& _consumerId);

                    /**
                     * 判断参数 ConsumerId 是否已赋值
                     * @return ConsumerId 是否已赋值
                     * 
                     */
                    bool ConsumerIdHasBeenSet() const;

                    /**
                     * 获取消费时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTimestamp 消费时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationTimestamp() const;

                    /**
                     * 设置消费时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTimestamp 消费时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTimestamp(const std::string& _creationTimestamp);

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     * 
                     */
                    bool CreationTimestampHasBeenSet() const;

                    /**
                     * 获取任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerDetail 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOpsDto GetConsumerDetail() const;

                    /**
                     * 设置任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerDetail 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerDetail(const TaskOpsDto& _consumerDetail);

                    /**
                     * 判断参数 ConsumerDetail 是否已赋值
                     * @return ConsumerDetail 是否已赋值
                     * 
                     */
                    bool ConsumerDetailHasBeenSet() const;

                private:

                    /**
                     * 消费ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumeLogId;
                    bool m_consumeLogIdHasBeenSet;

                    /**
                     * 事件案例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventCaseId;
                    bool m_eventCaseIdHasBeenSet;

                    /**
                     * 消费者ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * 消费时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                    /**
                     * 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOpsDto m_consumerDetail;
                    bool m_consumerDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASECONSUMELOGOPTDTO_H_
