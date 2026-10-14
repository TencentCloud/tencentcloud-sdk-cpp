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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMCONTENTRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMCONTENTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/RuleItem.h>
#include <tencentcloud/waf/v20180125/model/LLMOptionsItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyLLMContentRule请求参数结构体
                */
                class ModifyLLMContentRuleRequest : public AbstractModel
                {
                public:
                    ModifyLLMContentRuleRequest();
                    ~ModifyLLMContentRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>优先级</p>
                     * @return Priority <p>优先级</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>优先级</p>
                     * @param _priority <p>优先级</p>
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
                     * 获取<p>规则开关</p>
                     * @return Status <p>规则开关</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>规则开关</p>
                     * @param _status <p>规则开关</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>检测范围，1：入向，2：出向，3：入向和出向</p>
                     * @return CheckType <p>检测范围，1：入向，2：出向，3：入向和出向</p>
                     * 
                     */
                    uint64_t GetCheckType() const;

                    /**
                     * 设置<p>检测范围，1：入向，2：出向，3：入向和出向</p>
                     * @param _checkType <p>检测范围，1：入向，2：出向，3：入向和出向</p>
                     * 
                     */
                    void SetCheckType(const uint64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>检测内容匹配</p>
                     * @return RuleItem <p>检测内容匹配</p>
                     * 
                     */
                    std::vector<RuleItem> GetRuleItem() const;

                    /**
                     * 设置<p>检测内容匹配</p>
                     * @param _ruleItem <p>检测内容匹配</p>
                     * 
                     */
                    void SetRuleItem(const std::vector<RuleItem>& _ruleItem);

                    /**
                     * 判断参数 RuleItem 是否已赋值
                     * @return RuleItem 是否已赋值
                     * 
                     */
                    bool RuleItemHasBeenSet() const;

                    /**
                     * 获取<p>匹配条件</p>
                     * @return Options <p>匹配条件</p>
                     * 
                     */
                    std::vector<LLMOptionsItem> GetOptions() const;

                    /**
                     * 设置<p>匹配条件</p>
                     * @param _options <p>匹配条件</p>
                     * 
                     */
                    void SetOptions(const std::vector<LLMOptionsItem>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>动作，观察monitor，拦截intercept</p>
                     * @return ActionType <p>动作，观察monitor，拦截intercept</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>动作，观察monitor，拦截intercept</p>
                     * @param _actionType <p>动作，观察monitor，拦截intercept</p>
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
                     * 获取<p>响应提示内容</p>
                     * @return ResponseText <p>响应提示内容</p>
                     * 
                     */
                    std::string GetResponseText() const;

                    /**
                     * 设置<p>响应提示内容</p>
                     * @param _responseText <p>响应提示内容</p>
                     * 
                     */
                    void SetResponseText(const std::string& _responseText);

                    /**
                     * 判断参数 ResponseText 是否已赋值
                     * @return ResponseText 是否已赋值
                     * 
                     */
                    bool ResponseTextHasBeenSet() const;

                    /**
                     * 获取<p>规则需要启用的SessionID</p>
                     * @return SessionApplied <p>规则需要启用的SessionID</p>
                     * 
                     */
                    std::vector<std::string> GetSessionApplied() const;

                    /**
                     * 设置<p>规则需要启用的SessionID</p>
                     * @param _sessionApplied <p>规则需要启用的SessionID</p>
                     * 
                     */
                    void SetSessionApplied(const std::vector<std::string>& _sessionApplied);

                    /**
                     * 判断参数 SessionApplied 是否已赋值
                     * @return SessionApplied 是否已赋值
                     * 
                     */
                    bool SessionAppliedHasBeenSet() const;

                    /**
                     * 获取<p>规则ID，新增时填0</p>
                     * @return RuleId <p>规则ID，新增时填0</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>规则ID，新增时填0</p>
                     * @param _ruleId <p>规则ID，新增时填0</p>
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
                     * 获取<p>拦截页面id</p>
                     * @return PageId <p>拦截页面id</p>
                     * 
                     */
                    uint64_t GetPageId() const;

                    /**
                     * 设置<p>拦截页面id</p>
                     * @param _pageId <p>拦截页面id</p>
                     * 
                     */
                    void SetPageId(const uint64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取<p>检测内容and or表达式,默认为and</p>
                     * @return ContentLogicalOp <p>检测内容and or表达式,默认为and</p>
                     * 
                     */
                    std::string GetContentLogicalOp() const;

                    /**
                     * 设置<p>检测内容and or表达式,默认为and</p>
                     * @param _contentLogicalOp <p>检测内容and or表达式,默认为and</p>
                     * 
                     */
                    void SetContentLogicalOp(const std::string& _contentLogicalOp);

                    /**
                     * 判断参数 ContentLogicalOp 是否已赋值
                     * @return ContentLogicalOp 是否已赋值
                     * 
                     */
                    bool ContentLogicalOpHasBeenSet() const;

                    /**
                     * 获取<p>实例id，必填项</p>
                     * @return InstanceId <p>实例id，必填项</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id，必填项</p>
                     * @param _instanceId <p>实例id，必填项</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>代答类型：1-内置可信模型安全代答，2-自定义代答（ActionType=reply时生效</p><p>枚举值：</p><ul><li>1： 内置可信模型安全代答</li><li>2： 自定义代答ActionType=reply时生效</li></ul>
                     * @return ReplyType <p>代答类型：1-内置可信模型安全代答，2-自定义代答（ActionType=reply时生效</p><p>枚举值：</p><ul><li>1： 内置可信模型安全代答</li><li>2： 自定义代答ActionType=reply时生效</li></ul>
                     * 
                     */
                    uint64_t GetReplyType() const;

                    /**
                     * 设置<p>代答类型：1-内置可信模型安全代答，2-自定义代答（ActionType=reply时生效</p><p>枚举值：</p><ul><li>1： 内置可信模型安全代答</li><li>2： 自定义代答ActionType=reply时生效</li></ul>
                     * @param _replyType <p>代答类型：1-内置可信模型安全代答，2-自定义代答（ActionType=reply时生效</p><p>枚举值：</p><ul><li>1： 内置可信模型安全代答</li><li>2： 自定义代答ActionType=reply时生效</li></ul>
                     * 
                     */
                    void SetReplyType(const uint64_t& _replyType);

                    /**
                     * 判断参数 ReplyType 是否已赋值
                     * @return ReplyType 是否已赋值
                     * 
                     */
                    bool ReplyTypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义回答模板</p>
                     * @return CustomReplyRuleId <p>自定义回答模板</p>
                     * 
                     */
                    std::string GetCustomReplyRuleId() const;

                    /**
                     * 设置<p>自定义回答模板</p>
                     * @param _customReplyRuleId <p>自定义回答模板</p>
                     * 
                     */
                    void SetCustomReplyRuleId(const std::string& _customReplyRuleId);

                    /**
                     * 判断参数 CustomReplyRuleId 是否已赋值
                     * @return CustomReplyRuleId 是否已赋值
                     * 
                     */
                    bool CustomReplyRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>模态类型：0-文本（默认），1-图片</p><p>枚举值：</p><ul><li>0： 文本</li><li>1： 图片</li></ul>
                     * @return ModalType <p>模态类型：0-文本（默认），1-图片</p><p>枚举值：</p><ul><li>0： 文本</li><li>1： 图片</li></ul>
                     * 
                     */
                    uint64_t GetModalType() const;

                    /**
                     * 设置<p>模态类型：0-文本（默认），1-图片</p><p>枚举值：</p><ul><li>0： 文本</li><li>1： 图片</li></ul>
                     * @param _modalType <p>模态类型：0-文本（默认），1-图片</p><p>枚举值：</p><ul><li>0： 文本</li><li>1： 图片</li></ul>
                     * 
                     */
                    void SetModalType(const uint64_t& _modalType);

                    /**
                     * 判断参数 ModalType 是否已赋值
                     * @return ModalType 是否已赋值
                     * 
                     */
                    bool ModalTypeHasBeenSet() const;

                    /**
                     * 获取<p>规则类别：black-普通规则(默认)，white-白名单规则；空值按black处理。white时ActionType仅允许pass(放行)，RuleItem支持白名单匹配字段(Key: ip/geo/type/content/chat_id/user_id/tool_name/tool_args/keyword_whitelist；Op: belong/not_belong/equal/not_equal/contain/not_contain/prefix/suffix/wildcard)</p>
                     * @return Category <p>规则类别：black-普通规则(默认)，white-白名单规则；空值按black处理。white时ActionType仅允许pass(放行)，RuleItem支持白名单匹配字段(Key: ip/geo/type/content/chat_id/user_id/tool_name/tool_args/keyword_whitelist；Op: belong/not_belong/equal/not_equal/contain/not_contain/prefix/suffix/wildcard)</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>规则类别：black-普通规则(默认)，white-白名单规则；空值按black处理。white时ActionType仅允许pass(放行)，RuleItem支持白名单匹配字段(Key: ip/geo/type/content/chat_id/user_id/tool_name/tool_args/keyword_whitelist；Op: belong/not_belong/equal/not_equal/contain/not_contain/prefix/suffix/wildcard)</p>
                     * @param _category <p>规则类别：black-普通规则(默认)，white-白名单规则；空值按black处理。white时ActionType仅允许pass(放行)，RuleItem支持白名单匹配字段(Key: ip/geo/type/content/chat_id/user_id/tool_name/tool_args/keyword_whitelist；Op: belong/not_belong/equal/not_equal/contain/not_contain/prefix/suffix/wildcard)</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>白名单规则生效范围：多个serviceId/domain列表（Category=white时使用），表示该白名单规则同时生效于哪些域名/serviceId。黑名单规则不使用此字段。</p>
                     * @return Domains <p>白名单规则生效范围：多个serviceId/domain列表（Category=white时使用），表示该白名单规则同时生效于哪些域名/serviceId。黑名单规则不使用此字段。</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>白名单规则生效范围：多个serviceId/domain列表（Category=white时使用），表示该白名单规则同时生效于哪些域名/serviceId。黑名单规则不使用此字段。</p>
                     * @param _domains <p>白名单规则生效范围：多个serviceId/domain列表（Category=white时使用），表示该白名单规则同时生效于哪些域名/serviceId。黑名单规则不使用此字段。</p>
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取<p>加白生效模块type列表（Category=white时使用），表示该白名单规则命中后对哪些防护模块生效(放行)。取值：2-算力消耗规则，3-自定义防护规则，4-ToolCall防护，5-提示词攻击防护，6-内容合规检测，7-敏感数据检测。</p>
                     * @return AppliedModules <p>加白生效模块type列表（Category=white时使用），表示该白名单规则命中后对哪些防护模块生效(放行)。取值：2-算力消耗规则，3-自定义防护规则，4-ToolCall防护，5-提示词攻击防护，6-内容合规检测，7-敏感数据检测。</p>
                     * 
                     */
                    std::vector<uint64_t> GetAppliedModules() const;

                    /**
                     * 设置<p>加白生效模块type列表（Category=white时使用），表示该白名单规则命中后对哪些防护模块生效(放行)。取值：2-算力消耗规则，3-自定义防护规则，4-ToolCall防护，5-提示词攻击防护，6-内容合规检测，7-敏感数据检测。</p>
                     * @param _appliedModules <p>加白生效模块type列表（Category=white时使用），表示该白名单规则命中后对哪些防护模块生效(放行)。取值：2-算力消耗规则，3-自定义防护规则，4-ToolCall防护，5-提示词攻击防护，6-内容合规检测，7-敏感数据检测。</p>
                     * 
                     */
                    void SetAppliedModules(const std::vector<uint64_t>& _appliedModules);

                    /**
                     * 判断参数 AppliedModules 是否已赋值
                     * @return AppliedModules 是否已赋值
                     * 
                     */
                    bool AppliedModulesHasBeenSet() const;

                private:

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>优先级</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>规则开关</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>检测范围，1：入向，2：出向，3：入向和出向</p>
                     */
                    uint64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>检测内容匹配</p>
                     */
                    std::vector<RuleItem> m_ruleItem;
                    bool m_ruleItemHasBeenSet;

                    /**
                     * <p>匹配条件</p>
                     */
                    std::vector<LLMOptionsItem> m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>动作，观察monitor，拦截intercept</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>响应提示内容</p>
                     */
                    std::string m_responseText;
                    bool m_responseTextHasBeenSet;

                    /**
                     * <p>规则需要启用的SessionID</p>
                     */
                    std::vector<std::string> m_sessionApplied;
                    bool m_sessionAppliedHasBeenSet;

                    /**
                     * <p>规则ID，新增时填0</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>拦截页面id</p>
                     */
                    uint64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * <p>检测内容and or表达式,默认为and</p>
                     */
                    std::string m_contentLogicalOp;
                    bool m_contentLogicalOpHasBeenSet;

                    /**
                     * <p>实例id，必填项</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>代答类型：1-内置可信模型安全代答，2-自定义代答（ActionType=reply时生效</p><p>枚举值：</p><ul><li>1： 内置可信模型安全代答</li><li>2： 自定义代答ActionType=reply时生效</li></ul>
                     */
                    uint64_t m_replyType;
                    bool m_replyTypeHasBeenSet;

                    /**
                     * <p>自定义回答模板</p>
                     */
                    std::string m_customReplyRuleId;
                    bool m_customReplyRuleIdHasBeenSet;

                    /**
                     * <p>模态类型：0-文本（默认），1-图片</p><p>枚举值：</p><ul><li>0： 文本</li><li>1： 图片</li></ul>
                     */
                    uint64_t m_modalType;
                    bool m_modalTypeHasBeenSet;

                    /**
                     * <p>规则类别：black-普通规则(默认)，white-白名单规则；空值按black处理。white时ActionType仅允许pass(放行)，RuleItem支持白名单匹配字段(Key: ip/geo/type/content/chat_id/user_id/tool_name/tool_args/keyword_whitelist；Op: belong/not_belong/equal/not_equal/contain/not_contain/prefix/suffix/wildcard)</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>白名单规则生效范围：多个serviceId/domain列表（Category=white时使用），表示该白名单规则同时生效于哪些域名/serviceId。黑名单规则不使用此字段。</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>加白生效模块type列表（Category=white时使用），表示该白名单规则命中后对哪些防护模块生效(放行)。取值：2-算力消耗规则，3-自定义防护规则，4-ToolCall防护，5-提示词攻击防护，6-内容合规检测，7-敏感数据检测。</p>
                     */
                    std::vector<uint64_t> m_appliedModules;
                    bool m_appliedModulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMCONTENTRULEREQUEST_H_
