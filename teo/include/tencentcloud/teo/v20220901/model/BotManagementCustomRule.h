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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTCUSTOMRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTCUSTOMRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityWeightedAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web 安全的 Bot 自定义规则。
                */
                class BotManagementCustomRule : public AbstractModel
                {
                public:
                    BotManagementCustomRule();
                    ~BotManagementCustomRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bot 自定义规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li><b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li><b>删除</b>已有规则：BotManagementCustomRules 参数中，Rules 列表中未包含的已有规则将被删除。</li>
                     * @return Id Bot 自定义规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li><b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li><b>删除</b>已有规则：BotManagementCustomRules 参数中，Rules 列表中未包含的已有规则将被删除。</li>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Bot 自定义规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li><b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li><b>删除</b>已有规则：BotManagementCustomRules 参数中，Rules 列表中未包含的已有规则将被删除。</li>
                     * @param _id Bot 自定义规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li><b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li><b>删除</b>已有规则：BotManagementCustomRules 参数中，Rules 列表中未包含的已有规则将被删除。</li>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Bot 自定义规则的名称。
                     * @return Name Bot 自定义规则的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Bot 自定义规则的名称。
                     * @param _name Bot 自定义规则的名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Bot 自定义规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @return Enabled Bot 自定义规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Bot 自定义规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @param _enabled Bot 自定义规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Bot 自定义规则的优先级，范围是 1 ~ 100，默认为 50。
                     * @return Priority Bot 自定义规则的优先级，范围是 1 ~ 100，默认为 50。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Bot 自定义规则的优先级，范围是 1 ~ 100，默认为 50。
                     * @param _priority Bot 自定义规则的优先级，范围是 1 ~ 100，默认为 50。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Bot 自定义规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * @return Condition Bot 自定义规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Bot 自定义规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * @param _condition Bot 自定义规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Bot 自定义规则的处置方式。取值有：<li>Monitor：观察；</li><li>Deny：拦截，其中 DenyActionParameters.Name 支持 Deny 和 ReturnCustomPage；</li><li>Challenge：挑战，其中 ChallengeActionParameters.Name 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至 URL。</li>
                     * @return Action Bot 自定义规则的处置方式。取值有：<li>Monitor：观察；</li><li>Deny：拦截，其中 DenyActionParameters.Name 支持 Deny 和 ReturnCustomPage；</li><li>Challenge：挑战，其中 ChallengeActionParameters.Name 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至 URL。</li>
                     * 
                     */
                    std::vector<SecurityWeightedAction> GetAction() const;

                    /**
                     * 设置Bot 自定义规则的处置方式。取值有：<li>Monitor：观察；</li><li>Deny：拦截，其中 DenyActionParameters.Name 支持 Deny 和 ReturnCustomPage；</li><li>Challenge：挑战，其中 ChallengeActionParameters.Name 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至 URL。</li>
                     * @param _action Bot 自定义规则的处置方式。取值有：<li>Monitor：观察；</li><li>Deny：拦截，其中 DenyActionParameters.Name 支持 Deny 和 ReturnCustomPage；</li><li>Challenge：挑战，其中 ChallengeActionParameters.Name 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至 URL。</li>
                     * 
                     */
                    void SetAction(const std::vector<SecurityWeightedAction>& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Bot 自定义规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li><b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li><b>删除</b>已有规则：BotManagementCustomRules 参数中，Rules 列表中未包含的已有规则将被删除。</li>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Bot 自定义规则的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Bot 自定义规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Bot 自定义规则的优先级，范围是 1 ~ 100，默认为 50。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Bot 自定义规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Bot 自定义规则的处置方式。取值有：<li>Monitor：观察；</li><li>Deny：拦截，其中 DenyActionParameters.Name 支持 Deny 和 ReturnCustomPage；</li><li>Challenge：挑战，其中 ChallengeActionParameters.Name 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至 URL。</li>
                     */
                    std::vector<SecurityWeightedAction> m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTCUSTOMRULE_H_
