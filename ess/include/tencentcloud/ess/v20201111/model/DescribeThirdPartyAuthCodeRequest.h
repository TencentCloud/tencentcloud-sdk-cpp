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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBETHIRDPARTYAUTHCODEREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBETHIRDPARTYAUTHCODEREQUEST_H_

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
                * DescribeThirdPartyAuthCode请求参数结构体
                */
                class DescribeThirdPartyAuthCodeRequest : public AbstractModel
                {
                public:
                    DescribeThirdPartyAuthCodeRequest();
                    ~DescribeThirdPartyAuthCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AuthCode 值
                     * @return AuthCode AuthCode 值
                     */
                    std::string GetAuthCode() const;

                    /**
                     * 设置AuthCode 值
                     * @param AuthCode AuthCode 值
                     */
                    void SetAuthCode(const std::string& _authCode);

                    /**
                     * 判断参数 AuthCode 是否已赋值
                     * @return AuthCode 是否已赋值
                     */
                    bool AuthCodeHasBeenSet() const;

                private:

                    /**
                     * AuthCode 值
                     */
                    std::string m_authCode;
                    bool m_authCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBETHIRDPARTYAUTHCODEREQUEST_H_
