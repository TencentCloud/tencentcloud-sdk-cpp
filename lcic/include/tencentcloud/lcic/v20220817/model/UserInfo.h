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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_USERINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 用户信息结构体
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用Id。
                     * @return SdkAppId 应用Id。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用Id。
                     * @param _sdkAppId 应用Id。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取用户Id。
                     * @return UserId 用户Id。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id。
                     * @param _userId 用户Id。
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
                     * 获取用户昵称。
                     * @return Name 用户昵称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户昵称。
                     * @param _name 用户昵称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户头像Url。
                     * @return Avatar 用户头像Url。
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置用户头像Url。
                     * @param _avatar 用户头像Url。
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取用户在客户系统的Id
                     * @return OriginId 用户在客户系统的Id
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置用户在客户系统的Id
                     * @param _originId 用户在客户系统的Id
                     * 
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                private:

                    /**
                     * 应用Id。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 用户Id。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户昵称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户头像Url。
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 用户在客户系统的Id
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_USERINFO_H_
