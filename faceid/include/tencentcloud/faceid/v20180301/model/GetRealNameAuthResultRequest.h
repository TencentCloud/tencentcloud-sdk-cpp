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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETREALNAMEAUTHRESULTREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETREALNAMEAUTHRESULTREQUEST_H_

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
                * GetRealNameAuthResult请求参数结构体
                */
                class GetRealNameAuthResultRequest : public AbstractModel
                {
                public:
                    GetRealNameAuthResultRequest();
                    ~GetRealNameAuthResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实名认证凭证
                     * @return AuthToken 实名认证凭证
                     */
                    std::string GetAuthToken() const;

                    /**
                     * 设置实名认证凭证
                     * @param AuthToken 实名认证凭证
                     */
                    void SetAuthToken(const std::string& _authToken);

                    /**
                     * 判断参数 AuthToken 是否已赋值
                     * @return AuthToken 是否已赋值
                     */
                    bool AuthTokenHasBeenSet() const;

                private:

                    /**
                     * 实名认证凭证
                     */
                    std::string m_authToken;
                    bool m_authTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETREALNAMEAUTHRESULTREQUEST_H_
