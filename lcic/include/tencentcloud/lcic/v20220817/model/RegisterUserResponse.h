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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_REGISTERUSERRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_REGISTERUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * RegisterUser返回参数结构体
                */
                class RegisterUserResponse : public AbstractModel
                {
                public:
                    RegisterUserResponse();
                    ~RegisterUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户Id。
                     * @return UserId 用户Id。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取登录/注册成功后返回登录态token。有效期7天。
                     * @return Token 登录/注册成功后返回登录态token。有效期7天。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * 用户Id。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 登录/注册成功后返回登录态token。有效期7天。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_REGISTERUSERRESPONSE_H_
