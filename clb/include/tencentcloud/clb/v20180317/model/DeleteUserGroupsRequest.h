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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETEUSERGROUPSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETEUSERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DeleteUserGroups请求参数结构体
                */
                class DeleteUserGroupsRequest : public AbstractModel
                {
                public:
                    DeleteUserGroupsRequest();
                    ~DeleteUserGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由实例ID。</p>
                     * @return ModelRouterId <p>模型路由实例ID。</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID。</p>
                     * @param _modelRouterId <p>模型路由实例ID。</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>待删除的用户组ID列表，单次1-100个。不可包含「未分组」虚拟分组 ugrp-ungrouped。组内仍有 Key 时将拒绝删除，需先将 Key 移出或迁移到其他组。</p>
                     * @return UserGroupIds <p>待删除的用户组ID列表，单次1-100个。不可包含「未分组」虚拟分组 ugrp-ungrouped。组内仍有 Key 时将拒绝删除，需先将 Key 移出或迁移到其他组。</p>
                     * 
                     */
                    std::vector<std::string> GetUserGroupIds() const;

                    /**
                     * 设置<p>待删除的用户组ID列表，单次1-100个。不可包含「未分组」虚拟分组 ugrp-ungrouped。组内仍有 Key 时将拒绝删除，需先将 Key 移出或迁移到其他组。</p>
                     * @param _userGroupIds <p>待删除的用户组ID列表，单次1-100个。不可包含「未分组」虚拟分组 ugrp-ungrouped。组内仍有 Key 时将拒绝删除，需先将 Key 移出或迁移到其他组。</p>
                     * 
                     */
                    void SetUserGroupIds(const std::vector<std::string>& _userGroupIds);

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     * 
                     */
                    bool UserGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由实例ID。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>待删除的用户组ID列表，单次1-100个。不可包含「未分组」虚拟分组 ugrp-ungrouped。组内仍有 Key 时将拒绝删除，需先将 Key 移出或迁移到其他组。</p>
                     */
                    std::vector<std::string> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETEUSERGROUPSREQUEST_H_
