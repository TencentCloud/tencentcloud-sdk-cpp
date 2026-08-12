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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_BILLING_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_BILLING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Address.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 账单信息
                */
                class Billing : public AbstractModel
                {
                public:
                    Billing();
                    ~Billing() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>账单地址</p>
                     * @return Address <p>账单地址</p>
                     * 
                     */
                    Address GetAddress() const;

                    /**
                     * 设置<p>账单地址</p>
                     * @param _address <p>账单地址</p>
                     * 
                     */
                    void SetAddress(const Address& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>账单联系电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @return Phone <p>账单联系电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置<p>账单联系电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @param _phone <p>账单联系电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取<p>账单邮箱</p>
                     * @return Email <p>账单邮箱</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>账单邮箱</p>
                     * @param _email <p>账单邮箱</p>
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
                     * 获取<p>账单接收人姓名</p>
                     * @return Recipient <p>账单接收人姓名</p>
                     * 
                     */
                    std::string GetRecipient() const;

                    /**
                     * 设置<p>账单接收人姓名</p>
                     * @param _recipient <p>账单接收人姓名</p>
                     * 
                     */
                    void SetRecipient(const std::string& _recipient);

                    /**
                     * 判断参数 Recipient 是否已赋值
                     * @return Recipient 是否已赋值
                     * 
                     */
                    bool RecipientHasBeenSet() const;

                private:

                    /**
                     * <p>账单地址</p>
                     */
                    Address m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>账单联系电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * <p>账单邮箱</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>账单接收人姓名</p>
                     */
                    std::string m_recipient;
                    bool m_recipientHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_BILLING_H_
