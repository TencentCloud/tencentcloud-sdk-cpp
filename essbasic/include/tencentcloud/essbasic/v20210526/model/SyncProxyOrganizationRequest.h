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
                     * 获取应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId必填
                     * @return Agent 应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId必填
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId必填
                     * @param Agent 应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId必填
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取渠道侧合作企业名称，最大长度64个字符
                     * @return ProxyOrganizationName 渠道侧合作企业名称，最大长度64个字符
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置渠道侧合作企业名称，最大长度64个字符
                     * @param ProxyOrganizationName 渠道侧合作企业名称，最大长度64个字符
                     */
                    void SetProxyOrganizationName(const std::string& _proxyOrganizationName);

                    /**
                     * 判断参数 ProxyOrganizationName 是否已赋值
                     * @return ProxyOrganizationName 是否已赋值
                     */
                    bool ProxyOrganizationNameHasBeenSet() const;

                    /**
                     * 获取营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     * @return BusinessLicense 营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     */
                    std::string GetBusinessLicense() const;

                    /**
                     * 设置营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     * @param BusinessLicense 营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     */
                    void SetBusinessLicense(const std::string& _businessLicense);

                    /**
                     * 判断参数 BusinessLicense 是否已赋值
                     * @return BusinessLicense 是否已赋值
                     */
                    bool BusinessLicenseHasBeenSet() const;

                    /**
                     * 获取渠道侧合作企业统一社会信用代码，最大长度200个字符
                     * @return UniformSocialCreditCode 渠道侧合作企业统一社会信用代码，最大长度200个字符
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置渠道侧合作企业统一社会信用代码，最大长度200个字符
                     * @param UniformSocialCreditCode 渠道侧合作企业统一社会信用代码，最大长度200个字符
                     */
                    void SetUniformSocialCreditCode(const std::string& _uniformSocialCreditCode);

                    /**
                     * 判断参数 UniformSocialCreditCode 是否已赋值
                     * @return UniformSocialCreditCode 是否已赋值
                     */
                    bool UniformSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取操作者的信息
                     * @return Operator 操作者的信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息
                     * @param Operator 操作者的信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 渠道侧合作企业名称，最大长度64个字符
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * 营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * 渠道侧合作企业统一社会信用代码，最大长度200个字符
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONREQUEST_H_
