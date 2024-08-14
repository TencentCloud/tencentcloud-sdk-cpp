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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GETROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GETROLECONFIGURATIONREQUEST_H_

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
                * GetRoleConfiguration请求参数结构体
                */
                class GetRoleConfigurationRequest : public AbstractModel
                {
                public:
                    GetRoleConfigurationRequest();
                    ~GetRoleConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID
                     * @return ZoneId 空间 ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间 ID
                     * @param _zoneId 空间 ID
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
                     * 获取权限配置ID
                     * @return RoleConfigurationId 权限配置ID
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置权限配置ID
                     * @param _roleConfigurationId 权限配置ID
                     * 
                     */
                    void SetRoleConfigurationId(const std::string& _roleConfigurationId);

                    /**
                     * 判断参数 RoleConfigurationId 是否已赋值
                     * @return RoleConfigurationId 是否已赋值
                     * 
                     */
                    bool RoleConfigurationIdHasBeenSet() const;

                private:

                    /**
                     * 空间 ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 权限配置ID
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GETROLECONFIGURATIONREQUEST_H_
