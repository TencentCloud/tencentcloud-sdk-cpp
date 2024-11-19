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
#include <tencentcloud/ess/v20201111/model/ApproverComponentLimitType.h>


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
                     * 获取执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
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
                     * 获取合同模板ID，为32位字符串。
可登录腾讯电子签控制台，在 "模板"->"模板中心"->"列表展示设置"选中模板 ID 中查看某个模板的TemplateId(在页面中展示为模板ID)。
                     * @return TemplateId 合同模板ID，为32位字符串。
可登录腾讯电子签控制台，在 "模板"->"模板中心"->"列表展示设置"选中模板 ID 中查看某个模板的TemplateId(在页面中展示为模板ID)。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置合同模板ID，为32位字符串。
可登录腾讯电子签控制台，在 "模板"->"模板中心"->"列表展示设置"选中模板 ID 中查看某个模板的TemplateId(在页面中展示为模板ID)。
                     * @param _templateId 合同模板ID，为32位字符串。
可登录腾讯电子签控制台，在 "模板"->"模板中心"->"列表展示设置"选中模板 ID 中查看某个模板的TemplateId(在页面中展示为模板ID)。
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
                     * 获取合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
                     * @return FlowName 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
                     * @param _flowName 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
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
                     * 获取通过此二维码可发起的流程最大限额，如未明确指定，默认为5份。
一旦发起流程数超越该限制，该二维码将自动失效。
                     * @return MaxFlowNum 通过此二维码可发起的流程最大限额，如未明确指定，默认为5份。
一旦发起流程数超越该限制，该二维码将自动失效。
                     * 
                     */
                    int64_t GetMaxFlowNum() const;

                    /**
                     * 设置通过此二维码可发起的流程最大限额，如未明确指定，默认为5份。
一旦发起流程数超越该限制，该二维码将自动失效。
                     * @param _maxFlowNum 通过此二维码可发起的流程最大限额，如未明确指定，默认为5份。
一旦发起流程数超越该限制，该二维码将自动失效。
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
                     * 获取二维码的有效期限，默认为7天，最高设定不得超过90天。
一旦超过二维码的有效期限，该二维码将自动失效。
                     * @return QrEffectiveDay 二维码的有效期限，默认为7天，最高设定不得超过90天。
一旦超过二维码的有效期限，该二维码将自动失效。
                     * 
                     */
                    int64_t GetQrEffectiveDay() const;

                    /**
                     * 设置二维码的有效期限，默认为7天，最高设定不得超过90天。
一旦超过二维码的有效期限，该二维码将自动失效。
                     * @param _qrEffectiveDay 二维码的有效期限，默认为7天，最高设定不得超过90天。
一旦超过二维码的有效期限，该二维码将自动失效。
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
                     * 获取合同流程的签署有效期限，若未设定签署截止日期，则默认为自合同流程创建起的7天内截止。
若在签署截止日期前未完成签署，合同状态将变更为已过期，从而导致合同无效。
最长设定期限不得超过30天。
                     * @return FlowEffectiveDay 合同流程的签署有效期限，若未设定签署截止日期，则默认为自合同流程创建起的7天内截止。
若在签署截止日期前未完成签署，合同状态将变更为已过期，从而导致合同无效。
最长设定期限不得超过30天。
                     * 
                     */
                    int64_t GetFlowEffectiveDay() const;

                    /**
                     * 设置合同流程的签署有效期限，若未设定签署截止日期，则默认为自合同流程创建起的7天内截止。
若在签署截止日期前未完成签署，合同状态将变更为已过期，从而导致合同无效。
最长设定期限不得超过30天。
                     * @param _flowEffectiveDay 合同流程的签署有效期限，若未设定签署截止日期，则默认为自合同流程创建起的7天内截止。
若在签署截止日期前未完成签署，合同状态将变更为已过期，从而导致合同无效。
最长设定期限不得超过30天。
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
                     * 获取指定签署人信息。
在指定签署人后，仅允许特定签署人通过扫描二维码进行签署。
                     * @return Restrictions 指定签署人信息。
在指定签署人后，仅允许特定签署人通过扫描二维码进行签署。
                     * 
                     */
                    std::vector<ApproverRestriction> GetRestrictions() const;

                    /**
                     * 设置指定签署人信息。
在指定签署人后，仅允许特定签署人通过扫描二维码进行签署。
                     * @param _restrictions 指定签署人信息。
在指定签署人后，仅允许特定签署人通过扫描二维码进行签署。
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
                     * 获取调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * @return UserData 调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * @param _userData 调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
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
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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

                    /**
                     * 获取指定签署方在使用个人印章签署控件（SIGN_SIGNATURE） 时可使用的签署方式：自由书写、正楷临摹、系统签名、个人印章。
                     * @return ApproverComponentLimitTypes 指定签署方在使用个人印章签署控件（SIGN_SIGNATURE） 时可使用的签署方式：自由书写、正楷临摹、系统签名、个人印章。
                     * 
                     */
                    std::vector<ApproverComponentLimitType> GetApproverComponentLimitTypes() const;

                    /**
                     * 设置指定签署方在使用个人印章签署控件（SIGN_SIGNATURE） 时可使用的签署方式：自由书写、正楷临摹、系统签名、个人印章。
                     * @param _approverComponentLimitTypes 指定签署方在使用个人印章签署控件（SIGN_SIGNATURE） 时可使用的签署方式：自由书写、正楷临摹、系统签名、个人印章。
                     * 
                     */
                    void SetApproverComponentLimitTypes(const std::vector<ApproverComponentLimitType>& _approverComponentLimitTypes);

                    /**
                     * 判断参数 ApproverComponentLimitTypes 是否已赋值
                     * @return ApproverComponentLimitTypes 是否已赋值
                     * 
                     */
                    bool ApproverComponentLimitTypesHasBeenSet() const;

                    /**
                     * 获取禁止个人用户重复签署，默认不禁止，即同一用户可多次扫码签署多份合同。若要求同一用户仅能扫码签署一份合同，请传入true。
                     * @return ForbidPersonalMultipleSign 禁止个人用户重复签署，默认不禁止，即同一用户可多次扫码签署多份合同。若要求同一用户仅能扫码签署一份合同，请传入true。
                     * 
                     */
                    bool GetForbidPersonalMultipleSign() const;

                    /**
                     * 设置禁止个人用户重复签署，默认不禁止，即同一用户可多次扫码签署多份合同。若要求同一用户仅能扫码签署一份合同，请传入true。
                     * @param _forbidPersonalMultipleSign 禁止个人用户重复签署，默认不禁止，即同一用户可多次扫码签署多份合同。若要求同一用户仅能扫码签署一份合同，请传入true。
                     * 
                     */
                    void SetForbidPersonalMultipleSign(const bool& _forbidPersonalMultipleSign);

                    /**
                     * 判断参数 ForbidPersonalMultipleSign 是否已赋值
                     * @return ForbidPersonalMultipleSign 是否已赋值
                     * 
                     */
                    bool ForbidPersonalMultipleSignHasBeenSet() const;

                    /**
                     * 获取合同流程名称是否应包含扫码签署人的信息，且遵循特定格式（flowname-姓名-手机号后四位）。
例如，通过参数FlowName设定的扫码发起合同名称为“员工入职合同”，当扫码人张三（手机号18800009527）扫码签署时，合同名称将自动生成为“员工入职合同-张三-9527”。
                     * @return FlowNameAppendScannerInfo 合同流程名称是否应包含扫码签署人的信息，且遵循特定格式（flowname-姓名-手机号后四位）。
例如，通过参数FlowName设定的扫码发起合同名称为“员工入职合同”，当扫码人张三（手机号18800009527）扫码签署时，合同名称将自动生成为“员工入职合同-张三-9527”。
                     * 
                     */
                    bool GetFlowNameAppendScannerInfo() const;

                    /**
                     * 设置合同流程名称是否应包含扫码签署人的信息，且遵循特定格式（flowname-姓名-手机号后四位）。
例如，通过参数FlowName设定的扫码发起合同名称为“员工入职合同”，当扫码人张三（手机号18800009527）扫码签署时，合同名称将自动生成为“员工入职合同-张三-9527”。
                     * @param _flowNameAppendScannerInfo 合同流程名称是否应包含扫码签署人的信息，且遵循特定格式（flowname-姓名-手机号后四位）。
例如，通过参数FlowName设定的扫码发起合同名称为“员工入职合同”，当扫码人张三（手机号18800009527）扫码签署时，合同名称将自动生成为“员工入职合同-张三-9527”。
                     * 
                     */
                    void SetFlowNameAppendScannerInfo(const bool& _flowNameAppendScannerInfo);

                    /**
                     * 判断参数 FlowNameAppendScannerInfo 是否已赋值
                     * @return FlowNameAppendScannerInfo 是否已赋值
                     * 
                     */
                    bool FlowNameAppendScannerInfoHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同模板ID，为32位字符串。
可登录腾讯电子签控制台，在 "模板"->"模板中心"->"列表展示设置"选中模板 ID 中查看某个模板的TemplateId(在页面中展示为模板ID)。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 通过此二维码可发起的流程最大限额，如未明确指定，默认为5份。
一旦发起流程数超越该限制，该二维码将自动失效。
                     */
                    int64_t m_maxFlowNum;
                    bool m_maxFlowNumHasBeenSet;

                    /**
                     * 二维码的有效期限，默认为7天，最高设定不得超过90天。
一旦超过二维码的有效期限，该二维码将自动失效。
                     */
                    int64_t m_qrEffectiveDay;
                    bool m_qrEffectiveDayHasBeenSet;

                    /**
                     * 合同流程的签署有效期限，若未设定签署截止日期，则默认为自合同流程创建起的7天内截止。
若在签署截止日期前未完成签署，合同状态将变更为已过期，从而导致合同无效。
最长设定期限不得超过30天。
                     */
                    int64_t m_flowEffectiveDay;
                    bool m_flowEffectiveDayHasBeenSet;

                    /**
                     * 指定签署人信息。
在指定签署人后，仅允许特定签署人通过扫描二维码进行签署。
                     */
                    std::vector<ApproverRestriction> m_restrictions;
                    bool m_restrictionsHasBeenSet;

                    /**
                     * 调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
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
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 限制二维码用户条件（已弃用）
                     */
                    ApproverRestriction m_approverRestrictions;
                    bool m_approverRestrictionsHasBeenSet;

                    /**
                     * 指定签署方在使用个人印章签署控件（SIGN_SIGNATURE） 时可使用的签署方式：自由书写、正楷临摹、系统签名、个人印章。
                     */
                    std::vector<ApproverComponentLimitType> m_approverComponentLimitTypes;
                    bool m_approverComponentLimitTypesHasBeenSet;

                    /**
                     * 禁止个人用户重复签署，默认不禁止，即同一用户可多次扫码签署多份合同。若要求同一用户仅能扫码签署一份合同，请传入true。
                     */
                    bool m_forbidPersonalMultipleSign;
                    bool m_forbidPersonalMultipleSignHasBeenSet;

                    /**
                     * 合同流程名称是否应包含扫码签署人的信息，且遵循特定格式（flowname-姓名-手机号后四位）。
例如，通过参数FlowName设定的扫码发起合同名称为“员工入职合同”，当扫码人张三（手机号18800009527）扫码签署时，合同名称将自动生成为“员工入职合同-张三-9527”。
                     */
                    bool m_flowNameAppendScannerInfo;
                    bool m_flowNameAppendScannerInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMULTIFLOWSIGNQRCODEREQUEST_H_
