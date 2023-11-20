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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULESRSPRULELISTITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULESRSPRULELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Strategy.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeCustomRules接口回包中的复杂类型
                */
                class DescribeCustomRulesRspRuleListItem : public AbstractModel
                {
                public:
                    DescribeCustomRulesRspRuleListItem();
                    ~DescribeCustomRulesRspRuleListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作类型
                     * @return ActionType 动作类型
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置动作类型
                     * @param _actionType 动作类型
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取跳过的策略
                     * @return Bypass 跳过的策略
                     * 
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置跳过的策略
                     * @param _bypass 跳过的策略
                     * 
                     */
                    void SetBypass(const std::string& _bypass);

                    /**
                     * 判断参数 Bypass 是否已赋值
                     * @return Bypass 是否已赋值
                     * 
                     */
                    bool BypassHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return Name 策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名称
                     * @param _name 策略名称
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
                     * 获取重定向地址
                     * @return Redirect 重定向地址
                     * 
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置重定向地址
                     * @param _redirect 重定向地址
                     * 
                     */
                    void SetRedirect(const std::string& _redirect);

                    /**
                     * 判断参数 Redirect 是否已赋值
                     * @return Redirect 是否已赋值
                     * 
                     */
                    bool RedirectHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return RuleId 策略ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置策略ID
                     * @param _ruleId 策略ID
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
                     * 获取优先级
                     * @return SortId 优先级
                     * 
                     */
                    std::string GetSortId() const;

                    /**
                     * 设置优先级
                     * @param _sortId 优先级
                     * 
                     */
                    void SetSortId(const std::string& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取策略详情
                     * @return Strategies 策略详情
                     * 
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置策略详情
                     * @param _strategies 策略详情
                     * 
                     */
                    void SetStrategies(const std::vector<Strategy>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventId 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取生效状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidStatus 生效状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置生效状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _validStatus 生效状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValidStatus(const int64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                    /**
                     * 获取来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 动作类型
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 跳过的策略
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 重定向地址
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 优先级
                     */
                    std::string m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 策略详情
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 生效状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                    /**
                     * 来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULESRSPRULELISTITEM_H_
