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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_DETAILINFORMATIONOFAIRTICKETTUPLELIST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_DETAILINFORMATIONOFAIRTICKETTUPLELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 机票详细信息元组
                */
                class DetailInformationOfAirTicketTupleList : public AbstractModel
                {
                public:
                    DetailInformationOfAirTicketTupleList();
                    ~DetailInformationOfAirTicketTupleList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取出发站（自）
                     * @return DepartureStation 出发站（自）
                     * 
                     */
                    std::string GetDepartureStation() const;

                    /**
                     * 设置出发站（自）
                     * @param _departureStation 出发站（自）
                     * 
                     */
                    void SetDepartureStation(const std::string& _departureStation);

                    /**
                     * 判断参数 DepartureStation 是否已赋值
                     * @return DepartureStation 是否已赋值
                     * 
                     */
                    bool DepartureStationHasBeenSet() const;

                    /**
                     * 获取目的地（至）
                     * @return DestinationStation 目的地（至）
                     * 
                     */
                    std::string GetDestinationStation() const;

                    /**
                     * 设置目的地（至）
                     * @param _destinationStation 目的地（至）
                     * 
                     */
                    void SetDestinationStation(const std::string& _destinationStation);

                    /**
                     * 判断参数 DestinationStation 是否已赋值
                     * @return DestinationStation 是否已赋值
                     * 
                     */
                    bool DestinationStationHasBeenSet() const;

                    /**
                     * 获取航班
                     * @return FlightSegment 航班
                     * 
                     */
                    std::string GetFlightSegment() const;

                    /**
                     * 设置航班
                     * @param _flightSegment 航班
                     * 
                     */
                    void SetFlightSegment(const std::string& _flightSegment);

                    /**
                     * 判断参数 FlightSegment 是否已赋值
                     * @return FlightSegment 是否已赋值
                     * 
                     */
                    bool FlightSegmentHasBeenSet() const;

                    /**
                     * 获取航班
                     * @return Carrier 航班
                     * 
                     */
                    std::string GetCarrier() const;

                    /**
                     * 设置航班
                     * @param _carrier 航班
                     * 
                     */
                    void SetCarrier(const std::string& _carrier);

                    /**
                     * 判断参数 Carrier 是否已赋值
                     * @return Carrier 是否已赋值
                     * 
                     */
                    bool CarrierHasBeenSet() const;

                    /**
                     * 获取航班号
                     * @return Flight 航班号
                     * 
                     */
                    std::string GetFlight() const;

                    /**
                     * 设置航班号
                     * @param _flight 航班号
                     * 
                     */
                    void SetFlight(const std::string& _flight);

                    /**
                     * 判断参数 Flight 是否已赋值
                     * @return Flight 是否已赋值
                     * 
                     */
                    bool FlightHasBeenSet() const;

                    /**
                     * 获取座位等级
                     * @return SeatClass 座位等级
                     * 
                     */
                    std::string GetSeatClass() const;

                    /**
                     * 设置座位等级
                     * @param _seatClass 座位等级
                     * 
                     */
                    void SetSeatClass(const std::string& _seatClass);

                    /**
                     * 判断参数 SeatClass 是否已赋值
                     * @return SeatClass 是否已赋值
                     * 
                     */
                    bool SeatClassHasBeenSet() const;

                    /**
                     * 获取日期
                     * @return CarrierDate 日期
                     * 
                     */
                    std::string GetCarrierDate() const;

                    /**
                     * 设置日期
                     * @param _carrierDate 日期
                     * 
                     */
                    void SetCarrierDate(const std::string& _carrierDate);

                    /**
                     * 判断参数 CarrierDate 是否已赋值
                     * @return CarrierDate 是否已赋值
                     * 
                     */
                    bool CarrierDateHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return DepartureTime 时间
                     * 
                     */
                    std::string GetDepartureTime() const;

                    /**
                     * 设置时间
                     * @param _departureTime 时间
                     * 
                     */
                    void SetDepartureTime(const std::string& _departureTime);

                    /**
                     * 判断参数 DepartureTime 是否已赋值
                     * @return DepartureTime 是否已赋值
                     * 
                     */
                    bool DepartureTimeHasBeenSet() const;

                    /**
                     * 获取客票级别/客票类别
                     * @return FareBasis 客票级别/客票类别
                     * 
                     */
                    std::string GetFareBasis() const;

                    /**
                     * 设置客票级别/客票类别
                     * @param _fareBasis 客票级别/客票类别
                     * 
                     */
                    void SetFareBasis(const std::string& _fareBasis);

                    /**
                     * 判断参数 FareBasis 是否已赋值
                     * @return FareBasis 是否已赋值
                     * 
                     */
                    bool FareBasisHasBeenSet() const;

                    /**
                     * 获取客票生效日期
                     * @return EffectiveDate 客票生效日期
                     * 
                     */
                    std::string GetEffectiveDate() const;

                    /**
                     * 设置客票生效日期
                     * @param _effectiveDate 客票生效日期
                     * 
                     */
                    void SetEffectiveDate(const std::string& _effectiveDate);

                    /**
                     * 判断参数 EffectiveDate 是否已赋值
                     * @return EffectiveDate 是否已赋值
                     * 
                     */
                    bool EffectiveDateHasBeenSet() const;

                    /**
                     * 获取有效截止日期
                     * @return ExpirationDate 有效截止日期
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置有效截止日期
                     * @param _expirationDate 有效截止日期
                     * 
                     */
                    void SetExpirationDate(const std::string& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取免费行李
                     * @return FreeBaggageAllowance 免费行李
                     * 
                     */
                    std::string GetFreeBaggageAllowance() const;

                    /**
                     * 设置免费行李
                     * @param _freeBaggageAllowance 免费行李
                     * 
                     */
                    void SetFreeBaggageAllowance(const std::string& _freeBaggageAllowance);

                    /**
                     * 判断参数 FreeBaggageAllowance 是否已赋值
                     * @return FreeBaggageAllowance 是否已赋值
                     * 
                     */
                    bool FreeBaggageAllowanceHasBeenSet() const;

                private:

                    /**
                     * 出发站（自）
                     */
                    std::string m_departureStation;
                    bool m_departureStationHasBeenSet;

                    /**
                     * 目的地（至）
                     */
                    std::string m_destinationStation;
                    bool m_destinationStationHasBeenSet;

                    /**
                     * 航班
                     */
                    std::string m_flightSegment;
                    bool m_flightSegmentHasBeenSet;

                    /**
                     * 航班
                     */
                    std::string m_carrier;
                    bool m_carrierHasBeenSet;

                    /**
                     * 航班号
                     */
                    std::string m_flight;
                    bool m_flightHasBeenSet;

                    /**
                     * 座位等级
                     */
                    std::string m_seatClass;
                    bool m_seatClassHasBeenSet;

                    /**
                     * 日期
                     */
                    std::string m_carrierDate;
                    bool m_carrierDateHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_departureTime;
                    bool m_departureTimeHasBeenSet;

                    /**
                     * 客票级别/客票类别
                     */
                    std::string m_fareBasis;
                    bool m_fareBasisHasBeenSet;

                    /**
                     * 客票生效日期
                     */
                    std::string m_effectiveDate;
                    bool m_effectiveDateHasBeenSet;

                    /**
                     * 有效截止日期
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * 免费行李
                     */
                    std::string m_freeBaggageAllowance;
                    bool m_freeBaggageAllowanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_DETAILINFORMATIONOFAIRTICKETTUPLELIST_H_
