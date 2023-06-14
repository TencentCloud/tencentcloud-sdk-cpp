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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_UPDATEUSERREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_UPDATEUSERREQUEST_H_

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
                * UpdateUser请求参数结构体
                */
                class UpdateUserRequest : public AbstractModel
                {
                public:
                    UpdateUserRequest();
                    ~UpdateUserRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取用户目录ID
                     * @return UserStoreId 用户目录ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户目录ID
                     * @param _userStoreId 用户目录ID
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
                     * 获取用户名称
                     * @return UserName 用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称
                     * @param _userName 用户名称
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
                     * 获取手机号码
                     * @return PhoneNumber 手机号码
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码
                     * @param _phoneNumber 手机号码
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
                     * 获取用户组
                     * @return UserGroup 用户组
                     * 
                     */
                    std::vector<std::string> GetUserGroup() const;

                    /**
                     * 设置用户组
                     * @param _userGroup 用户组
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
                     * 获取生日
                     * @return Birthdate 生日
                     * 
                     */
                    int64_t GetBirthdate() const;

                    /**
                     * 设置生日
                     * @param _birthdate 生日
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
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户目录ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 手机号码
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

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
                     * 用户组
                     */
                    std::vector<std::string> m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * 生日
                     */
                    int64_t m_birthdate;
                    bool m_birthdateHasBeenSet;

                    /**
                     * 自定义属性
                     */
                    std::vector<MemberMap> m_customizationAttributes;
                    bool m_customizationAttributesHasBeenSet;

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

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_UPDATEUSERREQUEST_H_
