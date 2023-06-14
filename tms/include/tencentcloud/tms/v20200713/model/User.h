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

#ifndef TENCENTCLOUD_TMS_V20200713_MODEL_USER_H_
#define TENCENTCLOUD_TMS_V20200713_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * 用户相关信息
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户账号ID，如填写，会根据账号历史恶意情况，判定消息有害结果，特别是有利于可疑恶意情况下的辅助判断。账号可以填写微信uin、QQ号、微信openid、QQopenid、字符串等。该字段和账号类别确定唯一账号。
                     * @return UserId 用户账号ID，如填写，会根据账号历史恶意情况，判定消息有害结果，特别是有利于可疑恶意情况下的辅助判断。账号可以填写微信uin、QQ号、微信openid、QQopenid、字符串等。该字段和账号类别确定唯一账号。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户账号ID，如填写，会根据账号历史恶意情况，判定消息有害结果，特别是有利于可疑恶意情况下的辅助判断。账号可以填写微信uin、QQ号、微信openid、QQopenid、字符串等。该字段和账号类别确定唯一账号。
                     * @param _userId 用户账号ID，如填写，会根据账号历史恶意情况，判定消息有害结果，特别是有利于可疑恶意情况下的辅助判断。账号可以填写微信uin、QQ号、微信openid、QQopenid、字符串等。该字段和账号类别确定唯一账号。
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
                     * 获取用户昵称
                     * @return Nickname 用户昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置用户昵称
                     * @param _nickname 用户昵称
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
                     * 获取账号类别，"1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string"
                     * @return AccountType 账号类别，"1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string"
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置账号类别，"1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string"
                     * @param _accountType 账号类别，"1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string"
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取性别 默认0 未知 1 男性 2 女性
                     * @return Gender 性别 默认0 未知 1 男性 2 女性
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置性别 默认0 未知 1 男性 2 女性
                     * @param _gender 性别 默认0 未知 1 男性 2 女性
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取年龄 默认0 未知
                     * @return Age 年龄 默认0 未知
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置年龄 默认0 未知
                     * @param _age 年龄 默认0 未知
                     * 
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取用户等级，默认0 未知 1 低 2 中 3 高
                     * @return Level 用户等级，默认0 未知 1 低 2 中 3 高
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置用户等级，默认0 未知 1 低 2 中 3 高
                     * @param _level 用户等级，默认0 未知 1 低 2 中 3 高
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return Phone 手机号
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号
                     * @param _phone 手机号
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                private:

                    /**
                     * 用户账号ID，如填写，会根据账号历史恶意情况，判定消息有害结果，特别是有利于可疑恶意情况下的辅助判断。账号可以填写微信uin、QQ号、微信openid、QQopenid、字符串等。该字段和账号类别确定唯一账号。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 账号类别，"1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string"
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 性别 默认0 未知 1 男性 2 女性
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 年龄 默认0 未知
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 用户等级，默认0 未知 1 低 2 中 3 高
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_USER_H_
