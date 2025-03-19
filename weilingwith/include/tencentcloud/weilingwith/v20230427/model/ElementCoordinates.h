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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTCOORDINATES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTCOORDINATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 构件地理坐标
                */
                class ElementCoordinates : public AbstractModel
                {
                public:
                    ElementCoordinates();
                    ~ElementCoordinates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取经度
                     * @return Longitude 经度
                     * 
                     */
                    double GetLongitude() const;

                    /**
                     * 设置经度
                     * @param _longitude 经度
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
                     * 获取高程
                     * @return Altitude 高程
                     * 
                     */
                    double GetAltitude() const;

                    /**
                     * 设置高程
                     * @param _altitude 高程
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
                     * 高程
                     */
                    double m_altitude;
                    bool m_altitudeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTCOORDINATES_H_
