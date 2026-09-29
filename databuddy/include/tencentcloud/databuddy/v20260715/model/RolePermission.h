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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ROLEPERMISSION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ROLEPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 角色权限
                */
                class RolePermission : public AbstractModel
                {
                public:
                    RolePermission();
                    ~RolePermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模块ID，须为当前租户已开通的功能模块（叶子节点）的模块ID（层级编码字符串，如 101=快速开始、109=工作流、116101103=工作空间管理_角色权限），非法值返回 InvalidParameterValue；模块清单可通过控制台「工作空间设置-角色权限」页面查看</p>
                     * @return ModuleId <p>模块ID，须为当前租户已开通的功能模块（叶子节点）的模块ID（层级编码字符串，如 101=快速开始、109=工作流、116101103=工作空间管理_角色权限），非法值返回 InvalidParameterValue；模块清单可通过控制台「工作空间设置-角色权限」页面查看</p>
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置<p>模块ID，须为当前租户已开通的功能模块（叶子节点）的模块ID（层级编码字符串，如 101=快速开始、109=工作流、116101103=工作空间管理_角色权限），非法值返回 InvalidParameterValue；模块清单可通过控制台「工作空间设置-角色权限」页面查看</p>
                     * @param _moduleId <p>模块ID，须为当前租户已开通的功能模块（叶子节点）的模块ID（层级编码字符串，如 101=快速开始、109=工作流、116101103=工作空间管理_角色权限），非法值返回 InvalidParameterValue；模块清单可通过控制台「工作空间设置-角色权限」页面查看</p>
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取<p>模块访问权限，单值：R=只读，RW=读写，RWD=读写删除，N=无权限</p>
                     * @return Permissions <p>模块访问权限，单值：R=只读，RW=读写，RWD=读写删除，N=无权限</p>
                     * 
                     */
                    std::string GetPermissions() const;

                    /**
                     * 设置<p>模块访问权限，单值：R=只读，RW=读写，RWD=读写删除，N=无权限</p>
                     * @param _permissions <p>模块访问权限，单值：R=只读，RW=读写，RWD=读写删除，N=无权限</p>
                     * 
                     */
                    void SetPermissions(const std::string& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * <p>模块ID，须为当前租户已开通的功能模块（叶子节点）的模块ID（层级编码字符串，如 101=快速开始、109=工作流、116101103=工作空间管理_角色权限），非法值返回 InvalidParameterValue；模块清单可通过控制台「工作空间设置-角色权限」页面查看</p>
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * <p>模块访问权限，单值：R=只读，RW=读写，RWD=读写删除，N=无权限</p>
                     */
                    std::string m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ROLEPERMISSION_H_
