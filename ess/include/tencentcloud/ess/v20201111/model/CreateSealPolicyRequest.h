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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALPOLICYREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/Option.h>
#include <tencentcloud/ess/v20201111/model/SealPolicyAuthorizationFlows.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateSealPolicy请求参数结构体
                */
                class CreateSealPolicyRequest : public AbstractModel
                {
                public:
                    CreateSealPolicyRequest();
                    ~CreateSealPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>用户在电子文件签署平台标识信息，具体参考UserInfo结构体。可跟下面的UserIds可叠加起作用,<br>同时也支持使用主企业的User进行授权， 当使用主企业的User时， 需要有集团角色。</p>
                     * @return Users <p>用户在电子文件签署平台标识信息，具体参考UserInfo结构体。可跟下面的UserIds可叠加起作用,<br>同时也支持使用主企业的User进行授权， 当使用主企业的User时， 需要有集团角色。</p>
                     * 
                     */
                    std::vector<UserInfo> GetUsers() const;

                    /**
                     * 设置<p>用户在电子文件签署平台标识信息，具体参考UserInfo结构体。可跟下面的UserIds可叠加起作用,<br>同时也支持使用主企业的User进行授权， 当使用主企业的User时， 需要有集团角色。</p>
                     * @param _users <p>用户在电子文件签署平台标识信息，具体参考UserInfo结构体。可跟下面的UserIds可叠加起作用,<br>同时也支持使用主企业的User进行授权， 当使用主企业的User时， 需要有集团角色。</p>
                     * 
                     */
                    void SetUsers(const std::vector<UserInfo>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取<p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。<br>可登录腾讯电子签控制台，在 &quot;印章&quot;-&gt;&quot;印章中心&quot;选择查看的印章，在&quot;印章详情&quot; 中查看某个印章的SealId(在页面中展示为印章ID)。</p>
                     * @return SealId <p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。<br>可登录腾讯电子签控制台，在 &quot;印章&quot;-&gt;&quot;印章中心&quot;选择查看的印章，在&quot;印章详情&quot; 中查看某个印章的SealId(在页面中展示为印章ID)。</p>
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置<p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。<br>可登录腾讯电子签控制台，在 &quot;印章&quot;-&gt;&quot;印章中心&quot;选择查看的印章，在&quot;印章详情&quot; 中查看某个印章的SealId(在页面中展示为印章ID)。</p>
                     * @param _sealId <p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。<br>可登录腾讯电子签控制台，在 &quot;印章&quot;-&gt;&quot;印章中心&quot;选择查看的印章，在&quot;印章详情&quot; 中查看某个印章的SealId(在页面中展示为印章ID)。</p>
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
                     * 获取<p>授权有效期，时间戳秒级。可以传0，代表有效期到2099年12月12日23点59分59秒。</p>
                     * @return Expired <p>授权有效期，时间戳秒级。可以传0，代表有效期到2099年12月12日23点59分59秒。</p>
                     * 
                     */
                    int64_t GetExpired() const;

                    /**
                     * 设置<p>授权有效期，时间戳秒级。可以传0，代表有效期到2099年12月12日23点59分59秒。</p>
                     * @param _expired <p>授权有效期，时间戳秒级。可以传0，代表有效期到2099年12月12日23点59分59秒。</p>
                     * 
                     */
                    void SetExpired(const int64_t& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     * 
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取<p>需要授权的用户UserId集合。跟上面的SealId参数配合使用。选填，跟上面的Users同时起作用。<br>支持使用主企业的UserId进行授权， 当使用主企业的UserId时，该UserId 需要有集团角色。</p>
                     * @return UserIds <p>需要授权的用户UserId集合。跟上面的SealId参数配合使用。选填，跟上面的Users同时起作用。<br>支持使用主企业的UserId进行授权， 当使用主企业的UserId时，该UserId 需要有集团角色。</p>
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置<p>需要授权的用户UserId集合。跟上面的SealId参数配合使用。选填，跟上面的Users同时起作用。<br>支持使用主企业的UserId进行授权， 当使用主企业的UserId时，该UserId 需要有集团角色。</p>
                     * @param _userIds <p>需要授权的用户UserId集合。跟上面的SealId参数配合使用。选填，跟上面的Users同时起作用。<br>支持使用主企业的UserId进行授权， 当使用主企业的UserId时，该UserId 需要有集团角色。</p>
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
                     * 获取<p>印章授权内容，最多300 个字符。</p>
                     * @return Policy <p>印章授权内容，最多300 个字符。</p>
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置<p>印章授权内容，最多300 个字符。</p>
                     * @param _policy <p>印章授权内容，最多300 个字符。</p>
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * 获取<p>个性化配置字段，默认不传。</p>
                     * @return Options <p>个性化配置字段，默认不传。</p>
                     * 
                     */
                    std::vector<Option> GetOptions() const;

                    /**
                     * 设置<p>个性化配置字段，默认不传。</p>
                     * @param _options <p>个性化配置字段，默认不传。</p>
                     * 
                     */
                    void SetOptions(const std::vector<Option>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取<p>针对用印的合同/合同组授权。<br>当单次用印授权时，可以仅在指定合同获得印章授权。<br>此场景下不会触发印章授权回调。</p>
                     * @return AuthorizationFlows <p>针对用印的合同/合同组授权。<br>当单次用印授权时，可以仅在指定合同获得印章授权。<br>此场景下不会触发印章授权回调。</p>
                     * 
                     */
                    SealPolicyAuthorizationFlows GetAuthorizationFlows() const;

                    /**
                     * 设置<p>针对用印的合同/合同组授权。<br>当单次用印授权时，可以仅在指定合同获得印章授权。<br>此场景下不会触发印章授权回调。</p>
                     * @param _authorizationFlows <p>针对用印的合同/合同组授权。<br>当单次用印授权时，可以仅在指定合同获得印章授权。<br>此场景下不会触发印章授权回调。</p>
                     * 
                     */
                    void SetAuthorizationFlows(const SealPolicyAuthorizationFlows& _authorizationFlows);

                    /**
                     * 判断参数 AuthorizationFlows 是否已赋值
                     * @return AuthorizationFlows 是否已赋值
                     * 
                     */
                    bool AuthorizationFlowsHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>用户在电子文件签署平台标识信息，具体参考UserInfo结构体。可跟下面的UserIds可叠加起作用,<br>同时也支持使用主企业的User进行授权， 当使用主企业的User时， 需要有集团角色。</p>
                     */
                    std::vector<UserInfo> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * <p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。<br>可登录腾讯电子签控制台，在 &quot;印章&quot;-&gt;&quot;印章中心&quot;选择查看的印章，在&quot;印章详情&quot; 中查看某个印章的SealId(在页面中展示为印章ID)。</p>
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * <p>授权有效期，时间戳秒级。可以传0，代表有效期到2099年12月12日23点59分59秒。</p>
                     */
                    int64_t m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * <p>需要授权的用户UserId集合。跟上面的SealId参数配合使用。选填，跟上面的Users同时起作用。<br>支持使用主企业的UserId进行授权， 当使用主企业的UserId时，该UserId 需要有集团角色。</p>
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * <p>印章授权内容，最多300 个字符。</p>
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>个性化配置字段，默认不传。</p>
                     */
                    std::vector<Option> m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * <p>针对用印的合同/合同组授权。<br>当单次用印授权时，可以仅在指定合同获得印章授权。<br>此场景下不会触发印章授权回调。</p>
                     */
                    SealPolicyAuthorizationFlows m_authorizationFlows;
                    bool m_authorizationFlowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALPOLICYREQUEST_H_
