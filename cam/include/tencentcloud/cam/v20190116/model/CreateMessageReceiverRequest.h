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
                     * 获取<p>消息接收人的用户名</p>
                     * @return Name <p>消息接收人的用户名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>消息接收人的用户名</p>
                     * @param _name <p>消息接收人的用户名</p>
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
                     * 获取<p>手机号国际区号，国内为86</p>
                     * @return CountryCode <p>手机号国际区号，国内为86</p>
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置<p>手机号国际区号，国内为86</p>
                     * @param _countryCode <p>手机号国际区号，国内为86</p>
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
                     * 获取<p>邮箱，例如：57<strong>*</strong>@qq.com</p>
                     * @return Email <p>邮箱，例如：57<strong>*</strong>@qq.com</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>邮箱，例如：57<strong>*</strong>@qq.com</p>
                     * @param _email <p>邮箱，例如：57<strong>*</strong>@qq.com</p>
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
                     * 获取<p>手机号码, 例如：132****2492</p>
                     * @return PhoneNumber <p>手机号码, 例如：132****2492</p>
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置<p>手机号码, 例如：132****2492</p>
                     * @param _phoneNumber <p>手机号码, 例如：132****2492</p>
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
                     * 获取<p>消息接收人的备注，选填</p>
                     * @return Remark <p>消息接收人的备注，选填</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>消息接收人的备注，选填</p>
                     * @param _remark <p>消息接收人的备注，选填</p>
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
                     * <p>消息接收人的用户名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>手机号国际区号，国内为86</p>
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * <p>邮箱，例如：57<strong>*</strong>@qq.com</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>手机号码, 例如：132****2492</p>
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * <p>消息接收人的备注，选填</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEMESSAGERECEIVERREQUEST_H_
