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

#ifndef TENCENTCLOUD_BIZLIVE_V20190313_MODEL_REGISTERIMREQUEST_H_
#define TENCENTCLOUD_BIZLIVE_V20190313_MODEL_REGISTERIMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bizlive
    {
        namespace V20190313
        {
            namespace Model
            {
                /**
                * RegisterIM请求参数结构体
                */
                class RegisterIMRequest : public AbstractModel
                {
                public:
                    RegisterIMRequest();
                    ~RegisterIMRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户昵称
                     * @return Nickname 用户昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置用户昵称
                     * @param _nickname 用户昵称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取用户唯一ID，建议采用用户小程序OpenID加盐形式
                     * @return UserId 用户唯一ID，建议采用用户小程序OpenID加盐形式
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户唯一ID，建议采用用户小程序OpenID加盐形式
                     * @param _userId 用户唯一ID，建议采用用户小程序OpenID加盐形式
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户头像URL
                     * @return HeadImgUrl 用户头像URL
                     * 
                     */
                    std::string GetHeadImgUrl() const;

                    /**
                     * 设置用户头像URL
                     * @param _headImgUrl 用户头像URL
                     * 
                     */
                    void SetHeadImgUrl(const std::string& _headImgUrl);

                    /**
                     * 判断参数 HeadImgUrl 是否已赋值
                     * @return HeadImgUrl 是否已赋值
                     * 
                     */
                    bool HeadImgUrlHasBeenSet() const;

                    /**
                     * 获取用户身份，默认值：0，表示无特殊身份
                     * @return Level 用户身份，默认值：0，表示无特殊身份
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置用户身份，默认值：0，表示无特殊身份
                     * @param _level 用户身份，默认值：0，表示无特殊身份
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * 用户昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 用户唯一ID，建议采用用户小程序OpenID加盐形式
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户头像URL
                     */
                    std::string m_headImgUrl;
                    bool m_headImgUrlHasBeenSet;

                    /**
                     * 用户身份，默认值：0，表示无特殊身份
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BIZLIVE_V20190313_MODEL_REGISTERIMREQUEST_H_
