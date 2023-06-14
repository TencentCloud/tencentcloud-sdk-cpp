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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSECURITYGROUPPOLICIESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSECURITYGROUPPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/SecurityGroupPolicySet.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifySecurityGroupPolicies请求参数结构体
                */
                class ModifySecurityGroupPoliciesRequest : public AbstractModel
                {
                public:
                    ModifySecurityGroupPoliciesRequest();
                    ~ModifySecurityGroupPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     * @return SecurityGroupId 安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     * @param _securityGroupId 安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
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
                     * 获取安全组规则集合。 SecurityGroupPolicySet对象必须同时指定新的出（Egress）入（Ingress）站规则。 SecurityGroupPolicy对象不支持自定义索引（PolicyIndex）。
                     * @return SecurityGroupPolicySet 安全组规则集合。 SecurityGroupPolicySet对象必须同时指定新的出（Egress）入（Ingress）站规则。 SecurityGroupPolicy对象不支持自定义索引（PolicyIndex）。
                     * 
                     */
                    SecurityGroupPolicySet GetSecurityGroupPolicySet() const;

                    /**
                     * 设置安全组规则集合。 SecurityGroupPolicySet对象必须同时指定新的出（Egress）入（Ingress）站规则。 SecurityGroupPolicy对象不支持自定义索引（PolicyIndex）。
                     * @param _securityGroupPolicySet 安全组规则集合。 SecurityGroupPolicySet对象必须同时指定新的出（Egress）入（Ingress）站规则。 SecurityGroupPolicy对象不支持自定义索引（PolicyIndex）。
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
                     * 获取排序安全组标识。值为True时，支持安全组排序；SortPolicys不存在或SortPolicys为False时，为修改安全组规则。
                     * @return SortPolicys 排序安全组标识。值为True时，支持安全组排序；SortPolicys不存在或SortPolicys为False时，为修改安全组规则。
                     * 
                     */
                    bool GetSortPolicys() const;

                    /**
                     * 设置排序安全组标识。值为True时，支持安全组排序；SortPolicys不存在或SortPolicys为False时，为修改安全组规则。
                     * @param _sortPolicys 排序安全组标识。值为True时，支持安全组排序；SortPolicys不存在或SortPolicys为False时，为修改安全组规则。
                     * 
                     */
                    void SetSortPolicys(const bool& _sortPolicys);

                    /**
                     * 判断参数 SortPolicys 是否已赋值
                     * @return SortPolicys 是否已赋值
                     * 
                     */
                    bool SortPolicysHasBeenSet() const;

                private:

                    /**
                     * 安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 安全组规则集合。 SecurityGroupPolicySet对象必须同时指定新的出（Egress）入（Ingress）站规则。 SecurityGroupPolicy对象不支持自定义索引（PolicyIndex）。
                     */
                    SecurityGroupPolicySet m_securityGroupPolicySet;
                    bool m_securityGroupPolicySetHasBeenSet;

                    /**
                     * 排序安全组标识。值为True时，支持安全组排序；SortPolicys不存在或SortPolicys为False时，为修改安全组规则。
                     */
                    bool m_sortPolicys;
                    bool m_sortPolicysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSECURITYGROUPPOLICIESREQUEST_H_
