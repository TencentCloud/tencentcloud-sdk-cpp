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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEACCESSRULESRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEACCESSRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/AccessRule.h>
#include <tencentcloud/tione/v20211111/model/Workspace.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeAccessRules返回参数结构体
                */
                class DescribeAccessRulesResponse : public AbstractModel
                {
                public:
                    DescribeAccessRulesResponse();
                    ~DescribeAccessRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>当前用户有哪些权限</p>
                     * @return AccessRules <p>当前用户有哪些权限</p>
                     * 
                     */
                    std::vector<AccessRule> GetAccessRules() const;

                    /**
                     * 判断参数 AccessRules 是否已赋值
                     * @return AccessRules 是否已赋值
                     * 
                     */
                    bool AccessRulesHasBeenSet() const;

                    /**
                     * 获取<p>权限点全量集合</p>
                     * @return FullAccessRules <p>权限点全量集合</p>
                     * 
                     */
                    std::vector<AccessRule> GetFullAccessRules() const;

                    /**
                     * 判断参数 FullAccessRules 是否已赋值
                     * @return FullAccessRules 是否已赋值
                     * 
                     */
                    bool FullAccessRulesHasBeenSet() const;

                    /**
                     * 获取<p>当前用户拥有的空间外角色</p>
                     * @return GlobalRoles <p>当前用户拥有的空间外角色</p>
                     * 
                     */
                    std::vector<std::string> GetGlobalRoles() const;

                    /**
                     * 判断参数 GlobalRoles 是否已赋值
                     * @return GlobalRoles 是否已赋值
                     * 
                     */
                    bool GlobalRolesHasBeenSet() const;

                    /**
                     * 获取<p>当前用户可见的空间列表</p>
                     * @return Workspaces <p>当前用户可见的空间列表</p>
                     * 
                     */
                    std::vector<Workspace> GetWorkspaces() const;

                    /**
                     * 判断参数 Workspaces 是否已赋值
                     * @return Workspaces 是否已赋值
                     * 
                     */
                    bool WorkspacesHasBeenSet() const;

                    /**
                     * 获取<p>当前用户有哪些空间外权限</p>
                     * @return OutsideAccessRules <p>当前用户有哪些空间外权限</p>
                     * 
                     */
                    std::vector<AccessRule> GetOutsideAccessRules() const;

                    /**
                     * 判断参数 OutsideAccessRules 是否已赋值
                     * @return OutsideAccessRules 是否已赋值
                     * 
                     */
                    bool OutsideAccessRulesHasBeenSet() const;

                private:

                    /**
                     * <p>当前用户有哪些权限</p>
                     */
                    std::vector<AccessRule> m_accessRules;
                    bool m_accessRulesHasBeenSet;

                    /**
                     * <p>权限点全量集合</p>
                     */
                    std::vector<AccessRule> m_fullAccessRules;
                    bool m_fullAccessRulesHasBeenSet;

                    /**
                     * <p>当前用户拥有的空间外角色</p>
                     */
                    std::vector<std::string> m_globalRoles;
                    bool m_globalRolesHasBeenSet;

                    /**
                     * <p>当前用户可见的空间列表</p>
                     */
                    std::vector<Workspace> m_workspaces;
                    bool m_workspacesHasBeenSet;

                    /**
                     * <p>当前用户有哪些空间外权限</p>
                     */
                    std::vector<AccessRule> m_outsideAccessRules;
                    bool m_outsideAccessRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEACCESSRULESRESPONSE_H_
