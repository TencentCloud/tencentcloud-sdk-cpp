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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_GETFEDERATIONTOKENRESPONSE_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_GETFEDERATIONTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sts/v20180813/model/Credentials.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * GetFederationToken返回参数结构体
                */
                class GetFederationTokenResponse : public AbstractModel
                {
                public:
                    GetFederationTokenResponse();
                    ~GetFederationTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取临时访问凭证
                     * @return Credentials 临时访问凭证
                     * 
                     */
                    Credentials GetCredentials() const;

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                    /**
                     * 获取临时访问凭证有效的时间，返回 Unix 时间戳，精确到秒
                     * @return ExpiredTime 临时访问凭证有效的时间，返回 Unix 时间戳，精确到秒
                     * 
                     */
                    uint64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取临时访问凭证有效的时间，以 iso8601 格式的 UTC 时间表示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Expiration 临时访问凭证有效的时间，以 iso8601 格式的 UTC 时间表示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiration() const;

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                private:

                    /**
                     * 临时访问凭证
                     */
                    Credentials m_credentials;
                    bool m_credentialsHasBeenSet;

                    /**
                     * 临时访问凭证有效的时间，返回 Unix 时间戳，精确到秒
                     */
                    uint64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 临时访问凭证有效的时间，以 iso8601 格式的 UTC 时间表示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiration;
                    bool m_expirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_GETFEDERATIONTOKENRESPONSE_H_
