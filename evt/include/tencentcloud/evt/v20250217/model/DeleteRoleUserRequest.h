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

#ifndef TENCENTCLOUD_EVT_V20250217_MODEL_DELETEROLEUSERREQUEST_H_
#define TENCENTCLOUD_EVT_V20250217_MODEL_DELETEROLEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Evt
    {
        namespace V20250217
        {
            namespace Model
            {
                /**
                * DeleteRoleUser请求参数结构体
                */
                class DeleteRoleUserRequest : public AbstractModel
                {
                public:
                    DeleteRoleUserRequest();
                    ~DeleteRoleUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>自定义角色体系的ID</p>
                     * @return RoleSystemId <p>自定义角色体系的ID</p>
                     * 
                     */
                    uint64_t GetRoleSystemId() const;

                    /**
                     * 设置<p>自定义角色体系的ID</p>
                     * @param _roleSystemId <p>自定义角色体系的ID</p>
                     * 
                     */
                    void SetRoleSystemId(const uint64_t& _roleSystemId);

                    /**
                     * 判断参数 RoleSystemId 是否已赋值
                     * @return RoleSystemId 是否已赋值
                     * 
                     */
                    bool RoleSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>需要删除的自定义用户ID</p>
                     * @return UserId <p>需要删除的自定义用户ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>需要删除的自定义用户ID</p>
                     * @param _userId <p>需要删除的自定义用户ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>自定义角色体系的ID</p>
                     */
                    uint64_t m_roleSystemId;
                    bool m_roleSystemIdHasBeenSet;

                    /**
                     * <p>需要删除的自定义用户ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EVT_V20250217_MODEL_DELETEROLEUSERREQUEST_H_
