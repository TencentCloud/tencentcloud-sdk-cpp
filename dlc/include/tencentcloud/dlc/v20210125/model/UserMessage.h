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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERMESSAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 用户部分信息
                */
                class UserMessage : public AbstractModel
                {
                public:
                    UserMessage();
                    ~UserMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户Id，和CAM侧子用户Uin匹配
                     * @return UserId 用户Id，和CAM侧子用户Uin匹配
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id，和CAM侧子用户Uin匹配
                     * @param _userId 用户Id，和CAM侧子用户Uin匹配
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
                     * 获取用户描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserDescription 用户描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserDescription() const;

                    /**
                     * 设置用户描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userDescription 用户描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserDescription(const std::string& _userDescription);

                    /**
                     * 判断参数 UserDescription 是否已赋值
                     * @return UserDescription 是否已赋值
                     * 
                     */
                    bool UserDescriptionHasBeenSet() const;

                    /**
                     * 获取当前用户的创建者
                     * @return Creator 当前用户的创建者
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置当前用户的创建者
                     * @param _creator 当前用户的创建者
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取当前用户的创建时间，形如2021-07-28 16:19:32
                     * @return CreateTime 当前用户的创建时间，形如2021-07-28 16:19:32
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置当前用户的创建时间，形如2021-07-28 16:19:32
                     * @param _createTime 当前用户的创建时间，形如2021-07-28 16:19:32
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取用户别名
                     * @return UserAlias 用户别名
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置用户别名
                     * @param _userAlias 用户别名
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                private:

                    /**
                     * 用户Id，和CAM侧子用户Uin匹配
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userDescription;
                    bool m_userDescriptionHasBeenSet;

                    /**
                     * 当前用户的创建者
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 当前用户的创建时间，形如2021-07-28 16:19:32
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户别名
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERMESSAGE_H_
