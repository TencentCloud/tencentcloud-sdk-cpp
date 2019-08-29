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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QUOTAINVOICEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QUOTAINVOICEOCRRESPONSE_H_

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
                * QuotaInvoiceOCR返回参数结构体
                */
                class QuotaInvoiceOCRResponse : public AbstractModel
                {
                public:
                    QuotaInvoiceOCRResponse();
                    ~QuotaInvoiceOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取发票号码
                     * @return InvoiceNum 发票号码
                     */
                    std::string GetInvoiceNum() const;

                    /**
                     * 判断参数 InvoiceNum 是否已赋值
                     * @return InvoiceNum 是否已赋值
                     */
                    bool InvoiceNumHasBeenSet() const;

                    /**
                     * 获取发票代码
                     * @return InvoiceCode 发票代码
                     */
                    std::string GetInvoiceCode() const;

                    /**
                     * 判断参数 InvoiceCode 是否已赋值
                     * @return InvoiceCode 是否已赋值
                     */
                    bool InvoiceCodeHasBeenSet() const;

                    /**
                     * 获取大写金额
                     * @return Rate 大写金额
                     */
                    std::string GetRate() const;

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     */
                    bool RateHasBeenSet() const;

                private:

                    /**
                     * 发票号码
                     */
                    std::string m_invoiceNum;
                    bool m_invoiceNumHasBeenSet;

                    /**
                     * 发票代码
                     */
                    std::string m_invoiceCode;
                    bool m_invoiceCodeHasBeenSet;

                    /**
                     * 大写金额
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUOTAINVOICEOCRRESPONSE_H_
