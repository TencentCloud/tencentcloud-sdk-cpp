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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TAXIINVOICEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TAXIINVOICEOCRRESPONSE_H_

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
                * TaxiInvoiceOCR返回参数结构体
                */
                class TaxiInvoiceOCRResponse : public AbstractModel
                {
                public:
                    TaxiInvoiceOCRResponse();
                    ~TaxiInvoiceOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取发票代码
                     * @return InvoiceNum 发票代码
                     */
                    std::string GetInvoiceNum() const;

                    /**
                     * 判断参数 InvoiceNum 是否已赋值
                     * @return InvoiceNum 是否已赋值
                     */
                    bool InvoiceNumHasBeenSet() const;

                    /**
                     * 获取发票号码
                     * @return InvoiceCode 发票号码
                     */
                    std::string GetInvoiceCode() const;

                    /**
                     * 判断参数 InvoiceCode 是否已赋值
                     * @return InvoiceCode 是否已赋值
                     */
                    bool InvoiceCodeHasBeenSet() const;

                    /**
                     * 获取日期
                     * @return Date 日期
                     */
                    std::string GetDate() const;

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取金额
                     * @return Fare 金额
                     */
                    std::string GetFare() const;

                    /**
                     * 判断参数 Fare 是否已赋值
                     * @return Fare 是否已赋值
                     */
                    bool FareHasBeenSet() const;

                    /**
                     * 获取上车时间
                     * @return GetOnTime 上车时间
                     */
                    std::string GetGetOnTime() const;

                    /**
                     * 判断参数 GetOnTime 是否已赋值
                     * @return GetOnTime 是否已赋值
                     */
                    bool GetOnTimeHasBeenSet() const;

                    /**
                     * 获取下车时间
                     * @return GetOffTime 下车时间
                     */
                    std::string GetGetOffTime() const;

                    /**
                     * 判断参数 GetOffTime 是否已赋值
                     * @return GetOffTime 是否已赋值
                     */
                    bool GetOffTimeHasBeenSet() const;

                    /**
                     * 获取里程
                     * @return Distance 里程
                     */
                    std::string GetDistance() const;

                    /**
                     * 判断参数 Distance 是否已赋值
                     * @return Distance 是否已赋值
                     */
                    bool DistanceHasBeenSet() const;

                private:

                    /**
                     * 发票代码
                     */
                    std::string m_invoiceNum;
                    bool m_invoiceNumHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_invoiceCode;
                    bool m_invoiceCodeHasBeenSet;

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 金额
                     */
                    std::string m_fare;
                    bool m_fareHasBeenSet;

                    /**
                     * 上车时间
                     */
                    std::string m_getOnTime;
                    bool m_getOnTimeHasBeenSet;

                    /**
                     * 下车时间
                     */
                    std::string m_getOffTime;
                    bool m_getOffTimeHasBeenSet;

                    /**
                     * 里程
                     */
                    std::string m_distance;
                    bool m_distanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TAXIINVOICEOCRRESPONSE_H_
