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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeExtendedServiceAuthInfo请求参数结构体
                */
                class DescribeExtendedServiceAuthInfoRequest : public AbstractModel
                {
                public:
                    DescribeExtendedServiceAuthInfoRequest();
                    ~DescribeExtendedServiceAuthInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId

                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId

                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId

                     * @param Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId

                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId

                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOREQUEST_H_
