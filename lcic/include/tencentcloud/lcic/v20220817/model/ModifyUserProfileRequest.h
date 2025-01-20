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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYUSERPROFILEREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYUSERPROFILEREQUEST_H_

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
                * ModifyUserProfile请求参数结构体
                */
                class ModifyUserProfileRequest : public AbstractModel
                {
                public:
                    ModifyUserProfileRequest();
                    ~ModifyUserProfileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改用户ID
                     * @return UserId 待修改用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置待修改用户ID
                     * @param _userId 待修改用户ID
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
                     * 获取待修改的用户名。对应注册用户下“Name“字段，本次修改是对此内容进行修改。
                     * @return Nickname 待修改的用户名。对应注册用户下“Name“字段，本次修改是对此内容进行修改。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置待修改的用户名。对应注册用户下“Name“字段，本次修改是对此内容进行修改。
                     * @param _nickname 待修改的用户名。对应注册用户下“Name“字段，本次修改是对此内容进行修改。
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
                     * 获取待修改头像url
                     * @return Avatar 待修改头像url
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置待修改头像url
                     * @param _avatar 待修改头像url
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                private:

                    /**
                     * 待修改用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 待修改的用户名。对应注册用户下“Name“字段，本次修改是对此内容进行修改。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 待修改头像url
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYUSERPROFILEREQUEST_H_
