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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_SECURITYGROUP_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_SECURITYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/PolicyRule.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * 安全组详情
                */
                class SecurityGroup : public AbstractModel
                {
                public:
                    SecurityGroup();
                    ~SecurityGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>安全组ID</p>
                     * @return SecurityGroupId <p>安全组ID</p>
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置<p>安全组ID</p>
                     * @param _securityGroupId <p>安全组ID</p>
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
                     * 获取<p>所属项目 ID</p>
                     * @return ProjectId <p>所属项目 ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>所属项目 ID</p>
                     * @param _projectId <p>所属项目 ID</p>
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
                     * 获取<p>安全组创建时间</p>
                     * @return CreateTime <p>安全组创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>安全组创建时间</p>
                     * @param _createTime <p>安全组创建时间</p>
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
                     * 获取<p>安全组入方向规则列表</p>
                     * @return Inbound <p>安全组入方向规则列表</p>
                     * 
                     */
                    std::vector<PolicyRule> GetInbound() const;

                    /**
                     * 设置<p>安全组入方向规则列表</p>
                     * @param _inbound <p>安全组入方向规则列表</p>
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
                     * 获取<p>安全组出方向规则列表</p>
                     * @return Outbound <p>安全组出方向规则列表</p>
                     * 
                     */
                    std::vector<PolicyRule> GetOutbound() const;

                    /**
                     * 设置<p>安全组出方向规则列表</p>
                     * @param _outbound <p>安全组出方向规则列表</p>
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
                     * 获取<p>安全组名称</p>
                     * @return SecurityGroupName <p>安全组名称</p>
                     * 
                     */
                    std::string GetSecurityGroupName() const;

                    /**
                     * 设置<p>安全组名称</p>
                     * @param _securityGroupName <p>安全组名称</p>
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
                     * 获取<p>安全组备注说明</p>
                     * @return SecurityGroupRemark <p>安全组备注说明</p>
                     * 
                     */
                    std::string GetSecurityGroupRemark() const;

                    /**
                     * 设置<p>安全组备注说明</p>
                     * @param _securityGroupRemark <p>安全组备注说明</p>
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
                     * <p>安全组ID</p>
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * <p>所属项目 ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>安全组创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>安全组入方向规则列表</p>
                     */
                    std::vector<PolicyRule> m_inbound;
                    bool m_inboundHasBeenSet;

                    /**
                     * <p>安全组出方向规则列表</p>
                     */
                    std::vector<PolicyRule> m_outbound;
                    bool m_outboundHasBeenSet;

                    /**
                     * <p>安全组名称</p>
                     */
                    std::string m_securityGroupName;
                    bool m_securityGroupNameHasBeenSet;

                    /**
                     * <p>安全组备注说明</p>
                     */
                    std::string m_securityGroupRemark;
                    bool m_securityGroupRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_SECURITYGROUP_H_
