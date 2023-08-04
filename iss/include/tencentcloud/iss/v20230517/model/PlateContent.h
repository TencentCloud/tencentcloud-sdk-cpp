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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_PLATECONTENT_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_PLATECONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/Location.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AI车牌信息
                */
                class PlateContent : public AbstractModel
                {
                public:
                    PlateContent();
                    ~PlateContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取车牌号信息
                     * @return Plate 车牌号信息
                     * 
                     */
                    std::string GetPlate() const;

                    /**
                     * 设置车牌号信息
                     * @param _plate 车牌号信息
                     * 
                     */
                    void SetPlate(const std::string& _plate);

                    /**
                     * 判断参数 Plate 是否已赋值
                     * @return Plate 是否已赋值
                     * 
                     */
                    bool PlateHasBeenSet() const;

                    /**
                     * 获取车牌的颜色
                     * @return Color 车牌的颜色
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置车牌的颜色
                     * @param _color 车牌的颜色
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取车牌的种类，例如普通蓝牌
                     * @return Type 车牌的种类，例如普通蓝牌
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置车牌的种类，例如普通蓝牌
                     * @param _type 车牌的种类，例如普通蓝牌
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取截图中坐标信息
                     * @return Location 截图中坐标信息
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置截图中坐标信息
                     * @param _location 截图中坐标信息
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 车牌号信息
                     */
                    std::string m_plate;
                    bool m_plateHasBeenSet;

                    /**
                     * 车牌的颜色
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 车牌的种类，例如普通蓝牌
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 截图中坐标信息
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_PLATECONTENT_H_
