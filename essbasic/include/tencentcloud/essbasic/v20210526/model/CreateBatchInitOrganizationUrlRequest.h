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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHINITORGANIZATIONURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHINITORGANIZATIONURLREQUEST_H_

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
                * CreateBatchInitOrganizationUrl请求参数结构体
                */
                class CreateBatchInitOrganizationUrlRequest : public AbstractModel
                {
                public:
                    CreateBatchInitOrganizationUrlRequest();
                    ~CreateBatchInitOrganizationUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用相关信息。 此接口Agent.AppId 必填。</p>
                     * @return Agent <p>应用相关信息。 此接口Agent.AppId 必填。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>应用相关信息。 此接口Agent.AppId 必填。</p>
                     * @param _agent <p>应用相关信息。 此接口Agent.AppId 必填。</p>
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
                     * 获取<p>初始化操作类型<ul><li>CREATE_SEAL : 创建印章</li><li>OPEN_AUTO_SIGN :开通企业授权签署</li><li>PARTNER_AUTO_SIGN_AUTH :合作方企业或应用平台方授权“授权签”</li></ul></p>
                     * @return OperateTypes <p>初始化操作类型<ul><li>CREATE_SEAL : 创建印章</li><li>OPEN_AUTO_SIGN :开通企业授权签署</li><li>PARTNER_AUTO_SIGN_AUTH :合作方企业或应用平台方授权“授权签”</li></ul></p>
                     * 
                     */
                    std::vector<std::string> GetOperateTypes() const;

                    /**
                     * 设置<p>初始化操作类型<ul><li>CREATE_SEAL : 创建印章</li><li>OPEN_AUTO_SIGN :开通企业授权签署</li><li>PARTNER_AUTO_SIGN_AUTH :合作方企业或应用平台方授权“授权签”</li></ul></p>
                     * @param _operateTypes <p>初始化操作类型<ul><li>CREATE_SEAL : 创建印章</li><li>OPEN_AUTO_SIGN :开通企业授权签署</li><li>PARTNER_AUTO_SIGN_AUTH :合作方企业或应用平台方授权“授权签”</li></ul></p>
                     * 
                     */
                    void SetOperateTypes(const std::vector<std::string>& _operateTypes);

                    /**
                     * 判断参数 OperateTypes 是否已赋值
                     * @return OperateTypes 是否已赋值
                     * 
                     */
                    bool OperateTypesHasBeenSet() const;

                    /**
                     * 获取<p>批量操作的企业列表在第三方平台的企业Id列表，即ProxyOrganizationOpenId列表,最大支持50个</p>
                     * @return ProxyOrganizationOpenIds <p>批量操作的企业列表在第三方平台的企业Id列表，即ProxyOrganizationOpenId列表,最大支持50个</p>
                     * 
                     */
                    std::vector<std::string> GetProxyOrganizationOpenIds() const;

                    /**
                     * 设置<p>批量操作的企业列表在第三方平台的企业Id列表，即ProxyOrganizationOpenId列表,最大支持50个</p>
                     * @param _proxyOrganizationOpenIds <p>批量操作的企业列表在第三方平台的企业Id列表，即ProxyOrganizationOpenId列表,最大支持50个</p>
                     * 
                     */
                    void SetProxyOrganizationOpenIds(const std::vector<std::string>& _proxyOrganizationOpenIds);

                    /**
                     * 判断参数 ProxyOrganizationOpenIds 是否已赋值
                     * @return ProxyOrganizationOpenIds 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationOpenIdsHasBeenSet() const;

                    /**
                     * 获取<p>当操作类型包含 PARTNER_AUTO_SIGN_AUTH 且是给应用平台方授权【授权签】时传true。<br><img src="https://qcloudimg.tencent-cloud.cn/raw/f9aba7c999a6d79ada20b4384520e120.png" alt="image"></p>
                     * @return IsAuthorizePlatformApplication <p>当操作类型包含 PARTNER_AUTO_SIGN_AUTH 且是给应用平台方授权【授权签】时传true。<br><img src="https://qcloudimg.tencent-cloud.cn/raw/f9aba7c999a6d79ada20b4384520e120.png" alt="image"></p>
                     * 
                     */
                    bool GetIsAuthorizePlatformApplication() const;

                    /**
                     * 设置<p>当操作类型包含 PARTNER_AUTO_SIGN_AUTH 且是给应用平台方授权【授权签】时传true。<br><img src="https://qcloudimg.tencent-cloud.cn/raw/f9aba7c999a6d79ada20b4384520e120.png" alt="image"></p>
                     * @param _isAuthorizePlatformApplication <p>当操作类型包含 PARTNER_AUTO_SIGN_AUTH 且是给应用平台方授权【授权签】时传true。<br><img src="https://qcloudimg.tencent-cloud.cn/raw/f9aba7c999a6d79ada20b4384520e120.png" alt="image"></p>
                     * 
                     */
                    void SetIsAuthorizePlatformApplication(const bool& _isAuthorizePlatformApplication);

                    /**
                     * 判断参数 IsAuthorizePlatformApplication 是否已赋值
                     * @return IsAuthorizePlatformApplication 是否已赋值
                     * 
                     */
                    bool IsAuthorizePlatformApplicationHasBeenSet() const;

                    /**
                     * 获取<p>被授权的合作方企业在第三方平台子客企业标识，即ProxyOrganizationOpenId，当操作类型包含 PARTNER_AUTO_SIGN_AUTH 且要进行合作方企业授权【授权签】时必传。</p>
                     * @return AuthorizedProxyOrganizationOpenId <p>被授权的合作方企业在第三方平台子客企业标识，即ProxyOrganizationOpenId，当操作类型包含 PARTNER_AUTO_SIGN_AUTH 且要进行合作方企业授权【授权签】时必传。</p>
                     * 
                     */
                    std::string GetAuthorizedProxyOrganizationOpenId() const;

                    /**
                     * 设置<p>被授权的合作方企业在第三方平台子客企业标识，即ProxyOrganizationOpenId，当操作类型包含 PARTNER_AUTO_SIGN_AUTH 且要进行合作方企业授权【授权签】时必传。</p>
                     * @param _authorizedProxyOrganizationOpenId <p>被授权的合作方企业在第三方平台子客企业标识，即ProxyOrganizationOpenId，当操作类型包含 PARTNER_AUTO_SIGN_AUTH 且要进行合作方企业授权【授权签】时必传。</p>
                     * 
                     */
                    void SetAuthorizedProxyOrganizationOpenId(const std::string& _authorizedProxyOrganizationOpenId);

                    /**
                     * 判断参数 AuthorizedProxyOrganizationOpenId 是否已赋值
                     * @return AuthorizedProxyOrganizationOpenId 是否已赋值
                     * 
                     */
                    bool AuthorizedProxyOrganizationOpenIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用相关信息。 此接口Agent.AppId 必填。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>初始化操作类型<ul><li>CREATE_SEAL : 创建印章</li><li>OPEN_AUTO_SIGN :开通企业授权签署</li><li>PARTNER_AUTO_SIGN_AUTH :合作方企业或应用平台方授权“授权签”</li></ul></p>
                     */
                    std::vector<std::string> m_operateTypes;
                    bool m_operateTypesHasBeenSet;

                    /**
                     * <p>批量操作的企业列表在第三方平台的企业Id列表，即ProxyOrganizationOpenId列表,最大支持50个</p>
                     */
                    std::vector<std::string> m_proxyOrganizationOpenIds;
                    bool m_proxyOrganizationOpenIdsHasBeenSet;

                    /**
                     * <p>当操作类型包含 PARTNER_AUTO_SIGN_AUTH 且是给应用平台方授权【授权签】时传true。<br><img src="https://qcloudimg.tencent-cloud.cn/raw/f9aba7c999a6d79ada20b4384520e120.png" alt="image"></p>
                     */
                    bool m_isAuthorizePlatformApplication;
                    bool m_isAuthorizePlatformApplicationHasBeenSet;

                    /**
                     * <p>被授权的合作方企业在第三方平台子客企业标识，即ProxyOrganizationOpenId，当操作类型包含 PARTNER_AUTO_SIGN_AUTH 且要进行合作方企业授权【授权签】时必传。</p>
                     */
                    std::string m_authorizedProxyOrganizationOpenId;
                    bool m_authorizedProxyOrganizationOpenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHINITORGANIZATIONURLREQUEST_H_
