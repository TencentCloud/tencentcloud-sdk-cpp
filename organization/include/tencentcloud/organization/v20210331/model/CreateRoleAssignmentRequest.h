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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLEASSIGNMENTREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLEASSIGNMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/RoleAssignmentInfo.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateRoleAssignment请求参数结构体
                */
                class CreateRoleAssignmentRequest : public AbstractModel
                {
                public:
                    CreateRoleAssignmentRequest();
                    ~CreateRoleAssignmentRequest() = default;
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
                     * 获取授权成员账号信息，最多授权50条。
                     * @return RoleAssignmentInfo 授权成员账号信息，最多授权50条。
                     * 
                     */
                    std::vector<RoleAssignmentInfo> GetRoleAssignmentInfo() const;

                    /**
                     * 设置授权成员账号信息，最多授权50条。
                     * @param _roleAssignmentInfo 授权成员账号信息，最多授权50条。
                     * 
                     */
                    void SetRoleAssignmentInfo(const std::vector<RoleAssignmentInfo>& _roleAssignmentInfo);

                    /**
                     * 判断参数 RoleAssignmentInfo 是否已赋值
                     * @return RoleAssignmentInfo 是否已赋值
                     * 
                     */
                    bool RoleAssignmentInfoHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 授权成员账号信息，最多授权50条。
                     */
                    std::vector<RoleAssignmentInfo> m_roleAssignmentInfo;
                    bool m_roleAssignmentInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLEASSIGNMENTREQUEST_H_
