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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSROLEACCESSINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSROLEACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Cos桶关联角色列表信息
                */
                class CosRoleAccessInfo : public AbstractModel
                {
                public:
                    CosRoleAccessInfo();
                    ~CosRoleAccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色ID
                     * @return RoleId 角色ID
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色ID
                     * @param _roleId 角色ID
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
                     * 获取角色名称
                     * @return RoleName 角色名称
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
                     * @param _roleName 角色名称
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
                     * 获取角色描述
                     * @return RoleDescription 角色描述
                     * 
                     */
                    std::string GetRoleDescription() const;

                    /**
                     * 设置角色描述
                     * @param _roleDescription 角色描述
                     * 
                     */
                    void SetRoleDescription(const std::string& _roleDescription);

                    /**
                     * 判断参数 RoleDescription 是否已赋值
                     * @return RoleDescription 是否已赋值
                     * 
                     */
                    bool RoleDescriptionHasBeenSet() const;

                    /**
                     * 获取可访问权限数
                     * @return PermissionCount 可访问权限数
                     * 
                     */
                    uint64_t GetPermissionCount() const;

                    /**
                     * 设置可访问权限数
                     * @param _permissionCount 可访问权限数
                     * 
                     */
                    void SetPermissionCount(const uint64_t& _permissionCount);

                    /**
                     * 判断参数 PermissionCount 是否已赋值
                     * @return PermissionCount 是否已赋值
                     * 
                     */
                    bool PermissionCountHasBeenSet() const;

                    /**
                     * 获取策略创建时间
                     * @return CreateTime 策略创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置策略创建时间
                     * @param _createTime 策略创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 角色ID
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色名称
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 角色描述
                     */
                    std::string m_roleDescription;
                    bool m_roleDescriptionHasBeenSet;

                    /**
                     * 可访问权限数
                     */
                    uint64_t m_permissionCount;
                    bool m_permissionCountHasBeenSet;

                    /**
                     * 策略创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSROLEACCESSINFO_H_
