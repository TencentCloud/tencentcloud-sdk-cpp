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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_CREATERULEGROUPREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_CREATERULEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * CreateRuleGroup请求参数结构体
                */
                class CreateRuleGroupRequest : public AbstractModel
                {
                public:
                    CreateRuleGroupRequest();
                    ~CreateRuleGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则组名称，不可为空，最长50字符（按字符数计，中文按1个字符计）</p>
                     * @return GroupName <p>规则组名称，不可为空，最长50字符（按字符数计，中文按1个字符计）</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>规则组名称，不可为空，最长50字符（按字符数计，中文按1个字符计）</p>
                     * @param _groupName <p>规则组名称，不可为空，最长50字符（按字符数计，中文按1个字符计）</p>
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
                     * 获取<p>规则组归属产品。enterprise_sg-企业安全组，cfw_vpc_acl-VPC边界防火墙，cfw_nat_acl-NAT边界防火墙，cfw_edge_acl-互联网边界防火墙。必填，不接受 all</p>
                     * @return Product <p>规则组归属产品。enterprise_sg-企业安全组，cfw_vpc_acl-VPC边界防火墙，cfw_nat_acl-NAT边界防火墙，cfw_edge_acl-互联网边界防火墙。必填，不接受 all</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>规则组归属产品。enterprise_sg-企业安全组，cfw_vpc_acl-VPC边界防火墙，cfw_nat_acl-NAT边界防火墙，cfw_edge_acl-互联网边界防火墙。必填，不接受 all</p>
                     * @param _product <p>规则组归属产品。enterprise_sg-企业安全组，cfw_vpc_acl-VPC边界防火墙，cfw_nat_acl-NAT边界防火墙，cfw_edge_acl-互联网边界防火墙。必填，不接受 all</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * <p>规则组名称，不可为空，最长50字符（按字符数计，中文按1个字符计）</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>规则组归属产品。enterprise_sg-企业安全组，cfw_vpc_acl-VPC边界防火墙，cfw_nat_acl-NAT边界防火墙，cfw_edge_acl-互联网边界防火墙。必填，不接受 all</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_CREATERULEGROUPREQUEST_H_
