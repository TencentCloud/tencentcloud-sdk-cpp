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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYUSERGRANTREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYUSERGRANTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyUserGrant请求参数结构体
                */
                class ModifyUserGrantRequest : public AbstractModel
                {
                public:
                    ModifyUserGrantRequest();
                    ~ModifyUserGrantRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>用户列表</p>
                     * @return SubUins <p>用户列表</p>
                     * 
                     */
                    std::vector<std::string> GetSubUins() const;

                    /**
                     * 设置<p>用户列表</p>
                     * @param _subUins <p>用户列表</p>
                     * 
                     */
                    void SetSubUins(const std::vector<std::string>& _subUins);

                    /**
                     * 判断参数 SubUins 是否已赋值
                     * @return SubUins 是否已赋值
                     * 
                     */
                    bool SubUinsHasBeenSet() const;

                    /**
                     * 获取<p>角色列表</p>
                     * @return RoleIds <p>角色列表</p>
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置<p>角色列表</p>
                     * @param _roleIds <p>角色列表</p>
                     * 
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     * 
                     */
                    bool RoleIdsHasBeenSet() const;

                    /**
                     * 获取<p>授权类型</p>
                     * @return Grant <p>授权类型</p>
                     * 
                     */
                    std::string GetGrant() const;

                    /**
                     * 设置<p>授权类型</p>
                     * @param _grant <p>授权类型</p>
                     * 
                     */
                    void SetGrant(const std::string& _grant);

                    /**
                     * 判断参数 Grant 是否已赋值
                     * @return Grant 是否已赋值
                     * 
                     */
                    bool GrantHasBeenSet() const;

                private:

                    /**
                     * <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>用户列表</p>
                     */
                    std::vector<std::string> m_subUins;
                    bool m_subUinsHasBeenSet;

                    /**
                     * <p>角色列表</p>
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                    /**
                     * <p>授权类型</p>
                     */
                    std::string m_grant;
                    bool m_grantHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYUSERGRANTREQUEST_H_
