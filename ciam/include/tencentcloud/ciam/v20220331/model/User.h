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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>上次登录时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSignOn <p>上次登录时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastSignOn() const;

                    /**
                     * 设置<p>上次登录时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastSignOn <p>上次登录时间</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedDate <p>创建时间</p>
                     * 
                     */
                    int64_t GetCreatedDate() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdDate <p>创建时间</p>
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
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
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
                     * 获取<p>用户来源</p>
                     * @return UserDataSourceEnum <p>用户来源</p>
                     * 
                     */
                    std::string GetUserDataSourceEnum() const;

                    /**
                     * 设置<p>用户来源</p>
                     * @param _userDataSourceEnum <p>用户来源</p>
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
                     * 获取<p>昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nickname <p>昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置<p>昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nickname <p>昵称</p>
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
                     * 获取<p>地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address <p>地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address <p>地址</p>
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
                     * 获取<p>生日</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Birthdate <p>生日</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBirthdate() const;

                    /**
                     * 设置<p>生日</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _birthdate <p>生日</p>
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
                     * 获取<p>用户组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroups <p>用户组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUserGroups() const;

                    /**
                     * 设置<p>用户组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroups <p>用户组ID</p>
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
                     * 获取<p>用户组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupNames <p>用户组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUserGroupNames() const;

                    /**
                     * 设置<p>用户组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroupNames <p>用户组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserGroupNames(const std::vector<std::string>& _userGroupNames);

                    /**
                     * 判断参数 UserGroupNames 是否已赋值
                     * @return UserGroupNames 是否已赋值
                     * 
                     */
                    bool UserGroupNamesHasBeenSet() const;

                    /**
                     * 获取<p>上次修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedDate <p>上次修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastModifiedDate() const;

                    /**
                     * 设置<p>上次修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifiedDate <p>上次修改时间</p>
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
                     * 获取<p>自定义属性</p>
                     * @return CustomAttributes <p>自定义属性</p>
                     * 
                     */
                    std::vector<MemberMap> GetCustomAttributes() const;

                    /**
                     * 设置<p>自定义属性</p>
                     * @param _customAttributes <p>自定义属性</p>
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
                     * 获取<p>身份证号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResidentIdentityCard <p>身份证号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResidentIdentityCard() const;

                    /**
                     * 设置<p>身份证号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _residentIdentityCard <p>身份证号</p>
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
                     * 获取<p>QQ的OpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QqOpenId <p>QQ的OpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQqOpenId() const;

                    /**
                     * 设置<p>QQ的OpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qqOpenId <p>QQ的OpenId</p>
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
                     * 获取<p>QQ的UnionId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QqUnionId <p>QQ的UnionId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQqUnionId() const;

                    /**
                     * 设置<p>QQ的UnionId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qqUnionId <p>QQ的UnionId</p>
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
                     * 获取<p>微信的WechatOpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatOpenId <p>微信的WechatOpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatOpenId() const;

                    /**
                     * 设置<p>微信的WechatOpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatOpenId <p>微信的WechatOpenId</p>
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
                     * 获取<p>微信的WechatUnionId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatUnionId <p>微信的WechatUnionId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatUnionId() const;

                    /**
                     * 设置<p>微信的WechatUnionId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatUnionId <p>微信的WechatUnionId</p>
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
                     * 获取<p>支付宝的AlipayUserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlipayUserId <p>支付宝的AlipayUserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlipayUserId() const;

                    /**
                     * 设置<p>支付宝的AlipayUserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alipayUserId <p>支付宝的AlipayUserId</p>
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
                     * 获取<p>企业微信的WeComUserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeComUserId <p>企业微信的WeComUserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWeComUserId() const;

                    /**
                     * 设置<p>企业微信的WeComUserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weComUserId <p>企业微信的WeComUserId</p>
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
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
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
                     * 获取<p>姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>姓名</p>
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
                     * 获取<p>坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Locale <p>坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置<p>坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _locale <p>坐标</p>
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
                     * 获取<p>性别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gender <p>性别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>性别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gender <p>性别</p>
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
                     * 获取<p>实名核验方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityVerificationMethod <p>实名核验方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentityVerificationMethod() const;

                    /**
                     * 设置<p>实名核验方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityVerificationMethod <p>实名核验方式</p>
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
                     * 获取<p>是否已经实名核验</p>
                     * @return IdentityVerified <p>是否已经实名核验</p>
                     * 
                     */
                    bool GetIdentityVerified() const;

                    /**
                     * 设置<p>是否已经实名核验</p>
                     * @param _identityVerified <p>是否已经实名核验</p>
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
                     * 获取<p>工作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Job <p>工作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJob() const;

                    /**
                     * 设置<p>工作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _job <p>工作</p>
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
                     * 获取<p>国家</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nationality <p>国家</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置<p>国家</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nationality <p>国家</p>
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
                     * 获取<p>是否主账号（进行过账号融合后，主账号为true，从账号为false）</p>
                     * @return Primary <p>是否主账号（进行过账号融合后，主账号为true，从账号为false）</p>
                     * 
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置<p>是否主账号（进行过账号融合后，主账号为true，从账号为false）</p>
                     * @param _primary <p>是否主账号（进行过账号融合后，主账号为true，从账号为false）</p>
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
                     * 获取<p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone <p>时区</p>
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
                     * 获取<p>是否已经首次登录</p>
                     * @return AlreadyFirstLogin <p>是否已经首次登录</p>
                     * 
                     */
                    bool GetAlreadyFirstLogin() const;

                    /**
                     * 设置<p>是否已经首次登录</p>
                     * @param _alreadyFirstLogin <p>是否已经首次登录</p>
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
                     * 获取<p>租户id</p>
                     * @return TenantId <p>租户id</p>
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置<p>租户id</p>
                     * @param _tenantId <p>租户id</p>
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
                     * 获取<p>用户目录id</p>
                     * @return UserStoreId <p>用户目录id</p>
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置<p>用户目录id</p>
                     * @param _userStoreId <p>用户目录id</p>
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
                     * 获取<p>版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置<p>版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>版本</p>
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
                     * 获取<p>锁定类型（分为管理员锁定，和登录策略锁定）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockType <p>锁定类型（分为管理员锁定，和登录策略锁定）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLockType() const;

                    /**
                     * 设置<p>锁定类型（分为管理员锁定，和登录策略锁定）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockType <p>锁定类型（分为管理员锁定，和登录策略锁定）</p>
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
                     * 获取<p>锁定时间点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockTime <p>锁定时间点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLockTime() const;

                    /**
                     * 设置<p>锁定时间点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockTime <p>锁定时间点</p>
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
                     * 获取<p>索引字段1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexedAttribute1 <p>索引字段1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexedAttribute1() const;

                    /**
                     * 设置<p>索引字段1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexedAttribute1 <p>索引字段1</p>
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
                     * 获取<p>索引字段2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexedAttribute2 <p>索引字段2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexedAttribute2() const;

                    /**
                     * 设置<p>索引字段2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexedAttribute2 <p>索引字段2</p>
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
                     * 获取<p>索引字段3</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexedAttribute3 <p>索引字段3</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexedAttribute3() const;

                    /**
                     * 设置<p>索引字段3</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexedAttribute3 <p>索引字段3</p>
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
                     * 获取<p>索引字段4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexedAttribute4 <p>索引字段4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexedAttribute4() const;

                    /**
                     * 设置<p>索引字段4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexedAttribute4 <p>索引字段4</p>
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
                     * 获取<p>索引字段5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexedAttribute5 <p>索引字段5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexedAttribute5() const;

                    /**
                     * 设置<p>索引字段5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexedAttribute5 <p>索引字段5</p>
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

                    /**
                     * 获取<p>用户所属组织机构ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserOrgs <p>用户所属组织机构ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUserOrgs() const;

                    /**
                     * 设置<p>用户所属组织机构ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userOrgs <p>用户所属组织机构ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserOrgs(const std::vector<std::string>& _userOrgs);

                    /**
                     * 判断参数 UserOrgs 是否已赋值
                     * @return UserOrgs 是否已赋值
                     * 
                     */
                    bool UserOrgsHasBeenSet() const;

                    /**
                     * 获取<p>用户所属企业微信组织机构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeComUserOrgs <p>用户所属企业微信组织机构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetWeComUserOrgs() const;

                    /**
                     * 设置<p>用户所属企业微信组织机构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weComUserOrgs <p>用户所属企业微信组织机构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeComUserOrgs(const std::vector<int64_t>& _weComUserOrgs);

                    /**
                     * 判断参数 WeComUserOrgs 是否已赋值
                     * @return WeComUserOrgs 是否已赋值
                     * 
                     */
                    bool WeComUserOrgsHasBeenSet() const;

                private:

                    /**
                     * <p>用户ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>手机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * <p>邮箱</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>上次登录时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastSignOn;
                    bool m_lastSignOnHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    int64_t m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>用户来源</p>
                     */
                    std::string m_userDataSourceEnum;
                    bool m_userDataSourceEnumHasBeenSet;

                    /**
                     * <p>昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * <p>地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>生日</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_birthdate;
                    bool m_birthdateHasBeenSet;

                    /**
                     * <p>用户组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userGroups;
                    bool m_userGroupsHasBeenSet;

                    /**
                     * <p>用户组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userGroupNames;
                    bool m_userGroupNamesHasBeenSet;

                    /**
                     * <p>上次修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * <p>自定义属性</p>
                     */
                    std::vector<MemberMap> m_customAttributes;
                    bool m_customAttributesHasBeenSet;

                    /**
                     * <p>身份证号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_residentIdentityCard;
                    bool m_residentIdentityCardHasBeenSet;

                    /**
                     * <p>QQ的OpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qqOpenId;
                    bool m_qqOpenIdHasBeenSet;

                    /**
                     * <p>QQ的UnionId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qqUnionId;
                    bool m_qqUnionIdHasBeenSet;

                    /**
                     * <p>微信的WechatOpenId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatOpenId;
                    bool m_wechatOpenIdHasBeenSet;

                    /**
                     * <p>微信的WechatUnionId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatUnionId;
                    bool m_wechatUnionIdHasBeenSet;

                    /**
                     * <p>支付宝的AlipayUserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alipayUserId;
                    bool m_alipayUserIdHasBeenSet;

                    /**
                     * <p>企业微信的WeComUserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_weComUserId;
                    bool m_weComUserIdHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_locale;
                    bool m_localeHasBeenSet;

                    /**
                     * <p>性别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>实名核验方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identityVerificationMethod;
                    bool m_identityVerificationMethodHasBeenSet;

                    /**
                     * <p>是否已经实名核验</p>
                     */
                    bool m_identityVerified;
                    bool m_identityVerifiedHasBeenSet;

                    /**
                     * <p>工作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * <p>国家</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * <p>是否主账号（进行过账号融合后，主账号为true，从账号为false）</p>
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>是否已经首次登录</p>
                     */
                    bool m_alreadyFirstLogin;
                    bool m_alreadyFirstLoginHasBeenSet;

                    /**
                     * <p>租户id</p>
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * <p>用户目录id</p>
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * <p>版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>锁定类型（分为管理员锁定，和登录策略锁定）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lockType;
                    bool m_lockTypeHasBeenSet;

                    /**
                     * <p>锁定时间点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * <p>索引字段1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexedAttribute1;
                    bool m_indexedAttribute1HasBeenSet;

                    /**
                     * <p>索引字段2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexedAttribute2;
                    bool m_indexedAttribute2HasBeenSet;

                    /**
                     * <p>索引字段3</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexedAttribute3;
                    bool m_indexedAttribute3HasBeenSet;

                    /**
                     * <p>索引字段4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexedAttribute4;
                    bool m_indexedAttribute4HasBeenSet;

                    /**
                     * <p>索引字段5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexedAttribute5;
                    bool m_indexedAttribute5HasBeenSet;

                    /**
                     * <p>用户所属组织机构ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userOrgs;
                    bool m_userOrgsHasBeenSet;

                    /**
                     * <p>用户所属企业微信组织机构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_weComUserOrgs;
                    bool m_weComUserOrgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_USER_H_
