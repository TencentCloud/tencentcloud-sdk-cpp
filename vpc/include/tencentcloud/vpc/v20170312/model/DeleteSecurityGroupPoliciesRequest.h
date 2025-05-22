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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETESECURITYGROUPPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETESECURITYGROUPPOLICIESREQUEST_H_

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
                * DeleteSecurityGroupPolicies请求参数结构体
                */
                class DeleteSecurityGroupPoliciesRequest : public AbstractModel
                {
                public:
                    DeleteSecurityGroupPoliciesRequest();
                    ~DeleteSecurityGroupPoliciesRequest() = default;
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
                     * 获取安全组规则集合。一个请求中只能删除单个方向的一条或多条规则。支持指定索引（PolicyIndex） 匹配删除和安全组规则匹配删除两种方式，一个请求中只能使用一种匹配方式。
使用安全组规则匹配删除时，需要填写`Action`， `Protocol`， `CidrBlock`， `Port`参数。
                     * @return SecurityGroupPolicySet 安全组规则集合。一个请求中只能删除单个方向的一条或多条规则。支持指定索引（PolicyIndex） 匹配删除和安全组规则匹配删除两种方式，一个请求中只能使用一种匹配方式。
使用安全组规则匹配删除时，需要填写`Action`， `Protocol`， `CidrBlock`， `Port`参数。
                     * 
                     */
                    SecurityGroupPolicySet GetSecurityGroupPolicySet() const;

                    /**
                     * 设置安全组规则集合。一个请求中只能删除单个方向的一条或多条规则。支持指定索引（PolicyIndex） 匹配删除和安全组规则匹配删除两种方式，一个请求中只能使用一种匹配方式。
使用安全组规则匹配删除时，需要填写`Action`， `Protocol`， `CidrBlock`， `Port`参数。
                     * @param _securityGroupPolicySet 安全组规则集合。一个请求中只能删除单个方向的一条或多条规则。支持指定索引（PolicyIndex） 匹配删除和安全组规则匹配删除两种方式，一个请求中只能使用一种匹配方式。
使用安全组规则匹配删除时，需要填写`Action`， `Protocol`， `CidrBlock`， `Port`参数。
                     * 
                     */
                    void SetSecurityGroupPolicySet(const SecurityGroupPolicySet& _securityGroupPolicySet);

                    /**
                     * 判断参数 SecurityGroupPolicySet 是否已赋值
                     * @return SecurityGroupPolicySet 是否已赋值
                     * 
                     */
                    bool SecurityGroupPolicySetHasBeenSet() const;

                private:

                    /**
                     * 安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 安全组规则集合。一个请求中只能删除单个方向的一条或多条规则。支持指定索引（PolicyIndex） 匹配删除和安全组规则匹配删除两种方式，一个请求中只能使用一种匹配方式。
使用安全组规则匹配删除时，需要填写`Action`， `Protocol`， `CidrBlock`， `Port`参数。
                     */
                    SecurityGroupPolicySet m_securityGroupPolicySet;
                    bool m_securityGroupPolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETESECURITYGROUPPOLICIESREQUEST_H_
