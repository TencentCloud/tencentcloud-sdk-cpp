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
                    std::string ToJsonString() const;


                    /**
                     * 获取发票号码
                     * @return InvoiceNum 发票号码
                     * 
                     */
                    std::string GetInvoiceNum() const;

                    /**
                     * 判断参数 InvoiceNum 是否已赋值
                     * @return InvoiceNum 是否已赋值
                     * 
                     */
                    bool InvoiceNumHasBeenSet() const;

                    /**
                     * 获取发票代码
                     * @return InvoiceCode 发票代码
                     * 
                     */
                    std::string GetInvoiceCode() const;

                    /**
                     * 判断参数 InvoiceCode 是否已赋值
                     * @return InvoiceCode 是否已赋值
                     * 
                     */
                    bool InvoiceCodeHasBeenSet() const;

                    /**
                     * 获取大写金额
                     * @return Rate 大写金额
                     * 
                     */
                    std::string GetRate() const;

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取小写金额
                     * @return RateNum 小写金额
                     * 
                     */
                    std::string GetRateNum() const;

                    /**
                     * 判断参数 RateNum 是否已赋值
                     * @return RateNum 是否已赋值
                     * 
                     */
                    bool RateNumHasBeenSet() const;

                    /**
                     * 获取发票消费类型
                     * @return InvoiceType 发票消费类型
                     * 
                     */
                    std::string GetInvoiceType() const;

                    /**
                     * 判断参数 InvoiceType 是否已赋值
                     * @return InvoiceType 是否已赋值
                     * 
                     */
                    bool InvoiceTypeHasBeenSet() const;

                    /**
                     * 获取省
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Province 省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取是否有公司印章（1有 0无 空为识别不出）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasStamp 是否有公司印章（1有 0无 空为识别不出）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHasStamp() const;

                    /**
                     * 判断参数 HasStamp 是否已赋值
                     * @return HasStamp 是否已赋值
                     * 
                     */
                    bool HasStampHasBeenSet() const;

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

                    /**
                     * 小写金额
                     */
                    std::string m_rateNum;
                    bool m_rateNumHasBeenSet;

                    /**
                     * 发票消费类型
                     */
                    std::string m_invoiceType;
                    bool m_invoiceTypeHasBeenSet;

                    /**
                     * 省
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 是否有公司印章（1有 0无 空为识别不出）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hasStamp;
                    bool m_hasStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUOTAINVOICEOCRRESPONSE_H_
