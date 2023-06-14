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

#ifndef TENCENTCLOUD_ICR_V20211014_MODEL_REQMETADATALBS_H_
#define TENCENTCLOUD_ICR_V20211014_MODEL_REQMETADATALBS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Icr
    {
        namespace V20211014
        {
            namespace Model
            {
                /**
                * 请求参数的lbs
                */
                class ReqMetadataLBS : public AbstractModel
                {
                public:
                    ReqMetadataLBS();
                    ~ReqMetadataLBS() = default;
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

                private:

                    /**
                     * 纬度
                     */
                    double m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * 经度
                     */
                    double m_longitude;
                    bool m_longitudeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_MODEL_REQMETADATALBS_H_
