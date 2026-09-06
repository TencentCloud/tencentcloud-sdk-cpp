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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICAIRTRANSPORTDETAIL_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICAIRTRANSPORTDETAIL_H_

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
                * 全电发票（航空运输电子客票行程单）详细信息
                */
                class ElectronicAirTransportDetail : public AbstractModel
                {
                public:
                    ElectronicAirTransportDetail();
                    ~ElectronicAirTransportDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>航段序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlightSegment <p>航段序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlightSegment() const;

                    /**
                     * 设置<p>航段序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flightSegment <p>航段序号</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>始发站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StationGetOn <p>始发站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStationGetOn() const;

                    /**
                     * 设置<p>始发站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stationGetOn <p>始发站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStationGetOn(const std::string& _stationGetOn);

                    /**
                     * 判断参数 StationGetOn 是否已赋值
                     * @return StationGetOn 是否已赋值
                     * 
                     */
                    bool StationGetOnHasBeenSet() const;

                    /**
                     * 获取<p>目的站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StationGetOff <p>目的站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStationGetOff() const;

                    /**
                     * 设置<p>目的站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stationGetOff <p>目的站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStationGetOff(const std::string& _stationGetOff);

                    /**
                     * 判断参数 StationGetOff 是否已赋值
                     * @return StationGetOff 是否已赋值
                     * 
                     */
                    bool StationGetOffHasBeenSet() const;

                    /**
                     * 获取<p>承运人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Carrier <p>承运人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCarrier() const;

                    /**
                     * 设置<p>承运人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _carrier <p>承运人</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>航班号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlightNumber <p>航班号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlightNumber() const;

                    /**
                     * 设置<p>航班号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flightNumber <p>航班号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlightNumber(const std::string& _flightNumber);

                    /**
                     * 判断参数 FlightNumber 是否已赋值
                     * @return FlightNumber 是否已赋值
                     * 
                     */
                    bool FlightNumberHasBeenSet() const;

                    /**
                     * 获取<p>座位等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SeatLevel <p>座位等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeatLevel() const;

                    /**
                     * 设置<p>座位等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seatLevel <p>座位等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeatLevel(const std::string& _seatLevel);

                    /**
                     * 判断参数 SeatLevel 是否已赋值
                     * @return SeatLevel 是否已赋值
                     * 
                     */
                    bool SeatLevelHasBeenSet() const;

                    /**
                     * 获取<p>承运日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlightDate <p>承运日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlightDate() const;

                    /**
                     * 设置<p>承运日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flightDate <p>承运日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlightDate(const std::string& _flightDate);

                    /**
                     * 判断参数 FlightDate 是否已赋值
                     * @return FlightDate 是否已赋值
                     * 
                     */
                    bool FlightDateHasBeenSet() const;

                    /**
                     * 获取<p>起飞时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DepartureTime <p>起飞时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDepartureTime() const;

                    /**
                     * 设置<p>起飞时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _departureTime <p>起飞时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>客票级别/客票类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FareBasis <p>客票级别/客票类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFareBasis() const;

                    /**
                     * 设置<p>客票级别/客票类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fareBasis <p>客票级别/客票类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFareBasis(const std::string& _fareBasis);

                    /**
                     * 判断参数 FareBasis 是否已赋值
                     * @return FareBasis 是否已赋值
                     * 
                     */
                    bool FareBasisHasBeenSet() const;

                private:

                    /**
                     * <p>航段序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flightSegment;
                    bool m_flightSegmentHasBeenSet;

                    /**
                     * <p>始发站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stationGetOn;
                    bool m_stationGetOnHasBeenSet;

                    /**
                     * <p>目的站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stationGetOff;
                    bool m_stationGetOffHasBeenSet;

                    /**
                     * <p>承运人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_carrier;
                    bool m_carrierHasBeenSet;

                    /**
                     * <p>航班号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flightNumber;
                    bool m_flightNumberHasBeenSet;

                    /**
                     * <p>座位等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seatLevel;
                    bool m_seatLevelHasBeenSet;

                    /**
                     * <p>承运日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flightDate;
                    bool m_flightDateHasBeenSet;

                    /**
                     * <p>起飞时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_departureTime;
                    bool m_departureTimeHasBeenSet;

                    /**
                     * <p>客票级别/客票类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fareBasis;
                    bool m_fareBasisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICAIRTRANSPORTDETAIL_H_
