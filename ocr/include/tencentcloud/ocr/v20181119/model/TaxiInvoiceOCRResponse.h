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
                    std::string ToJsonString() const;


                    /**
                     * 获取发票代码
                     * @return InvoiceNum 发票代码
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
                     * 获取发票号码
                     * @return InvoiceCode 发票号码
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
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取金额
                     * @return Fare 金额
                     * 
                     */
                    std::string GetFare() const;

                    /**
                     * 判断参数 Fare 是否已赋值
                     * @return Fare 是否已赋值
                     * 
                     */
                    bool FareHasBeenSet() const;

                    /**
                     * 获取上车时间
                     * @return GetOnTime 上车时间
                     * 
                     */
                    std::string GetGetOnTime() const;

                    /**
                     * 判断参数 GetOnTime 是否已赋值
                     * @return GetOnTime 是否已赋值
                     * 
                     */
                    bool GetOnTimeHasBeenSet() const;

                    /**
                     * 获取下车时间
                     * @return GetOffTime 下车时间
                     * 
                     */
                    std::string GetGetOffTime() const;

                    /**
                     * 判断参数 GetOffTime 是否已赋值
                     * @return GetOffTime 是否已赋值
                     * 
                     */
                    bool GetOffTimeHasBeenSet() const;

                    /**
                     * 获取里程
                     * @return Distance 里程
                     * 
                     */
                    std::string GetDistance() const;

                    /**
                     * 判断参数 Distance 是否已赋值
                     * @return Distance 是否已赋值
                     * 
                     */
                    bool DistanceHasBeenSet() const;

                    /**
                     * 获取发票所在地
                     * @return Location 发票所在地
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取车牌号
                     * @return PlateNumber 车牌号
                     * 
                     */
                    std::string GetPlateNumber() const;

                    /**
                     * 判断参数 PlateNumber 是否已赋值
                     * @return PlateNumber 是否已赋值
                     * 
                     */
                    bool PlateNumberHasBeenSet() const;

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

                    /**
                     * 发票所在地
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 车牌号
                     */
                    std::string m_plateNumber;
                    bool m_plateNumberHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TAXIINVOICEOCRRESPONSE_H_
