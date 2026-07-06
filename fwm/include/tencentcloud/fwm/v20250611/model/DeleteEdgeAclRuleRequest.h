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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DELETEEDGEACLRULEREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DELETEEDGEACLRULEREQUEST_H_

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
                * DeleteEdgeAclRule请求参数结构体
                */
                class DeleteEdgeAclRuleRequest : public AbstractModel
                {
                public:
                    DeleteEdgeAclRuleRequest();
                    ~DeleteEdgeAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则组ID
                     * @return GroupId 规则组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置规则组ID
                     * @param _groupId 规则组ID
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
                     * 获取要删除的规则ID列表
                     * @return RuleIds 要删除的规则ID列表
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置要删除的规则ID列表
                     * @param _ruleIds 要删除的规则ID列表
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                private:

                    /**
                     * 规则组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 要删除的规则ID列表
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DELETEEDGEACLRULEREQUEST_H_
