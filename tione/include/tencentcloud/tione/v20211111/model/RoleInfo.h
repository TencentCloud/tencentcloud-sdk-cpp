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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_ROLEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_ROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 角色信息
                */
                class RoleInfo : public AbstractModel
                {
                public:
                    RoleInfo();
                    ~RoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>角色ID</p>
                     * @return RoleId <p>角色ID</p>
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置<p>角色ID</p>
                     * @param _roleId <p>角色ID</p>
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
                     * @return RoleName <p>名称</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _roleName <p>名称</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>角色类型。&quot;SYSTEM&quot; 内置角色，&quot;CUSTOMER&quot; 自定义角色</p>
                     * @return RoleType <p>角色类型。&quot;SYSTEM&quot; 内置角色，&quot;CUSTOMER&quot; 自定义角色</p>
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置<p>角色类型。&quot;SYSTEM&quot; 内置角色，&quot;CUSTOMER&quot; 自定义角色</p>
                     * @param _roleType <p>角色类型。&quot;SYSTEM&quot; 内置角色，&quot;CUSTOMER&quot; 自定义角色</p>
                     * 
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>绑定的用户数</p>
                     * @return UserCount <p>绑定的用户数</p>
                     * 
                     */
                    int64_t GetUserCount() const;

                    /**
                     * 设置<p>绑定的用户数</p>
                     * @param _userCount <p>绑定的用户数</p>
                     * 
                     */
                    void SetUserCount(const int64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                private:

                    /**
                     * <p>角色ID</p>
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>角色类型。&quot;SYSTEM&quot; 内置角色，&quot;CUSTOMER&quot; 自定义角色</p>
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>绑定的用户数</p>
                     */
                    int64_t m_userCount;
                    bool m_userCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_ROLEINFO_H_
