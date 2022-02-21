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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYERINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 云企付-付款人信息
                */
                class OpenBankPayerInfo : public AbstractModel
                {
                public:
                    OpenBankPayerInfo();
                    ~OpenBankPayerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取付款方唯一标识。当TENPAY时，必填上送
付款方入驻云企付商户ID。
                     * @return PayerId 付款方唯一标识。当TENPAY时，必填上送
付款方入驻云企付商户ID。
                     */
                    std::string GetPayerId() const;

                    /**
                     * 设置付款方唯一标识。当TENPAY时，必填上送
付款方入驻云企付商户ID。
                     * @param PayerId 付款方唯一标识。当TENPAY时，必填上送
付款方入驻云企付商户ID。
                     */
                    void SetPayerId(const std::string& _payerId);

                    /**
                     * 判断参数 PayerId 是否已赋值
                     * @return PayerId 是否已赋值
                     */
                    bool PayerIdHasBeenSet() const;

                    /**
                     * 获取付款方名称。当TENPAY上送付款方入驻云企付的商户名称。
                     * @return PayerName 付款方名称。当TENPAY上送付款方入驻云企付的商户名称。
                     */
                    std::string GetPayerName() const;

                    /**
                     * 设置付款方名称。当TENPAY上送付款方入驻云企付的商户名称。
                     * @param PayerName 付款方名称。当TENPAY上送付款方入驻云企付的商户名称。
                     */
                    void SetPayerName(const std::string& _payerName);

                    /**
                     * 判断参数 PayerName 是否已赋值
                     * @return PayerName 是否已赋值
                     */
                    bool PayerNameHasBeenSet() const;

                    /**
                     * 获取付款方付款账户标识，当付款方式为OPENBANK_PAYMENT时，必输表示企业账户ID。
                     * @return BindSerialNo 付款方付款账户标识，当付款方式为OPENBANK_PAYMENT时，必输表示企业账户ID。
                     */
                    std::string GetBindSerialNo() const;

                    /**
                     * 设置付款方付款账户标识，当付款方式为OPENBANK_PAYMENT时，必输表示企业账户ID。
                     * @param BindSerialNo 付款方付款账户标识，当付款方式为OPENBANK_PAYMENT时，必输表示企业账户ID。
                     */
                    void SetBindSerialNo(const std::string& _bindSerialNo);

                    /**
                     * 判断参数 BindSerialNo 是否已赋值
                     * @return BindSerialNo 是否已赋值
                     */
                    bool BindSerialNoHasBeenSet() const;

                private:

                    /**
                     * 付款方唯一标识。当TENPAY时，必填上送
付款方入驻云企付商户ID。
                     */
                    std::string m_payerId;
                    bool m_payerIdHasBeenSet;

                    /**
                     * 付款方名称。当TENPAY上送付款方入驻云企付的商户名称。
                     */
                    std::string m_payerName;
                    bool m_payerNameHasBeenSet;

                    /**
                     * 付款方付款账户标识，当付款方式为OPENBANK_PAYMENT时，必输表示企业账户ID。
                     */
                    std::string m_bindSerialNo;
                    bool m_bindSerialNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYERINFO_H_
