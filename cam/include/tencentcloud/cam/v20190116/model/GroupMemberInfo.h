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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GROUPMEMBERINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GROUPMEMBERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 用户组用户信息
                */
                class GroupMemberInfo : public AbstractModel
                {
                public:
                    GroupMemberInfo();
                    ~GroupMemberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子用户 Uid。
                     * @return Uid 子用户 Uid。
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置子用户 Uid。
                     * @param _uid 子用户 Uid。
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取子用户 Uin。
                     * @return Uin 子用户 Uin。
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置子用户 Uin。
                     * @param _uin 子用户 Uin。
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取子用户名称。
                     * @return Name 子用户名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置子用户名称。
                     * @param _name 子用户名称。
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
                     * 获取手机号。
                     * @return PhoneNum 手机号。
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置手机号。
                     * @param _phoneNum 手机号。
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取手机区域代码。
                     * @return CountryCode 手机区域代码。
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置手机区域代码。
                     * @param _countryCode 手机区域代码。
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取是否已验证手机。0-未验证  1-验证
                     * @return PhoneFlag 是否已验证手机。0-未验证  1-验证
                     * 
                     */
                    uint64_t GetPhoneFlag() const;

                    /**
                     * 设置是否已验证手机。0-未验证  1-验证
                     * @param _phoneFlag 是否已验证手机。0-未验证  1-验证
                     * 
                     */
                    void SetPhoneFlag(const uint64_t& _phoneFlag);

                    /**
                     * 判断参数 PhoneFlag 是否已赋值
                     * @return PhoneFlag 是否已赋值
                     * 
                     */
                    bool PhoneFlagHasBeenSet() const;

                    /**
                     * 获取邮箱地址。
                     * @return Email 邮箱地址。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱地址。
                     * @param _email 邮箱地址。
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
                     * 获取是否已验证邮箱。0-未验证  1-验证
                     * @return EmailFlag 是否已验证邮箱。0-未验证  1-验证
                     * 
                     */
                    uint64_t GetEmailFlag() const;

                    /**
                     * 设置是否已验证邮箱。0-未验证  1-验证
                     * @param _emailFlag 是否已验证邮箱。0-未验证  1-验证
                     * 
                     */
                    void SetEmailFlag(const uint64_t& _emailFlag);

                    /**
                     * 判断参数 EmailFlag 是否已赋值
                     * @return EmailFlag 是否已赋值
                     * 
                     */
                    bool EmailFlagHasBeenSet() const;

                    /**
                     * 获取用户类型。1-全局协作者 2-项目协作者 3-消息接收者
                     * @return UserType 用户类型。1-全局协作者 2-项目协作者 3-消息接收者
                     * 
                     */
                    uint64_t GetUserType() const;

                    /**
                     * 设置用户类型。1-全局协作者 2-项目协作者 3-消息接收者
                     * @param _userType 用户类型。1-全局协作者 2-项目协作者 3-消息接收者
                     * 
                     */
                    void SetUserType(const uint64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取是否为主消息接收人。0-否 1-是
                     * @return IsReceiverOwner 是否为主消息接收人。0-否 1-是
                     * 
                     */
                    uint64_t GetIsReceiverOwner() const;

                    /**
                     * 设置是否为主消息接收人。0-否 1-是
                     * @param _isReceiverOwner 是否为主消息接收人。0-否 1-是
                     * 
                     */
                    void SetIsReceiverOwner(const uint64_t& _isReceiverOwner);

                    /**
                     * 判断参数 IsReceiverOwner 是否已赋值
                     * @return IsReceiverOwner 是否已赋值
                     * 
                     */
                    bool IsReceiverOwnerHasBeenSet() const;

                    /**
                     * 获取昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 子用户 Uid。
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 子用户 Uin。
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子用户名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 手机号。
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 手机区域代码。
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 是否已验证手机。0-未验证  1-验证
                     */
                    uint64_t m_phoneFlag;
                    bool m_phoneFlagHasBeenSet;

                    /**
                     * 邮箱地址。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 是否已验证邮箱。0-未验证  1-验证
                     */
                    uint64_t m_emailFlag;
                    bool m_emailFlagHasBeenSet;

                    /**
                     * 用户类型。1-全局协作者 2-项目协作者 3-消息接收者
                     */
                    uint64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否为主消息接收人。0-否 1-是
                     */
                    uint64_t m_isReceiverOwner;
                    bool m_isReceiverOwnerHasBeenSet;

                    /**
                     * 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GROUPMEMBERINFO_H_
