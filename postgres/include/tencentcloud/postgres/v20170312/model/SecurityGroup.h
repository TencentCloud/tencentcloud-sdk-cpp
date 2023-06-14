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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SECURITYGROUP_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SECURITYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/PolicyRule.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 安全组信息
                */
                class SecurityGroup : public AbstractModel
                {
                public:
                    SecurityGroup();
                    ~SecurityGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取入站规则
                     * @return Inbound 入站规则
                     * 
                     */
                    std::vector<PolicyRule> GetInbound() const;

                    /**
                     * 设置入站规则
                     * @param _inbound 入站规则
                     * 
                     */
                    void SetInbound(const std::vector<PolicyRule>& _inbound);

                    /**
                     * 判断参数 Inbound 是否已赋值
                     * @return Inbound 是否已赋值
                     * 
                     */
                    bool InboundHasBeenSet() const;

                    /**
                     * 获取出站规则
                     * @return Outbound 出站规则
                     * 
                     */
                    std::vector<PolicyRule> GetOutbound() const;

                    /**
                     * 设置出站规则
                     * @param _outbound 出站规则
                     * 
                     */
                    void SetOutbound(const std::vector<PolicyRule>& _outbound);

                    /**
                     * 判断参数 Outbound 是否已赋值
                     * @return Outbound 是否已赋值
                     * 
                     */
                    bool OutboundHasBeenSet() const;

                    /**
                     * 获取安全组ID
                     * @return SecurityGroupId 安全组ID
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组ID
                     * @param _securityGroupId 安全组ID
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取安全组名称
                     * @return SecurityGroupName 安全组名称
                     * 
                     */
                    std::string GetSecurityGroupName() const;

                    /**
                     * 设置安全组名称
                     * @param _securityGroupName 安全组名称
                     * 
                     */
                    void SetSecurityGroupName(const std::string& _securityGroupName);

                    /**
                     * 判断参数 SecurityGroupName 是否已赋值
                     * @return SecurityGroupName 是否已赋值
                     * 
                     */
                    bool SecurityGroupNameHasBeenSet() const;

                    /**
                     * 获取安全组备注
                     * @return SecurityGroupDescription 安全组备注
                     * 
                     */
                    std::string GetSecurityGroupDescription() const;

                    /**
                     * 设置安全组备注
                     * @param _securityGroupDescription 安全组备注
                     * 
                     */
                    void SetSecurityGroupDescription(const std::string& _securityGroupDescription);

                    /**
                     * 判断参数 SecurityGroupDescription 是否已赋值
                     * @return SecurityGroupDescription 是否已赋值
                     * 
                     */
                    bool SecurityGroupDescriptionHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 入站规则
                     */
                    std::vector<PolicyRule> m_inbound;
                    bool m_inboundHasBeenSet;

                    /**
                     * 出站规则
                     */
                    std::vector<PolicyRule> m_outbound;
                    bool m_outboundHasBeenSet;

                    /**
                     * 安全组ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 安全组名称
                     */
                    std::string m_securityGroupName;
                    bool m_securityGroupNameHasBeenSet;

                    /**
                     * 安全组备注
                     */
                    std::string m_securityGroupDescription;
                    bool m_securityGroupDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SECURITYGROUP_H_
