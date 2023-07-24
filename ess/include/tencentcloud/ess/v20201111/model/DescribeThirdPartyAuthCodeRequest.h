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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBETHIRDPARTYAUTHCODEREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBETHIRDPARTYAUTHCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
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
                * DescribeThirdPartyAuthCode请求参数结构体
                */
                class DescribeThirdPartyAuthCodeRequest : public AbstractModel
                {
                public:
                    DescribeThirdPartyAuthCodeRequest();
                    ~DescribeThirdPartyAuthCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取电子签小程序跳转客户小程序时携带的授权查看码
                     * @return AuthCode 电子签小程序跳转客户小程序时携带的授权查看码
                     * 
                     */
                    std::string GetAuthCode() const;

                    /**
                     * 设置电子签小程序跳转客户小程序时携带的授权查看码
                     * @param _authCode 电子签小程序跳转客户小程序时携带的授权查看码
                     * 
                     */
                    void SetAuthCode(const std::string& _authCode);

                    /**
                     * 判断参数 AuthCode 是否已赋值
                     * @return AuthCode 是否已赋值
                     * 
                     */
                    bool AuthCodeHasBeenSet() const;

                    /**
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param _operator 操作人信息
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

                private:

                    /**
                     * 电子签小程序跳转客户小程序时携带的授权查看码
                     */
                    std::string m_authCode;
                    bool m_authCodeHasBeenSet;

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBETHIRDPARTYAUTHCODEREQUEST_H_
