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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateOrganizationAuthUrl返回参数结构体
                */
                class CreateOrganizationAuthUrlResponse : public AbstractModel
                {
                public:
                    CreateOrganizationAuthUrlResponse();
                    ~CreateOrganizationAuthUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生成的认证链接。

注： `链接有效期统一30天`
                     * @return AuthUrl 生成的认证链接。

注： `链接有效期统一30天`
                     * 
                     */
                    std::string GetAuthUrl() const;

                    /**
                     * 判断参数 AuthUrl 是否已赋值
                     * @return AuthUrl 是否已赋值
                     * 
                     */
                    bool AuthUrlHasBeenSet() const;

                    /**
                     * 获取链接过期时间，格式为Unix标准时间戳（秒）
                     * @return ExpiredTime 链接过期时间，格式为Unix标准时间戳（秒）
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 生成的认证链接。

注： `链接有效期统一30天`
                     */
                    std::string m_authUrl;
                    bool m_authUrlHasBeenSet;

                    /**
                     * 链接过期时间，格式为Unix标准时间戳（秒）
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHURLRESPONSE_H_
