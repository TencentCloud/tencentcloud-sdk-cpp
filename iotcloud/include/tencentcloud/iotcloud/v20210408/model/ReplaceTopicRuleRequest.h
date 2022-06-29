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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_REPLACETOPICRULEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_REPLACETOPICRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/TopicRulePayload.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * ReplaceTopicRule请求参数结构体
                */
                class ReplaceTopicRuleRequest : public AbstractModel
                {
                public:
                    ReplaceTopicRuleRequest();
                    ~ReplaceTopicRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param RuleName 规则名称
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取替换的规则包体
                     * @return TopicRulePayload 替换的规则包体
                     */
                    TopicRulePayload GetTopicRulePayload() const;

                    /**
                     * 设置替换的规则包体
                     * @param TopicRulePayload 替换的规则包体
                     */
                    void SetTopicRulePayload(const TopicRulePayload& _topicRulePayload);

                    /**
                     * 判断参数 TopicRulePayload 是否已赋值
                     * @return TopicRulePayload 是否已赋值
                     */
                    bool TopicRulePayloadHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 替换的规则包体
                     */
                    TopicRulePayload m_topicRulePayload;
                    bool m_topicRulePayloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_REPLACETOPICRULEREQUEST_H_
