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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SECURITYGROUPDETAIL_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SECURITYGROUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/SecurityGroupsInboundAndOutbound.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 安全组详情
                */
                class SecurityGroupDetail : public AbstractModel
                {
                public:
                    SecurityGroupDetail();
                    ~SecurityGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param _projectId 项目ID。
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
                     * 获取创建安全组的时间。
                     * @return CreateTime 创建安全组的时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建安全组的时间。
                     * @param _createTime 创建安全组的时间。
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
                     * 获取安全组 ID。
                     * @return SecurityGroupId 安全组 ID。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组 ID。
                     * @param _securityGroupId 安全组 ID。
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
                     * 获取安全组名称。
                     * @return SecurityGroupName 安全组名称。
                     * 
                     */
                    std::string GetSecurityGroupName() const;

                    /**
                     * 设置安全组名称。
                     * @param _securityGroupName 安全组名称。
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
                     * 获取安全组标记。
                     * @return SecurityGroupRemark 安全组标记。
                     * 
                     */
                    std::string GetSecurityGroupRemark() const;

                    /**
                     * 设置安全组标记。
                     * @param _securityGroupRemark 安全组标记。
                     * 
                     */
                    void SetSecurityGroupRemark(const std::string& _securityGroupRemark);

                    /**
                     * 判断参数 SecurityGroupRemark 是否已赋值
                     * @return SecurityGroupRemark 是否已赋值
                     * 
                     */
                    bool SecurityGroupRemarkHasBeenSet() const;

                    /**
                     * 获取安全组入站规则，即控制访问数据库的来源。
                     * @return InboundRule 安全组入站规则，即控制访问数据库的来源。
                     * 
                     */
                    std::vector<SecurityGroupsInboundAndOutbound> GetInboundRule() const;

                    /**
                     * 设置安全组入站规则，即控制访问数据库的来源。
                     * @param _inboundRule 安全组入站规则，即控制访问数据库的来源。
                     * 
                     */
                    void SetInboundRule(const std::vector<SecurityGroupsInboundAndOutbound>& _inboundRule);

                    /**
                     * 判断参数 InboundRule 是否已赋值
                     * @return InboundRule 是否已赋值
                     * 
                     */
                    bool InboundRuleHasBeenSet() const;

                    /**
                     * 获取安全组出站规则。
                     * @return OutboundRule 安全组出站规则。
                     * 
                     */
                    std::vector<SecurityGroupsInboundAndOutbound> GetOutboundRule() const;

                    /**
                     * 设置安全组出站规则。
                     * @param _outboundRule 安全组出站规则。
                     * 
                     */
                    void SetOutboundRule(const std::vector<SecurityGroupsInboundAndOutbound>& _outboundRule);

                    /**
                     * 判断参数 OutboundRule 是否已赋值
                     * @return OutboundRule 是否已赋值
                     * 
                     */
                    bool OutboundRuleHasBeenSet() const;

                private:

                    /**
                     * 项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 创建安全组的时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 安全组 ID。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 安全组名称。
                     */
                    std::string m_securityGroupName;
                    bool m_securityGroupNameHasBeenSet;

                    /**
                     * 安全组标记。
                     */
                    std::string m_securityGroupRemark;
                    bool m_securityGroupRemarkHasBeenSet;

                    /**
                     * 安全组入站规则，即控制访问数据库的来源。
                     */
                    std::vector<SecurityGroupsInboundAndOutbound> m_inboundRule;
                    bool m_inboundRuleHasBeenSet;

                    /**
                     * 安全组出站规则。
                     */
                    std::vector<SecurityGroupsInboundAndOutbound> m_outboundRule;
                    bool m_outboundRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SECURITYGROUPDETAIL_H_
