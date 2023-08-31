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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BROKERTOPICFLOWDATA_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BROKERTOPICFLOWDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * broker维度topic 流量排行指标
                */
                class BrokerTopicFlowData : public AbstractModel
                {
                public:
                    BrokerTopicFlowData();
                    ~BrokerTopicFlowData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName Topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicName Topic 名称
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
                     * 获取Topic Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId Topic Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicId Topic Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Topic 流量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicTraffic Topic 流量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicTraffic() const;

                    /**
                     * 设置Topic 流量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicTraffic Topic 流量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicTraffic(const std::string& _topicTraffic);

                    /**
                     * 判断参数 TopicTraffic 是否已赋值
                     * @return TopicTraffic 是否已赋值
                     * 
                     */
                    bool TopicTrafficHasBeenSet() const;

                private:

                    /**
                     * Topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Topic 流量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicTraffic;
                    bool m_topicTrafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BROKERTOPICFLOWDATA_H_
