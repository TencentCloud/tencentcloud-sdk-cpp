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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHORGANIZATIONREGISTRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHORGANIZATIONREGISTRATIONTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/RegistrationOrganizationInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateBatchOrganizationRegistrationTasks请求参数结构体
                */
                class CreateBatchOrganizationRegistrationTasksRequest : public AbstractModel
                {
                public:
                    CreateBatchOrganizationRegistrationTasksRequest();
                    ~CreateBatchOrganizationRegistrationTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>

                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>

                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>

                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
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
                     * 获取当前应用下子企业的组织机构注册信息。最多支持查询10子企业。
                     * @return RegistrationOrganizations 当前应用下子企业的组织机构注册信息。最多支持查询10子企业。
                     * 
                     */
                    std::vector<RegistrationOrganizationInfo> GetRegistrationOrganizations() const;

                    /**
                     * 设置当前应用下子企业的组织机构注册信息。最多支持查询10子企业。
                     * @param _registrationOrganizations 当前应用下子企业的组织机构注册信息。最多支持查询10子企业。
                     * 
                     */
                    void SetRegistrationOrganizations(const std::vector<RegistrationOrganizationInfo>& _registrationOrganizations);

                    /**
                     * 判断参数 RegistrationOrganizations 是否已赋值
                     * @return RegistrationOrganizations 是否已赋值
                     * 
                     */
                    bool RegistrationOrganizationsHasBeenSet() const;

                    /**
                     * 获取生成链接的类型：
<ul><li>**PC**：(默认)web控制台链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**SHORT_URL**：H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**APP**：第三方APP或小程序跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li>
<li>**H5**：第三方H5跳转到电子签H5长链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li>
<li>**SHORT_H5**：第三方H5跳转到电子签H5短链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li></ul>


                     * @return Endpoint 生成链接的类型：
<ul><li>**PC**：(默认)web控制台链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**SHORT_URL**：H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**APP**：第三方APP或小程序跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li>
<li>**H5**：第三方H5跳转到电子签H5长链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li>
<li>**SHORT_H5**：第三方H5跳转到电子签H5短链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li></ul>


                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置生成链接的类型：
<ul><li>**PC**：(默认)web控制台链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**SHORT_URL**：H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**APP**：第三方APP或小程序跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li>
<li>**H5**：第三方H5跳转到电子签H5长链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li>
<li>**SHORT_H5**：第三方H5跳转到电子签H5短链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li></ul>


                     * @param _endpoint 生成链接的类型：
<ul><li>**PC**：(默认)web控制台链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**SHORT_URL**：H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**APP**：第三方APP或小程序跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li>
<li>**H5**：第三方H5跳转到电子签H5长链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li>
<li>**SHORT_H5**：第三方H5跳转到电子签H5短链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li></ul>


                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取认证链接使用单链接还是多链接模式<ul><li>0 - 多链接(默认)，指批量生成链接， 每一个企业会拥有一个认证链接，然后分别认证</li><li>1 - 单链接 ， 指批量生成链接，然后会将多个链接聚合成一个链接，进行认证</li></ul>p.s.请注意， 如果使用单链接的模式并且认证方式是授权书方式的时候，必须在接口中传递超管授权书。
                     * @return BatchAuthMethod 认证链接使用单链接还是多链接模式<ul><li>0 - 多链接(默认)，指批量生成链接， 每一个企业会拥有一个认证链接，然后分别认证</li><li>1 - 单链接 ， 指批量生成链接，然后会将多个链接聚合成一个链接，进行认证</li></ul>p.s.请注意， 如果使用单链接的模式并且认证方式是授权书方式的时候，必须在接口中传递超管授权书。
                     * 
                     */
                    uint64_t GetBatchAuthMethod() const;

                    /**
                     * 设置认证链接使用单链接还是多链接模式<ul><li>0 - 多链接(默认)，指批量生成链接， 每一个企业会拥有一个认证链接，然后分别认证</li><li>1 - 单链接 ， 指批量生成链接，然后会将多个链接聚合成一个链接，进行认证</li></ul>p.s.请注意， 如果使用单链接的模式并且认证方式是授权书方式的时候，必须在接口中传递超管授权书。
                     * @param _batchAuthMethod 认证链接使用单链接还是多链接模式<ul><li>0 - 多链接(默认)，指批量生成链接， 每一个企业会拥有一个认证链接，然后分别认证</li><li>1 - 单链接 ， 指批量生成链接，然后会将多个链接聚合成一个链接，进行认证</li></ul>p.s.请注意， 如果使用单链接的模式并且认证方式是授权书方式的时候，必须在接口中传递超管授权书。
                     * 
                     */
                    void SetBatchAuthMethod(const uint64_t& _batchAuthMethod);

                    /**
                     * 判断参数 BatchAuthMethod 是否已赋值
                     * @return BatchAuthMethod 是否已赋值
                     * 
                     */
                    bool BatchAuthMethodHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>

                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 当前应用下子企业的组织机构注册信息。最多支持查询10子企业。
                     */
                    std::vector<RegistrationOrganizationInfo> m_registrationOrganizations;
                    bool m_registrationOrganizationsHasBeenSet;

                    /**
                     * 生成链接的类型：
<ul><li>**PC**：(默认)web控制台链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**SHORT_URL**：H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**APP**：第三方APP或小程序跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li>
<li>**H5**：第三方H5跳转到电子签H5长链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li>
<li>**SHORT_H5**：第三方H5跳转到电子签H5短链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li></ul>


                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 认证链接使用单链接还是多链接模式<ul><li>0 - 多链接(默认)，指批量生成链接， 每一个企业会拥有一个认证链接，然后分别认证</li><li>1 - 单链接 ， 指批量生成链接，然后会将多个链接聚合成一个链接，进行认证</li></ul>p.s.请注意， 如果使用单链接的模式并且认证方式是授权书方式的时候，必须在接口中传递超管授权书。
                     */
                    uint64_t m_batchAuthMethod;
                    bool m_batchAuthMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHORGANIZATIONREGISTRATIONTASKSREQUEST_H_
