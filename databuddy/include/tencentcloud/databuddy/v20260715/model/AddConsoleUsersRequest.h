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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADDCONSOLEUSERSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADDCONSOLEUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * AddConsoleUsers请求参数结构体
                */
                class AddConsoleUsersRequest : public AbstractModel
                {
                public:
                    AddConsoleUsersRequest();
                    ~AddConsoleUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户 UIN 列表，单次最多100个</p>
                     * @return UserUins <p>用户 UIN 列表，单次最多100个</p>
                     * 
                     */
                    std::vector<std::string> GetUserUins() const;

                    /**
                     * 设置<p>用户 UIN 列表，单次最多100个</p>
                     * @param _userUins <p>用户 UIN 列表，单次最多100个</p>
                     * 
                     */
                    void SetUserUins(const std::vector<std::string>& _userUins);

                    /**
                     * 判断参数 UserUins 是否已赋值
                     * @return UserUins 是否已赋值
                     * 
                     */
                    bool UserUinsHasBeenSet() const;

                    /**
                     * 获取<p>角色 ID 列表</p><p>枚举值：</p><ul><li>2001： 控制台管理员</li><li>2002： 控制台成员</li></ul>
                     * @return RoleIds <p>角色 ID 列表</p><p>枚举值：</p><ul><li>2001： 控制台管理员</li><li>2002： 控制台成员</li></ul>
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置<p>角色 ID 列表</p><p>枚举值：</p><ul><li>2001： 控制台管理员</li><li>2002： 控制台成员</li></ul>
                     * @param _roleIds <p>角色 ID 列表</p><p>枚举值：</p><ul><li>2001： 控制台管理员</li><li>2002： 控制台成员</li></ul>
                     * 
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     * 
                     */
                    bool RoleIdsHasBeenSet() const;

                private:

                    /**
                     * <p>用户 UIN 列表，单次最多100个</p>
                     */
                    std::vector<std::string> m_userUins;
                    bool m_userUinsHasBeenSet;

                    /**
                     * <p>角色 ID 列表</p><p>枚举值：</p><ul><li>2001： 控制台管理员</li><li>2002： 控制台成员</li></ul>
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADDCONSOLEUSERSREQUEST_H_
