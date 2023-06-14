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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTHISTORYITEM_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTHISTORYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * prometheus告警历史
                */
                class PrometheusAlertHistoryItem : public AbstractModel
                {
                public:
                    PrometheusAlertHistoryItem();
                    ~PrometheusAlertHistoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警名称
                     * @return RuleName 告警名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置告警名称
                     * @param _ruleName 告警名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取告警开始时间
                     * @return StartTime 告警开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置告警开始时间
                     * @param _startTime 告警开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取告警内容
                     * @return Content 告警内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置告警内容
                     * @param _content 告警内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取告警状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 告警状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置告警状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 告警状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取触发的规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleItem 触发的规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleItem() const;

                    /**
                     * 设置触发的规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleItem 触发的规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleItem(const std::string& _ruleItem);

                    /**
                     * 判断参数 RuleItem 是否已赋值
                     * @return RuleItem 是否已赋值
                     * 
                     */
                    bool RuleItemHasBeenSet() const;

                    /**
                     * 获取告警渠道的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId 告警渠道的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置告警渠道的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicId 告警渠道的id
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
                     * 获取告警渠道的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName 告警渠道的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置告警渠道的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicName 告警渠道的名称
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

                private:

                    /**
                     * 告警名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 告警开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 告警内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 告警状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 触发的规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleItem;
                    bool m_ruleItemHasBeenSet;

                    /**
                     * 告警渠道的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 告警渠道的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTHISTORYITEM_H_
