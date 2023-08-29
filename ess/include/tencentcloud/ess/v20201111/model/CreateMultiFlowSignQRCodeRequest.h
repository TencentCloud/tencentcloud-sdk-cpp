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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMULTIFLOWSIGNQRCODEREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMULTIFLOWSIGNQRCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/ApproverRestriction.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateMultiFlowSignQRCode请求参数结构体
                */
                class CreateMultiFlowSignQRCodeRequest : public AbstractModel
                {
                public:
                    CreateMultiFlowSignQRCodeRequest();
                    ~CreateMultiFlowSignQRCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户信息，其中UserId为必填参数
                     * @return Operator 用户信息，其中UserId为必填参数
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置用户信息，其中UserId为必填参数
                     * @param _operator 用户信息，其中UserId为必填参数
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取模板ID
                     * @return TemplateId 模板ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param _templateId 模板ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取签署流程名称，最大长度不超过200字符
                     * @return FlowName 签署流程名称，最大长度不超过200字符
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置签署流程名称，最大长度不超过200字符
                     * @param _flowName 签署流程名称，最大长度不超过200字符
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取最大可发起签署流程份数，默认5份 
<br/>发起流程数量超过此上限后二维码自动失效
                     * @return MaxFlowNum 最大可发起签署流程份数，默认5份 
<br/>发起流程数量超过此上限后二维码自动失效
                     * 
                     */
                    int64_t GetMaxFlowNum() const;

                    /**
                     * 设置最大可发起签署流程份数，默认5份 
<br/>发起流程数量超过此上限后二维码自动失效
                     * @param _maxFlowNum 最大可发起签署流程份数，默认5份 
<br/>发起流程数量超过此上限后二维码自动失效
                     * 
                     */
                    void SetMaxFlowNum(const int64_t& _maxFlowNum);

                    /**
                     * 判断参数 MaxFlowNum 是否已赋值
                     * @return MaxFlowNum 是否已赋值
                     * 
                     */
                    bool MaxFlowNumHasBeenSet() const;

                    /**
                     * 获取签署流程有效天数 
<br/>默认7天 
<br/>最高设置不超过30天
                     * @return FlowEffectiveDay 签署流程有效天数 
<br/>默认7天 
<br/>最高设置不超过30天
                     * 
                     */
                    int64_t GetFlowEffectiveDay() const;

                    /**
                     * 设置签署流程有效天数 
<br/>默认7天 
<br/>最高设置不超过30天
                     * @param _flowEffectiveDay 签署流程有效天数 
<br/>默认7天 
<br/>最高设置不超过30天
                     * 
                     */
                    void SetFlowEffectiveDay(const int64_t& _flowEffectiveDay);

                    /**
                     * 判断参数 FlowEffectiveDay 是否已赋值
                     * @return FlowEffectiveDay 是否已赋值
                     * 
                     */
                    bool FlowEffectiveDayHasBeenSet() const;

                    /**
                     * 获取二维码有效天数 默认7天 最高设置不超过90天
                     * @return QrEffectiveDay 二维码有效天数 默认7天 最高设置不超过90天
                     * 
                     */
                    int64_t GetQrEffectiveDay() const;

                    /**
                     * 设置二维码有效天数 默认7天 最高设置不超过90天
                     * @param _qrEffectiveDay 二维码有效天数 默认7天 最高设置不超过90天
                     * 
                     */
                    void SetQrEffectiveDay(const int64_t& _qrEffectiveDay);

                    /**
                     * 判断参数 QrEffectiveDay 是否已赋值
                     * @return QrEffectiveDay 是否已赋值
                     * 
                     */
                    bool QrEffectiveDayHasBeenSet() const;

                    /**
                     * 获取指定的签署人信息
<br/>指定后，则只允许指定的签署人扫码签署
                     * @return Restrictions 指定的签署人信息
<br/>指定后，则只允许指定的签署人扫码签署
                     * 
                     */
                    std::vector<ApproverRestriction> GetRestrictions() const;

                    /**
                     * 设置指定的签署人信息
<br/>指定后，则只允许指定的签署人扫码签署
                     * @param _restrictions 指定的签署人信息
<br/>指定后，则只允许指定的签署人扫码签署
                     * 
                     */
                    void SetRestrictions(const std::vector<ApproverRestriction>& _restrictions);

                    /**
                     * 判断参数 Restrictions 是否已赋值
                     * @return Restrictions 是否已赋值
                     * 
                     */
                    bool RestrictionsHasBeenSet() const;

                    /**
                     * 获取用户自定义字段
<br/>回调的时候会进行透传，长度需要小于20480
                     * @return UserData 用户自定义字段
<br/>回调的时候会进行透传，长度需要小于20480
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置用户自定义字段
<br/>回调的时候会进行透传，长度需要小于20480
                     * @param _userData 用户自定义字段
<br/>回调的时候会进行透传，长度需要小于20480
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取已废弃，回调配置统一使用企业应用管理-应用集成-企业版应用中的配置 
<br/> 通过一码多扫二维码发起的合同，回调消息可参考文档 https://qian.tencent.com/developers/company/callback_types_contracts_sign
<br/> 用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档 https://qian.tencent.com/developers/company/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83

                     * @return CallbackUrl 已废弃，回调配置统一使用企业应用管理-应用集成-企业版应用中的配置 
<br/> 通过一码多扫二维码发起的合同，回调消息可参考文档 https://qian.tencent.com/developers/company/callback_types_contracts_sign
<br/> 用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档 https://qian.tencent.com/developers/company/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83

                     * @deprecated
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置已废弃，回调配置统一使用企业应用管理-应用集成-企业版应用中的配置 
<br/> 通过一码多扫二维码发起的合同，回调消息可参考文档 https://qian.tencent.com/developers/company/callback_types_contracts_sign
<br/> 用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档 https://qian.tencent.com/developers/company/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83

                     * @param _callbackUrl 已废弃，回调配置统一使用企业应用管理-应用集成-企业版应用中的配置 
<br/> 通过一码多扫二维码发起的合同，回调消息可参考文档 https://qian.tencent.com/developers/company/callback_types_contracts_sign
<br/> 用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档 https://qian.tencent.com/developers/company/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83

                     * @deprecated
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * @deprecated
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取限制二维码用户条件（已弃用）
                     * @return ApproverRestrictions 限制二维码用户条件（已弃用）
                     * @deprecated
                     */
                    ApproverRestriction GetApproverRestrictions() const;

                    /**
                     * 设置限制二维码用户条件（已弃用）
                     * @param _approverRestrictions 限制二维码用户条件（已弃用）
                     * @deprecated
                     */
                    void SetApproverRestrictions(const ApproverRestriction& _approverRestrictions);

                    /**
                     * 判断参数 ApproverRestrictions 是否已赋值
                     * @return ApproverRestrictions 是否已赋值
                     * @deprecated
                     */
                    bool ApproverRestrictionsHasBeenSet() const;

                private:

                    /**
                     * 用户信息，其中UserId为必填参数
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 签署流程名称，最大长度不超过200字符
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 最大可发起签署流程份数，默认5份 
<br/>发起流程数量超过此上限后二维码自动失效
                     */
                    int64_t m_maxFlowNum;
                    bool m_maxFlowNumHasBeenSet;

                    /**
                     * 签署流程有效天数 
<br/>默认7天 
<br/>最高设置不超过30天
                     */
                    int64_t m_flowEffectiveDay;
                    bool m_flowEffectiveDayHasBeenSet;

                    /**
                     * 二维码有效天数 默认7天 最高设置不超过90天
                     */
                    int64_t m_qrEffectiveDay;
                    bool m_qrEffectiveDayHasBeenSet;

                    /**
                     * 指定的签署人信息
<br/>指定后，则只允许指定的签署人扫码签署
                     */
                    std::vector<ApproverRestriction> m_restrictions;
                    bool m_restrictionsHasBeenSet;

                    /**
                     * 用户自定义字段
<br/>回调的时候会进行透传，长度需要小于20480
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 已废弃，回调配置统一使用企业应用管理-应用集成-企业版应用中的配置 
<br/> 通过一码多扫二维码发起的合同，回调消息可参考文档 https://qian.tencent.com/developers/company/callback_types_contracts_sign
<br/> 用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档 https://qian.tencent.com/developers/company/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83

                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 限制二维码用户条件（已弃用）
                     */
                    ApproverRestriction m_approverRestrictions;
                    bool m_approverRestrictionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMULTIFLOWSIGNQRCODEREQUEST_H_
