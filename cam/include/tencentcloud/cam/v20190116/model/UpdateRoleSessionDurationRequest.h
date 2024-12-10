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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEROLESESSIONDURATIONREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEROLESESSIONDURATIONREQUEST_H_

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
                * UpdateRoleSessionDuration请求参数结构体
                */
                class UpdateRoleSessionDurationRequest : public AbstractModel
                {
                public:
                    UpdateRoleSessionDurationRequest();
                    ~UpdateRoleSessionDurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取时长(秒)
                     * @return SessionDuration 时长(秒)
                     * 
                     */
                    uint64_t GetSessionDuration() const;

                    /**
                     * 设置时长(秒)
                     * @param _sessionDuration 时长(秒)
                     * 
                     */
                    void SetSessionDuration(const uint64_t& _sessionDuration);

                    /**
                     * 判断参数 SessionDuration 是否已赋值
                     * @return SessionDuration 是否已赋值
                     * 
                     */
                    bool SessionDurationHasBeenSet() const;

                    /**
                     * 获取角色名(与角色ID必填一个)
                     * @return RoleName 角色名(与角色ID必填一个)
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名(与角色ID必填一个)
                     * @param _roleName 角色名(与角色ID必填一个)
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
                     * 获取角色ID(与角色名必填一个)
                     * @return RoleId 角色ID(与角色名必填一个)
                     * 
                     */
                    uint64_t GetRoleId() const;

                    /**
                     * 设置角色ID(与角色名必填一个)
                     * @param _roleId 角色ID(与角色名必填一个)
                     * 
                     */
                    void SetRoleId(const uint64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                private:

                    /**
                     * 时长(秒)
                     */
                    uint64_t m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * 角色名(与角色ID必填一个)
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 角色ID(与角色名必填一个)
                     */
                    uint64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEROLESESSIONDURATIONREQUEST_H_
