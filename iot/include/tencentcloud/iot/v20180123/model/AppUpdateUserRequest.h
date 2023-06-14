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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_APPUPDATEUSERREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_APPUPDATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * AppUpdateUser请求参数结构体
                */
                class AppUpdateUserRequest : public AbstractModel
                {
                public:
                    AppUpdateUserRequest();
                    ~AppUpdateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取访问Token
                     * @return AccessToken 访问Token
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 设置访问Token
                     * @param _accessToken 访问Token
                     * 
                     */
                    void SetAccessToken(const std::string& _accessToken);

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                    /**
                     * 获取昵称
                     * @return NickName 昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称
                     * @param _nickName 昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                private:

                    /**
                     * 访问Token
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_APPUPDATEUSERREQUEST_H_
