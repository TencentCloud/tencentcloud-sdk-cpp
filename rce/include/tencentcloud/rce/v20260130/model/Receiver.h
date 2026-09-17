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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_RECEIVER_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_RECEIVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/User.h>
#include <tencentcloud/rce/v20260130/model/Role.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 接收者信息
                */
                class Receiver : public AbstractModel
                {
                public:
                    Receiver();
                    ~Receiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>接收者账号ID</p>
                     * @return UserId <p>接收者账号ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>接收者账号ID</p>
                     * @param _userId <p>接收者账号ID</p>
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
                     * 获取<p>接收者账号信息</p>
                     * @return UserInfo <p>接收者账号信息</p>
                     * 
                     */
                    User GetUserInfo() const;

                    /**
                     * 设置<p>接收者账号信息</p>
                     * @param _userInfo <p>接收者账号信息</p>
                     * 
                     */
                    void SetUserInfo(const User& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取<p>接收者角色信息</p>
                     * @return RoleInfo <p>接收者角色信息</p>
                     * 
                     */
                    Role GetRoleInfo() const;

                    /**
                     * 设置<p>接收者角色信息</p>
                     * @param _roleInfo <p>接收者角色信息</p>
                     * 
                     */
                    void SetRoleInfo(const Role& _roleInfo);

                    /**
                     * 判断参数 RoleInfo 是否已赋值
                     * @return RoleInfo 是否已赋值
                     * 
                     */
                    bool RoleInfoHasBeenSet() const;

                private:

                    /**
                     * <p>接收者账号ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>接收者账号信息</p>
                     */
                    User m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * <p>接收者角色信息</p>
                     */
                    Role m_roleInfo;
                    bool m_roleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_RECEIVER_H_
