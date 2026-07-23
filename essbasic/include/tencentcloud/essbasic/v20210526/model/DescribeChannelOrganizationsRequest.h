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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELORGANIZATIONSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELORGANIZATIONSREQUEST_H_

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
                * DescribeChannelOrganizations请求参数结构体
                */
                class DescribeChannelOrganizationsRequest : public AbstractModel
                {
                public:
                    DescribeChannelOrganizationsRequest();
                    ~DescribeChannelOrganizationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><p>渠道应用标识: Agent.AppId<br>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId<br>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</p><p>第三方平台子客企业和员工必须已经经过实名认证</p>
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><p>渠道应用标识: Agent.AppId<br>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId<br>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</p><p>第三方平台子客企业和员工必须已经经过实名认证</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><p>渠道应用标识: Agent.AppId<br>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId<br>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</p><p>第三方平台子客企业和员工必须已经经过实名认证</p>
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><p>渠道应用标识: Agent.AppId<br>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId<br>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</p><p>第三方平台子客企业和员工必须已经经过实名认证</p>
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
                     * 获取<p>指定分页每页返回的数据条数，单页最大支持 200。</p>
                     * @return Limit <p>指定分页每页返回的数据条数，单页最大支持 200。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>指定分页每页返回的数据条数，单页最大支持 200。</p>
                     * @param _limit <p>指定分页每页返回的数据条数，单页最大支持 200。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>该字段是指第三方平台子客企业的唯一标识，用于查询单独某个子客的企业数据。</p><p><strong>注</strong>：<code>如果需要批量查询本应用下的所有企业的信息，则该字段不需要赋值</code></p>
                     * @return OrganizationOpenId <p>该字段是指第三方平台子客企业的唯一标识，用于查询单独某个子客的企业数据。</p><p><strong>注</strong>：<code>如果需要批量查询本应用下的所有企业的信息，则该字段不需要赋值</code></p>
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置<p>该字段是指第三方平台子客企业的唯一标识，用于查询单独某个子客的企业数据。</p><p><strong>注</strong>：<code>如果需要批量查询本应用下的所有企业的信息，则该字段不需要赋值</code></p>
                     * @param _organizationOpenId <p>该字段是指第三方平台子客企业的唯一标识，用于查询单独某个子客的企业数据。</p><p><strong>注</strong>：<code>如果需要批量查询本应用下的所有企业的信息，则该字段不需要赋值</code></p>
                     * 
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     * 
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取<p>可以按照当前企业的认证状态进行过滤。可值如下：</p><ul><li>**"UNVERIFIED"**： 未认证的企业</li>  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>  <li>**"VERIFYING"**： 认证进行中的企业</li>  <li>**"VERIFIED"**： 已认证完成的企业</li></ul>
                     * @return AuthorizationStatusList <p>可以按照当前企业的认证状态进行过滤。可值如下：</p><ul><li>**"UNVERIFIED"**： 未认证的企业</li>  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>  <li>**"VERIFYING"**： 认证进行中的企业</li>  <li>**"VERIFIED"**： 已认证完成的企业</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAuthorizationStatusList() const;

                    /**
                     * 设置<p>可以按照当前企业的认证状态进行过滤。可值如下：</p><ul><li>**"UNVERIFIED"**： 未认证的企业</li>  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>  <li>**"VERIFYING"**： 认证进行中的企业</li>  <li>**"VERIFIED"**： 已认证完成的企业</li></ul>
                     * @param _authorizationStatusList <p>可以按照当前企业的认证状态进行过滤。可值如下：</p><ul><li>**"UNVERIFIED"**： 未认证的企业</li>  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>  <li>**"VERIFYING"**： 认证进行中的企业</li>  <li>**"VERIFIED"**： 已认证完成的企业</li></ul>
                     * 
                     */
                    void SetAuthorizationStatusList(const std::vector<std::string>& _authorizationStatusList);

                    /**
                     * 判断参数 AuthorizationStatusList 是否已赋值
                     * @return AuthorizationStatusList 是否已赋值
                     * 
                     */
                    bool AuthorizationStatusListHasBeenSet() const;

                    /**
                     * 获取<p>偏移量:从 0 开始，最大20000。</p>
                     * @return Offset <p>偏移量:从 0 开始，最大20000。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量:从 0 开始，最大20000。</p>
                     * @param _offset <p>偏移量:从 0 开始，最大20000。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><p>渠道应用标识: Agent.AppId<br>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId<br>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</p><p>第三方平台子客企业和员工必须已经经过实名认证</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>指定分页每页返回的数据条数，单页最大支持 200。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>该字段是指第三方平台子客企业的唯一标识，用于查询单独某个子客的企业数据。</p><p><strong>注</strong>：<code>如果需要批量查询本应用下的所有企业的信息，则该字段不需要赋值</code></p>
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * <p>可以按照当前企业的认证状态进行过滤。可值如下：</p><ul><li>**"UNVERIFIED"**： 未认证的企业</li>  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>  <li>**"VERIFYING"**： 认证进行中的企业</li>  <li>**"VERIFIED"**： 已认证完成的企业</li></ul>
                     */
                    std::vector<std::string> m_authorizationStatusList;
                    bool m_authorizationStatusListHasBeenSet;

                    /**
                     * <p>偏移量:从 0 开始，最大20000。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELORGANIZATIONSREQUEST_H_
