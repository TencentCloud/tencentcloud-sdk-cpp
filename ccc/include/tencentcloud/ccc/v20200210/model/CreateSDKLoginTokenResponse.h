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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateSDKLoginToken返回参数结构体
                */
                class CreateSDKLoginTokenResponse : public AbstractModel
                {
                public:
                    CreateSDKLoginTokenResponse();
                    ~CreateSDKLoginTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SDK 登录 Token。
                     * @return Token SDK 登录 Token。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取过期时间戳，Unix 时间戳。
                     * @return ExpiredTime 过期时间戳，Unix 时间戳。
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取SDK 加载路径会随着 SDK 的发布而变动。
                     * @return SdkURL SDK 加载路径会随着 SDK 的发布而变动。
                     * 
                     */
                    std::string GetSdkURL() const;

                    /**
                     * 判断参数 SdkURL 是否已赋值
                     * @return SdkURL 是否已赋值
                     * 
                     */
                    bool SdkURLHasBeenSet() const;

                private:

                    /**
                     * SDK 登录 Token。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 过期时间戳，Unix 时间戳。
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * SDK 加载路径会随着 SDK 的发布而变动。
                     */
                    std::string m_sdkURL;
                    bool m_sdkURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENRESPONSE_H_
