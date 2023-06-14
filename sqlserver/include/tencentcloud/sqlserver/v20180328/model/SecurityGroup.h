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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUP_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/SecurityGroupPolicy.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 安全组
                */
                class SecurityGroup : public AbstractModel
                {
                public:
                    SecurityGroup();
                    ~SecurityGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取创建时间，时间格式：yyyy-mm-dd hh:mm:ss
                     * @return CreateTime 创建时间，时间格式：yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，时间格式：yyyy-mm-dd hh:mm:ss
                     * @param _createTime 创建时间，时间格式：yyyy-mm-dd hh:mm:ss
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
                     * @return InboundSet 入站规则
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetInboundSet() const;

                    /**
                     * 设置入站规则
                     * @param _inboundSet 入站规则
                     * 
                     */
                    void SetInboundSet(const std::vector<SecurityGroupPolicy>& _inboundSet);

                    /**
                     * 判断参数 InboundSet 是否已赋值
                     * @return InboundSet 是否已赋值
                     * 
                     */
                    bool InboundSetHasBeenSet() const;

                    /**
                     * 获取出站规则
                     * @return OutboundSet 出站规则
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetOutboundSet() const;

                    /**
                     * 设置出站规则
                     * @param _outboundSet 出站规则
                     * 
                     */
                    void SetOutboundSet(const std::vector<SecurityGroupPolicy>& _outboundSet);

                    /**
                     * 判断参数 OutboundSet 是否已赋值
                     * @return OutboundSet 是否已赋值
                     * 
                     */
                    bool OutboundSetHasBeenSet() const;

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
                     * @return SecurityGroupRemark 安全组备注
                     * 
                     */
                    std::string GetSecurityGroupRemark() const;

                    /**
                     * 设置安全组备注
                     * @param _securityGroupRemark 安全组备注
                     * 
                     */
                    void SetSecurityGroupRemark(const std::string& _securityGroupRemark);

                    /**
                     * 判断参数 SecurityGroupRemark 是否已赋值
                     * @return SecurityGroupRemark 是否已赋值
                     * 
                     */
                    bool SecurityGroupRemarkHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 创建时间，时间格式：yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 入站规则
                     */
                    std::vector<SecurityGroupPolicy> m_inboundSet;
                    bool m_inboundSetHasBeenSet;

                    /**
                     * 出站规则
                     */
                    std::vector<SecurityGroupPolicy> m_outboundSet;
                    bool m_outboundSetHasBeenSet;

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
                    std::string m_securityGroupRemark;
                    bool m_securityGroupRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUP_H_
