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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACESECURITYGROUPPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACESECURITYGROUPPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityGroupPolicySet.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ReplaceSecurityGroupPolicies请求参数结构体
                */
                class ReplaceSecurityGroupPoliciesRequest : public AbstractModel
                {
                public:
                    ReplaceSecurityGroupPoliciesRequest();
                    ~ReplaceSecurityGroupPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
                     * @return SecurityGroupId 安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
                     * @param _securityGroupId 安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
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
                     * 获取安全组规则集合对象。
                     * @return SecurityGroupPolicySet 安全组规则集合对象。
                     * 
                     */
                    SecurityGroupPolicySet GetSecurityGroupPolicySet() const;

                    /**
                     * 设置安全组规则集合对象。
                     * @param _securityGroupPolicySet 安全组规则集合对象。
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
                     * 获取旧的安全组规则集合对象，当更新优先级时为必选，且修改顺序与SecurityGroupPolicySet参数顺序一一对应，入参长度需要与SecurityGroupPolicySet参数保持一致。
                     * @return OriginalSecurityGroupPolicySet 旧的安全组规则集合对象，当更新优先级时为必选，且修改顺序与SecurityGroupPolicySet参数顺序一一对应，入参长度需要与SecurityGroupPolicySet参数保持一致。
                     * 
                     */
                    SecurityGroupPolicySet GetOriginalSecurityGroupPolicySet() const;

                    /**
                     * 设置旧的安全组规则集合对象，当更新优先级时为必选，且修改顺序与SecurityGroupPolicySet参数顺序一一对应，入参长度需要与SecurityGroupPolicySet参数保持一致。
                     * @param _originalSecurityGroupPolicySet 旧的安全组规则集合对象，当更新优先级时为必选，且修改顺序与SecurityGroupPolicySet参数顺序一一对应，入参长度需要与SecurityGroupPolicySet参数保持一致。
                     * 
                     */
                    void SetOriginalSecurityGroupPolicySet(const SecurityGroupPolicySet& _originalSecurityGroupPolicySet);

                    /**
                     * 判断参数 OriginalSecurityGroupPolicySet 是否已赋值
                     * @return OriginalSecurityGroupPolicySet 是否已赋值
                     * 
                     */
                    bool OriginalSecurityGroupPolicySetHasBeenSet() const;

                    /**
                     * 获取更新类型，默认 Policy  Policy：只更新内容  Priority：只更新优先级  Both：内容和优先级都更新
                     * @return UpdateType 更新类型，默认 Policy  Policy：只更新内容  Priority：只更新优先级  Both：内容和优先级都更新
                     * 
                     */
                    std::string GetUpdateType() const;

                    /**
                     * 设置更新类型，默认 Policy  Policy：只更新内容  Priority：只更新优先级  Both：内容和优先级都更新
                     * @param _updateType 更新类型，默认 Policy  Policy：只更新内容  Priority：只更新优先级  Both：内容和优先级都更新
                     * 
                     */
                    void SetUpdateType(const std::string& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     * 
                     */
                    bool UpdateTypeHasBeenSet() const;

                private:

                    /**
                     * 安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 安全组规则集合对象。
                     */
                    SecurityGroupPolicySet m_securityGroupPolicySet;
                    bool m_securityGroupPolicySetHasBeenSet;

                    /**
                     * 旧的安全组规则集合对象，当更新优先级时为必选，且修改顺序与SecurityGroupPolicySet参数顺序一一对应，入参长度需要与SecurityGroupPolicySet参数保持一致。
                     */
                    SecurityGroupPolicySet m_originalSecurityGroupPolicySet;
                    bool m_originalSecurityGroupPolicySetHasBeenSet;

                    /**
                     * 更新类型，默认 Policy  Policy：只更新内容  Priority：只更新优先级  Both：内容和优先级都更新
                     */
                    std::string m_updateType;
                    bool m_updateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACESECURITYGROUPPOLICIESREQUEST_H_
