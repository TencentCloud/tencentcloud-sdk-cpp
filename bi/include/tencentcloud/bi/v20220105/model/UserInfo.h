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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 用户ID和用户名
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户ID</p>
                     * @return UserId <p>用户ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户ID</p>
                     * @param _userId <p>用户ID</p>
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
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>邮箱</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email <p>邮箱</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>邮箱</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email <p>邮箱</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取<p>手机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNumber <p>手机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置<p>手机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneNumber <p>手机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取<p>手机号区号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaCode <p>手机号区号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAreaCode() const;

                    /**
                     * 设置<p>手机号区号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaCode <p>手机号区号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAreaCode(const std::string& _areaCode);

                    /**
                     * 判断参数 AreaCode 是否已赋值
                     * @return AreaCode 是否已赋值
                     * 
                     */
                    bool AreaCodeHasBeenSet() const;

                    /**
                     * 获取<p>企微账号id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserId <p>企微账号id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserId() const;

                    /**
                     * 设置<p>企微账号id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserId <p>企微账号id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppUserId(const std::string& _appUserId);

                    /**
                     * 判断参数 AppUserId 是否已赋值
                     * @return AppUserId 是否已赋值
                     * 
                     */
                    bool AppUserIdHasBeenSet() const;

                    /**
                     * 获取<p>企微账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserName <p>企微账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserName() const;

                    /**
                     * 设置<p>企微账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserName <p>企微账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppUserName(const std::string& _appUserName);

                    /**
                     * 判断参数 AppUserName 是否已赋值
                     * @return AppUserName 是否已赋值
                     * 
                     */
                    bool AppUserNameHasBeenSet() const;

                    /**
                     * 获取<p>飞书OpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LarkOpenId <p>飞书OpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLarkOpenId() const;

                    /**
                     * 设置<p>飞书OpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _larkOpenId <p>飞书OpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLarkOpenId(const std::string& _larkOpenId);

                    /**
                     * 判断参数 LarkOpenId 是否已赋值
                     * @return LarkOpenId 是否已赋值
                     * 
                     */
                    bool LarkOpenIdHasBeenSet() const;

                private:

                    /**
                     * <p>用户ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>邮箱</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>手机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * <p>手机号区号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_areaCode;
                    bool m_areaCodeHasBeenSet;

                    /**
                     * <p>企微账号id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserId;
                    bool m_appUserIdHasBeenSet;

                    /**
                     * <p>企微账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserName;
                    bool m_appUserNameHasBeenSet;

                    /**
                     * <p>飞书OpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_larkOpenId;
                    bool m_larkOpenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERINFO_H_
