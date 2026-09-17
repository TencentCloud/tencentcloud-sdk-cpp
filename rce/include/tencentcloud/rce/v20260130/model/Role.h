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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ROLE_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 角色信息
                */
                class Role : public AbstractModel
                {
                public:
                    Role();
                    ~Role() = default;
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
                     * 获取<p>角色名称</p>
                     * @return RoleName <p>角色名称</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>角色名称</p>
                     * @param _roleName <p>角色名称</p>
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
                     * 获取<p>个性签名</p>
                     * @return RoleSignature <p>个性签名</p>
                     * 
                     */
                    std::string GetRoleSignature() const;

                    /**
                     * 设置<p>个性签名</p>
                     * @param _roleSignature <p>个性签名</p>
                     * 
                     */
                    void SetRoleSignature(const std::string& _roleSignature);

                    /**
                     * 判断参数 RoleSignature 是否已赋值
                     * @return RoleSignature 是否已赋值
                     * 
                     */
                    bool RoleSignatureHasBeenSet() const;

                    /**
                     * 获取<p>角色等级</p>
                     * @return RoleLevel <p>角色等级</p>
                     * 
                     */
                    std::string GetRoleLevel() const;

                    /**
                     * 设置<p>角色等级</p>
                     * @param _roleLevel <p>角色等级</p>
                     * 
                     */
                    void SetRoleLevel(const std::string& _roleLevel);

                    /**
                     * 判断参数 RoleLevel 是否已赋值
                     * @return RoleLevel 是否已赋值
                     * 
                     */
                    bool RoleLevelHasBeenSet() const;

                    /**
                     * 获取<p>角色总战力</p>
                     * @return RoleCe <p>角色总战力</p>
                     * 
                     */
                    double GetRoleCe() const;

                    /**
                     * 设置<p>角色总战力</p>
                     * @param _roleCe <p>角色总战力</p>
                     * 
                     */
                    void SetRoleCe(const double& _roleCe);

                    /**
                     * 判断参数 RoleCe 是否已赋值
                     * @return RoleCe 是否已赋值
                     * 
                     */
                    bool RoleCeHasBeenSet() const;

                    /**
                     * 获取<p>角色创建时间</p>
                     * @return RoleCreateTime <p>角色创建时间</p>
                     * 
                     */
                    std::string GetRoleCreateTime() const;

                    /**
                     * 设置<p>角色创建时间</p>
                     * @param _roleCreateTime <p>角色创建时间</p>
                     * 
                     */
                    void SetRoleCreateTime(const std::string& _roleCreateTime);

                    /**
                     * 判断参数 RoleCreateTime 是否已赋值
                     * @return RoleCreateTime 是否已赋值
                     * 
                     */
                    bool RoleCreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>角色ID</p>
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * <p>角色名称</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>个性签名</p>
                     */
                    std::string m_roleSignature;
                    bool m_roleSignatureHasBeenSet;

                    /**
                     * <p>角色等级</p>
                     */
                    std::string m_roleLevel;
                    bool m_roleLevelHasBeenSet;

                    /**
                     * <p>角色总战力</p>
                     */
                    double m_roleCe;
                    bool m_roleCeHasBeenSet;

                    /**
                     * <p>角色创建时间</p>
                     */
                    std::string m_roleCreateTime;
                    bool m_roleCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ROLE_H_
