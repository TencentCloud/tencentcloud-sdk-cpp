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

#ifndef TENCENTCLOUD_TRDP_V20220726_MODEL_USERINFO_H_
#define TENCENTCLOUD_TRDP_V20220726_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trdp
    {
        namespace V20220726
        {
            namespace Model
            {
                /**
                * 用户信息	
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户外网IP地址
                     * @return Ip 用户外网IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置用户外网IP地址
                     * @param _ip 用户外网IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取来源渠道编码
                     * @return ChannelSource 来源渠道编码
                     * 
                     */
                    std::string GetChannelSource() const;

                    /**
                     * 设置来源渠道编码
                     * @param _channelSource 来源渠道编码
                     * 
                     */
                    void SetChannelSource(const std::string& _channelSource);

                    /**
                     * 判断参数 ChannelSource 是否已赋值
                     * @return ChannelSource 是否已赋值
                     * 
                     */
                    bool ChannelSourceHasBeenSet() const;

                    /**
                     * 获取用户登录平台。1：Android 2：iOS 3：H5 4：小程序
                     * @return Platform 用户登录平台。1：Android 2：iOS 3：H5 4：小程序
                     * 
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置用户登录平台。1：Android 2：iOS 3：H5 4：小程序
                     * @param _platform 用户登录平台。1：Android 2：iOS 3：H5 4：小程序
                     * 
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

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
                     * 获取年龄
                     * @return Age 年龄
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置年龄
                     * @param _age 年龄
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
                     * 获取性别：
male（男）
female（女）
                     * @return Gender 性别：
male（男）
female（女）
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置性别：
male（男）
female（女）
                     * @param _gender 性别：
male（男）
female（女）
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
                     * 获取邮箱地址
                     * @return Email 邮箱地址
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱地址
                     * @param _email 邮箱地址
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
                     * 获取用户地址
                     * @return Address 用户地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置用户地址
                     * @param _address 用户地址
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

                private:

                    /**
                     * 用户外网IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 来源渠道编码
                     */
                    std::string m_channelSource;
                    bool m_channelSourceHasBeenSet;

                    /**
                     * 用户登录平台。1：Android 2：iOS 3：H5 4：小程序
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 年龄
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 性别：
male（男）
female（女）
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_residentIdentityCard;
                    bool m_residentIdentityCardHasBeenSet;

                    /**
                     * 邮箱地址
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 用户昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRDP_V20220726_MODEL_USERINFO_H_
