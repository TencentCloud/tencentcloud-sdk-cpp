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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDELETESEALPOLICIESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDELETESEALPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/OrganizationInfo.h>
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
                * ChannelDeleteSealPolicies请求参数结构体
                */
                class ChannelDeleteSealPoliciesRequest : public AbstractModel
                {
                public:
                    ChannelDeleteSealPoliciesRequest();
                    ~ChannelDeleteSealPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
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
                     * 获取操作的印章ID
                     * @return SealId 操作的印章ID
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置操作的印章ID
                     * @param _sealId 操作的印章ID
                     * 
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取需要删除授权的用户ID数组，可以传入电子签系统用户ID或OpenId。
注: 
1. `填写OpenId时，系统会通过组织+渠道+OpenId查询得到对应的UserId进行授权取消操作`
                     * @return UserIds 需要删除授权的用户ID数组，可以传入电子签系统用户ID或OpenId。
注: 
1. `填写OpenId时，系统会通过组织+渠道+OpenId查询得到对应的UserId进行授权取消操作`
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置需要删除授权的用户ID数组，可以传入电子签系统用户ID或OpenId。
注: 
1. `填写OpenId时，系统会通过组织+渠道+OpenId查询得到对应的UserId进行授权取消操作`
                     * @param _userIds 需要删除授权的用户ID数组，可以传入电子签系统用户ID或OpenId。
注: 
1. `填写OpenId时，系统会通过组织+渠道+OpenId查询得到对应的UserId进行授权取消操作`
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取组织机构信息，不用传
                     * @return Organization 组织机构信息，不用传
                     * @deprecated
                     */
                    OrganizationInfo GetOrganization() const;

                    /**
                     * 设置组织机构信息，不用传
                     * @param _organization 组织机构信息，不用传
                     * @deprecated
                     */
                    void SetOrganization(const OrganizationInfo& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     * @deprecated
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取操作人（用户）信息，不用传
                     * @return Operator 操作人（用户）信息，不用传
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人（用户）信息，不用传
                     * @param _operator 操作人（用户）信息，不用传
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 操作的印章ID
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 需要删除授权的用户ID数组，可以传入电子签系统用户ID或OpenId。
注: 
1. `填写OpenId时，系统会通过组织+渠道+OpenId查询得到对应的UserId进行授权取消操作`
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 组织机构信息，不用传
                     */
                    OrganizationInfo m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * 操作人（用户）信息，不用传
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDELETESEALPOLICIESREQUEST_H_
