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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_ACTION_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_ACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/TopicAction.h>
#include <tencentcloud/iot/v20180123/model/ServiceAction.h>
#include <tencentcloud/iot/v20180123/model/CkafkaAction.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * 规则引擎转发动作
                */
                class Action : public AbstractModel
                {
                public:
                    Action();
                    ~Action() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发至topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic 转发至topic
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TopicAction GetTopic() const;

                    /**
                     * 设置转发至topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic 转发至topic
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopic(const TopicAction& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取转发至第三发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Service 转发至第三发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceAction GetService() const;

                    /**
                     * 设置转发至第三发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _service 转发至第三发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetService(const ServiceAction& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取转发至第三发Ckafka
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ckafka 转发至第三发Ckafka
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CkafkaAction GetCkafka() const;

                    /**
                     * 设置转发至第三发Ckafka
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ckafka 转发至第三发Ckafka
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCkafka(const CkafkaAction& _ckafka);

                    /**
                     * 判断参数 Ckafka 是否已赋值
                     * @return Ckafka 是否已赋值
                     * 
                     */
                    bool CkafkaHasBeenSet() const;

                private:

                    /**
                     * 转发至topic
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TopicAction m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 转发至第三发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceAction m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 转发至第三发Ckafka
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CkafkaAction m_ckafka;
                    bool m_ckafkaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_ACTION_H_
