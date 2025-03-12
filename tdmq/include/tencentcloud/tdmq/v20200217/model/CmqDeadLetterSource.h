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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERSOURCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERSOURCE_H_

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
                * Cmq DeadLetterSource
                */
                class CmqDeadLetterSource : public AbstractModel
                {
                public:
                    CmqDeadLetterSource();
                    ~CmqDeadLetterSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息队列ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueId 消息队列ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueId() const;

                    /**
                     * 设置消息队列ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueId 消息队列ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueId(const std::string& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     * 
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取消息队列名字。
                     * @return QueueName 消息队列名字。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置消息队列名字。
                     * @param _queueName 消息队列名字。
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                private:

                    /**
                     * 消息队列ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * 消息队列名字。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERSOURCE_H_
