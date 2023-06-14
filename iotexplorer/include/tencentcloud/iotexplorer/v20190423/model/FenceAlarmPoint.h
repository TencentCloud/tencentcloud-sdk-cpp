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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEALARMPOINT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEALARMPOINT_H_

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
                * 围栏告警位置点
                */
                class FenceAlarmPoint : public AbstractModel
                {
                public:
                    FenceAlarmPoint();
                    ~FenceAlarmPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取围栏告警时间
                     * @return AlarmTime 围栏告警时间
                     * 
                     */
                    int64_t GetAlarmTime() const;

                    /**
                     * 设置围栏告警时间
                     * @param _alarmTime 围栏告警时间
                     * 
                     */
                    void SetAlarmTime(const int64_t& _alarmTime);

                    /**
                     * 判断参数 AlarmTime 是否已赋值
                     * @return AlarmTime 是否已赋值
                     * 
                     */
                    bool AlarmTimeHasBeenSet() const;

                    /**
                     * 获取围栏告警位置的经度
                     * @return Longitude 围栏告警位置的经度
                     * 
                     */
                    double GetLongitude() const;

                    /**
                     * 设置围栏告警位置的经度
                     * @param _longitude 围栏告警位置的经度
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
                     * 获取围栏告警位置的纬度
                     * @return Latitude 围栏告警位置的纬度
                     * 
                     */
                    double GetLatitude() const;

                    /**
                     * 设置围栏告警位置的纬度
                     * @param _latitude 围栏告警位置的纬度
                     * 
                     */
                    void SetLatitude(const double& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                private:

                    /**
                     * 围栏告警时间
                     */
                    int64_t m_alarmTime;
                    bool m_alarmTimeHasBeenSet;

                    /**
                     * 围栏告警位置的经度
                     */
                    double m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * 围栏告警位置的纬度
                     */
                    double m_latitude;
                    bool m_latitudeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEALARMPOINT_H_
