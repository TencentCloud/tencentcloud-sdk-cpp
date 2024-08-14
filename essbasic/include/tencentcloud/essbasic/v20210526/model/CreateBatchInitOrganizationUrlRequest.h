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
                     * 获取应用相关信息。 此接口Agent.AppId 必填。
                     * @return Agent 应用相关信息。 此接口Agent.AppId 必填。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.AppId 必填。
                     * @param _agent 应用相关信息。 此接口Agent.AppId 必填。
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
                     * 获取初始化操作类型
<ul><li>CREATE_SEAL : 创建印章</li>
<li>OPEN_AUTO_SIGN :开通企业自动签署</li></ul>
                     * @return OperateTypes 初始化操作类型
<ul><li>CREATE_SEAL : 创建印章</li>
<li>OPEN_AUTO_SIGN :开通企业自动签署</li></ul>
                     * 
                     */
                    std::vector<std::string> GetOperateTypes() const;

                    /**
                     * 设置初始化操作类型
<ul><li>CREATE_SEAL : 创建印章</li>
<li>OPEN_AUTO_SIGN :开通企业自动签署</li></ul>
                     * @param _operateTypes 初始化操作类型
<ul><li>CREATE_SEAL : 创建印章</li>
<li>OPEN_AUTO_SIGN :开通企业自动签署</li></ul>
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
                     * 获取批量操作的企业列表在第三方平台的企业Id列表，即ProxyOrganizationOpenId列表,最大支持50个
                     * @return ProxyOrganizationOpenIds 批量操作的企业列表在第三方平台的企业Id列表，即ProxyOrganizationOpenId列表,最大支持50个
                     * 
                     */
                    std::vector<std::string> GetProxyOrganizationOpenIds() const;

                    /**
                     * 设置批量操作的企业列表在第三方平台的企业Id列表，即ProxyOrganizationOpenId列表,最大支持50个
                     * @param _proxyOrganizationOpenIds 批量操作的企业列表在第三方平台的企业Id列表，即ProxyOrganizationOpenId列表,最大支持50个
                     * 
                     */
                    void SetProxyOrganizationOpenIds(const std::vector<std::string>& _proxyOrganizationOpenIds);

                    /**
                     * 判断参数 ProxyOrganizationOpenIds 是否已赋值
                     * @return ProxyOrganizationOpenIds 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationOpenIdsHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.AppId 必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 初始化操作类型
<ul><li>CREATE_SEAL : 创建印章</li>
<li>OPEN_AUTO_SIGN :开通企业自动签署</li></ul>
                     */
                    std::vector<std::string> m_operateTypes;
                    bool m_operateTypesHasBeenSet;

                    /**
                     * 批量操作的企业列表在第三方平台的企业Id列表，即ProxyOrganizationOpenId列表,最大支持50个
                     */
                    std::vector<std::string> m_proxyOrganizationOpenIds;
                    bool m_proxyOrganizationOpenIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHINITORGANIZATIONURLREQUEST_H_
