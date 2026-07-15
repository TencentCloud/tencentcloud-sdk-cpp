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
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li></ul>
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li></ul>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li></ul>
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li></ul>
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
                     * 获取<p>第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。<br>注: <code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p>
                     * @return ProxyOrganizationName <p>第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。<br>注: <code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p>
                     * 
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置<p>第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。<br>注: <code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p>
                     * @param _proxyOrganizationName <p>第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。<br>注: <code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p>
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
                     * 获取<p>营业执照正面照(PNG或JPG) base64格式, 大小不超过5M</p>
                     * @return BusinessLicense <p>营业执照正面照(PNG或JPG) base64格式, 大小不超过5M</p>
                     * 
                     */
                    std::string GetBusinessLicense() const;

                    /**
                     * 设置<p>营业执照正面照(PNG或JPG) base64格式, 大小不超过5M</p>
                     * @param _businessLicense <p>营业执照正面照(PNG或JPG) base64格式, 大小不超过5M</p>
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
                     * 获取<p>第三方平台子客企业统一社会信用代码，最大长度200个字符</p>
                     * @return UniformSocialCreditCode <p>第三方平台子客企业统一社会信用代码，最大长度200个字符</p>
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置<p>第三方平台子客企业统一社会信用代码，最大长度200个字符</p>
                     * @param _uniformSocialCreditCode <p>第三方平台子客企业统一社会信用代码，最大长度200个字符</p>
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
                     * 获取<p>第三方平台子客企业法定代表人的名字</p>
                     * @return ProxyLegalName <p>第三方平台子客企业法定代表人的名字</p>
                     * 
                     */
                    std::string GetProxyLegalName() const;

                    /**
                     * 设置<p>第三方平台子客企业法定代表人的名字</p>
                     * @param _proxyLegalName <p>第三方平台子客企业法定代表人的名字</p>
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
                     * 获取<p>第三方平台子客企业法定代表人的证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li></ul>注: <code>现在仅支持ID_CARD中国大陆居民身份证类型</code>
                     * @return ProxyLegalIdCardType <p>第三方平台子客企业法定代表人的证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li></ul>注: <code>现在仅支持ID_CARD中国大陆居民身份证类型</code>
                     * 
                     */
                    std::string GetProxyLegalIdCardType() const;

                    /**
                     * 设置<p>第三方平台子客企业法定代表人的证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li></ul>注: <code>现在仅支持ID_CARD中国大陆居民身份证类型</code>
                     * @param _proxyLegalIdCardType <p>第三方平台子客企业法定代表人的证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li></ul>注: <code>现在仅支持ID_CARD中国大陆居民身份证类型</code>
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
                     * 获取<p>第三方平台子客企业法定代表人的证件号码, 应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li></ul>
                     * @return ProxyLegalIdCardNumber <p>第三方平台子客企业法定代表人的证件号码, 应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li></ul>
                     * 
                     */
                    std::string GetProxyLegalIdCardNumber() const;

                    /**
                     * 设置<p>第三方平台子客企业法定代表人的证件号码, 应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li></ul>
                     * @param _proxyLegalIdCardNumber <p>第三方平台子客企业法定代表人的证件号码, 应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li></ul>
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
                     * 获取<p>第三方平台子客企业详细住所，最大长度500个字符</p><p>注：<code>需要符合省市区详情的格式例如： XX省XX市XX区街道具体地址</code></p>
                     * @return ProxyAddress <p>第三方平台子客企业详细住所，最大长度500个字符</p><p>注：<code>需要符合省市区详情的格式例如： XX省XX市XX区街道具体地址</code></p>
                     * 
                     */
                    std::string GetProxyAddress() const;

                    /**
                     * 设置<p>第三方平台子客企业详细住所，最大长度500个字符</p><p>注：<code>需要符合省市区详情的格式例如： XX省XX市XX区街道具体地址</code></p>
                     * @param _proxyAddress <p>第三方平台子客企业详细住所，最大长度500个字符</p><p>注：<code>需要符合省市区详情的格式例如： XX省XX市XX区街道具体地址</code></p>
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
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li></ul>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。<br>注: <code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p>
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * <p>营业执照正面照(PNG或JPG) base64格式, 大小不超过5M</p>
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * <p>第三方平台子客企业统一社会信用代码，最大长度200个字符</p>
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * <p>第三方平台子客企业法定代表人的名字</p>
                     */
                    std::string m_proxyLegalName;
                    bool m_proxyLegalNameHasBeenSet;

                    /**
                     * <p>暂未开放</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>第三方平台子客企业法定代表人的证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li></ul>注: <code>现在仅支持ID_CARD中国大陆居民身份证类型</code>
                     */
                    std::string m_proxyLegalIdCardType;
                    bool m_proxyLegalIdCardTypeHasBeenSet;

                    /**
                     * <p>第三方平台子客企业法定代表人的证件号码, 应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li></ul>
                     */
                    std::string m_proxyLegalIdCardNumber;
                    bool m_proxyLegalIdCardNumberHasBeenSet;

                    /**
                     * <p>第三方平台子客企业详细住所，最大长度500个字符</p><p>注：<code>需要符合省市区详情的格式例如： XX省XX市XX区街道具体地址</code></p>
                     */
                    std::string m_proxyAddress;
                    bool m_proxyAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONREQUEST_H_
