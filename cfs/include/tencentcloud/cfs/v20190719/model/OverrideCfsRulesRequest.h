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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_OVERRIDECFSRULESREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_OVERRIDECFSRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/InputPermissionGroupRules.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * OverrideCfsRules请求参数结构体
                */
                class OverrideCfsRulesRequest : public AbstractModel
                {
                public:
                    OverrideCfsRulesRequest();
                    ~OverrideCfsRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取权限组 ID
                     * @return PermissionGroupId 权限组 ID
                     * 
                     */
                    std::string GetPermissionGroupId() const;

                    /**
                     * 设置权限组 ID
                     * @param _permissionGroupId 权限组 ID
                     * 
                     */
                    void SetPermissionGroupId(const std::string& _permissionGroupId);

                    /**
                     * 判断参数 PermissionGroupId 是否已赋值
                     * @return PermissionGroupId 是否已赋值
                     * 
                     */
                    bool PermissionGroupIdHasBeenSet() const;

                    /**
                     * 获取权限组规则列表
                     * @return RuleList 权限组规则列表
                     * 
                     */
                    std::vector<InputPermissionGroupRules> GetRuleList() const;

                    /**
                     * 设置权限组规则列表
                     * @param _ruleList 权限组规则列表
                     * 
                     */
                    void SetRuleList(const std::vector<InputPermissionGroupRules>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                private:

                    /**
                     * 权限组 ID
                     */
                    std::string m_permissionGroupId;
                    bool m_permissionGroupIdHasBeenSet;

                    /**
                     * 权限组规则列表
                     */
                    std::vector<InputPermissionGroupRules> m_ruleList;
                    bool m_ruleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_OVERRIDECFSRULESREQUEST_H_
