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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_REPLACESECURITYGROUPPOLICYREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_REPLACESECURITYGROUPPOLICYREQUEST_H_

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
                * ReplaceSecurityGroupPolicy请求参数结构体
                */
                class ReplaceSecurityGroupPolicyRequest : public AbstractModel
                {
                public:
                    ReplaceSecurityGroupPolicyRequest();
                    ~ReplaceSecurityGroupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取
                     * @return SecurityGroupId 安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取
                     * @param _securityGroupId 安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取
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

                private:

                    /**
                     * 安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 安全组规则集合对象。
                     */
                    SecurityGroupPolicySet m_securityGroupPolicySet;
                    bool m_securityGroupPolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_REPLACESECURITYGROUPPOLICYREQUEST_H_
