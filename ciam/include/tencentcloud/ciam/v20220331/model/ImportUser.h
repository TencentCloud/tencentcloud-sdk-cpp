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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_IMPORTUSER_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_IMPORTUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/MemberMap.h>
#include <tencentcloud/ciam/v20220331/model/Salt.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * 导入用户信息
1、UserName，PhoneNumber ，Email ，WechatOpenId ，WechatUnionId ，AlipayUserId ，QqOpenId ，QqUnionId ，WeComUserId 九个属性中，导入时必须包含其中一个属性并遵守初始化自定义属性的正则表达式规则。UserName，PhoneNumber，Email的正则表达式在控制台的自定义属性中可以查询到。
2、对于密码的导入，导入的密码支持明文导入，MD5密文导入，SHA1密文导入，BCRYPT密文导入 ，这个需要在PasswordEncryptTypeEnum 字段中指定。
3、IdentityVerified，IdentityVerificationMethod 支持导入，
IdentityVerified 为true，IdentityVerificationMethod必传；
IdentityVerificationMethod 为nameAndIdCard，Name,ResidentIdentityCard必传
IdentityVerificationMethod 为nameIdCardAndPhone，Name,PhoneNumber,ResidentIdentityCard必传;
                */
                class ImportUser : public AbstractModel
                {
                public:
                    ImportUser();
                    ~ImportUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取手机号
                     * @return PhoneNumber 手机号
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号
                     * @param _phoneNumber 手机号
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
                     * @return Email 邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param _email 邮箱
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
                     * 获取身份证号
                     * @return ResidentIdentityCard 身份证号
                     * 
                     */
                    std::string GetResidentIdentityCard() const;

                    /**
                     * 设置身份证号
                     * @param _residentIdentityCard 身份证号
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
                     * 获取昵称
                     * @return Nickname 昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置昵称
                     * @param _nickname 昵称
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
                     * @return Address 地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置地址
                     * @param _address 地址
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
                     * 获取用户组ID
                     * @return UserGroup 用户组ID
                     * 
                     */
                    std::vector<std::string> GetUserGroup() const;

                    /**
                     * 设置用户组ID
                     * @param _userGroup 用户组ID
                     * 
                     */
                    void SetUserGroup(const std::vector<std::string>& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取QQ qqOpenId
                     * @return QqOpenId QQ qqOpenId
                     * 
                     */
                    std::string GetQqOpenId() const;

                    /**
                     * 设置QQ qqOpenId
                     * @param _qqOpenId QQ qqOpenId
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
                     * 获取QQ qqUnionId
                     * @return QqUnionId QQ qqUnionId
                     * 
                     */
                    std::string GetQqUnionId() const;

                    /**
                     * 设置QQ qqUnionId
                     * @param _qqUnionId QQ qqUnionId
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
                     * 获取微信wechatOpenId
                     * @return WechatOpenId 微信wechatOpenId
                     * 
                     */
                    std::string GetWechatOpenId() const;

                    /**
                     * 设置微信wechatOpenId
                     * @param _wechatOpenId 微信wechatOpenId
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
                     * 获取微信wechatUnionId
                     * @return WechatUnionId 微信wechatUnionId
                     * 
                     */
                    std::string GetWechatUnionId() const;

                    /**
                     * 设置微信wechatUnionId
                     * @param _wechatUnionId 微信wechatUnionId
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
                     * 获取支付宝alipayUserId
                     * @return AlipayUserId 支付宝alipayUserId
                     * 
                     */
                    std::string GetAlipayUserId() const;

                    /**
                     * 设置支付宝alipayUserId
                     * @param _alipayUserId 支付宝alipayUserId
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
                     * 获取企业微信weComUserId
                     * @return WeComUserId 企业微信weComUserId
                     * 
                     */
                    std::string GetWeComUserId() const;

                    /**
                     * 设置企业微信weComUserId
                     * @param _weComUserId 企业微信weComUserId
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
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取生日
                     * @return Birthdate 生日
                     * 
                     */
                    std::string GetBirthdate() const;

                    /**
                     * 设置生日
                     * @param _birthdate 生日
                     * 
                     */
                    void SetBirthdate(const std::string& _birthdate);

                    /**
                     * 判断参数 Birthdate 是否已赋值
                     * @return Birthdate 是否已赋值
                     * 
                     */
                    bool BirthdateHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
                     * @param _name 姓名
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
                     * @return Locale 坐标
                     * 
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置坐标
                     * @param _locale 坐标
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
                     * 获取性别（MALE;FEMALE;UNKNOWN）
                     * @return Gender 性别（MALE;FEMALE;UNKNOWN）
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置性别（MALE;FEMALE;UNKNOWN）
                     * @param _gender 性别（MALE;FEMALE;UNKNOWN）
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
                     * @return IdentityVerificationMethod 实名核验方式
                     * 
                     */
                    std::string GetIdentityVerificationMethod() const;

                    /**
                     * 设置实名核验方式
                     * @param _identityVerificationMethod 实名核验方式
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
                     * 获取是否已实名核验
                     * @return IdentityVerified 是否已实名核验
                     * 
                     */
                    bool GetIdentityVerified() const;

                    /**
                     * 设置是否已实名核验
                     * @param _identityVerified 是否已实名核验
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
                     * @return Job 工作
                     * 
                     */
                    std::string GetJob() const;

                    /**
                     * 设置工作
                     * @param _job 工作
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
                     * @return Nationality 国家
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置国家
                     * @param _nationality 国家
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
                     * 获取时区
                     * @return Zone 时区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置时区
                     * @param _zone 时区
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
                     * 获取密码密文
                     * @return Password 密码密文
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码密文
                     * @param _password 密码密文
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取自定义属性
                     * @return CustomizationAttributes 自定义属性
                     * 
                     */
                    std::vector<MemberMap> GetCustomizationAttributes() const;

                    /**
                     * 设置自定义属性
                     * @param _customizationAttributes 自定义属性
                     * 
                     */
                    void SetCustomizationAttributes(const std::vector<MemberMap>& _customizationAttributes);

                    /**
                     * 判断参数 CustomizationAttributes 是否已赋值
                     * @return CustomizationAttributes 是否已赋值
                     * 
                     */
                    bool CustomizationAttributesHasBeenSet() const;

                    /**
                     * 获取密码盐
                     * @return Salt 密码盐
                     * 
                     */
                    Salt GetSalt() const;

                    /**
                     * 设置密码盐
                     * @param _salt 密码盐
                     * 
                     */
                    void SetSalt(const Salt& _salt);

                    /**
                     * 判断参数 Salt 是否已赋值
                     * @return Salt 是否已赋值
                     * 
                     */
                    bool SaltHasBeenSet() const;

                    /**
                     * 获取密码加密方式（SHA1;BCRYPT）
                     * @return PasswordEncryptTypeEnum 密码加密方式（SHA1;BCRYPT）
                     * 
                     */
                    std::string GetPasswordEncryptTypeEnum() const;

                    /**
                     * 设置密码加密方式（SHA1;BCRYPT）
                     * @param _passwordEncryptTypeEnum 密码加密方式（SHA1;BCRYPT）
                     * 
                     */
                    void SetPasswordEncryptTypeEnum(const std::string& _passwordEncryptTypeEnum);

                    /**
                     * 判断参数 PasswordEncryptTypeEnum 是否已赋值
                     * @return PasswordEncryptTypeEnum 是否已赋值
                     * 
                     */
                    bool PasswordEncryptTypeEnumHasBeenSet() const;

                    /**
                     * 获取索引字段1
                     * @return IndexedAttribute1 索引字段1
                     * 
                     */
                    std::string GetIndexedAttribute1() const;

                    /**
                     * 设置索引字段1
                     * @param _indexedAttribute1 索引字段1
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
                     * @return IndexedAttribute2 索引字段2
                     * 
                     */
                    std::string GetIndexedAttribute2() const;

                    /**
                     * 设置索引字段2
                     * @param _indexedAttribute2 索引字段2
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
                     * @return IndexedAttribute3 索引字段3
                     * 
                     */
                    std::string GetIndexedAttribute3() const;

                    /**
                     * 设置索引字段3
                     * @param _indexedAttribute3 索引字段3
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
                     * @return IndexedAttribute4 索引字段4
                     * 
                     */
                    std::string GetIndexedAttribute4() const;

                    /**
                     * 设置索引字段4
                     * @param _indexedAttribute4 索引字段4
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
                     * @return IndexedAttribute5 索引字段5
                     * 
                     */
                    std::string GetIndexedAttribute5() const;

                    /**
                     * 设置索引字段5
                     * @param _indexedAttribute5 索引字段5
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
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_residentIdentityCard;
                    bool m_residentIdentityCardHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 用户组ID
                     */
                    std::vector<std::string> m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * QQ qqOpenId
                     */
                    std::string m_qqOpenId;
                    bool m_qqOpenIdHasBeenSet;

                    /**
                     * QQ qqUnionId
                     */
                    std::string m_qqUnionId;
                    bool m_qqUnionIdHasBeenSet;

                    /**
                     * 微信wechatOpenId
                     */
                    std::string m_wechatOpenId;
                    bool m_wechatOpenIdHasBeenSet;

                    /**
                     * 微信wechatUnionId
                     */
                    std::string m_wechatUnionId;
                    bool m_wechatUnionIdHasBeenSet;

                    /**
                     * 支付宝alipayUserId
                     */
                    std::string m_alipayUserId;
                    bool m_alipayUserIdHasBeenSet;

                    /**
                     * 企业微信weComUserId
                     */
                    std::string m_weComUserId;
                    bool m_weComUserIdHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 生日
                     */
                    std::string m_birthdate;
                    bool m_birthdateHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 坐标
                     */
                    std::string m_locale;
                    bool m_localeHasBeenSet;

                    /**
                     * 性别（MALE;FEMALE;UNKNOWN）
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 实名核验方式
                     */
                    std::string m_identityVerificationMethod;
                    bool m_identityVerificationMethodHasBeenSet;

                    /**
                     * 是否已实名核验
                     */
                    bool m_identityVerified;
                    bool m_identityVerifiedHasBeenSet;

                    /**
                     * 工作
                     */
                    std::string m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * 国家
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 时区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 密码密文
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 自定义属性
                     */
                    std::vector<MemberMap> m_customizationAttributes;
                    bool m_customizationAttributesHasBeenSet;

                    /**
                     * 密码盐
                     */
                    Salt m_salt;
                    bool m_saltHasBeenSet;

                    /**
                     * 密码加密方式（SHA1;BCRYPT）
                     */
                    std::string m_passwordEncryptTypeEnum;
                    bool m_passwordEncryptTypeEnumHasBeenSet;

                    /**
                     * 索引字段1
                     */
                    std::string m_indexedAttribute1;
                    bool m_indexedAttribute1HasBeenSet;

                    /**
                     * 索引字段2
                     */
                    std::string m_indexedAttribute2;
                    bool m_indexedAttribute2HasBeenSet;

                    /**
                     * 索引字段3
                     */
                    std::string m_indexedAttribute3;
                    bool m_indexedAttribute3HasBeenSet;

                    /**
                     * 索引字段4
                     */
                    std::string m_indexedAttribute4;
                    bool m_indexedAttribute4HasBeenSet;

                    /**
                     * 索引字段5
                     */
                    std::string m_indexedAttribute5;
                    bool m_indexedAttribute5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_IMPORTUSER_H_
