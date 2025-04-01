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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONITEM_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONITEM_H_

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
                * 位置点
                */
                class PositionItem : public AbstractModel
                {
                public:
                    PositionItem();
                    ~PositionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取位置点的时间
                     * @return CreateTime 位置点的时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置位置点的时间
                     * @param _createTime 位置点的时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取位置点的经度
                     * @return Longitude 位置点的经度
                     * 
                     */
                    double GetLongitude() const;

                    /**
                     * 设置位置点的经度
                     * @param _longitude 位置点的经度
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
                     * 获取位置点的纬度
                     * @return Latitude 位置点的纬度
                     * 
                     */
                    double GetLatitude() const;

                    /**
                     * 设置位置点的纬度
                     * @param _latitude 位置点的纬度
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
                     * 获取位置点的定位类型
                     * @return LocationType 位置点的定位类型
                     * 
                     */
                    std::string GetLocationType() const;

                    /**
                     * 设置位置点的定位类型
                     * @param _locationType 位置点的定位类型
                     * 
                     */
                    void SetLocationType(const std::string& _locationType);

                    /**
                     * 判断参数 LocationType 是否已赋值
                     * @return LocationType 是否已赋值
                     * 
                     */
                    bool LocationTypeHasBeenSet() const;

                    /**
                     * 获取位置点的精度预估，单位为米
                     * @return Accuracy 位置点的精度预估，单位为米
                     * 
                     */
                    double GetAccuracy() const;

                    /**
                     * 设置位置点的精度预估，单位为米
                     * @param _accuracy 位置点的精度预估，单位为米
                     * 
                     */
                    void SetAccuracy(const double& _accuracy);

                    /**
                     * 判断参数 Accuracy 是否已赋值
                     * @return Accuracy 是否已赋值
                     * 
                     */
                    bool AccuracyHasBeenSet() const;

                private:

                    /**
                     * 位置点的时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 位置点的经度
                     */
                    double m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * 位置点的纬度
                     */
                    double m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * 位置点的定位类型
                     */
                    std::string m_locationType;
                    bool m_locationTypeHasBeenSet;

                    /**
                     * 位置点的精度预估，单位为米
                     */
                    double m_accuracy;
                    bool m_accuracyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONITEM_H_
