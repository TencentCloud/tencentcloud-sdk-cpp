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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEMESSAGERECEIVERREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEMESSAGERECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateMessageReceiver请求参数结构体
                */
                class CreateMessageReceiverRequest : public AbstractModel
                {
                public:
                    CreateMessageReceiverRequest();
                    ~CreateMessageReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取消息接收人的用户名
                     * @return Name 消息接收人的用户名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置消息接收人的用户名
                     * @param _name 消息接收人的用户名
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
                     * 获取手机号国际区号，国内为86
                     * @return CountryCode 手机号国际区号，国内为86
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置手机号国际区号，国内为86
                     * @param _countryCode 手机号国际区号，国内为86
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
                     * 获取手机号码, 例如：132****2492
                     * @return PhoneNumber 手机号码, 例如：132****2492
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码, 例如：132****2492
                     * @param _phoneNumber 手机号码, 例如：132****2492
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
                     * 获取邮箱，例如：57*****@qq.com
                     * @return Email 邮箱，例如：57*****@qq.com
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱，例如：57*****@qq.com
                     * @param _email 邮箱，例如：57*****@qq.com
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
                     * 获取消息接收人的备注，选填
                     * @return Remark 消息接收人的备注，选填
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置消息接收人的备注，选填
                     * @param _remark 消息接收人的备注，选填
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
                     * 消息接收人的用户名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 手机号国际区号，国内为86
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 手机号码, 例如：132****2492
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 邮箱，例如：57*****@qq.com
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 消息接收人的备注，选填
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEMESSAGERECEIVERREQUEST_H_
