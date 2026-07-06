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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_CREATESECURITYGROUPRULEGROUPREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_CREATESECURITYGROUPRULEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/SecurityGroupRule.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * CreateSecurityGroupRuleGroup请求参数结构体
                */
                class CreateSecurityGroupRuleGroupRequest : public AbstractModel
                {
                public:
                    CreateSecurityGroupRuleGroupRequest();
                    ~CreateSecurityGroupRuleGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则组ID
                     * @return GroupName 规则组ID
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置规则组ID
                     * @param _groupName 规则组ID
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
                     * 获取产品类型
                     * @return Product 产品类型
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品类型
                     * @param _product 产品类型
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取规则列表
                     * @return Rules 规则列表
                     * 
                     */
                    std::vector<SecurityGroupRule> GetRules() const;

                    /**
                     * 设置规则列表
                     * @param _rules 规则列表
                     * 
                     */
                    void SetRules(const std::vector<SecurityGroupRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 规则组ID
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 产品类型
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<SecurityGroupRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_CREATESECURITYGROUPRULEGROUPREQUEST_H_
