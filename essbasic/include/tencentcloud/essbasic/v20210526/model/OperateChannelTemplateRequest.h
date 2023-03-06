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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATECHANNELTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATECHANNELTEMPLATEREQUEST_H_

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
                * OperateChannelTemplate请求参数结构体
                */
                class OperateChannelTemplateRequest : public AbstractModel
                {
                public:
                    OperateChannelTemplateRequest();
                    ~OperateChannelTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @param Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取操作类型，查询:"SELECT"，删除:"DELETE"，更新:"UPDATE"
                     * @return OperateType 操作类型，查询:"SELECT"，删除:"DELETE"，更新:"UPDATE"
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置操作类型，查询:"SELECT"，删除:"DELETE"，更新:"UPDATE"
                     * @param OperateType 操作类型，查询:"SELECT"，删除:"DELETE"，更新:"UPDATE"
                     */
                    void SetOperateType(const std::string& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     */
                    bool OperateTypeHasBeenSet() const;

                    /**
                     * 获取第三方应用平台模板库模板唯一标识
                     * @return TemplateId 第三方应用平台模板库模板唯一标识
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置第三方应用平台模板库模板唯一标识
                     * @param TemplateId 第三方应用平台模板库模板唯一标识
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取合作企业方第三方机构唯一标识数据，支持多个， 用","进行分隔
                     * @return ProxyOrganizationOpenIds 合作企业方第三方机构唯一标识数据，支持多个， 用","进行分隔
                     */
                    std::string GetProxyOrganizationOpenIds() const;

                    /**
                     * 设置合作企业方第三方机构唯一标识数据，支持多个， 用","进行分隔
                     * @param ProxyOrganizationOpenIds 合作企业方第三方机构唯一标识数据，支持多个， 用","进行分隔
                     */
                    void SetProxyOrganizationOpenIds(const std::string& _proxyOrganizationOpenIds);

                    /**
                     * 判断参数 ProxyOrganizationOpenIds 是否已赋值
                     * @return ProxyOrganizationOpenIds 是否已赋值
                     */
                    bool ProxyOrganizationOpenIdsHasBeenSet() const;

                    /**
                     * 获取模板可见性, 全部可见-"all", 部分可见-"part"
                     * @return AuthTag 模板可见性, 全部可见-"all", 部分可见-"part"
                     */
                    std::string GetAuthTag() const;

                    /**
                     * 设置模板可见性, 全部可见-"all", 部分可见-"part"
                     * @param AuthTag 模板可见性, 全部可见-"all", 部分可见-"part"
                     */
                    void SetAuthTag(const std::string& _authTag);

                    /**
                     * 判断参数 AuthTag 是否已赋值
                     * @return AuthTag 是否已赋值
                     */
                    bool AuthTagHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param Operator 暂未开放
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 操作类型，查询:"SELECT"，删除:"DELETE"，更新:"UPDATE"
                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * 第三方应用平台模板库模板唯一标识
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 合作企业方第三方机构唯一标识数据，支持多个， 用","进行分隔
                     */
                    std::string m_proxyOrganizationOpenIds;
                    bool m_proxyOrganizationOpenIdsHasBeenSet;

                    /**
                     * 模板可见性, 全部可见-"all", 部分可见-"part"
                     */
                    std::string m_authTag;
                    bool m_authTagHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATECHANNELTEMPLATEREQUEST_H_
