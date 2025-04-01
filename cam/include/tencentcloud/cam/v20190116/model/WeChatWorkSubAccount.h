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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_WECHATWORKSUBACCOUNT_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_WECHATWORKSUBACCOUNT_H_

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
                * 企业微信子用户
                */
                class WeChatWorkSubAccount : public AbstractModel
                {
                public:
                    WeChatWorkSubAccount();
                    ~WeChatWorkSubAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子用户用户 ID
                     * @return Uin 子用户用户 ID
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置子用户用户 ID
                     * @param _uin 子用户用户 ID
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
                     * 获取子用户用户名
                     * @return Name 子用户用户名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置子用户用户名
                     * @param _name 子用户用户名
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
                     * 获取子用户 UID
                     * @return Uid 子用户 UID
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置子用户 UID
                     * @param _uid 子用户 UID
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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取子用户能否登录控制台
                     * @return ConsoleLogin 子用户能否登录控制台
                     * 
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 设置子用户能否登录控制台
                     * @param _consoleLogin 子用户能否登录控制台
                     * 
                     */
                    void SetConsoleLogin(const uint64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     * 
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return PhoneNum 手机号
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置手机号
                     * @param _phoneNum 手机号
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
                     * 获取区号
                     * @return CountryCode 区号
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置区号
                     * @param _countryCode 区号
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
                     * 获取企业微信UserId
                     * @return WeChatWorkUserId 企业微信UserId
                     * 
                     */
                    std::string GetWeChatWorkUserId() const;

                    /**
                     * 设置企业微信UserId
                     * @param _weChatWorkUserId 企业微信UserId
                     * 
                     */
                    void SetWeChatWorkUserId(const std::string& _weChatWorkUserId);

                    /**
                     * 判断参数 WeChatWorkUserId 是否已赋值
                     * @return WeChatWorkUserId 是否已赋值
                     * 
                     */
                    bool WeChatWorkUserIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 子用户用户 ID
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子用户用户名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 子用户 UID
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 子用户能否登录控制台
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 区号
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 企业微信UserId
                     */
                    std::string m_weChatWorkUserId;
                    bool m_weChatWorkUserIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_WECHATWORKSUBACCOUNT_H_
