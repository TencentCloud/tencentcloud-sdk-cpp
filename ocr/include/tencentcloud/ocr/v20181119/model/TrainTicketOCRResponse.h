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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TRAINTICKETOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TRAINTICKETOCRRESPONSE_H_

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
                * TrainTicketOCR返回参数结构体
                */
                class TrainTicketOCRResponse : public AbstractModel
                {
                public:
                    TrainTicketOCRResponse();
                    ~TrainTicketOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取编号
                     * @return TicketNum 编号
                     * 
                     */
                    std::string GetTicketNum() const;

                    /**
                     * 判断参数 TicketNum 是否已赋值
                     * @return TicketNum 是否已赋值
                     * 
                     */
                    bool TicketNumHasBeenSet() const;

                    /**
                     * 获取出发站
                     * @return StartStation 出发站
                     * 
                     */
                    std::string GetStartStation() const;

                    /**
                     * 判断参数 StartStation 是否已赋值
                     * @return StartStation 是否已赋值
                     * 
                     */
                    bool StartStationHasBeenSet() const;

                    /**
                     * 获取到达站
                     * @return DestinationStation 到达站
                     * 
                     */
                    std::string GetDestinationStation() const;

                    /**
                     * 判断参数 DestinationStation 是否已赋值
                     * @return DestinationStation 是否已赋值
                     * 
                     */
                    bool DestinationStationHasBeenSet() const;

                    /**
                     * 获取出发时间
                     * @return Date 出发时间
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
                     * 获取车次
                     * @return TrainNum 车次
                     * 
                     */
                    std::string GetTrainNum() const;

                    /**
                     * 判断参数 TrainNum 是否已赋值
                     * @return TrainNum 是否已赋值
                     * 
                     */
                    bool TrainNumHasBeenSet() const;

                    /**
                     * 获取座位号
                     * @return Seat 座位号
                     * 
                     */
                    std::string GetSeat() const;

                    /**
                     * 判断参数 Seat 是否已赋值
                     * @return Seat 是否已赋值
                     * 
                     */
                    bool SeatHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取票价
                     * @return Price 票价
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取席别
                     * @return SeatCategory 席别
                     * 
                     */
                    std::string GetSeatCategory() const;

                    /**
                     * 判断参数 SeatCategory 是否已赋值
                     * @return SeatCategory 是否已赋值
                     * 
                     */
                    bool SeatCategoryHasBeenSet() const;

                    /**
                     * 获取身份证号
                     * @return ID 身份证号
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取发票消费类型：交通
                     * @return InvoiceType 发票消费类型：交通
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
                     * 获取序列号
                     * @return SerialNumber 序列号
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取加收票价
                     * @return AdditionalCost 加收票价
                     * 
                     */
                    std::string GetAdditionalCost() const;

                    /**
                     * 判断参数 AdditionalCost 是否已赋值
                     * @return AdditionalCost 是否已赋值
                     * 
                     */
                    bool AdditionalCostHasBeenSet() const;

                    /**
                     * 获取手续费
                     * @return HandlingFee 手续费
                     * 
                     */
                    std::string GetHandlingFee() const;

                    /**
                     * 判断参数 HandlingFee 是否已赋值
                     * @return HandlingFee 是否已赋值
                     * 
                     */
                    bool HandlingFeeHasBeenSet() const;

                    /**
                     * 获取大写金额（票面有大写金额该字段才有值）
                     * @return LegalAmount 大写金额（票面有大写金额该字段才有值）
                     * 
                     */
                    std::string GetLegalAmount() const;

                    /**
                     * 判断参数 LegalAmount 是否已赋值
                     * @return LegalAmount 是否已赋值
                     * 
                     */
                    bool LegalAmountHasBeenSet() const;

                    /**
                     * 获取售票站
                     * @return TicketStation 售票站
                     * 
                     */
                    std::string GetTicketStation() const;

                    /**
                     * 判断参数 TicketStation 是否已赋值
                     * @return TicketStation 是否已赋值
                     * 
                     */
                    bool TicketStationHasBeenSet() const;

                    /**
                     * 获取原票价（一般有手续费的才有原始票价字段）
                     * @return OriginalPrice 原票价（一般有手续费的才有原始票价字段）
                     * 
                     */
                    std::string GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取发票类型：火车票、火车票补票、火车票退票凭证
                     * @return InvoiceStyle 发票类型：火车票、火车票补票、火车票退票凭证
                     * 
                     */
                    std::string GetInvoiceStyle() const;

                    /**
                     * 判断参数 InvoiceStyle 是否已赋值
                     * @return InvoiceStyle 是否已赋值
                     * 
                     */
                    bool InvoiceStyleHasBeenSet() const;

                    /**
                     * 获取收据号码
                     * @return ReceiptNumber 收据号码
                     * 
                     */
                    std::string GetReceiptNumber() const;

                    /**
                     * 判断参数 ReceiptNumber 是否已赋值
                     * @return ReceiptNumber 是否已赋值
                     * 
                     */
                    bool ReceiptNumberHasBeenSet() const;

                    /**
                     * 获取仅供报销使用：1为是，0为否
                     * @return IsReceipt 仅供报销使用：1为是，0为否
                     * 
                     */
                    std::string GetIsReceipt() const;

                    /**
                     * 判断参数 IsReceipt 是否已赋值
                     * @return IsReceipt 是否已赋值
                     * 
                     */
                    bool IsReceiptHasBeenSet() const;

                private:

                    /**
                     * 编号
                     */
                    std::string m_ticketNum;
                    bool m_ticketNumHasBeenSet;

                    /**
                     * 出发站
                     */
                    std::string m_startStation;
                    bool m_startStationHasBeenSet;

                    /**
                     * 到达站
                     */
                    std::string m_destinationStation;
                    bool m_destinationStationHasBeenSet;

                    /**
                     * 出发时间
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 车次
                     */
                    std::string m_trainNum;
                    bool m_trainNumHasBeenSet;

                    /**
                     * 座位号
                     */
                    std::string m_seat;
                    bool m_seatHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 票价
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 席别
                     */
                    std::string m_seatCategory;
                    bool m_seatCategoryHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 发票消费类型：交通
                     */
                    std::string m_invoiceType;
                    bool m_invoiceTypeHasBeenSet;

                    /**
                     * 序列号
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 加收票价
                     */
                    std::string m_additionalCost;
                    bool m_additionalCostHasBeenSet;

                    /**
                     * 手续费
                     */
                    std::string m_handlingFee;
                    bool m_handlingFeeHasBeenSet;

                    /**
                     * 大写金额（票面有大写金额该字段才有值）
                     */
                    std::string m_legalAmount;
                    bool m_legalAmountHasBeenSet;

                    /**
                     * 售票站
                     */
                    std::string m_ticketStation;
                    bool m_ticketStationHasBeenSet;

                    /**
                     * 原票价（一般有手续费的才有原始票价字段）
                     */
                    std::string m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 发票类型：火车票、火车票补票、火车票退票凭证
                     */
                    std::string m_invoiceStyle;
                    bool m_invoiceStyleHasBeenSet;

                    /**
                     * 收据号码
                     */
                    std::string m_receiptNumber;
                    bool m_receiptNumberHasBeenSet;

                    /**
                     * 仅供报销使用：1为是，0为否
                     */
                    std::string m_isReceipt;
                    bool m_isReceiptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TRAINTICKETOCRRESPONSE_H_
