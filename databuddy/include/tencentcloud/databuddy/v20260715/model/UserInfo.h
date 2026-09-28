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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 用户基本信息
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>uin</p>
                     * @return UserUin <p>uin</p>
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置<p>uin</p>
                     * @param _userUin <p>uin</p>
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取<p>子用户名称</p>
                     * @return UserName <p>子用户名称</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>子用户名称</p>
                     * @param _userName <p>子用户名称</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>子用户昵称</p>
                     * @return Nickname <p>子用户昵称</p>
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置<p>子用户昵称</p>
                     * @param _nickname <p>子用户昵称</p>
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
                     * 获取<p>0: 普通用户 1: entraId用户</p>
                     * @return UserTag <p>0: 普通用户 1: entraId用户</p>
                     * 
                     */
                    std::string GetUserTag() const;

                    /**
                     * 设置<p>0: 普通用户 1: entraId用户</p>
                     * @param _userTag <p>0: 普通用户 1: entraId用户</p>
                     * 
                     */
                    void SetUserTag(const std::string& _userTag);

                    /**
                     * 判断参数 UserTag 是否已赋值
                     * @return UserTag 是否已赋值
                     * 
                     */
                    bool UserTagHasBeenSet() const;

                private:

                    /**
                     * <p>uin</p>
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * <p>子用户名称</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>子用户昵称</p>
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * <p>0: 普通用户 1: entraId用户</p>
                     */
                    std::string m_userTag;
                    bool m_userTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERINFO_H_
