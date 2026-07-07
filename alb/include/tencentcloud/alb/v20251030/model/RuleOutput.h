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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_RULEOUTPUT_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_RULEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/RuleAction.h>
#include <tencentcloud/alb/v20251030/model/RuleCondition.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 转发规则信息
                */
                class RuleOutput : public AbstractModel
                {
                public:
                    RuleOutput();
                    ~RuleOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发规则动作列表。	
                     * @return Actions 转发规则动作列表。	
                     * 
                     */
                    std::vector<RuleAction> GetActions() const;

                    /**
                     * 设置转发规则动作列表。	
                     * @param _actions 转发规则动作列表。	
                     * 
                     */
                    void SetActions(const std::vector<RuleAction>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取转发规则条件列表。
                     * @return Conditions 转发规则条件列表。
                     * 
                     */
                    std::vector<RuleCondition> GetConditions() const;

                    /**
                     * 设置转发规则条件列表。
                     * @param _conditions 转发规则条件列表。
                     * 
                     */
                    void SetConditions(const std::vector<RuleCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取转发规则的方向。Request：客户端到负载均衡的请求方向，Response：后端服务器到负载均衡的响应方向。
                     * @return Direction 转发规则的方向。Request：客户端到负载均衡的请求方向，Response：后端服务器到负载均衡的响应方向。
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置转发规则的方向。Request：客户端到负载均衡的请求方向，Response：后端服务器到负载均衡的响应方向。
                     * @param _direction 转发规则的方向。Request：客户端到负载均衡的请求方向，Response：后端服务器到负载均衡的响应方向。
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取最后修改时间。
                     * @return ModifyTime 最后修改时间。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最后修改时间。
                     * @param _modifyTime 最后修改时间。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取优先级，值越小优先级越高，取值范围：1~10000。
                     * @return Priority 优先级，值越小优先级越高，取值范围：1~10000。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级，值越小优先级越高，取值范围：1~10000。
                     * @param _priority 优先级，值越小优先级越高，取值范围：1~10000。
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
                     * 获取转发规则 ID，格式为 rule- 后接 8 位字母数字。
                     * @return RuleId 转发规则 ID，格式为 rule- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置转发规则 ID，格式为 rule- 后接 8 位字母数字。
                     * @param _ruleId 转发规则 ID，格式为 rule- 后接 8 位字母数字。
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
                     * 获取转发规则名称。
                     * @return RuleName 转发规则名称。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置转发规则名称。
                     * @param _ruleName 转发规则名称。
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
                     * 获取转发规则状态，Provisioning：创建中，Active：运行中，Configuring：配置中。
                     * @return Status 转发规则状态，Provisioning：创建中，Active：运行中，Configuring：配置中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置转发规则状态，Provisioning：创建中，Active：运行中，Configuring：配置中。
                     * @param _status 转发规则状态，Provisioning：创建中，Active：运行中，Configuring：配置中。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取标签列表。
                     * @return Tags 标签列表。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签列表。
                     * @param _tags 标签列表。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 转发规则动作列表。	
                     */
                    std::vector<RuleAction> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 转发规则条件列表。
                     */
                    std::vector<RuleCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 转发规则的方向。Request：客户端到负载均衡的请求方向，Response：后端服务器到负载均衡的响应方向。
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 最后修改时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 优先级，值越小优先级越高，取值范围：1~10000。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 转发规则 ID，格式为 rule- 后接 8 位字母数字。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 转发规则名称。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 转发规则状态，Provisioning：创建中，Active：运行中，Configuring：配置中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 标签列表。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_RULEOUTPUT_H_
