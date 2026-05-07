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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEMULTIFLOWSIGNQRCODEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEMULTIFLOWSIGNQRCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/ApproverRestriction.h>
#include <tencentcloud/essbasic/v20210526/model/ApproverComponentLimitType.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateMultiFlowSignQRCode请求参数结构体
                */
                class ChannelCreateMultiFlowSignQRCodeRequest : public AbstractModel
                {
                public:
                    ChannelCreateMultiFlowSignQRCodeRequest();
                    ~ChannelCreateMultiFlowSignQRCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
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
                     * 获取<p>合同模板ID，为32位字符串。</p>
                     * @return TemplateId <p>合同模板ID，为32位字符串。</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>合同模板ID，为32位字符串。</p>
                     * @param _templateId <p>合同模板ID，为32位字符串。</p>
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
                     * 获取<p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。 该名称还将用于合同签署完成后的下载文件名。</p>
                     * @return FlowName <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。 该名称还将用于合同签署完成后的下载文件名。</p>
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置<p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。 该名称还将用于合同签署完成后的下载文件名。</p>
                     * @param _flowName <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。 该名称还将用于合同签署完成后的下载文件名。</p>
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
                     * 获取<p>通过此二维码可发起的流程最大限额，如未明确指定，默认为5份。 一旦发起流程数超越该限制，该二维码将自动失效。</p>
                     * @return MaxFlowNum <p>通过此二维码可发起的流程最大限额，如未明确指定，默认为5份。 一旦发起流程数超越该限制，该二维码将自动失效。</p>
                     * 
                     */
                    int64_t GetMaxFlowNum() const;

                    /**
                     * 设置<p>通过此二维码可发起的流程最大限额，如未明确指定，默认为5份。 一旦发起流程数超越该限制，该二维码将自动失效。</p>
                     * @param _maxFlowNum <p>通过此二维码可发起的流程最大限额，如未明确指定，默认为5份。 一旦发起流程数超越该限制，该二维码将自动失效。</p>
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
                     * 获取<p>合同流程的签署有效期限，若未设定签署截止日期，则默认为自合同流程创建起的7天内截止。 若在签署截止日期前未完成签署，合同状态将变更为已过期，从而导致合同无效。 最长设定期限不得超过30天。</p>
                     * @return FlowEffectiveDay <p>合同流程的签署有效期限，若未设定签署截止日期，则默认为自合同流程创建起的7天内截止。 若在签署截止日期前未完成签署，合同状态将变更为已过期，从而导致合同无效。 最长设定期限不得超过30天。</p>
                     * 
                     */
                    int64_t GetFlowEffectiveDay() const;

                    /**
                     * 设置<p>合同流程的签署有效期限，若未设定签署截止日期，则默认为自合同流程创建起的7天内截止。 若在签署截止日期前未完成签署，合同状态将变更为已过期，从而导致合同无效。 最长设定期限不得超过30天。</p>
                     * @param _flowEffectiveDay <p>合同流程的签署有效期限，若未设定签署截止日期，则默认为自合同流程创建起的7天内截止。 若在签署截止日期前未完成签署，合同状态将变更为已过期，从而导致合同无效。 最长设定期限不得超过30天。</p>
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
                     * 获取<p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：<br> <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul></p><p>效果如下:<br><img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p><p>枚举值：</p><ul><li>0： 合同</li><li>1： 文件</li><li>2： 协议</li><li>3： 文书</li></ul><p>默认值：0</p>
                     * @return FlowDisplayType <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：<br> <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul></p><p>效果如下:<br><img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p><p>枚举值：</p><ul><li>0： 合同</li><li>1： 文件</li><li>2： 协议</li><li>3： 文书</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetFlowDisplayType() const;

                    /**
                     * 设置<p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：<br> <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul></p><p>效果如下:<br><img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p><p>枚举值：</p><ul><li>0： 合同</li><li>1： 文件</li><li>2： 协议</li><li>3： 文书</li></ul><p>默认值：0</p>
                     * @param _flowDisplayType <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：<br> <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul></p><p>效果如下:<br><img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p><p>枚举值：</p><ul><li>0： 合同</li><li>1： 文件</li><li>2： 协议</li><li>3： 文书</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetFlowDisplayType(const int64_t& _flowDisplayType);

                    /**
                     * 判断参数 FlowDisplayType 是否已赋值
                     * @return FlowDisplayType 是否已赋值
                     * 
                     */
                    bool FlowDisplayTypeHasBeenSet() const;

                    /**
                     * 获取<p>二维码的有效期限，默认为7天，最高设定不得超过90天。 一旦超过二维码的有效期限，该二维码将自动失效。</p>
                     * @return QrEffectiveDay <p>二维码的有效期限，默认为7天，最高设定不得超过90天。 一旦超过二维码的有效期限，该二维码将自动失效。</p>
                     * @deprecated
                     */
                    int64_t GetQrEffectiveDay() const;

                    /**
                     * 设置<p>二维码的有效期限，默认为7天，最高设定不得超过90天。 一旦超过二维码的有效期限，该二维码将自动失效。</p>
                     * @param _qrEffectiveDay <p>二维码的有效期限，默认为7天，最高设定不得超过90天。 一旦超过二维码的有效期限，该二维码将自动失效。</p>
                     * @deprecated
                     */
                    void SetQrEffectiveDay(const int64_t& _qrEffectiveDay);

                    /**
                     * 判断参数 QrEffectiveDay 是否已赋值
                     * @return QrEffectiveDay 是否已赋值
                     * @deprecated
                     */
                    bool QrEffectiveDayHasBeenSet() const;

                    /**
                     * 获取<p>指定签署人信息。 在指定签署人后，仅允许特定签署人通过扫描二维码进行签署。</p>
                     * @return Restrictions <p>指定签署人信息。 在指定签署人后，仅允许特定签署人通过扫描二维码进行签署。</p>
                     * 
                     */
                    std::vector<ApproverRestriction> GetRestrictions() const;

                    /**
                     * 设置<p>指定签署人信息。 在指定签署人后，仅允许特定签署人通过扫描二维码进行签署。</p>
                     * @param _restrictions <p>指定签署人信息。 在指定签署人后，仅允许特定签署人通过扫描二维码进行签署。</p>
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
                     * 获取<p>指定签署方经办人控件类型是个人印章签署控件（SIGN_SIGNATURE） 时，可选的签名方式。</p>
                     * @return ApproverComponentLimitTypes <p>指定签署方经办人控件类型是个人印章签署控件（SIGN_SIGNATURE） 时，可选的签名方式。</p>
                     * 
                     */
                    std::vector<ApproverComponentLimitType> GetApproverComponentLimitTypes() const;

                    /**
                     * 设置<p>指定签署方经办人控件类型是个人印章签署控件（SIGN_SIGNATURE） 时，可选的签名方式。</p>
                     * @param _approverComponentLimitTypes <p>指定签署方经办人控件类型是个人印章签署控件（SIGN_SIGNATURE） 时，可选的签名方式。</p>
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
                     * 获取<p>已废弃，回调配置统一使用企业应用管理-应用集成-第三方应用中的配置<br><br> 通过一码多扫二维码发起的合同，回调消息可参考文档 https://qian.tencent.com/developers/partner/callback_types_contracts_sign<br><br> 用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档 https://qian.tencent.com/developers/partner/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83</p>
                     * @return CallbackUrl <p>已废弃，回调配置统一使用企业应用管理-应用集成-第三方应用中的配置<br><br> 通过一码多扫二维码发起的合同，回调消息可参考文档 https://qian.tencent.com/developers/partner/callback_types_contracts_sign<br><br> 用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档 https://qian.tencent.com/developers/partner/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83</p>
                     * @deprecated
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>已废弃，回调配置统一使用企业应用管理-应用集成-第三方应用中的配置<br><br> 通过一码多扫二维码发起的合同，回调消息可参考文档 https://qian.tencent.com/developers/partner/callback_types_contracts_sign<br><br> 用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档 https://qian.tencent.com/developers/partner/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83</p>
                     * @param _callbackUrl <p>已废弃，回调配置统一使用企业应用管理-应用集成-第三方应用中的配置<br><br> 通过一码多扫二维码发起的合同，回调消息可参考文档 https://qian.tencent.com/developers/partner/callback_types_contracts_sign<br><br> 用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档 https://qian.tencent.com/developers/partner/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83</p>
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
                     * 获取<p>限制二维码用户条件（已弃用）</p>
                     * @return ApproverRestrictions <p>限制二维码用户条件（已弃用）</p>
                     * @deprecated
                     */
                    ApproverRestriction GetApproverRestrictions() const;

                    /**
                     * 设置<p>限制二维码用户条件（已弃用）</p>
                     * @param _approverRestrictions <p>限制二维码用户条件（已弃用）</p>
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
                     * 获取<p>暂未开放</p>
                     * @return Operator <p>暂未开放</p>
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>暂未开放</p>
                     * @param _operator <p>暂未开放</p>
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>禁止个人用户重复签署，默认不禁止，即同一用户可多次扫码签署多份合同。若要求同一用户仅能扫码签署一份合同，请传入true。</p>
                     * @return ForbidPersonalMultipleSign <p>禁止个人用户重复签署，默认不禁止，即同一用户可多次扫码签署多份合同。若要求同一用户仅能扫码签署一份合同，请传入true。</p>
                     * 
                     */
                    bool GetForbidPersonalMultipleSign() const;

                    /**
                     * 设置<p>禁止个人用户重复签署，默认不禁止，即同一用户可多次扫码签署多份合同。若要求同一用户仅能扫码签署一份合同，请传入true。</p>
                     * @param _forbidPersonalMultipleSign <p>禁止个人用户重复签署，默认不禁止，即同一用户可多次扫码签署多份合同。若要求同一用户仅能扫码签署一份合同，请传入true。</p>
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
                     * 获取<p>合同流程名称是否应包含扫码签署人的信息，且遵循特定格式（flowname-姓名-手机号后四位）。 例如，通过参数FlowName设定的扫码发起合同名称为“员工入职合同”，当扫码人张三（手机号18800009527）扫码签署时，合同名称将自动生成为“员工入职合同-张三-9527”。</p>
                     * @return FlowNameAppendScannerInfo <p>合同流程名称是否应包含扫码签署人的信息，且遵循特定格式（flowname-姓名-手机号后四位）。 例如，通过参数FlowName设定的扫码发起合同名称为“员工入职合同”，当扫码人张三（手机号18800009527）扫码签署时，合同名称将自动生成为“员工入职合同-张三-9527”。</p>
                     * 
                     */
                    bool GetFlowNameAppendScannerInfo() const;

                    /**
                     * 设置<p>合同流程名称是否应包含扫码签署人的信息，且遵循特定格式（flowname-姓名-手机号后四位）。 例如，通过参数FlowName设定的扫码发起合同名称为“员工入职合同”，当扫码人张三（手机号18800009527）扫码签署时，合同名称将自动生成为“员工入职合同-张三-9527”。</p>
                     * @param _flowNameAppendScannerInfo <p>合同流程名称是否应包含扫码签署人的信息，且遵循特定格式（flowname-姓名-手机号后四位）。 例如，通过参数FlowName设定的扫码发起合同名称为“员工入职合同”，当扫码人张三（手机号18800009527）扫码签署时，合同名称将自动生成为“员工入职合同-张三-9527”。</p>
                     * 
                     */
                    void SetFlowNameAppendScannerInfo(const bool& _flowNameAppendScannerInfo);

                    /**
                     * 判断参数 FlowNameAppendScannerInfo 是否已赋值
                     * @return FlowNameAppendScannerInfo 是否已赋值
                     * 
                     */
                    bool FlowNameAppendScannerInfoHasBeenSet() const;

                    /**
                     * 获取<p>签署二维码的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成,会在生成的二维码图片上展示，若为空，则使用FlowName</p>
                     * @return QrCodeName <p>签署二维码的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成,会在生成的二维码图片上展示，若为空，则使用FlowName</p>
                     * 
                     */
                    std::string GetQrCodeName() const;

                    /**
                     * 设置<p>签署二维码的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成,会在生成的二维码图片上展示，若为空，则使用FlowName</p>
                     * @param _qrCodeName <p>签署二维码的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成,会在生成的二维码图片上展示，若为空，则使用FlowName</p>
                     * 
                     */
                    void SetQrCodeName(const std::string& _qrCodeName);

                    /**
                     * 判断参数 QrCodeName 是否已赋值
                     * @return QrCodeName 是否已赋值
                     * 
                     */
                    bool QrCodeNameHasBeenSet() const;

                    /**
                     * 获取<p>签署二维码截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为签署二维码创建后的7天时截止，最长可设置为签署二维码创建后的365天时截止。</p>
                     * @return QrCodeExpiredOn <p>签署二维码截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为签署二维码创建后的7天时截止，最长可设置为签署二维码创建后的365天时截止。</p>
                     * 
                     */
                    int64_t GetQrCodeExpiredOn() const;

                    /**
                     * 设置<p>签署二维码截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为签署二维码创建后的7天时截止，最长可设置为签署二维码创建后的365天时截止。</p>
                     * @param _qrCodeExpiredOn <p>签署二维码截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为签署二维码创建后的7天时截止，最长可设置为签署二维码创建后的365天时截止。</p>
                     * 
                     */
                    void SetQrCodeExpiredOn(const int64_t& _qrCodeExpiredOn);

                    /**
                     * 判断参数 QrCodeExpiredOn 是否已赋值
                     * @return QrCodeExpiredOn 是否已赋值
                     * 
                     */
                    bool QrCodeExpiredOnHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>合同模板ID，为32位字符串。</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。 该名称还将用于合同签署完成后的下载文件名。</p>
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * <p>通过此二维码可发起的流程最大限额，如未明确指定，默认为5份。 一旦发起流程数超越该限制，该二维码将自动失效。</p>
                     */
                    int64_t m_maxFlowNum;
                    bool m_maxFlowNumHasBeenSet;

                    /**
                     * <p>合同流程的签署有效期限，若未设定签署截止日期，则默认为自合同流程创建起的7天内截止。 若在签署截止日期前未完成签署，合同状态将变更为已过期，从而导致合同无效。 最长设定期限不得超过30天。</p>
                     */
                    int64_t m_flowEffectiveDay;
                    bool m_flowEffectiveDayHasBeenSet;

                    /**
                     * <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：<br> <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul></p><p>效果如下:<br><img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p><p>枚举值：</p><ul><li>0： 合同</li><li>1： 文件</li><li>2： 协议</li><li>3： 文书</li></ul><p>默认值：0</p>
                     */
                    int64_t m_flowDisplayType;
                    bool m_flowDisplayTypeHasBeenSet;

                    /**
                     * <p>二维码的有效期限，默认为7天，最高设定不得超过90天。 一旦超过二维码的有效期限，该二维码将自动失效。</p>
                     */
                    int64_t m_qrEffectiveDay;
                    bool m_qrEffectiveDayHasBeenSet;

                    /**
                     * <p>指定签署人信息。 在指定签署人后，仅允许特定签署人通过扫描二维码进行签署。</p>
                     */
                    std::vector<ApproverRestriction> m_restrictions;
                    bool m_restrictionsHasBeenSet;

                    /**
                     * <p>指定签署方经办人控件类型是个人印章签署控件（SIGN_SIGNATURE） 时，可选的签名方式。</p>
                     */
                    std::vector<ApproverComponentLimitType> m_approverComponentLimitTypes;
                    bool m_approverComponentLimitTypesHasBeenSet;

                    /**
                     * <p>已废弃，回调配置统一使用企业应用管理-应用集成-第三方应用中的配置<br><br> 通过一码多扫二维码发起的合同，回调消息可参考文档 https://qian.tencent.com/developers/partner/callback_types_contracts_sign<br><br> 用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档 https://qian.tencent.com/developers/partner/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>限制二维码用户条件（已弃用）</p>
                     */
                    ApproverRestriction m_approverRestrictions;
                    bool m_approverRestrictionsHasBeenSet;

                    /**
                     * <p>暂未开放</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>禁止个人用户重复签署，默认不禁止，即同一用户可多次扫码签署多份合同。若要求同一用户仅能扫码签署一份合同，请传入true。</p>
                     */
                    bool m_forbidPersonalMultipleSign;
                    bool m_forbidPersonalMultipleSignHasBeenSet;

                    /**
                     * <p>合同流程名称是否应包含扫码签署人的信息，且遵循特定格式（flowname-姓名-手机号后四位）。 例如，通过参数FlowName设定的扫码发起合同名称为“员工入职合同”，当扫码人张三（手机号18800009527）扫码签署时，合同名称将自动生成为“员工入职合同-张三-9527”。</p>
                     */
                    bool m_flowNameAppendScannerInfo;
                    bool m_flowNameAppendScannerInfoHasBeenSet;

                    /**
                     * <p>签署二维码的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成,会在生成的二维码图片上展示，若为空，则使用FlowName</p>
                     */
                    std::string m_qrCodeName;
                    bool m_qrCodeNameHasBeenSet;

                    /**
                     * <p>签署二维码截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为签署二维码创建后的7天时截止，最长可设置为签署二维码创建后的365天时截止。</p>
                     */
                    int64_t m_qrCodeExpiredOn;
                    bool m_qrCodeExpiredOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEMULTIFLOWSIGNQRCODEREQUEST_H_
