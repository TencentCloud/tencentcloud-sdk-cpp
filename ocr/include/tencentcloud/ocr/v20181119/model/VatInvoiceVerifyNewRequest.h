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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYNEWREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VatInvoiceVerifyNew请求参数结构体
                */
                class VatInvoiceVerifyNewRequest : public AbstractModel
                {
                public:
                    VatInvoiceVerifyNewRequest();
                    ~VatInvoiceVerifyNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取发票号码，8位、20位（全电票）
                     * @return InvoiceNo 发票号码，8位、20位（全电票）
                     */
                    std::string GetInvoiceNo() const;

                    /**
                     * 设置发票号码，8位、20位（全电票）
                     * @param InvoiceNo 发票号码，8位、20位（全电票）
                     */
                    void SetInvoiceNo(const std::string& _invoiceNo);

                    /**
                     * 判断参数 InvoiceNo 是否已赋值
                     * @return InvoiceNo 是否已赋值
                     */
                    bool InvoiceNoHasBeenSet() const;

                    /**
                     * 获取开票日期（不支持当天发票查询，支持五年以内开具的发票），格式：“YYYY-MM-DD”，如：2019-12-20。
                     * @return InvoiceDate 开票日期（不支持当天发票查询，支持五年以内开具的发票），格式：“YYYY-MM-DD”，如：2019-12-20。
                     */
                    std::string GetInvoiceDate() const;

                    /**
                     * 设置开票日期（不支持当天发票查询，支持五年以内开具的发票），格式：“YYYY-MM-DD”，如：2019-12-20。
                     * @param InvoiceDate 开票日期（不支持当天发票查询，支持五年以内开具的发票），格式：“YYYY-MM-DD”，如：2019-12-20。
                     */
                    void SetInvoiceDate(const std::string& _invoiceDate);

                    /**
                     * 判断参数 InvoiceDate 是否已赋值
                     * @return InvoiceDate 是否已赋值
                     */
                    bool InvoiceDateHasBeenSet() const;

                    /**
                     * 获取发票代码（10或12 位），全电发票为空。查验未成功超过5次后当日无法再查。
                     * @return InvoiceCode 发票代码（10或12 位），全电发票为空。查验未成功超过5次后当日无法再查。
                     */
                    std::string GetInvoiceCode() const;

                    /**
                     * 设置发票代码（10或12 位），全电发票为空。查验未成功超过5次后当日无法再查。
                     * @param InvoiceCode 发票代码（10或12 位），全电发票为空。查验未成功超过5次后当日无法再查。
                     */
                    void SetInvoiceCode(const std::string& _invoiceCode);

                    /**
                     * 判断参数 InvoiceCode 是否已赋值
                     * @return InvoiceCode 是否已赋值
                     */
                    bool InvoiceCodeHasBeenSet() const;

                    /**
                     * 获取票种类型 01:增值税专用发票， 02:货运运输业增值税专用发 票， 03:机动车销售统一发票， 04:增值税普通发票， 08:增值税电子专用发票(含全电)， 10:增值税电子普通发票(含全电)， 11:增值税普通发票(卷式)， 14:增值税电子(通行费)发 票， 15:二手车销售统一发票， 32:深圳区块链发票(云南区块链因业务调整现已下线)。
                     * @return InvoiceKind 票种类型 01:增值税专用发票， 02:货运运输业增值税专用发 票， 03:机动车销售统一发票， 04:增值税普通发票， 08:增值税电子专用发票(含全电)， 10:增值税电子普通发票(含全电)， 11:增值税普通发票(卷式)， 14:增值税电子(通行费)发 票， 15:二手车销售统一发票， 32:深圳区块链发票(云南区块链因业务调整现已下线)。
                     */
                    std::string GetInvoiceKind() const;

                    /**
                     * 设置票种类型 01:增值税专用发票， 02:货运运输业增值税专用发 票， 03:机动车销售统一发票， 04:增值税普通发票， 08:增值税电子专用发票(含全电)， 10:增值税电子普通发票(含全电)， 11:增值税普通发票(卷式)， 14:增值税电子(通行费)发 票， 15:二手车销售统一发票， 32:深圳区块链发票(云南区块链因业务调整现已下线)。
                     * @param InvoiceKind 票种类型 01:增值税专用发票， 02:货运运输业增值税专用发 票， 03:机动车销售统一发票， 04:增值税普通发票， 08:增值税电子专用发票(含全电)， 10:增值税电子普通发票(含全电)， 11:增值税普通发票(卷式)， 14:增值税电子(通行费)发 票， 15:二手车销售统一发票， 32:深圳区块链发票(云南区块链因业务调整现已下线)。
                     */
                    void SetInvoiceKind(const std::string& _invoiceKind);

                    /**
                     * 判断参数 InvoiceKind 是否已赋值
                     * @return InvoiceKind 是否已赋值
                     */
                    bool InvoiceKindHasBeenSet() const;

                    /**
                     * 获取校验码后 6 位，增值税普通发票、增值税电子普通发票、增值税普通发票(卷式)、增值税电子普通发票(通行费)时必填;
区块链为 5 位
                     * @return CheckCode 校验码后 6 位，增值税普通发票、增值税电子普通发票、增值税普通发票(卷式)、增值税电子普通发票(通行费)时必填;
区块链为 5 位
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置校验码后 6 位，增值税普通发票、增值税电子普通发票、增值税普通发票(卷式)、增值税电子普通发票(通行费)时必填;
区块链为 5 位
                     * @param CheckCode 校验码后 6 位，增值税普通发票、增值税电子普通发票、增值税普通发票(卷式)、增值税电子普通发票(通行费)时必填;
区块链为 5 位
                     */
                    void SetCheckCode(const std::string& _checkCode);

                    /**
                     * 判断参数 CheckCode 是否已赋值
                     * @return CheckCode 是否已赋值
                     */
                    bool CheckCodeHasBeenSet() const;

                    /**
                     * 获取不含税金额，增值税专用发票、增值税电子专用发票、机动车销售统一发票、二手车销售统一发票、区块链发票时必填; 全电发票为价税合计(含税金额)
                     * @return Amount 不含税金额，增值税专用发票、增值税电子专用发票、机动车销售统一发票、二手车销售统一发票、区块链发票时必填; 全电发票为价税合计(含税金额)
                     */
                    std::string GetAmount() const;

                    /**
                     * 设置不含税金额，增值税专用发票、增值税电子专用发票、机动车销售统一发票、二手车销售统一发票、区块链发票时必填; 全电发票为价税合计(含税金额)
                     * @param Amount 不含税金额，增值税专用发票、增值税电子专用发票、机动车销售统一发票、二手车销售统一发票、区块链发票时必填; 全电发票为价税合计(含税金额)
                     */
                    void SetAmount(const std::string& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     */
                    bool AmountHasBeenSet() const;

                private:

                    /**
                     * 发票号码，8位、20位（全电票）
                     */
                    std::string m_invoiceNo;
                    bool m_invoiceNoHasBeenSet;

                    /**
                     * 开票日期（不支持当天发票查询，支持五年以内开具的发票），格式：“YYYY-MM-DD”，如：2019-12-20。
                     */
                    std::string m_invoiceDate;
                    bool m_invoiceDateHasBeenSet;

                    /**
                     * 发票代码（10或12 位），全电发票为空。查验未成功超过5次后当日无法再查。
                     */
                    std::string m_invoiceCode;
                    bool m_invoiceCodeHasBeenSet;

                    /**
                     * 票种类型 01:增值税专用发票， 02:货运运输业增值税专用发 票， 03:机动车销售统一发票， 04:增值税普通发票， 08:增值税电子专用发票(含全电)， 10:增值税电子普通发票(含全电)， 11:增值税普通发票(卷式)， 14:增值税电子(通行费)发 票， 15:二手车销售统一发票， 32:深圳区块链发票(云南区块链因业务调整现已下线)。
                     */
                    std::string m_invoiceKind;
                    bool m_invoiceKindHasBeenSet;

                    /**
                     * 校验码后 6 位，增值税普通发票、增值税电子普通发票、增值税普通发票(卷式)、增值税电子普通发票(通行费)时必填;
区块链为 5 位
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 不含税金额，增值税专用发票、增值税电子专用发票、机动车销售统一发票、二手车销售统一发票、区块链发票时必填; 全电发票为价税合计(含税金额)
                     */
                    std::string m_amount;
                    bool m_amountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYNEWREQUEST_H_
