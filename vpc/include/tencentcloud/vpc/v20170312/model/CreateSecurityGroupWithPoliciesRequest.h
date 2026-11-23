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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESECURITYGROUPWITHPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESECURITYGROUPWITHPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityGroupPolicySet.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateSecurityGroupWithPolicies请求参数结构体
                */
                class CreateSecurityGroupWithPoliciesRequest : public AbstractModel
                {
                public:
                    CreateSecurityGroupWithPoliciesRequest();
                    ~CreateSecurityGroupWithPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>安全组名称，可任意命名，但不得超过60个字符。</p>
                     * @return GroupName <p>安全组名称，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>安全组名称，可任意命名，但不得超过60个字符。</p>
                     * @param _groupName <p>安全组名称，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>安全组备注，最多100个字符。</p>
                     * @return GroupDescription <p>安全组备注，最多100个字符。</p>
                     * 
                     */
                    std::string GetGroupDescription() const;

                    /**
                     * 设置<p>安全组备注，最多100个字符。</p>
                     * @param _groupDescription <p>安全组备注，最多100个字符。</p>
                     * 
                     */
                    void SetGroupDescription(const std::string& _groupDescription);

                    /**
                     * 判断参数 GroupDescription 是否已赋值
                     * @return GroupDescription 是否已赋值
                     * 
                     */
                    bool GroupDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>项目ID，默认0。可在<a href="https://console.cloud.tencent.com/project">控制台项目管理页面</a>查询到。</p>
                     * @return ProjectId <p>项目ID，默认0。可在<a href="https://console.cloud.tencent.com/project">控制台项目管理页面</a>查询到。</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID，默认0。可在<a href="https://console.cloud.tencent.com/project">控制台项目管理页面</a>查询到。</p>
                     * @param _projectId <p>项目ID，默认0。可在<a href="https://console.cloud.tencent.com/project">控制台项目管理页面</a>查询到。</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>安全组规则集合。</p>
                     * @return SecurityGroupPolicySet <p>安全组规则集合。</p>
                     * 
                     */
                    SecurityGroupPolicySet GetSecurityGroupPolicySet() const;

                    /**
                     * 设置<p>安全组规则集合。</p>
                     * @param _securityGroupPolicySet <p>安全组规则集合。</p>
                     * 
                     */
                    void SetSecurityGroupPolicySet(const SecurityGroupPolicySet& _securityGroupPolicySet);

                    /**
                     * 判断参数 SecurityGroupPolicySet 是否已赋值
                     * @return SecurityGroupPolicySet 是否已赋值
                     * 
                     */
                    bool SecurityGroupPolicySetHasBeenSet() const;

                    /**
                     * 获取<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * @return Tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * @param _tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>安全组名称，可任意命名，但不得超过60个字符。</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>安全组备注，最多100个字符。</p>
                     */
                    std::string m_groupDescription;
                    bool m_groupDescriptionHasBeenSet;

                    /**
                     * <p>项目ID，默认0。可在<a href="https://console.cloud.tencent.com/project">控制台项目管理页面</a>查询到。</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>安全组规则集合。</p>
                     */
                    SecurityGroupPolicySet m_securityGroupPolicySet;
                    bool m_securityGroupPolicySetHasBeenSet;

                    /**
                     * <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESECURITYGROUPWITHPOLICIESREQUEST_H_
