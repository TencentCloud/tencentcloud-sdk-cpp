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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_USERSUBINFO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_USERSUBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 用户验证信息
                */
                class UserSubInfo : public AbstractModel
                {
                public:
                    UserSubInfo();
                    ~UserSubInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取团队名称
                     * @return Team 团队名称
                     */
                    std::string GetTeam() const;

                    /**
                     * 设置团队名称
                     * @param Team 团队名称
                     */
                    void SetTeam(const std::string& _team);

                    /**
                     * 判断参数 Team 是否已赋值
                     * @return Team 是否已赋值
                     */
                    bool TeamHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param UserName 用户名
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取昵称
                     * @return NickName 昵称
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称
                     * @param NickName 昵称
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取是否为管理员
                     * @return IsAdmin 是否为管理员
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置是否为管理员
                     * @param IsAdmin 是否为管理员
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     */
                    bool IsAdminHasBeenSet() const;

                    /**
                     * 获取xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsTrial xxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsTrial() const;

                    /**
                     * 设置xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsTrial xxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsTrial(const bool& _isTrial);

                    /**
                     * 判断参数 IsTrial 是否已赋值
                     * @return IsTrial 是否已赋值
                     */
                    bool IsTrialHasBeenSet() const;

                private:

                    /**
                     * 团队名称
                     */
                    std::string m_team;
                    bool m_teamHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 是否为管理员
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                    /**
                     * xxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isTrial;
                    bool m_isTrialHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_USERSUBINFO_H_
