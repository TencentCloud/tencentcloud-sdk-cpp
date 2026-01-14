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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEUSERPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEUSERPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PermissionItem.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteUserPermissions请求参数结构体
                */
                class DeleteUserPermissionsRequest : public AbstractModel
                {
                public:
                    DeleteUserPermissionsRequest();
                    ~DeleteUserPermissionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要授权的用户的唯一标识符（支持子账号 UIN和角色UIN）
                     * @return TargetUin 要授权的用户的唯一标识符（支持子账号 UIN和角色UIN）
                     * 
                     */
                    std::string GetTargetUin() const;

                    /**
                     * 设置要授权的用户的唯一标识符（支持子账号 UIN和角色UIN）
                     * @param _targetUin 要授权的用户的唯一标识符（支持子账号 UIN和角色UIN）
                     * 
                     */
                    void SetTargetUin(const std::string& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取用户最终应拥有的完整权限列表。采用声明式语义，传入的列表代表用户最终应该拥有的全部权限，系统会自动计算差异并执行必要的创建/删除操作。为空或不提供时将清除该用户的所有权限。最大支持 100 个权限项。
                     * @return Permissions 用户最终应拥有的完整权限列表。采用声明式语义，传入的列表代表用户最终应该拥有的全部权限，系统会自动计算差异并执行必要的创建/删除操作。为空或不提供时将清除该用户的所有权限。最大支持 100 个权限项。
                     * 
                     */
                    std::vector<PermissionItem> GetPermissions() const;

                    /**
                     * 设置用户最终应拥有的完整权限列表。采用声明式语义，传入的列表代表用户最终应该拥有的全部权限，系统会自动计算差异并执行必要的创建/删除操作。为空或不提供时将清除该用户的所有权限。最大支持 100 个权限项。
                     * @param _permissions 用户最终应拥有的完整权限列表。采用声明式语义，传入的列表代表用户最终应该拥有的全部权限，系统会自动计算差异并执行必要的创建/删除操作。为空或不提供时将清除该用户的所有权限。最大支持 100 个权限项。
                     * 
                     */
                    void SetPermissions(const std::vector<PermissionItem>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * 要授权的用户的唯一标识符（支持子账号 UIN和角色UIN）
                     */
                    std::string m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * 用户最终应拥有的完整权限列表。采用声明式语义，传入的列表代表用户最终应该拥有的全部权限，系统会自动计算差异并执行必要的创建/删除操作。为空或不提供时将清除该用户的所有权限。最大支持 100 个权限项。
                     */
                    std::vector<PermissionItem> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEUSERPERMISSIONSREQUEST_H_
