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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RIDEHAILINGTRANSPORTLICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RIDEHAILINGTRANSPORTLICENSEOCRRESPONSE_H_

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
                * RideHailingTransportLicenseOCR返回参数结构体
                */
                class RideHailingTransportLicenseOCRResponse : public AbstractModel
                {
                public:
                    RideHailingTransportLicenseOCRResponse();
                    ~RideHailingTransportLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取交运管许可字号。
                     * @return OperationLicenseNumber 交运管许可字号。
                     * 
                     */
                    std::string GetOperationLicenseNumber() const;

                    /**
                     * 判断参数 OperationLicenseNumber 是否已赋值
                     * @return OperationLicenseNumber 是否已赋值
                     * 
                     */
                    bool OperationLicenseNumberHasBeenSet() const;

                    /**
                     * 获取车辆所有人，对应网约车运输证字段：车辆所有人/车主名称/业户名称。
                     * @return VehicleOwner 车辆所有人，对应网约车运输证字段：车辆所有人/车主名称/业户名称。
                     * 
                     */
                    std::string GetVehicleOwner() const;

                    /**
                     * 判断参数 VehicleOwner 是否已赋值
                     * @return VehicleOwner 是否已赋值
                     * 
                     */
                    bool VehicleOwnerHasBeenSet() const;

                    /**
                     * 获取车牌号码，对应网约车运输证字段：车牌号码/车辆号牌。
                     * @return VehicleNumber 车牌号码，对应网约车运输证字段：车牌号码/车辆号牌。
                     * 
                     */
                    std::string GetVehicleNumber() const;

                    /**
                     * 判断参数 VehicleNumber 是否已赋值
                     * @return VehicleNumber 是否已赋值
                     * 
                     */
                    bool VehicleNumberHasBeenSet() const;

                    /**
                     * 获取有效起始日期。
                     * @return StartDate 有效起始日期。
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取有效期截止时间，对应网约车运输证字段：有效期至/营运期限止。
                     * @return EndDate 有效期截止时间，对应网约车运输证字段：有效期至/营运期限止。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取初始发证日期，对应网约车运输证字段：初始领证日期/发证日期。
                     * @return ReleaseDate 初始发证日期，对应网约车运输证字段：初始领证日期/发证日期。
                     * 
                     */
                    std::string GetReleaseDate() const;

                    /**
                     * 判断参数 ReleaseDate 是否已赋值
                     * @return ReleaseDate 是否已赋值
                     * 
                     */
                    bool ReleaseDateHasBeenSet() const;

                private:

                    /**
                     * 交运管许可字号。
                     */
                    std::string m_operationLicenseNumber;
                    bool m_operationLicenseNumberHasBeenSet;

                    /**
                     * 车辆所有人，对应网约车运输证字段：车辆所有人/车主名称/业户名称。
                     */
                    std::string m_vehicleOwner;
                    bool m_vehicleOwnerHasBeenSet;

                    /**
                     * 车牌号码，对应网约车运输证字段：车牌号码/车辆号牌。
                     */
                    std::string m_vehicleNumber;
                    bool m_vehicleNumberHasBeenSet;

                    /**
                     * 有效起始日期。
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 有效期截止时间，对应网约车运输证字段：有效期至/营运期限止。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 初始发证日期，对应网约车运输证字段：初始领证日期/发证日期。
                     */
                    std::string m_releaseDate;
                    bool m_releaseDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RIDEHAILINGTRANSPORTLICENSEOCRRESPONSE_H_
