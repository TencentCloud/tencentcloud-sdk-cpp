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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERROLEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateUserRole请求参数结构体
                */
                class CreateUserRoleRequest : public AbstractModel
                {
                public:
                    CreateUserRoleRequest();
                    ~CreateUserRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取角色Arn信息
                     * @return Arn 角色Arn信息
                     * 
                     */
                    std::string GetArn() const;

                    /**
                     * 设置角色Arn信息
                     * @param _arn 角色Arn信息
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
                     * @return Name 角色名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置角色名称
                     * @param _name 角色名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 角色Arn信息
                     */
                    std::string m_arn;
                    bool m_arnHasBeenSet;

                    /**
                     * 角色描述信息
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 角色名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERROLEREQUEST_H_
