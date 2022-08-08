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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATECONVERTTASKAPIREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATECONVERTTASKAPIREQUEST_H_

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
                * ChannelCreateConvertTaskApi请求参数结构体
                */
                class ChannelCreateConvertTaskApiRequest : public AbstractModel
                {
                public:
                    ChannelCreateConvertTaskApiRequest();
                    ~ChannelCreateConvertTaskApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return Agent 无
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置无
                     * @param Agent 无
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取资源Id
                     * @return ResourceId 资源Id
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id
                     * @param ResourceId 资源Id
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型 取值范围doc,docx,html之一
                     * @return ResourceType 资源类型 取值范围doc,docx,html之一
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型 取值范围doc,docx,html之一
                     * @param ResourceType 资源类型 取值范围doc,docx,html之一
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return ResourceName 资源名称
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
                     * @param ResourceName 资源名称
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Organization 无
                     */
                    OrganizationInfo GetOrganization() const;

                    /**
                     * 设置无
                     * @param Organization 无
                     */
                    void SetOrganization(const OrganizationInfo& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Operator 无
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置无
                     * @param Operator 无
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型 取值范围doc,docx,html之一
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 无
                     */
                    OrganizationInfo m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * 无
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATECONVERTTASKAPIREQUEST_H_
