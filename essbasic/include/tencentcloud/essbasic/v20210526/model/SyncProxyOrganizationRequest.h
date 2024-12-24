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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
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
                * SyncProxyOrganization请求参数结构体
                */
                class SyncProxyOrganizationRequest : public AbstractModel
                {
                public:
                    SyncProxyOrganizationRequest();
                    ~SyncProxyOrganizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
</ul>

                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
</ul>

                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
</ul>

                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
</ul>

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
                     * 获取第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。
注: `如果名称中包含英文括号()，请使用中文括号（）代替。`
                     * @return ProxyOrganizationName 第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。
注: `如果名称中包含英文括号()，请使用中文括号（）代替。`
                     * 
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。
注: `如果名称中包含英文括号()，请使用中文括号（）代替。`
                     * @param _proxyOrganizationName 第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。
注: `如果名称中包含英文括号()，请使用中文括号（）代替。`
                     * 
                     */
                    void SetProxyOrganizationName(const std::string& _proxyOrganizationName);

                    /**
                     * 判断参数 ProxyOrganizationName 是否已赋值
                     * @return ProxyOrganizationName 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationNameHasBeenSet() const;

                    /**
                     * 获取营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     * @return BusinessLicense 营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     * 
                     */
                    std::string GetBusinessLicense() const;

                    /**
                     * 设置营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     * @param _businessLicense 营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     * 
                     */
                    void SetBusinessLicense(const std::string& _businessLicense);

                    /**
                     * 判断参数 BusinessLicense 是否已赋值
                     * @return BusinessLicense 是否已赋值
                     * 
                     */
                    bool BusinessLicenseHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业统一社会信用代码，最大长度200个字符
                     * @return UniformSocialCreditCode 第三方平台子客企业统一社会信用代码，最大长度200个字符
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置第三方平台子客企业统一社会信用代码，最大长度200个字符
                     * @param _uniformSocialCreditCode 第三方平台子客企业统一社会信用代码，最大长度200个字符
                     * 
                     */
                    void SetUniformSocialCreditCode(const std::string& _uniformSocialCreditCode);

                    /**
                     * 判断参数 UniformSocialCreditCode 是否已赋值
                     * @return UniformSocialCreditCode 是否已赋值
                     * 
                     */
                    bool UniformSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业法定代表人的名字
                     * @return ProxyLegalName 第三方平台子客企业法定代表人的名字
                     * 
                     */
                    std::string GetProxyLegalName() const;

                    /**
                     * 设置第三方平台子客企业法定代表人的名字
                     * @param _proxyLegalName 第三方平台子客企业法定代表人的名字
                     * 
                     */
                    void SetProxyLegalName(const std::string& _proxyLegalName);

                    /**
                     * 判断参数 ProxyLegalName 是否已赋值
                     * @return ProxyLegalName 是否已赋值
                     * 
                     */
                    bool ProxyLegalNameHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param _operator 暂未开放
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
                     * 获取第三方平台子客企业法定代表人的证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li></ul>
注: `现在仅支持ID_CARD中国大陆居民身份证类型`
                     * @return ProxyLegalIdCardType 第三方平台子客企业法定代表人的证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li></ul>
注: `现在仅支持ID_CARD中国大陆居民身份证类型`
                     * 
                     */
                    std::string GetProxyLegalIdCardType() const;

                    /**
                     * 设置第三方平台子客企业法定代表人的证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li></ul>
注: `现在仅支持ID_CARD中国大陆居民身份证类型`
                     * @param _proxyLegalIdCardType 第三方平台子客企业法定代表人的证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li></ul>
注: `现在仅支持ID_CARD中国大陆居民身份证类型`
                     * 
                     */
                    void SetProxyLegalIdCardType(const std::string& _proxyLegalIdCardType);

                    /**
                     * 判断参数 ProxyLegalIdCardType 是否已赋值
                     * @return ProxyLegalIdCardType 是否已赋值
                     * 
                     */
                    bool ProxyLegalIdCardTypeHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业法定代表人的证件号码, 应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li></ul>
                     * @return ProxyLegalIdCardNumber 第三方平台子客企业法定代表人的证件号码, 应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li></ul>
                     * 
                     */
                    std::string GetProxyLegalIdCardNumber() const;

                    /**
                     * 设置第三方平台子客企业法定代表人的证件号码, 应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li></ul>
                     * @param _proxyLegalIdCardNumber 第三方平台子客企业法定代表人的证件号码, 应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li></ul>
                     * 
                     */
                    void SetProxyLegalIdCardNumber(const std::string& _proxyLegalIdCardNumber);

                    /**
                     * 判断参数 ProxyLegalIdCardNumber 是否已赋值
                     * @return ProxyLegalIdCardNumber 是否已赋值
                     * 
                     */
                    bool ProxyLegalIdCardNumberHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业详细住所，最大长度500个字符

注：`需要符合省市区详情的格式例如： XX省XX市XX区街道具体地址`
                     * @return ProxyAddress 第三方平台子客企业详细住所，最大长度500个字符

注：`需要符合省市区详情的格式例如： XX省XX市XX区街道具体地址`
                     * 
                     */
                    std::string GetProxyAddress() const;

                    /**
                     * 设置第三方平台子客企业详细住所，最大长度500个字符

注：`需要符合省市区详情的格式例如： XX省XX市XX区街道具体地址`
                     * @param _proxyAddress 第三方平台子客企业详细住所，最大长度500个字符

注：`需要符合省市区详情的格式例如： XX省XX市XX区街道具体地址`
                     * 
                     */
                    void SetProxyAddress(const std::string& _proxyAddress);

                    /**
                     * 判断参数 ProxyAddress 是否已赋值
                     * @return ProxyAddress 是否已赋值
                     * 
                     */
                    bool ProxyAddressHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
</ul>

                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。
注: `如果名称中包含英文括号()，请使用中文括号（）代替。`
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * 营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * 第三方平台子客企业统一社会信用代码，最大长度200个字符
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 第三方平台子客企业法定代表人的名字
                     */
                    std::string m_proxyLegalName;
                    bool m_proxyLegalNameHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 第三方平台子客企业法定代表人的证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li></ul>
注: `现在仅支持ID_CARD中国大陆居民身份证类型`
                     */
                    std::string m_proxyLegalIdCardType;
                    bool m_proxyLegalIdCardTypeHasBeenSet;

                    /**
                     * 第三方平台子客企业法定代表人的证件号码, 应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li></ul>
                     */
                    std::string m_proxyLegalIdCardNumber;
                    bool m_proxyLegalIdCardNumberHasBeenSet;

                    /**
                     * 第三方平台子客企业详细住所，最大长度500个字符

注：`需要符合省市区详情的格式例如： XX省XX市XX区街道具体地址`
                     */
                    std::string m_proxyAddress;
                    bool m_proxyAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONREQUEST_H_
