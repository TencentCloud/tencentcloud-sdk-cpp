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
                     * 获取<p>事件集id</p>
                     * @return EventBusId <p>事件集id</p>
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
                     * 获取<p>事件规则id</p>
                     * @return RuleId <p>事件规则id</p>
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
                     * 获取<p>事件规则名称</p>
                     * @return RuleName <p>事件规则名称</p>
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
                     * 获取<p>事件规则状态</p>
                     * @return Status <p>事件规则状态</p>
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
                     * 获取<p>使能开关</p>
                     * @return Enable <p>使能开关</p>
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
                     * 获取<p>事件规则描述</p>
                     * @return Description <p>事件规则描述</p>
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
                     * 获取<p>事件模式</p>
                     * @return EventPattern <p>事件模式</p>
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
                     * 获取<p>创建时间</p>
                     * @return AddTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return ModTime <p>更新时间</p>
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
                     * <p>事件集id</p>
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * <p>事件规则id</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>事件规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>事件规则状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>使能开关</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>事件规则描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>事件模式</p>
                     */
                    std::string m_eventPattern;
                    bool m_eventPatternHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_GETRULERESPONSE_H_
