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


                    /**
                     * 获取编号
                     * @return TicketNum 编号
                     */
                    std::string GetTicketNum() const;

                    /**
                     * 判断参数 TicketNum 是否已赋值
                     * @return TicketNum 是否已赋值
                     */
                    bool TicketNumHasBeenSet() const;

                    /**
                     * 获取出发站
                     * @return StartStation 出发站
                     */
                    std::string GetStartStation() const;

                    /**
                     * 判断参数 StartStation 是否已赋值
                     * @return StartStation 是否已赋值
                     */
                    bool StartStationHasBeenSet() const;

                    /**
                     * 获取到达站
                     * @return DestinationStation 到达站
                     */
                    std::string GetDestinationStation() const;

                    /**
                     * 判断参数 DestinationStation 是否已赋值
                     * @return DestinationStation 是否已赋值
                     */
                    bool DestinationStationHasBeenSet() const;

                    /**
                     * 获取出发时间
                     * @return Date 出发时间
                     */
                    std::string GetDate() const;

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取车次
                     * @return TrainNum 车次
                     */
                    std::string GetTrainNum() const;

                    /**
                     * 判断参数 TrainNum 是否已赋值
                     * @return TrainNum 是否已赋值
                     */
                    bool TrainNumHasBeenSet() const;

                    /**
                     * 获取座位号
                     * @return Seat 座位号
                     */
                    std::string GetSeat() const;

                    /**
                     * 判断参数 Seat 是否已赋值
                     * @return Seat 是否已赋值
                     */
                    bool SeatHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取票价
                     * @return Price 票价
                     */
                    std::string GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取席别
                     * @return SeatCategory 席别
                     */
                    std::string GetSeatCategory() const;

                    /**
                     * 判断参数 SeatCategory 是否已赋值
                     * @return SeatCategory 是否已赋值
                     */
                    bool SeatCategoryHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TRAINTICKETOCRRESPONSE_H_
