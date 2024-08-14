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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERSTATUSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * UpdateUserStatus请求参数结构体
                */
                class UpdateUserStatusRequest : public AbstractModel
                {
                public:
                    UpdateUserStatusRequest();
                    ~UpdateUserStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID。
                     * @return ZoneId 空间 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间 ID。
                     * @param _zoneId 空间 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取用户 ID。
                     * @return UserId 用户 ID。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户 ID。
                     * @param _userId 用户 ID。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户的状态。取值：  Enabled：启用。 Disabled：禁用。
                     * @return NewUserStatus 用户的状态。取值：  Enabled：启用。 Disabled：禁用。
                     * 
                     */
                    std::string GetNewUserStatus() const;

                    /**
                     * 设置用户的状态。取值：  Enabled：启用。 Disabled：禁用。
                     * @param _newUserStatus 用户的状态。取值：  Enabled：启用。 Disabled：禁用。
                     * 
                     */
                    void SetNewUserStatus(const std::string& _newUserStatus);

                    /**
                     * 判断参数 NewUserStatus 是否已赋值
                     * @return NewUserStatus 是否已赋值
                     * 
                     */
                    bool NewUserStatusHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 用户 ID。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户的状态。取值：  Enabled：启用。 Disabled：禁用。
                     */
                    std::string m_newUserStatus;
                    bool m_newUserStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERSTATUSREQUEST_H_
