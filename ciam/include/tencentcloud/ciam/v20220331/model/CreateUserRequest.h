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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEUSERREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateUser请求参数结构体
                */
                class CreateUserRequest : public AbstractModel
                {
                public:
                    CreateUserRequest();
                    ~CreateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户目录ID</p>
                     * @return UserStoreId <p>用户目录ID</p>
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置<p>用户目录ID</p>
                     * @param _userStoreId <p>用户目录ID</p>
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
                     * 获取<p>手机号码</p>
                     * @return PhoneNumber <p>手机号码</p>
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置<p>手机号码</p>
                     * @param _phoneNumber <p>手机号码</p>
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
                     * @return Email <p>邮箱</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>邮箱</p>
                     * @param _email <p>邮箱</p>
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
                     * 获取<p>密码</p>
                     * @return Password <p>密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>密码</p>
                     * @param _password <p>密码</p>
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
                     * 获取<p>昵称</p>
                     * @return Nickname <p>昵称</p>
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置<p>昵称</p>
                     * @param _nickname <p>昵称</p>
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
                     * @return Address <p>地址</p>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>地址</p>
                     * @param _address <p>地址</p>
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
                     * 获取<p>用户组ID</p>
                     * @return UserGroup <p>用户组ID</p>
                     * 
                     */
                    std::vector<std::string> GetUserGroup() const;

                    /**
                     * 设置<p>用户组ID</p>
                     * @param _userGroup <p>用户组ID</p>
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
                     * 获取<p>生日</p>
                     * @return Birthdate <p>生日</p>
                     * 
                     */
                    int64_t GetBirthdate() const;

                    /**
                     * 设置<p>生日</p>
                     * @param _birthdate <p>生日</p>
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
                     * 获取<p>自定义属性</p>
                     * @return CustomizationAttributes <p>自定义属性</p>
                     * 
                     */
                    std::vector<MemberMap> GetCustomizationAttributes() const;

                    /**
                     * 设置<p>自定义属性</p>
                     * @param _customizationAttributes <p>自定义属性</p>
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
                     * 获取<p>索引字段1</p>
                     * @return IndexedAttribute1 <p>索引字段1</p>
                     * 
                     */
                    std::string GetIndexedAttribute1() const;

                    /**
                     * 设置<p>索引字段1</p>
                     * @param _indexedAttribute1 <p>索引字段1</p>
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
                     * @return IndexedAttribute2 <p>索引字段2</p>
                     * 
                     */
                    std::string GetIndexedAttribute2() const;

                    /**
                     * 设置<p>索引字段2</p>
                     * @param _indexedAttribute2 <p>索引字段2</p>
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
                     * @return IndexedAttribute3 <p>索引字段3</p>
                     * 
                     */
                    std::string GetIndexedAttribute3() const;

                    /**
                     * 设置<p>索引字段3</p>
                     * @param _indexedAttribute3 <p>索引字段3</p>
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
                     * @return IndexedAttribute4 <p>索引字段4</p>
                     * 
                     */
                    std::string GetIndexedAttribute4() const;

                    /**
                     * 设置<p>索引字段4</p>
                     * @param _indexedAttribute4 <p>索引字段4</p>
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
                     * @return IndexedAttribute5 <p>索引字段5</p>
                     * 
                     */
                    std::string GetIndexedAttribute5() const;

                    /**
                     * 设置<p>索引字段5</p>
                     * @param _indexedAttribute5 <p>索引字段5</p>
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
                     * @return UserOrg <p>用户所属组织机构ID</p>
                     * 
                     */
                    std::vector<std::string> GetUserOrg() const;

                    /**
                     * 设置<p>用户所属组织机构ID</p>
                     * @param _userOrg <p>用户所属组织机构ID</p>
                     * 
                     */
                    void SetUserOrg(const std::vector<std::string>& _userOrg);

                    /**
                     * 判断参数 UserOrg 是否已赋值
                     * @return UserOrg 是否已赋值
                     * 
                     */
                    bool UserOrgHasBeenSet() const;

                private:

                    /**
                     * <p>用户目录ID</p>
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * <p>手机号码</p>
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * <p>邮箱</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>昵称</p>
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * <p>地址</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>用户组ID</p>
                     */
                    std::vector<std::string> m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * <p>生日</p>
                     */
                    int64_t m_birthdate;
                    bool m_birthdateHasBeenSet;

                    /**
                     * <p>自定义属性</p>
                     */
                    std::vector<MemberMap> m_customizationAttributes;
                    bool m_customizationAttributesHasBeenSet;

                    /**
                     * <p>索引字段1</p>
                     */
                    std::string m_indexedAttribute1;
                    bool m_indexedAttribute1HasBeenSet;

                    /**
                     * <p>索引字段2</p>
                     */
                    std::string m_indexedAttribute2;
                    bool m_indexedAttribute2HasBeenSet;

                    /**
                     * <p>索引字段3</p>
                     */
                    std::string m_indexedAttribute3;
                    bool m_indexedAttribute3HasBeenSet;

                    /**
                     * <p>索引字段4</p>
                     */
                    std::string m_indexedAttribute4;
                    bool m_indexedAttribute4HasBeenSet;

                    /**
                     * <p>索引字段5</p>
                     */
                    std::string m_indexedAttribute5;
                    bool m_indexedAttribute5HasBeenSet;

                    /**
                     * <p>用户所属组织机构ID</p>
                     */
                    std::vector<std::string> m_userOrg;
                    bool m_userOrgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEUSERREQUEST_H_
