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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_USERDESCRIBE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_USERDESCRIBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (UserDescribe) 用于描述个人帐号查询结果。
                */
                class UserDescribe : public AbstractModel
                {
                public:
                    UserDescribe();
                    ~UserDescribe() = default;
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
                     * 获取手机号，隐藏中间4位数字，用*代替
                     * @return Mobile 手机号，隐藏中间4位数字，用*代替
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号，隐藏中间4位数字，用*代替
                     * @param _mobile 手机号，隐藏中间4位数字，用*代替
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
                     * 获取注册时间点 (UNIX时间戳)
                     * @return CreatedOn 注册时间点 (UNIX时间戳)
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置注册时间点 (UNIX时间戳)
                     * @param _createdOn 注册时间点 (UNIX时间戳)
                     * 
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取实名认证状态：
0 - 未实名；
1 - 通过实名
                     * @return VerifyStatus 实名认证状态：
0 - 未实名；
1 - 通过实名
                     * 
                     */
                    int64_t GetVerifyStatus() const;

                    /**
                     * 设置实名认证状态：
0 - 未实名；
1 - 通过实名
                     * @param _verifyStatus 实名认证状态：
0 - 未实名；
1 - 通过实名
                     * 
                     */
                    void SetVerifyStatus(const int64_t& _verifyStatus);

                    /**
                     * 判断参数 VerifyStatus 是否已赋值
                     * @return VerifyStatus 是否已赋值
                     * 
                     */
                    bool VerifyStatusHasBeenSet() const;

                    /**
                     * 获取真实姓名
                     * @return Name 真实姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置真实姓名
                     * @param _name 真实姓名
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
                     * 获取实名认证通过时间 (UNIX时间戳)
                     * @return VerifiedOn 实名认证通过时间 (UNIX时间戳)
                     * 
                     */
                    int64_t GetVerifiedOn() const;

                    /**
                     * 设置实名认证通过时间 (UNIX时间戳)
                     * @param _verifiedOn 实名认证通过时间 (UNIX时间戳)
                     * 
                     */
                    void SetVerifiedOn(const int64_t& _verifiedOn);

                    /**
                     * 判断参数 VerifiedOn 是否已赋值
                     * @return VerifiedOn 是否已赋值
                     * 
                     */
                    bool VerifiedOnHasBeenSet() const;

                    /**
                     * 获取身份证件类型; 
ID_CARD - 居民身份证；
PASSPORT - 护照；
MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证；
MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证；
HOUSEHOLD_REGISTER - 户口本；
TEMP_ID_CARD - 临时居民身份证
                     * @return IdCardType 身份证件类型; 
ID_CARD - 居民身份证；
PASSPORT - 护照；
MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证；
MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证；
HOUSEHOLD_REGISTER - 户口本；
TEMP_ID_CARD - 临时居民身份证
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置身份证件类型; 
ID_CARD - 居民身份证；
PASSPORT - 护照；
MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证；
MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证；
HOUSEHOLD_REGISTER - 户口本；
TEMP_ID_CARD - 临时居民身份证
                     * @param _idCardType 身份证件类型; 
ID_CARD - 居民身份证；
PASSPORT - 护照；
MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证；
MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证；
HOUSEHOLD_REGISTER - 户口本；
TEMP_ID_CARD - 临时居民身份证
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取身份证件号码 (脱敏)
                     * @return IdCardNumber 身份证件号码 (脱敏)
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置身份证件号码 (脱敏)
                     * @param _idCardNumber 身份证件号码 (脱敏)
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 手机号，隐藏中间4位数字，用*代替
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 注册时间点 (UNIX时间戳)
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 实名认证状态：
0 - 未实名；
1 - 通过实名
                     */
                    int64_t m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                    /**
                     * 真实姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实名认证通过时间 (UNIX时间戳)
                     */
                    int64_t m_verifiedOn;
                    bool m_verifiedOnHasBeenSet;

                    /**
                     * 身份证件类型; 
ID_CARD - 居民身份证；
PASSPORT - 护照；
MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证；
MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证；
HOUSEHOLD_REGISTER - 户口本；
TEMP_ID_CARD - 临时居民身份证
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 身份证件号码 (脱敏)
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_USERDESCRIBE_H_
