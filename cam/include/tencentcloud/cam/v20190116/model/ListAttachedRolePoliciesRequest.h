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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDROLEPOLICIESREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDROLEPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAttachedRolePolicies请求参数结构体
                */
                class ListAttachedRolePoliciesRequest : public AbstractModel
                {
                public:
                    ListAttachedRolePoliciesRequest();
                    ~ListAttachedRolePoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码，从 1 开始
                     * @return Page 页码，从 1 开始
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置页码，从 1 开始
                     * @param _page 页码，从 1 开始
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页行数，不能大于200
                     * @return Rp 每页行数，不能大于200
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置每页行数，不能大于200
                     * @param _rp 每页行数，不能大于200
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取角色 ID。用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @return RoleId 角色 ID。用于指定角色，入参 RoleId 与 RoleName 二选一
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色 ID。用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @param _roleId 角色 ID。用于指定角色，入参 RoleId 与 RoleName 二选一
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
                     * 获取角色名。用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @return RoleName 角色名。用于指定角色，入参 RoleId 与 RoleName 二选一
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名。用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @param _roleName 角色名。用于指定角色，入参 RoleId 与 RoleName 二选一
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
                     * 获取按策略类型过滤，User表示仅查询自定义策略，QCS表示仅查询预设策略
                     * @return PolicyType 按策略类型过滤，User表示仅查询自定义策略，QCS表示仅查询预设策略
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置按策略类型过滤，User表示仅查询自定义策略，QCS表示仅查询预设策略
                     * @param _policyType 按策略类型过滤，User表示仅查询自定义策略，QCS表示仅查询预设策略
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return Keyword 搜索关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键字
                     * @param _keyword 搜索关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 页码，从 1 开始
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页行数，不能大于200
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * 角色 ID。用于指定角色，入参 RoleId 与 RoleName 二选一
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色名。用于指定角色，入参 RoleId 与 RoleName 二选一
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 按策略类型过滤，User表示仅查询自定义策略，QCS表示仅查询预设策略
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDROLEPOLICIESREQUEST_H_
