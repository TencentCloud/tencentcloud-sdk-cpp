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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_FLIGHTITEMINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_FLIGHTITEMINFO_H_

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
                class FlightItemInfo : public AbstractModel
                {
                public:
                    FlightItemInfo();
                    ~FlightItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取出发站
                     * @return TerminalGetOn 出发站
                     * 
                     */
                    std::string GetTerminalGetOn() const;

                    /**
                     * 设置出发站
                     * @param _terminalGetOn 出发站
                     * 
                     */
                    void SetTerminalGetOn(const std::string& _terminalGetOn);

                    /**
                     * 判断参数 TerminalGetOn 是否已赋值
                     * @return TerminalGetOn 是否已赋值
                     * 
                     */
                    bool TerminalGetOnHasBeenSet() const;

                    /**
                     * 获取到达站
                     * @return TerminalGetOff 到达站
                     * 
                     */
                    std::string GetTerminalGetOff() const;

                    /**
                     * 设置到达站
                     * @param _terminalGetOff 到达站
                     * 
                     */
                    void SetTerminalGetOff(const std::string& _terminalGetOff);

                    /**
                     * 判断参数 TerminalGetOff 是否已赋值
                     * @return TerminalGetOff 是否已赋值
                     * 
                     */
                    bool TerminalGetOffHasBeenSet() const;

                    /**
                     * 获取承运人
                     * @return Carrier 承运人
                     * 
                     */
                    std::string GetCarrier() const;

                    /**
                     * 设置承运人
                     * @param _carrier 承运人
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
                     * @return FlightNumber 航班号
                     * 
                     */
                    std::string GetFlightNumber() const;

                    /**
                     * 设置航班号
                     * @param _flightNumber 航班号
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
                     * 获取座位等级
                     * @return Seat 座位等级
                     * 
                     */
                    std::string GetSeat() const;

                    /**
                     * 设置座位等级
                     * @param _seat 座位等级
                     * 
                     */
                    void SetSeat(const std::string& _seat);

                    /**
                     * 判断参数 Seat 是否已赋值
                     * @return Seat 是否已赋值
                     * 
                     */
                    bool SeatHasBeenSet() const;

                    /**
                     * 获取乘机日期
                     * @return DateGetOn 乘机日期
                     * 
                     */
                    std::string GetDateGetOn() const;

                    /**
                     * 设置乘机日期
                     * @param _dateGetOn 乘机日期
                     * 
                     */
                    void SetDateGetOn(const std::string& _dateGetOn);

                    /**
                     * 判断参数 DateGetOn 是否已赋值
                     * @return DateGetOn 是否已赋值
                     * 
                     */
                    bool DateGetOnHasBeenSet() const;

                    /**
                     * 获取乘机时间
                     * @return TimeGetOn 乘机时间
                     * 
                     */
                    std::string GetTimeGetOn() const;

                    /**
                     * 设置乘机时间
                     * @param _timeGetOn 乘机时间
                     * 
                     */
                    void SetTimeGetOn(const std::string& _timeGetOn);

                    /**
                     * 判断参数 TimeGetOn 是否已赋值
                     * @return TimeGetOn 是否已赋值
                     * 
                     */
                    bool TimeGetOnHasBeenSet() const;

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
                     * 获取免费行李额
                     * @return Allow 免费行李额
                     * 
                     */
                    std::string GetAllow() const;

                    /**
                     * 设置免费行李额
                     * @param _allow 免费行李额
                     * 
                     */
                    void SetAllow(const std::string& _allow);

                    /**
                     * 判断参数 Allow 是否已赋值
                     * @return Allow 是否已赋值
                     * 
                     */
                    bool AllowHasBeenSet() const;

                    /**
                     * 获取客票生效日期
                     * @return DateStart 客票生效日期
                     * 
                     */
                    std::string GetDateStart() const;

                    /**
                     * 设置客票生效日期
                     * @param _dateStart 客票生效日期
                     * 
                     */
                    void SetDateStart(const std::string& _dateStart);

                    /**
                     * 判断参数 DateStart 是否已赋值
                     * @return DateStart 是否已赋值
                     * 
                     */
                    bool DateStartHasBeenSet() const;

                    /**
                     * 获取有效截止日期
                     * @return DateEnd 有效截止日期
                     * 
                     */
                    std::string GetDateEnd() const;

                    /**
                     * 设置有效截止日期
                     * @param _dateEnd 有效截止日期
                     * 
                     */
                    void SetDateEnd(const std::string& _dateEnd);

                    /**
                     * 判断参数 DateEnd 是否已赋值
                     * @return DateEnd 是否已赋值
                     * 
                     */
                    bool DateEndHasBeenSet() const;

                private:

                    /**
                     * 出发站
                     */
                    std::string m_terminalGetOn;
                    bool m_terminalGetOnHasBeenSet;

                    /**
                     * 到达站
                     */
                    std::string m_terminalGetOff;
                    bool m_terminalGetOffHasBeenSet;

                    /**
                     * 承运人
                     */
                    std::string m_carrier;
                    bool m_carrierHasBeenSet;

                    /**
                     * 航班号
                     */
                    std::string m_flightNumber;
                    bool m_flightNumberHasBeenSet;

                    /**
                     * 座位等级
                     */
                    std::string m_seat;
                    bool m_seatHasBeenSet;

                    /**
                     * 乘机日期
                     */
                    std::string m_dateGetOn;
                    bool m_dateGetOnHasBeenSet;

                    /**
                     * 乘机时间
                     */
                    std::string m_timeGetOn;
                    bool m_timeGetOnHasBeenSet;

                    /**
                     * 客票级别/客票类别
                     */
                    std::string m_fareBasis;
                    bool m_fareBasisHasBeenSet;

                    /**
                     * 免费行李额
                     */
                    std::string m_allow;
                    bool m_allowHasBeenSet;

                    /**
                     * 客票生效日期
                     */
                    std::string m_dateStart;
                    bool m_dateStartHasBeenSet;

                    /**
                     * 有效截止日期
                     */
                    std::string m_dateEnd;
                    bool m_dateEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_FLIGHTITEMINFO_H_
