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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_CREATEVPCACLRULEREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_CREATEVPCACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/VpcAclRule.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * CreateVpcAclRule请求参数结构体
                */
                class CreateVpcAclRuleRequest : public AbstractModel
                {
                public:
                    CreateVpcAclRuleRequest();
                    ~CreateVpcAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则组ID</p>
                     * @return GroupId <p>规则组ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>规则组ID</p>
                     * @param _groupId <p>规则组ID</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>规则列表</p>
                     * @return Rules <p>规则列表</p>
                     * 
                     */
                    std::vector<VpcAclRule> GetRules() const;

                    /**
                     * 设置<p>规则列表</p>
                     * @param _rules <p>规则列表</p>
                     * 
                     */
                    void SetRules(const std::vector<VpcAclRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * <p>规则组ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>规则列表</p>
                     */
                    std::vector<VpcAclRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_CREATEVPCACLRULEREQUEST_H_
