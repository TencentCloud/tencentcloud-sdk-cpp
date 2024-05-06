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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 通知规则
                */
                class NoticeRule : public AbstractModel
                {
                public:
                    NoticeRule();
                    ~NoticeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警通知模板接收者信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeReceivers 告警通知模板接收者信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置告警通知模板接收者信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noticeReceivers 告警通知模板接收者信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoticeReceivers(const std::vector<NoticeReceiver>& _noticeReceivers);

                    /**
                     * 判断参数 NoticeReceivers 是否已赋值
                     * @return NoticeReceivers 是否已赋值
                     * 
                     */
                    bool NoticeReceiversHasBeenSet() const;

                    /**
                     * 获取告警通知模板回调信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebCallbacks 告警通知模板回调信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置告警通知模板回调信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webCallbacks 告警通知模板回调信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebCallbacks(const std::vector<WebCallback>& _webCallbacks);

                    /**
                     * 判断参数 WebCallbacks 是否已赋值
                     * @return WebCallbacks 是否已赋值
                     * 
                     */
                    bool WebCallbacksHasBeenSet() const;

                    /**
                     * 获取匹配规则 JSON串。
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1,2]\",\"Type\":\"Value\"}]}]}
`
以上示例表示：
规则：
通知类型属于告警通知,恢复通知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rule 匹配规则 JSON串。
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1,2]\",\"Type\":\"Value\"}]}]}
`
以上示例表示：
规则：
通知类型属于告警通知,恢复通知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置匹配规则 JSON串。
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1,2]\",\"Type\":\"Value\"}]}]}
`
以上示例表示：
规则：
通知类型属于告警通知,恢复通知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rule 匹配规则 JSON串。
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1,2]\",\"Type\":\"Value\"}]}]}
`
以上示例表示：
规则：
通知类型属于告警通知,恢复通知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * 告警通知模板接收者信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * 告警通知模板回调信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * 匹配规则 JSON串。
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1,2]\",\"Type\":\"Value\"}]}]}
`
以上示例表示：
规则：
通知类型属于告警通知,恢复通知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_
