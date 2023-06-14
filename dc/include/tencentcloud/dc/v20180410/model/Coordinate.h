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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_COORDINATE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_COORDINATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * 坐标，经维度描述
                */
                class Coordinate : public AbstractModel
                {
                public:
                    Coordinate();
                    ~Coordinate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取纬度
                     * @return Lat 纬度
                     * 
                     */
                    double GetLat() const;

                    /**
                     * 设置纬度
                     * @param _lat 纬度
                     * 
                     */
                    void SetLat(const double& _lat);

                    /**
                     * 判断参数 Lat 是否已赋值
                     * @return Lat 是否已赋值
                     * 
                     */
                    bool LatHasBeenSet() const;

                    /**
                     * 获取经度
                     * @return Lng 经度
                     * 
                     */
                    double GetLng() const;

                    /**
                     * 设置经度
                     * @param _lng 经度
                     * 
                     */
                    void SetLng(const double& _lng);

                    /**
                     * 判断参数 Lng 是否已赋值
                     * @return Lng 是否已赋值
                     * 
                     */
                    bool LngHasBeenSet() const;

                private:

                    /**
                     * 纬度
                     */
                    double m_lat;
                    bool m_latHasBeenSet;

                    /**
                     * 经度
                     */
                    double m_lng;
                    bool m_lngHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_COORDINATE_H_
