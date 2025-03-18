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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERIDANDUSERNAME_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERIDANDUSERNAME_H_

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
                class UserIdAndUserName : public AbstractModel
                {
                public:
                    UserIdAndUserName();
                    ~UserIdAndUserName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
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
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
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
                     * 获取企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpId 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corpId 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorpId(const std::string& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取电子邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 电子邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置电子邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email 电子邮箱
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
                     * 获取最后一次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastLogin 最后一次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastLogin() const;

                    /**
                     * 设置最后一次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastLogin 最后一次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastLogin(const std::string& _lastLogin);

                    /**
                     * 判断参数 LastLogin 是否已赋值
                     * @return LastLogin 是否已赋值
                     * 
                     */
                    bool LastLoginHasBeenSet() const;

                    /**
                     * 获取停启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 停启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置停启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 停启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取首次登陆是否修改密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstModify 首次登陆是否修改密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFirstModify() const;

                    /**
                     * 设置首次登陆是否修改密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstModify 首次登陆是否修改密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstModify(const int64_t& _firstModify);

                    /**
                     * 判断参数 FirstModify 是否已赋值
                     * @return FirstModify 是否已赋值
                     * 
                     */
                    bool FirstModifyHasBeenSet() const;

                    /**
                     * 获取手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNumber 手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneNumber 手机号码
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
                     * 获取手机区号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaCode 手机区号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAreaCode() const;

                    /**
                     * 设置手机区号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaCode 手机区号
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
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedUser 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdUser 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedUser(const std::string& _createdUser);

                    /**
                     * 判断参数 CreatedUser 是否已赋值
                     * @return CreatedUser 是否已赋值
                     * 
                     */
                    bool CreatedUserHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedUser 更改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置更改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedUser 更改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取更改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 更改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取全局角色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GlobalUserName 全局角色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGlobalUserName() const;

                    /**
                     * 设置全局角色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _globalUserName 全局角色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGlobalUserName(const std::string& _globalUserName);

                    /**
                     * 判断参数 GlobalUserName 是否已赋值
                     * @return GlobalUserName 是否已赋值
                     * 
                     */
                    bool GlobalUserNameHasBeenSet() const;

                    /**
                     * 获取全局角色编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GlobalUserCode 全局角色编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGlobalUserCode() const;

                    /**
                     * 设置全局角色编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _globalUserCode 全局角色编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGlobalUserCode(const std::string& _globalUserCode);

                    /**
                     * 判断参数 GlobalUserCode 是否已赋值
                     * @return GlobalUserCode 是否已赋值
                     * 
                     */
                    bool GlobalUserCodeHasBeenSet() const;

                    /**
                     * 获取手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mobile 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mobile 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserId() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserId 1
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserAliasName 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserAliasName() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserAliasName 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppUserAliasName(const std::string& _appUserAliasName);

                    /**
                     * 判断参数 AppUserAliasName 是否已赋值
                     * @return AppUserAliasName 是否已赋值
                     * 
                     */
                    bool AppUserAliasNameHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserName 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserName() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserName 1
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InValidateAppRange 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInValidateAppRange() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inValidateAppRange 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInValidateAppRange(const bool& _inValidateAppRange);

                    /**
                     * 判断参数 InValidateAppRange 是否已赋值
                     * @return InValidateAppRange 是否已赋值
                     * 
                     */
                    bool InValidateAppRangeHasBeenSet() const;

                    /**
                     * 获取-1 免激活  0 未激活  1 已激活 空代表待绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmailActivationStatus -1 免激活  0 未激活  1 已激活 空代表待绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEmailActivationStatus() const;

                    /**
                     * 设置-1 免激活  0 未激活  1 已激活 空代表待绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _emailActivationStatus -1 免激活  0 未激活  1 已激活 空代表待绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmailActivationStatus(const int64_t& _emailActivationStatus);

                    /**
                     * 判断参数 EmailActivationStatus 是否已赋值
                     * @return EmailActivationStatus 是否已赋值
                     * 
                     */
                    bool EmailActivationStatusHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 电子邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 最后一次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastLogin;
                    bool m_lastLoginHasBeenSet;

                    /**
                     * 停启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 首次登陆是否修改密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_firstModify;
                    bool m_firstModifyHasBeenSet;

                    /**
                     * 手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 手机区号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_areaCode;
                    bool m_areaCodeHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更改人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * 更改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 全局角色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_globalUserName;
                    bool m_globalUserNameHasBeenSet;

                    /**
                     * 全局角色编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_globalUserCode;
                    bool m_globalUserCodeHasBeenSet;

                    /**
                     * 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserId;
                    bool m_appUserIdHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserAliasName;
                    bool m_appUserAliasNameHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserName;
                    bool m_appUserNameHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_inValidateAppRange;
                    bool m_inValidateAppRangeHasBeenSet;

                    /**
                     * -1 免激活  0 未激活  1 已激活 空代表待绑定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_emailActivationStatus;
                    bool m_emailActivationStatusHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERIDANDUSERNAME_H_
