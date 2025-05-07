/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERROLE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CosPermission.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 用户角色
                */
                class UserRole : public AbstractModel
                {
                public:
                    UserRole();
                    ~UserRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色ID
                     * @return RoleId 角色ID
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置角色ID
                     * @param _roleId 角色ID
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取用户app ID
                     * @return AppId 用户app ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户app ID
                     * @param _appId 用户app ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return Uin 用户ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户ID
                     * @param _uin 用户ID
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取角色权限
                     * @return Arn 角色权限
                     * 
                     */
                    std::string GetArn() const;

                    /**
                     * 设置角色权限
                     * @param _arn 角色权限
                     * 
                     */
                    void SetArn(const std::string& _arn);

                    /**
                     * 判断参数 Arn 是否已赋值
                     * @return Arn 是否已赋值
                     * 
                     */
                    bool ArnHasBeenSet() const;

                    /**
                     * 获取最近修改时间戳
                     * @return ModifyTime 最近修改时间戳
                     * 
                     */
                    int64_t GetModifyTime() const;

                    /**
                     * 设置最近修改时间戳
                     * @param _modifyTime 最近修改时间戳
                     * 
                     */
                    void SetModifyTime(const int64_t& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取角色描述信息
                     * @return Desc 角色描述信息
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置角色描述信息
                     * @param _desc 角色描述信息
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

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
                     * 获取创建者UIN
                     * @return Creator 创建者UIN
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者UIN
                     * @param _creator 创建者UIN
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取cos授权路径列表
                     * @return CosPermissionList cos授权路径列表
                     * 
                     */
                    std::vector<CosPermission> GetCosPermissionList() const;

                    /**
                     * 设置cos授权路径列表
                     * @param _cosPermissionList cos授权路径列表
                     * 
                     */
                    void SetCosPermissionList(const std::vector<CosPermission>& _cosPermissionList);

                    /**
                     * 判断参数 CosPermissionList 是否已赋值
                     * @return CosPermissionList 是否已赋值
                     * 
                     */
                    bool CosPermissionListHasBeenSet() const;

                    /**
                     * 获取cam策略json
                     * @return PermissionJson cam策略json
                     * 
                     */
                    std::string GetPermissionJson() const;

                    /**
                     * 设置cam策略json
                     * @param _permissionJson cam策略json
                     * 
                     */
                    void SetPermissionJson(const std::string& _permissionJson);

                    /**
                     * 判断参数 PermissionJson 是否已赋值
                     * @return PermissionJson 是否已赋值
                     * 
                     */
                    bool PermissionJsonHasBeenSet() const;

                    /**
                     * 获取是否设置为常驻：1非常驻（默认）、2常驻（仅能设置一个常驻）
                     * @return IsDefault 是否设置为常驻：1非常驻（默认）、2常驻（仅能设置一个常驻）
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否设置为常驻：1非常驻（默认）、2常驻（仅能设置一个常驻）
                     * @param _isDefault 是否设置为常驻：1非常驻（默认）、2常驻（仅能设置一个常驻）
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * 角色ID
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 用户app ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 角色权限
                     */
                    std::string m_arn;
                    bool m_arnHasBeenSet;

                    /**
                     * 最近修改时间戳
                     */
                    int64_t m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 角色描述信息
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 角色名称
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 创建者UIN
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * cos授权路径列表
                     */
                    std::vector<CosPermission> m_cosPermissionList;
                    bool m_cosPermissionListHasBeenSet;

                    /**
                     * cam策略json
                     */
                    std::string m_permissionJson;
                    bool m_permissionJsonHasBeenSet;

                    /**
                     * 是否设置为常驻：1非常驻（默认）、2常驻（仅能设置一个常驻）
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERROLE_H_
