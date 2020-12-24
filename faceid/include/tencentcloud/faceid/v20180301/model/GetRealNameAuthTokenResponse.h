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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETREALNAMEAUTHTOKENRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETREALNAMEAUTHTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetRealNameAuthToken返回参数结构体
                */
                class GetRealNameAuthTokenResponse : public AbstractModel
                {
                public:
                    GetRealNameAuthTokenResponse();
                    ~GetRealNameAuthTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取查询实名认证结果的唯一凭证
                     * @return AuthToken 查询实名认证结果的唯一凭证
                     */
                    std::string GetAuthToken() const;

                    /**
                     * 判断参数 AuthToken 是否已赋值
                     * @return AuthToken 是否已赋值
                     */
                    bool AuthTokenHasBeenSet() const;

                    /**
                     * 获取实名认证授权地址，认证发起方需要重定向到这个地址获取认证用户的授权
                     * @return RedirectURL 实名认证授权地址，认证发起方需要重定向到这个地址获取认证用户的授权
                     */
                    std::string GetRedirectURL() const;

                    /**
                     * 判断参数 RedirectURL 是否已赋值
                     * @return RedirectURL 是否已赋值
                     */
                    bool RedirectURLHasBeenSet() const;

                private:

                    /**
                     * 查询实名认证结果的唯一凭证
                     */
                    std::string m_authToken;
                    bool m_authTokenHasBeenSet;

                    /**
                     * 实名认证授权地址，认证发起方需要重定向到这个地址获取认证用户的授权
                     */
                    std::string m_redirectURL;
                    bool m_redirectURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETREALNAMEAUTHTOKENRESPONSE_H_
