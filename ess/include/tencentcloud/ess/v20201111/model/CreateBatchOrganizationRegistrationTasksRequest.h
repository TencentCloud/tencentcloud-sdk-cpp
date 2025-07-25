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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHORGANIZATIONREGISTRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHORGANIZATIONREGISTRATIONTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/RegistrationOrganizationInfo.h>
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
                * CreateBatchOrganizationRegistrationTasks请求参数结构体
                */
                class CreateBatchOrganizationRegistrationTasksRequest : public AbstractModel
                {
                public:
                    CreateBatchOrganizationRegistrationTasksRequest();
                    ~CreateBatchOrganizationRegistrationTasksRequest() = default;
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
                     * 获取组织机构注册信息。
一次最多支持10条认证流
                     * @return RegistrationOrganizations 组织机构注册信息。
一次最多支持10条认证流
                     * 
                     */
                    std::vector<RegistrationOrganizationInfo> GetRegistrationOrganizations() const;

                    /**
                     * 设置组织机构注册信息。
一次最多支持10条认证流
                     * @param _registrationOrganizations 组织机构注册信息。
一次最多支持10条认证流
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
                     * 获取要生成链接的类型, 可以选择的值如下: 

<ul>
<li>(默认)PC: 生成PC端的链接</li>
<li>SHORT_URL: H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>APP：生成小程序跳转链接</li>
<li>H5：生成H5跳转长链接</li>
<li>SHORT_H5：生成H5跳转短链</li>
</ul>
                     * @return Endpoint 要生成链接的类型, 可以选择的值如下: 

<ul>
<li>(默认)PC: 生成PC端的链接</li>
<li>SHORT_URL: H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>APP：生成小程序跳转链接</li>
<li>H5：生成H5跳转长链接</li>
<li>SHORT_H5：生成H5跳转短链</li>
</ul>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置要生成链接的类型, 可以选择的值如下: 

<ul>
<li>(默认)PC: 生成PC端的链接</li>
<li>SHORT_URL: H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>APP：生成小程序跳转链接</li>
<li>H5：生成H5跳转长链接</li>
<li>SHORT_H5：生成H5跳转短链</li>
</ul>
                     * @param _endpoint 要生成链接的类型, 可以选择的值如下: 

<ul>
<li>(默认)PC: 生成PC端的链接</li>
<li>SHORT_URL: H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>APP：生成小程序跳转链接</li>
<li>H5：生成H5跳转长链接</li>
<li>SHORT_H5：生成H5跳转短链</li>
</ul>
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
                     * 获取认证链接使用单链接还是多链接模式

<ul>
<li>0 - 多链接(默认)，指批量生成链接， 每一个企业会拥有一个认证链接，然后分别认证</li>
<li>1 - 单链接 ， 指批量生成链接，然后会将多个链接聚合成一个链接，进行认证</li>
</ul>

p.s.
请注意， 如果使用单链接的模式并且认证方式是授权书方式的时候，必须在接口中传递超管授权书。
                     * @return BatchAuthMethod 认证链接使用单链接还是多链接模式

<ul>
<li>0 - 多链接(默认)，指批量生成链接， 每一个企业会拥有一个认证链接，然后分别认证</li>
<li>1 - 单链接 ， 指批量生成链接，然后会将多个链接聚合成一个链接，进行认证</li>
</ul>

p.s.
请注意， 如果使用单链接的模式并且认证方式是授权书方式的时候，必须在接口中传递超管授权书。
                     * 
                     */
                    uint64_t GetBatchAuthMethod() const;

                    /**
                     * 设置认证链接使用单链接还是多链接模式

<ul>
<li>0 - 多链接(默认)，指批量生成链接， 每一个企业会拥有一个认证链接，然后分别认证</li>
<li>1 - 单链接 ， 指批量生成链接，然后会将多个链接聚合成一个链接，进行认证</li>
</ul>

p.s.
请注意， 如果使用单链接的模式并且认证方式是授权书方式的时候，必须在接口中传递超管授权书。
                     * @param _batchAuthMethod 认证链接使用单链接还是多链接模式

<ul>
<li>0 - 多链接(默认)，指批量生成链接， 每一个企业会拥有一个认证链接，然后分别认证</li>
<li>1 - 单链接 ， 指批量生成链接，然后会将多个链接聚合成一个链接，进行认证</li>
</ul>

p.s.
请注意， 如果使用单链接的模式并且认证方式是授权书方式的时候，必须在接口中传递超管授权书。
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
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 组织机构注册信息。
一次最多支持10条认证流
                     */
                    std::vector<RegistrationOrganizationInfo> m_registrationOrganizations;
                    bool m_registrationOrganizationsHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 要生成链接的类型, 可以选择的值如下: 

<ul>
<li>(默认)PC: 生成PC端的链接</li>
<li>SHORT_URL: H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>APP：生成小程序跳转链接</li>
<li>H5：生成H5跳转长链接</li>
<li>SHORT_H5：生成H5跳转短链</li>
</ul>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 认证链接使用单链接还是多链接模式

<ul>
<li>0 - 多链接(默认)，指批量生成链接， 每一个企业会拥有一个认证链接，然后分别认证</li>
<li>1 - 单链接 ， 指批量生成链接，然后会将多个链接聚合成一个链接，进行认证</li>
</ul>

p.s.
请注意， 如果使用单链接的模式并且认证方式是授权书方式的时候，必须在接口中传递超管授权书。
                     */
                    uint64_t m_batchAuthMethod;
                    bool m_batchAuthMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHORGANIZATIONREGISTRATIONTASKSREQUEST_H_
