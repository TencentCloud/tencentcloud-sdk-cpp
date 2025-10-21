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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_LOGINUSERREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_LOGINUSERREQUEST_H_

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
                * LoginUser请求参数结构体
                */
                class LoginUserRequest : public AbstractModel
                {
                public:
                    LoginUserRequest();
                    ~LoginUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取注册获取的用户id。
                     * @return UserId 注册获取的用户id。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置注册获取的用户id。
                     * @param _userId 注册获取的用户id。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 注册获取的用户id。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_LOGINUSERREQUEST_H_
