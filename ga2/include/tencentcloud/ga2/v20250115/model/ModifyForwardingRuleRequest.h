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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYFORWARDINGRULEREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYFORWARDINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/RuleCondition.h>
#include <tencentcloud/ga2/v20250115/model/RuleAction.h>
#include <tencentcloud/ga2/v20250115/model/OriginHeader.h>
#include <tencentcloud/ga2/v20250115/model/ResponseHeaders.h>
#include <tencentcloud/ga2/v20250115/model/HideResponseHeaders.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyForwardingRule请求参数结构体
                */
                class ModifyForwardingRuleRequest : public AbstractModel
                {
                public:
                    ModifyForwardingRuleRequest();
                    ~ModifyForwardingRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全球加速实例ID。</p>
                     * @return GlobalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>全球加速实例ID。</p>
                     * @param _globalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>监听器ID。</p>
                     * @return ListenerId <p>监听器ID。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器ID。</p>
                     * @param _listenerId <p>监听器ID。</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>策略ID。</p>
                     * @return ForwardingPolicyId <p>策略ID。</p>
                     * 
                     */
                    std::string GetForwardingPolicyId() const;

                    /**
                     * 设置<p>策略ID。</p>
                     * @param _forwardingPolicyId <p>策略ID。</p>
                     * 
                     */
                    void SetForwardingPolicyId(const std::string& _forwardingPolicyId);

                    /**
                     * 判断参数 ForwardingPolicyId 是否已赋值
                     * @return ForwardingPolicyId 是否已赋值
                     * 
                     */
                    bool ForwardingPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>七层转发规则ID。</p>
                     * @return ForwardingRuleId <p>七层转发规则ID。</p>
                     * 
                     */
                    std::string GetForwardingRuleId() const;

                    /**
                     * 设置<p>七层转发规则ID。</p>
                     * @param _forwardingRuleId <p>七层转发规则ID。</p>
                     * 
                     */
                    void SetForwardingRuleId(const std::string& _forwardingRuleId);

                    /**
                     * 判断参数 ForwardingRuleId 是否已赋值
                     * @return ForwardingRuleId 是否已赋值
                     * 
                     */
                    bool ForwardingRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>七层转发规则条件信息。</p><p>入参限制：数组长度不能超过1。</p>
                     * @return RuleConditions <p>七层转发规则条件信息。</p><p>入参限制：数组长度不能超过1。</p>
                     * 
                     */
                    std::vector<RuleCondition> GetRuleConditions() const;

                    /**
                     * 设置<p>七层转发规则条件信息。</p><p>入参限制：数组长度不能超过1。</p>
                     * @param _ruleConditions <p>七层转发规则条件信息。</p><p>入参限制：数组长度不能超过1。</p>
                     * 
                     */
                    void SetRuleConditions(const std::vector<RuleCondition>& _ruleConditions);

                    /**
                     * 判断参数 RuleConditions 是否已赋值
                     * @return RuleConditions 是否已赋值
                     * 
                     */
                    bool RuleConditionsHasBeenSet() const;

                    /**
                     * 获取<p>七层转发规则行为信息。</p><p>入参限制：数组长度不能超过1。</p>
                     * @return RuleActions <p>七层转发规则行为信息。</p><p>入参限制：数组长度不能超过1。</p>
                     * 
                     */
                    std::vector<RuleAction> GetRuleActions() const;

                    /**
                     * 设置<p>七层转发规则行为信息。</p><p>入参限制：数组长度不能超过1。</p>
                     * @param _ruleActions <p>七层转发规则行为信息。</p><p>入参限制：数组长度不能超过1。</p>
                     * 
                     */
                    void SetRuleActions(const std::vector<RuleAction>& _ruleActions);

                    /**
                     * 判断参数 RuleActions 是否已赋值
                     * @return RuleActions 是否已赋值
                     * 
                     */
                    bool RuleActionsHasBeenSet() const;

                    /**
                     * 获取<p>回源Header信息。</p><p>入参限制：数组长度在1-5。</p>
                     * @return OriginHeaders <p>回源Header信息。</p><p>入参限制：数组长度在1-5。</p>
                     * 
                     */
                    std::vector<OriginHeader> GetOriginHeaders() const;

                    /**
                     * 设置<p>回源Header信息。</p><p>入参限制：数组长度在1-5。</p>
                     * @param _originHeaders <p>回源Header信息。</p><p>入参限制：数组长度在1-5。</p>
                     * 
                     */
                    void SetOriginHeaders(const std::vector<OriginHeader>& _originHeaders);

                    /**
                     * 判断参数 OriginHeaders 是否已赋值
                     * @return OriginHeaders 是否已赋值
                     * 
                     */
                    bool OriginHeadersHasBeenSet() const;

                    /**
                     * 获取<p>是否开启回源sni。</p>
                     * @return EnableOriginSni <p>是否开启回源sni。</p>
                     * 
                     */
                    bool GetEnableOriginSni() const;

                    /**
                     * 设置<p>是否开启回源sni。</p>
                     * @param _enableOriginSni <p>是否开启回源sni。</p>
                     * 
                     */
                    void SetEnableOriginSni(const bool& _enableOriginSni);

                    /**
                     * 判断参数 EnableOriginSni 是否已赋值
                     * @return EnableOriginSni 是否已赋值
                     * 
                     */
                    bool EnableOriginSniHasBeenSet() const;

                    /**
                     * 获取<p>回源sni。</p><p>入参限制：长度不能超过80。</p><p>当开启回源sni时，此字段必传。</p>
                     * @return OriginSni <p>回源sni。</p><p>入参限制：长度不能超过80。</p><p>当开启回源sni时，此字段必传。</p>
                     * 
                     */
                    std::string GetOriginSni() const;

                    /**
                     * 设置<p>回源sni。</p><p>入参限制：长度不能超过80。</p><p>当开启回源sni时，此字段必传。</p>
                     * @param _originSni <p>回源sni。</p><p>入参限制：长度不能超过80。</p><p>当开启回源sni时，此字段必传。</p>
                     * 
                     */
                    void SetOriginSni(const std::string& _originSni);

                    /**
                     * 判断参数 OriginSni 是否已赋值
                     * @return OriginSni 是否已赋值
                     * 
                     */
                    bool OriginSniHasBeenSet() const;

                    /**
                     * 获取<p>回源host。</p><p>入参限制：长度不能超过80。</p><p>当开启回源sni时，此字段必传。</p>
                     * @return OriginHost <p>回源host。</p><p>入参限制：长度不能超过80。</p><p>当开启回源sni时，此字段必传。</p>
                     * 
                     */
                    std::string GetOriginHost() const;

                    /**
                     * 设置<p>回源host。</p><p>入参限制：长度不能超过80。</p><p>当开启回源sni时，此字段必传。</p>
                     * @param _originHost <p>回源host。</p><p>入参限制：长度不能超过80。</p><p>当开启回源sni时，此字段必传。</p>
                     * 
                     */
                    void SetOriginHost(const std::string& _originHost);

                    /**
                     * 判断参数 OriginHost 是否已赋值
                     * @return OriginHost 是否已赋值
                     * 
                     */
                    bool OriginHostHasBeenSet() const;

                    /**
                     * 获取<p>源站响应头</p><p>入参限制：数组长度不能超过5。</p>
                     * @return ResponseHeaders <p>源站响应头</p><p>入参限制：数组长度不能超过5。</p>
                     * 
                     */
                    std::vector<ResponseHeaders> GetResponseHeaders() const;

                    /**
                     * 设置<p>源站响应头</p><p>入参限制：数组长度不能超过5。</p>
                     * @param _responseHeaders <p>源站响应头</p><p>入参限制：数组长度不能超过5。</p>
                     * 
                     */
                    void SetResponseHeaders(const std::vector<ResponseHeaders>& _responseHeaders);

                    /**
                     * 判断参数 ResponseHeaders 是否已赋值
                     * @return ResponseHeaders 是否已赋值
                     * 
                     */
                    bool ResponseHeadersHasBeenSet() const;

                    /**
                     * 获取<p>删除源站响应头</p><p>入参限制：数组长度不能超过5。</p>
                     * @return HideResponseHeaders <p>删除源站响应头</p><p>入参限制：数组长度不能超过5。</p>
                     * 
                     */
                    std::vector<HideResponseHeaders> GetHideResponseHeaders() const;

                    /**
                     * 设置<p>删除源站响应头</p><p>入参限制：数组长度不能超过5。</p>
                     * @param _hideResponseHeaders <p>删除源站响应头</p><p>入参限制：数组长度不能超过5。</p>
                     * 
                     */
                    void SetHideResponseHeaders(const std::vector<HideResponseHeaders>& _hideResponseHeaders);

                    /**
                     * 判断参数 HideResponseHeaders 是否已赋值
                     * @return HideResponseHeaders 是否已赋值
                     * 
                     */
                    bool HideResponseHeadersHasBeenSet() const;

                private:

                    /**
                     * <p>全球加速实例ID。</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>监听器ID。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>策略ID。</p>
                     */
                    std::string m_forwardingPolicyId;
                    bool m_forwardingPolicyIdHasBeenSet;

                    /**
                     * <p>七层转发规则ID。</p>
                     */
                    std::string m_forwardingRuleId;
                    bool m_forwardingRuleIdHasBeenSet;

                    /**
                     * <p>七层转发规则条件信息。</p><p>入参限制：数组长度不能超过1。</p>
                     */
                    std::vector<RuleCondition> m_ruleConditions;
                    bool m_ruleConditionsHasBeenSet;

                    /**
                     * <p>七层转发规则行为信息。</p><p>入参限制：数组长度不能超过1。</p>
                     */
                    std::vector<RuleAction> m_ruleActions;
                    bool m_ruleActionsHasBeenSet;

                    /**
                     * <p>回源Header信息。</p><p>入参限制：数组长度在1-5。</p>
                     */
                    std::vector<OriginHeader> m_originHeaders;
                    bool m_originHeadersHasBeenSet;

                    /**
                     * <p>是否开启回源sni。</p>
                     */
                    bool m_enableOriginSni;
                    bool m_enableOriginSniHasBeenSet;

                    /**
                     * <p>回源sni。</p><p>入参限制：长度不能超过80。</p><p>当开启回源sni时，此字段必传。</p>
                     */
                    std::string m_originSni;
                    bool m_originSniHasBeenSet;

                    /**
                     * <p>回源host。</p><p>入参限制：长度不能超过80。</p><p>当开启回源sni时，此字段必传。</p>
                     */
                    std::string m_originHost;
                    bool m_originHostHasBeenSet;

                    /**
                     * <p>源站响应头</p><p>入参限制：数组长度不能超过5。</p>
                     */
                    std::vector<ResponseHeaders> m_responseHeaders;
                    bool m_responseHeadersHasBeenSet;

                    /**
                     * <p>删除源站响应头</p><p>入参限制：数组长度不能超过5。</p>
                     */
                    std::vector<HideResponseHeaders> m_hideResponseHeaders;
                    bool m_hideResponseHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYFORWARDINGRULEREQUEST_H_
