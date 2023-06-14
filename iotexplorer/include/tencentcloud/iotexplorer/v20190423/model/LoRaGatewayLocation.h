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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LORAGATEWAYLOCATION_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LORAGATEWAYLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 网关坐标
                */
                class LoRaGatewayLocation : public AbstractModel
                {
                public:
                    LoRaGatewayLocation();
                    ~LoRaGatewayLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取纬度
                     * @return Latitude 纬度
                     * 
                     */
                    double GetLatitude() const;

                    /**
                     * 设置纬度
                     * @param _latitude 纬度
                     * 
                     */
                    void SetLatitude(const double& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取精度
                     * @return Longitude 精度
                     * 
                     */
                    double GetLongitude() const;

                    /**
                     * 设置精度
                     * @param _longitude 精度
                     * 
                     */
                    void SetLongitude(const double& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取准确度
                     * @return Accuracy 准确度
                     * 
                     */
                    double GetAccuracy() const;

                    /**
                     * 设置准确度
                     * @param _accuracy 准确度
                     * 
                     */
                    void SetAccuracy(const double& _accuracy);

                    /**
                     * 判断参数 Accuracy 是否已赋值
                     * @return Accuracy 是否已赋值
                     * 
                     */
                    bool AccuracyHasBeenSet() const;

                    /**
                     * 获取海拔
                     * @return Altitude 海拔
                     * 
                     */
                    double GetAltitude() const;

                    /**
                     * 设置海拔
                     * @param _altitude 海拔
                     * 
                     */
                    void SetAltitude(const double& _altitude);

                    /**
                     * 判断参数 Altitude 是否已赋值
                     * @return Altitude 是否已赋值
                     * 
                     */
                    bool AltitudeHasBeenSet() const;

                private:

                    /**
                     * 纬度
                     */
                    double m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * 精度
                     */
                    double m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * 准确度
                     */
                    double m_accuracy;
                    bool m_accuracyHasBeenSet;

                    /**
                     * 海拔
                     */
                    double m_altitude;
                    bool m_altitudeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LORAGATEWAYLOCATION_H_
