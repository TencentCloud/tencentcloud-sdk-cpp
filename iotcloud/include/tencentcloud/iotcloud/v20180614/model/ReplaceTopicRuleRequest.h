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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_REPLACETOPICRULEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_REPLACETOPICRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/TopicRulePayload.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
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
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取替换的规则包体
                     * @return TopicRulePayload 替换的规则包体
                     * 
                     */
                    TopicRulePayload GetTopicRulePayload() const;

                    /**
                     * 设置替换的规则包体
                     * @param _topicRulePayload 替换的规则包体
                     * 
                     */
                    void SetTopicRulePayload(const TopicRulePayload& _topicRulePayload);

                    /**
                     * 判断参数 TopicRulePayload 是否已赋值
                     * @return TopicRulePayload 是否已赋值
                     * 
                     */
                    bool TopicRulePayloadHasBeenSet() const;

                    /**
                     * 获取修改类型，0：其他，1：创建行为，2：更新行为，3：删除行为
                     * @return ModifyType 修改类型，0：其他，1：创建行为，2：更新行为，3：删除行为
                     * 
                     */
                    uint64_t GetModifyType() const;

                    /**
                     * 设置修改类型，0：其他，1：创建行为，2：更新行为，3：删除行为
                     * @param _modifyType 修改类型，0：其他，1：创建行为，2：更新行为，3：删除行为
                     * 
                     */
                    void SetModifyType(const uint64_t& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取action增删改变更填对应topicRulePayload里面第几个action
                     * @return ActionIndex action增删改变更填对应topicRulePayload里面第几个action
                     * 
                     */
                    uint64_t GetActionIndex() const;

                    /**
                     * 设置action增删改变更填对应topicRulePayload里面第几个action
                     * @param _actionIndex action增删改变更填对应topicRulePayload里面第几个action
                     * 
                     */
                    void SetActionIndex(const uint64_t& _actionIndex);

                    /**
                     * 判断参数 ActionIndex 是否已赋值
                     * @return ActionIndex 是否已赋值
                     * 
                     */
                    bool ActionIndexHasBeenSet() const;

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

                    /**
                     * 修改类型，0：其他，1：创建行为，2：更新行为，3：删除行为
                     */
                    uint64_t m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * action增删改变更填对应topicRulePayload里面第几个action
                     */
                    uint64_t m_actionIndex;
                    bool m_actionIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_REPLACETOPICRULEREQUEST_H_
