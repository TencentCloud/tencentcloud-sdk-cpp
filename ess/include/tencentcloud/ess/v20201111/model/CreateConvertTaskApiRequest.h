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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONVERTTASKAPIREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONVERTTASKAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/OrganizationInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateConvertTaskApi请求参数结构体
                */
                class CreateConvertTaskApiRequest : public AbstractModel
                {
                public:
                    CreateConvertTaskApiRequest();
                    ~CreateConvertTaskApiRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取资源名称，长度限制为256字符
                     * @return ResourceName 资源名称，长度限制为256字符
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称，长度限制为256字符
                     * @param ResourceName 资源名称，长度限制为256字符
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源Id，通过UploadFiles获取
                     * @return ResourceId 资源Id，通过UploadFiles获取
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id，通过UploadFiles获取
                     * @param ResourceId 资源Id，通过UploadFiles获取
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取操作者信息
                     * @return Operator 操作者信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者信息
                     * @param Operator 操作者信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取应用号信息
                     * @return Agent 应用号信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用号信息
                     * @param Agent 应用号信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Organization 暂未开放
                     */
                    OrganizationInfo GetOrganization() const;

                    /**
                     * 设置暂未开放
                     * @param Organization 暂未开放
                     */
                    void SetOrganization(const OrganizationInfo& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     */
                    bool OrganizationHasBeenSet() const;

                private:

                    /**
                     * 资源类型 取值范围doc,docx,html之一
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源名称，长度限制为256字符
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源Id，通过UploadFiles获取
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 操作者信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 应用号信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    OrganizationInfo m_organization;
                    bool m_organizationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONVERTTASKAPIREQUEST_H_
