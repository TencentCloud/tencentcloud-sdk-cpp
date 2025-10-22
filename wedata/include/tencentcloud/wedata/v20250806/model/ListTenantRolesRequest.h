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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTENANTROLESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTENANTROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListTenantRoles请求参数结构体
                */
                class ListTenantRolesRequest : public AbstractModel
                {
                public:
                    ListTenantRolesRequest();
                    ~ListTenantRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取角色中文展示名模糊查询，只能传一个值
                     * @return RoleDisplayName 角色中文展示名模糊查询，只能传一个值
                     * 
                     */
                    std::string GetRoleDisplayName() const;

                    /**
                     * 设置角色中文展示名模糊查询，只能传一个值
                     * @param _roleDisplayName 角色中文展示名模糊查询，只能传一个值
                     * 
                     */
                    void SetRoleDisplayName(const std::string& _roleDisplayName);

                    /**
                     * 判断参数 RoleDisplayName 是否已赋值
                     * @return RoleDisplayName 是否已赋值
                     * 
                     */
                    bool RoleDisplayNameHasBeenSet() const;

                private:

                    /**
                     * 角色中文展示名模糊查询，只能传一个值
                     */
                    std::string m_roleDisplayName;
                    bool m_roleDisplayNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTENANTROLESREQUEST_H_
