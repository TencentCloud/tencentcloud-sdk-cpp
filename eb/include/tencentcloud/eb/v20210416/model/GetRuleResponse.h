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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_GETRULERESPONSE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_GETRULERESPONSE_H_

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
                * GetRule返回参数结构体
                */
                class GetRuleResponse : public AbstractModel
                {
                public:
                    GetRuleResponse();
                    ~GetRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件集id
                     * @return EventBusId 事件集id
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取事件规则id
                     * @return RuleId 事件规则id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取事件规则名称
                     * @return RuleName 事件规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取事件规则状态
                     * @return Status 事件规则状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取使能开关
                     * @return Enable 使能开关
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取事件规则描述
                     * @return Description 事件规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取事件模式
                     * @return EventPattern 事件模式
                     * 
                     */
                    std::string GetEventPattern() const;

                    /**
                     * 判断参数 EventPattern 是否已赋值
                     * @return EventPattern 是否已赋值
                     * 
                     */
                    bool EventPatternHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return AddTime 创建时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return ModTime 更新时间
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                private:

                    /**
                     * 事件集id
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 事件规则id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 事件规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 事件规则状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 使能开关
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 事件规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 事件模式
                     */
                    std::string m_eventPattern;
                    bool m_eventPatternHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_GETRULERESPONSE_H_
