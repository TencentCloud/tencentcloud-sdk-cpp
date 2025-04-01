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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATESCIMCREDENTIALREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATESCIMCREDENTIALREQUEST_H_

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
                * CreateSCIMCredential请求参数结构体
                */
                class CreateSCIMCredentialRequest : public AbstractModel
                {
                public:
                    CreateSCIMCredentialRequest();
                    ~CreateSCIMCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID。z-前缀开头，后面是12位随机数字/小写字母
                     * @return ZoneId 空间ID。z-前缀开头，后面是12位随机数字/小写字母
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间ID。z-前缀开头，后面是12位随机数字/小写字母
                     * @param _zoneId 空间ID。z-前缀开头，后面是12位随机数字/小写字母
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
                     * 获取过期时间（秒），最小1小时，最大99年。如果不传则默认一年过期
                     * @return ExpireDuration 过期时间（秒），最小1小时，最大99年。如果不传则默认一年过期
                     * 
                     */
                    uint64_t GetExpireDuration() const;

                    /**
                     * 设置过期时间（秒），最小1小时，最大99年。如果不传则默认一年过期
                     * @param _expireDuration 过期时间（秒），最小1小时，最大99年。如果不传则默认一年过期
                     * 
                     */
                    void SetExpireDuration(const uint64_t& _expireDuration);

                    /**
                     * 判断参数 ExpireDuration 是否已赋值
                     * @return ExpireDuration 是否已赋值
                     * 
                     */
                    bool ExpireDurationHasBeenSet() const;

                private:

                    /**
                     * 空间ID。z-前缀开头，后面是12位随机数字/小写字母
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 过期时间（秒），最小1小时，最大99年。如果不传则默认一年过期
                     */
                    uint64_t m_expireDuration;
                    bool m_expireDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATESCIMCREDENTIALREQUEST_H_
