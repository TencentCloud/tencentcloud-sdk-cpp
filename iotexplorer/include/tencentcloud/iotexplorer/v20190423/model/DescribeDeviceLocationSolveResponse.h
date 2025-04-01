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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICELOCATIONSOLVERESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICELOCATIONSOLVERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeDeviceLocationSolve返回参数结构体
                */
                class DescribeDeviceLocationSolveResponse : public AbstractModel
                {
                public:
                    DescribeDeviceLocationSolveResponse();
                    ~DescribeDeviceLocationSolveResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取经度
                     * @return Longitude 经度
                     * 
                     */
                    double GetLongitude() const;

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取纬度
                     * @return Latitude 纬度
                     * 
                     */
                    double GetLatitude() const;

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return LocationType 类型
                     * 
                     */
                    std::string GetLocationType() const;

                    /**
                     * 判断参数 LocationType 是否已赋值
                     * @return LocationType 是否已赋值
                     * 
                     */
                    bool LocationTypeHasBeenSet() const;

                    /**
                     * 获取误差精度预估，单位为米
                     * @return Accuracy 误差精度预估，单位为米
                     * 
                     */
                    double GetAccuracy() const;

                    /**
                     * 判断参数 Accuracy 是否已赋值
                     * @return Accuracy 是否已赋值
                     * 
                     */
                    bool AccuracyHasBeenSet() const;

                private:

                    /**
                     * 经度
                     */
                    double m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * 纬度
                     */
                    double m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_locationType;
                    bool m_locationTypeHasBeenSet;

                    /**
                     * 误差精度预估，单位为米
                     */
                    double m_accuracy;
                    bool m_accuracyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICELOCATIONSOLVERESPONSE_H_
