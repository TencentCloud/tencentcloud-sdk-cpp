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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_UPDATERULEREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_UPDATERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * UpdateRule请求参数结构体
                */
                class UpdateRuleRequest : public AbstractModel
                {
                public:
                    UpdateRuleRequest();
                    ~UpdateRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件规则ID
                     * @return RuleId 事件规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置事件规则ID
                     * @param _ruleId 事件规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param _eventBusId 事件集ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取使能开关。
                     * @return Enable 使能开关。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置使能开关。
                     * @param _enable 使能开关。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取规则描述，只能包含数字、中英文及常用标点符号，不超过200个字符
                     * @return Description 规则描述，只能包含数字、中英文及常用标点符号，不超过200个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述，只能包含数字、中英文及常用标点符号，不超过200个字符
                     * @param _description 规则描述，只能包含数字、中英文及常用标点符号，不超过200个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取参考：[事件模式](https://cloud.tencent.com/document/product/1359/56084)
                     * @return EventPattern 参考：[事件模式](https://cloud.tencent.com/document/product/1359/56084)
                     * 
                     */
                    std::string GetEventPattern() const;

                    /**
                     * 设置参考：[事件模式](https://cloud.tencent.com/document/product/1359/56084)
                     * @param _eventPattern 参考：[事件模式](https://cloud.tencent.com/document/product/1359/56084)
                     * 
                     */
                    void SetEventPattern(const std::string& _eventPattern);

                    /**
                     * 判断参数 EventPattern 是否已赋值
                     * @return EventPattern 是否已赋值
                     * 
                     */
                    bool EventPatternHasBeenSet() const;

                    /**
                     * 获取事件规则名称，只能包含字母、中文、数字、下划线、连字符，以字母/中文开头，以数字、字母或中文结尾，2~60个字符
                     * @return RuleName 事件规则名称，只能包含字母、中文、数字、下划线、连字符，以字母/中文开头，以数字、字母或中文结尾，2~60个字符
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置事件规则名称，只能包含字母、中文、数字、下划线、连字符，以字母/中文开头，以数字、字母或中文结尾，2~60个字符
                     * @param _ruleName 事件规则名称，只能包含字母、中文、数字、下划线、连字符，以字母/中文开头，以数字、字母或中文结尾，2~60个字符
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * 事件规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 使能开关。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 规则描述，只能包含数字、中英文及常用标点符号，不超过200个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 参考：[事件模式](https://cloud.tencent.com/document/product/1359/56084)
                     */
                    std::string m_eventPattern;
                    bool m_eventPatternHasBeenSet;

                    /**
                     * 事件规则名称，只能包含字母、中文、数字、下划线、连字符，以字母/中文开头，以数字、字母或中文结尾，2~60个字符
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_UPDATERULEREQUEST_H_
