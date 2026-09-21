/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELROUTEITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELROUTEITEM_H_

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
                * 标签命中的单条 Topic 路由规则项
                */
                class ConsumerLabelRouteItem : public AbstractModel
                {
                public:
                    ConsumerLabelRouteItem();
                    ~ConsumerLabelRouteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Topic 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic <p>Topic 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>Topic 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic <p>Topic 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchCondition <p>匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMatchCondition() const;

                    /**
                     * 设置<p>匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchCondition <p>匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchCondition(const std::string& _matchCondition);

                    /**
                     * 判断参数 MatchCondition 是否已赋值
                     * @return MatchCondition 是否已赋值
                     * 
                     */
                    bool MatchConditionHasBeenSet() const;

                    /**
                     * 获取<p>目标消费组灰度标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetConsumerLabel <p>目标消费组灰度标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetConsumerLabel() const;

                    /**
                     * 设置<p>目标消费组灰度标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetConsumerLabel <p>目标消费组灰度标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetConsumerLabel(const std::string& _targetConsumerLabel);

                    /**
                     * 判断参数 TargetConsumerLabel 是否已赋值
                     * @return TargetConsumerLabel 是否已赋值
                     * 
                     */
                    bool TargetConsumerLabelHasBeenSet() const;

                private:

                    /**
                     * <p>Topic 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchCondition;
                    bool m_matchConditionHasBeenSet;

                    /**
                     * <p>目标消费组灰度标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetConsumerLabel;
                    bool m_targetConsumerLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELROUTEITEM_H_
