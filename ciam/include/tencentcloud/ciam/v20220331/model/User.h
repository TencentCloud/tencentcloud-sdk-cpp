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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_USER_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/MemberMap.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 用户名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNumber 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneNumber 手机号
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
                     * 获取邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email 邮箱
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
                     * 获取上次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSignOn 上次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastSignOn() const;

                    /**
                     * 设置上次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastSignOn 上次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastSignOn(const int64_t& _lastSignOn);

                    /**
                     * 判断参数 LastSignOn 是否已赋值
                     * @return LastSignOn 是否已赋值
                     * 
                     */
                    bool LastSignOnHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedDate 创建时间
                     * 
                     */
                    int64_t GetCreatedDate() const;

                    /**
                     * 设置创建时间
                     * @param _createdDate 创建时间
                     * 
                     */
                    void SetCreatedDate(const int64_t& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取用户来源
                     * @return UserDataSourceEnum 用户来源
                     * 
                     */
                    std::string GetUserDataSourceEnum() const;

                    /**
                     * 设置用户来源
                     * @param _userDataSourceEnum 用户来源
                     * 
                     */
                    void SetUserDataSourceEnum(const std::string& _userDataSourceEnum);

                    /**
                     * 判断参数 UserDataSourceEnum 是否已赋值
                     * @return UserDataSourceEnum 是否已赋值
                     * 
                     */
                    bool UserDataSourceEnumHasBeenSet() const;

                    /**
                     * 获取昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nickname 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nickname 昵称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取生日
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Birthdate 生日
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBirthdate() const;

                    /**
                     * 设置生日
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _birthdate 生日
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBirthdate(const int64_t& _birthdate);

                    /**
                     * 判断参数 Birthdate 是否已赋值
                     * @return Birthdate 是否已赋值
                     * 
                     */
                    bool BirthdateHasBeenSet() const;

                    /**
                     * 获取用户组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroups 用户组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUserGroups() const;

                    /**
                     * 设置用户组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroups 用户组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserGroups(const std::vector<std::string>& _userGroups);

                    /**
                     * 判断参数 UserGroups 是否已赋值
                     * @return UserGroups 是否已赋值
                     * 
                     */
                    bool UserGroupsHasBeenSet() const;

                    /**
                     * 获取上次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedDate 上次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastModifiedDate() const;

                    /**
                     * 设置上次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifiedDate 上次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifiedDate(const int64_t& _lastModifiedDate);

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     * 
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取自定义属性
                     * @return CustomAttributes 自定义属性
                     * 
                     */
                    std::vector<MemberMap> GetCustomAttributes() const;

                    /**
                     * 设置自定义属性
                     * @param _customAttributes 自定义属性
                     * 
                     */
                    void SetCustomAttributes(const std::vector<MemberMap>& _customAttributes);

                    /**
                     * 判断参数 CustomAttributes 是否已赋值
                     * @return CustomAttributes 是否已赋值
                     * 
                     */
                    bool CustomAttributesHasBeenSet() const;

                    /**
                     * 获取身份证号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResidentIdentityCard 身份证号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResidentIdentityCard() const;

                    /**
                     * 设置身份证号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _residentIdentityCard 身份证号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResidentIdentityCard(const std::string& _residentIdentityCard);

                    /**
                     * 判断参数 ResidentIdentityCard 是否已赋值
                     * @return ResidentIdentityCard 是否已赋值
                     * 
                     */
                    bool ResidentIdentityCardHasBeenSet() const;

                    /**
                     * 获取QQ的OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QqOpenId QQ的OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQqOpenId() const;

                    /**
                     * 设置QQ的OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qqOpenId QQ的OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQqOpenId(const std::string& _qqOpenId);

                    /**
                     * 判断参数 QqOpenId 是否已赋值
                     * @return QqOpenId 是否已赋值
                     * 
                     */
                    bool QqOpenIdHasBeenSet() const;

                    /**
                     * 获取QQ的UnionId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QqUnionId QQ的UnionId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQqUnionId() const;

                    /**
                     * 设置QQ的UnionId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qqUnionId QQ的UnionId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQqUnionId(const std::string& _qqUnionId);

                    /**
                     * 判断参数 QqUnionId 是否已赋值
                     * @return QqUnionId 是否已赋值
                     * 
                     */
                    bool QqUnionIdHasBeenSet() const;

                    /**
                     * 获取微信的WechatOpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatOpenId 微信的WechatOpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatOpenId() const;

                    /**
                     * 设置微信的WechatOpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatOpenId 微信的WechatOpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatOpenId(const std::string& _wechatOpenId);

                    /**
                     * 判断参数 WechatOpenId 是否已赋值
                     * @return WechatOpenId 是否已赋值
                     * 
                     */
                    bool WechatOpenIdHasBeenSet() const;

                    /**
                     * 获取微信的WechatUnionId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatUnionId 微信的WechatUnionId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatUnionId() const;

                    /**
                     * 设置微信的WechatUnionId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatUnionId 微信的WechatUnionId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatUnionId(const std::string& _wechatUnionId);

                    /**
                     * 判断参数 WechatUnionId 是否已赋值
                     * @return WechatUnionId 是否已赋值
                     * 
                     */
                    bool WechatUnionIdHasBeenSet() const;

                    /**
                     * 获取支付宝的AlipayUserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlipayUserId 支付宝的AlipayUserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlipayUserId() const;

                    /**
                     * 设置支付宝的AlipayUserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alipayUserId 支付宝的AlipayUserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlipayUserId(const std::string& _alipayUserId);

                    /**
                     * 判断参数 AlipayUserId 是否已赋值
                     * @return AlipayUserId 是否已赋值
                     * 
                     */
                    bool AlipayUserIdHasBeenSet() const;

                    /**
                     * 获取企业微信的WeComUserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeComUserId 企业微信的WeComUserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWeComUserId() const;

                    /**
                     * 设置企业微信的WeComUserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weComUserId 企业微信的WeComUserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeComUserId(const std::string& _weComUserId);

                    /**
                     * 判断参数 WeComUserId 是否已赋值
                     * @return WeComUserId 是否已赋值
                     * 
                     */
                    bool WeComUserIdHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 姓名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Locale 坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _locale 坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocale(const std::string& _locale);

                    /**
                     * 判断参数 Locale 是否已赋值
                     * @return Locale 是否已赋值
                     * 
                     */
                    bool LocaleHasBeenSet() const;

                    /**
                     * 获取性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gender 性别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gender 性别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取实名核验方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityVerificationMethod 实名核验方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentityVerificationMethod() const;

                    /**
                     * 设置实名核验方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityVerificationMethod 实名核验方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentityVerificationMethod(const std::string& _identityVerificationMethod);

                    /**
                     * 判断参数 IdentityVerificationMethod 是否已赋值
                     * @return IdentityVerificationMethod 是否已赋值
                     * 
                     */
                    bool IdentityVerificationMethodHasBeenSet() const;

                    /**
                     * 获取是否已经实名核验
                     * @return IdentityVerified 是否已经实名核验
                     * 
                     */
                    bool GetIdentityVerified() const;

                    /**
                     * 设置是否已经实名核验
                     * @param _identityVerified 是否已经实名核验
                     * 
                     */
                    void SetIdentityVerified(const bool& _identityVerified);

                    /**
                     * 判断参数 IdentityVerified 是否已赋值
                     * @return IdentityVerified 是否已赋值
                     * 
                     */
                    bool IdentityVerifiedHasBeenSet() const;

                    /**
                     * 获取工作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Job 工作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJob() const;

                    /**
                     * 设置工作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _job 工作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJob(const std::string& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nationality 国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nationality 国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取是否主账号（进行过账号融合后，主账号为true，从账号为false）
                     * @return Primary 是否主账号（进行过账号融合后，主账号为true，从账号为false）
                     * 
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置是否主账号（进行过账号融合后，主账号为true，从账号为false）
                     * @param _primary 是否主账号（进行过账号融合后，主账号为true，从账号为false）
                     * 
                     */
                    void SetPrimary(const bool& _primary);

                    /**
                     * 判断参数 Primary 是否已赋值
                     * @return Primary 是否已赋值
                     * 
                     */
                    bool PrimaryHasBeenSet() const;

                    /**
                     * 获取时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取是否已经首次登录
                     * @return AlreadyFirstLogin 是否已经首次登录
                     * 
                     */
                    bool GetAlreadyFirstLogin() const;

                    /**
                     * 设置是否已经首次登录
                     * @param _alreadyFirstLogin 是否已经首次登录
                     * 
                     */
                    void SetAlreadyFirstLogin(const bool& _alreadyFirstLogin);

                    /**
                     * 判断参数 AlreadyFirstLogin 是否已赋值
                     * @return AlreadyFirstLogin 是否已赋值
                     * 
                     */
                    bool AlreadyFirstLoginHasBeenSet() const;

                    /**
                     * 获取租户id
                     * @return TenantId 租户id
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户id
                     * @param _tenantId 租户id
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取用户目录id
                     * @return UserStoreId 用户目录id
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户目录id
                     * @param _userStoreId 用户目录id
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取锁定类型（分为管理员锁定，和登录策略锁定）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockType 锁定类型（分为管理员锁定，和登录策略锁定）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLockType() const;

                    /**
                     * 设置锁定类型（分为管理员锁定，和登录策略锁定）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockType 锁定类型（分为管理员锁定，和登录策略锁定）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockType(const std::string& _lockType);

                    /**
                     * 判断参数 LockType 是否已赋值
                     * @return LockType 是否已赋值
                     * 
                     */
                    bool LockTypeHasBeenSet() const;

                    /**
                     * 获取锁定时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockTime 锁定时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLockTime() const;

                    /**
                     * 设置锁定时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockTime 锁定时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockTime(const int64_t& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     * 
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取索引字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexedAttribute1 索引字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexedAttribute1() const;

                    /**
                     * 设置索引字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexedAttribute1 索引字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexedAttribute1(const std::string& _indexedAttribute1);

                    /**
                     * 判断参数 IndexedAttribute1 是否已赋值
                     * @return IndexedAttribute1 是否已赋值
                     * 
                     */
                    bool IndexedAttribute1HasBeenSet() const;

                    /**
                     * 获取索引字段2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexedAttribute2 索引字段2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexedAttribute2() const;

                    /**
                     * 设置索引字段2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexedAttribute2 索引字段2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexedAttribute2(const std::string& _indexedAttribute2);

                    /**
                     * 判断参数 IndexedAttribute2 是否已赋值
                     * @return IndexedAttribute2 是否已赋值
                     * 
                     */
                    bool IndexedAttribute2HasBeenSet() const;

                    /**
                     * 获取索引字段3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexedAttribute3 索引字段3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexedAttribute3() const;

                    /**
                     * 设置索引字段3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexedAttribute3 索引字段3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexedAttribute3(const std::string& _indexedAttribute3);

                    /**
                     * 判断参数 IndexedAttribute3 是否已赋值
                     * @return IndexedAttribute3 是否已赋值
                     * 
                     */
                    bool IndexedAttribute3HasBeenSet() const;

                    /**
                     * 获取索引字段4
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexedAttribute4 索引字段4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexedAttribute4() const;

                    /**
                     * 设置索引字段4
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexedAttribute4 索引字段4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexedAttribute4(const std::string& _indexedAttribute4);

                    /**
                     * 判断参数 IndexedAttribute4 是否已赋值
                     * @return IndexedAttribute4 是否已赋值
                     * 
                     */
                    bool IndexedAttribute4HasBeenSet() const;

                    /**
                     * 获取索引字段5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexedAttribute5 索引字段5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexedAttribute5() const;

                    /**
                     * 设置索引字段5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexedAttribute5 索引字段5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexedAttribute5(const std::string& _indexedAttribute5);

                    /**
                     * 判断参数 IndexedAttribute5 是否已赋值
                     * @return IndexedAttribute5 是否已赋值
                     * 
                     */
                    bool IndexedAttribute5HasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 上次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastSignOn;
                    bool m_lastSignOnHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 用户来源
                     */
                    std::string m_userDataSourceEnum;
                    bool m_userDataSourceEnumHasBeenSet;

                    /**
                     * 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 生日
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_birthdate;
                    bool m_birthdateHasBeenSet;

                    /**
                     * 用户组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userGroups;
                    bool m_userGroupsHasBeenSet;

                    /**
                     * 上次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * 自定义属性
                     */
                    std::vector<MemberMap> m_customAttributes;
                    bool m_customAttributesHasBeenSet;

                    /**
                     * 身份证号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_residentIdentityCard;
                    bool m_residentIdentityCardHasBeenSet;

                    /**
                     * QQ的OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qqOpenId;
                    bool m_qqOpenIdHasBeenSet;

                    /**
                     * QQ的UnionId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qqUnionId;
                    bool m_qqUnionIdHasBeenSet;

                    /**
                     * 微信的WechatOpenId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatOpenId;
                    bool m_wechatOpenIdHasBeenSet;

                    /**
                     * 微信的WechatUnionId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatUnionId;
                    bool m_wechatUnionIdHasBeenSet;

                    /**
                     * 支付宝的AlipayUserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alipayUserId;
                    bool m_alipayUserIdHasBeenSet;

                    /**
                     * 企业微信的WeComUserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_weComUserId;
                    bool m_weComUserIdHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_locale;
                    bool m_localeHasBeenSet;

                    /**
                     * 性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 实名核验方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identityVerificationMethod;
                    bool m_identityVerificationMethodHasBeenSet;

                    /**
                     * 是否已经实名核验
                     */
                    bool m_identityVerified;
                    bool m_identityVerifiedHasBeenSet;

                    /**
                     * 工作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * 国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 是否主账号（进行过账号融合后，主账号为true，从账号为false）
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * 时区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 是否已经首次登录
                     */
                    bool m_alreadyFirstLogin;
                    bool m_alreadyFirstLoginHasBeenSet;

                    /**
                     * 租户id
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 用户目录id
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 锁定类型（分为管理员锁定，和登录策略锁定）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lockType;
                    bool m_lockTypeHasBeenSet;

                    /**
                     * 锁定时间点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * 索引字段1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexedAttribute1;
                    bool m_indexedAttribute1HasBeenSet;

                    /**
                     * 索引字段2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexedAttribute2;
                    bool m_indexedAttribute2HasBeenSet;

                    /**
                     * 索引字段3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexedAttribute3;
                    bool m_indexedAttribute3HasBeenSet;

                    /**
                     * 索引字段4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexedAttribute4;
                    bool m_indexedAttribute4HasBeenSet;

                    /**
                     * 索引字段5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexedAttribute5;
                    bool m_indexedAttribute5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_USER_H_
