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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEUSERSYNCPROVISIONINGREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEUSERSYNCPROVISIONINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/UserSyncProvisioning.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateUserSyncProvisioning请求参数结构体
                */
                class CreateUserSyncProvisioningRequest : public AbstractModel
                {
                public:
                    CreateUserSyncProvisioningRequest();
                    ~CreateUserSyncProvisioningRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID。
                     * @return ZoneId 空间ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间ID。
                     * @param _zoneId 空间ID。
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
                     * 获取CAM用户同步信息。
                     * @return UserSyncProvisionings CAM用户同步信息。
                     * 
                     */
                    std::vector<UserSyncProvisioning> GetUserSyncProvisionings() const;

                    /**
                     * 设置CAM用户同步信息。
                     * @param _userSyncProvisionings CAM用户同步信息。
                     * 
                     */
                    void SetUserSyncProvisionings(const std::vector<UserSyncProvisioning>& _userSyncProvisionings);

                    /**
                     * 判断参数 UserSyncProvisionings 是否已赋值
                     * @return UserSyncProvisionings 是否已赋值
                     * 
                     */
                    bool UserSyncProvisioningsHasBeenSet() const;

                private:

                    /**
                     * 空间ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * CAM用户同步信息。
                     */
                    std::vector<UserSyncProvisioning> m_userSyncProvisionings;
                    bool m_userSyncProvisioningsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEUSERSYNCPROVISIONINGREQUEST_H_
