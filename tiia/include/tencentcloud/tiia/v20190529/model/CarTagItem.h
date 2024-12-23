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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_CARTAGITEM_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_CARTAGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/Coord.h>
#include <tencentcloud/tiia/v20190529/model/CarPlateContent.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 车辆属性识别的结果
                */
                class CarTagItem : public AbstractModel
                {
                public:
                    CarTagItem();
                    ~CarTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取车系
                     * @return Serial 车系
                     * 
                     */
                    std::string GetSerial() const;

                    /**
                     * 设置车系
                     * @param _serial 车系
                     * 
                     */
                    void SetSerial(const std::string& _serial);

                    /**
                     * 判断参数 Serial 是否已赋值
                     * @return Serial 是否已赋值
                     * 
                     */
                    bool SerialHasBeenSet() const;

                    /**
                     * 获取车辆品牌
                     * @return Brand 车辆品牌
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置车辆品牌
                     * @param _brand 车辆品牌
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取车辆类型
                     * @return Type 车辆类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置车辆类型
                     * @param _type 车辆类型
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
                     * 获取车辆颜色
                     * @return Color 车辆颜色
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置车辆颜色
                     * @param _color 车辆颜色
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
                     * 获取车系置信度，0-100
                     * @return Confidence 车系置信度，0-100
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置车系置信度，0-100
                     * @param _confidence 车系置信度，0-100
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取年份，没识别出年份的时候返回0
                     * @return Year 年份，没识别出年份的时候返回0
                     * 
                     */
                    int64_t GetYear() const;

                    /**
                     * 设置年份，没识别出年份的时候返回0
                     * @param _year 年份，没识别出年份的时候返回0
                     * 
                     */
                    void SetYear(const int64_t& _year);

                    /**
                     * 判断参数 Year 是否已赋值
                     * @return Year 是否已赋值
                     * 
                     */
                    bool YearHasBeenSet() const;

                    /**
                     * 获取车辆在图片中的坐标信息
                     * @return CarLocation 车辆在图片中的坐标信息
                     * 
                     */
                    std::vector<Coord> GetCarLocation() const;

                    /**
                     * 设置车辆在图片中的坐标信息
                     * @param _carLocation 车辆在图片中的坐标信息
                     * 
                     */
                    void SetCarLocation(const std::vector<Coord>& _carLocation);

                    /**
                     * 判断参数 CarLocation 是否已赋值
                     * @return CarLocation 是否已赋值
                     * 
                     */
                    bool CarLocationHasBeenSet() const;

                    /**
                     * 获取车牌信息，仅车辆识别（增强版）支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlateContent 车牌信息，仅车辆识别（增强版）支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CarPlateContent GetPlateContent() const;

                    /**
                     * 设置车牌信息，仅车辆识别（增强版）支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _plateContent 车牌信息，仅车辆识别（增强版）支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlateContent(const CarPlateContent& _plateContent);

                    /**
                     * 判断参数 PlateContent 是否已赋值
                     * @return PlateContent 是否已赋值
                     * 
                     */
                    bool PlateContentHasBeenSet() const;

                    /**
                     * 获取车牌信息置信度，0-100，仅车辆识别（增强版）支持
                     * @return PlateConfidence 车牌信息置信度，0-100，仅车辆识别（增强版）支持
                     * 
                     */
                    int64_t GetPlateConfidence() const;

                    /**
                     * 设置车牌信息置信度，0-100，仅车辆识别（增强版）支持
                     * @param _plateConfidence 车牌信息置信度，0-100，仅车辆识别（增强版）支持
                     * 
                     */
                    void SetPlateConfidence(const int64_t& _plateConfidence);

                    /**
                     * 判断参数 PlateConfidence 是否已赋值
                     * @return PlateConfidence 是否已赋值
                     * 
                     */
                    bool PlateConfidenceHasBeenSet() const;

                    /**
                     * 获取车辆类型置信度，0-100，仅车辆识别（增强版）支持
                     * @return TypeConfidence 车辆类型置信度，0-100，仅车辆识别（增强版）支持
                     * 
                     */
                    int64_t GetTypeConfidence() const;

                    /**
                     * 设置车辆类型置信度，0-100，仅车辆识别（增强版）支持
                     * @param _typeConfidence 车辆类型置信度，0-100，仅车辆识别（增强版）支持
                     * 
                     */
                    void SetTypeConfidence(const int64_t& _typeConfidence);

                    /**
                     * 判断参数 TypeConfidence 是否已赋值
                     * @return TypeConfidence 是否已赋值
                     * 
                     */
                    bool TypeConfidenceHasBeenSet() const;

                    /**
                     * 获取车辆颜色置信度，0-100，仅车辆识别（增强版）支持
                     * @return ColorConfidence 车辆颜色置信度，0-100，仅车辆识别（增强版）支持
                     * 
                     */
                    int64_t GetColorConfidence() const;

                    /**
                     * 设置车辆颜色置信度，0-100，仅车辆识别（增强版）支持
                     * @param _colorConfidence 车辆颜色置信度，0-100，仅车辆识别（增强版）支持
                     * 
                     */
                    void SetColorConfidence(const int64_t& _colorConfidence);

                    /**
                     * 判断参数 ColorConfidence 是否已赋值
                     * @return ColorConfidence 是否已赋值
                     * 
                     */
                    bool ColorConfidenceHasBeenSet() const;

                    /**
                     * 获取车辆朝向，仅车辆识别（增强版）支持
                     * @return Orientation 车辆朝向，仅车辆识别（增强版）支持
                     * 
                     */
                    std::string GetOrientation() const;

                    /**
                     * 设置车辆朝向，仅车辆识别（增强版）支持
                     * @param _orientation 车辆朝向，仅车辆识别（增强版）支持
                     * 
                     */
                    void SetOrientation(const std::string& _orientation);

                    /**
                     * 判断参数 Orientation 是否已赋值
                     * @return Orientation 是否已赋值
                     * 
                     */
                    bool OrientationHasBeenSet() const;

                    /**
                     * 获取车辆朝向置信度，0-100，仅车辆识别（增强版）支持
                     * @return OrientationConfidence 车辆朝向置信度，0-100，仅车辆识别（增强版）支持
                     * 
                     */
                    int64_t GetOrientationConfidence() const;

                    /**
                     * 设置车辆朝向置信度，0-100，仅车辆识别（增强版）支持
                     * @param _orientationConfidence 车辆朝向置信度，0-100，仅车辆识别（增强版）支持
                     * 
                     */
                    void SetOrientationConfidence(const int64_t& _orientationConfidence);

                    /**
                     * 判断参数 OrientationConfidence 是否已赋值
                     * @return OrientationConfidence 是否已赋值
                     * 
                     */
                    bool OrientationConfidenceHasBeenSet() const;

                private:

                    /**
                     * 车系
                     */
                    std::string m_serial;
                    bool m_serialHasBeenSet;

                    /**
                     * 车辆品牌
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * 车辆类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 车辆颜色
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 车系置信度，0-100
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 年份，没识别出年份的时候返回0
                     */
                    int64_t m_year;
                    bool m_yearHasBeenSet;

                    /**
                     * 车辆在图片中的坐标信息
                     */
                    std::vector<Coord> m_carLocation;
                    bool m_carLocationHasBeenSet;

                    /**
                     * 车牌信息，仅车辆识别（增强版）支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CarPlateContent m_plateContent;
                    bool m_plateContentHasBeenSet;

                    /**
                     * 车牌信息置信度，0-100，仅车辆识别（增强版）支持
                     */
                    int64_t m_plateConfidence;
                    bool m_plateConfidenceHasBeenSet;

                    /**
                     * 车辆类型置信度，0-100，仅车辆识别（增强版）支持
                     */
                    int64_t m_typeConfidence;
                    bool m_typeConfidenceHasBeenSet;

                    /**
                     * 车辆颜色置信度，0-100，仅车辆识别（增强版）支持
                     */
                    int64_t m_colorConfidence;
                    bool m_colorConfidenceHasBeenSet;

                    /**
                     * 车辆朝向，仅车辆识别（增强版）支持
                     */
                    std::string m_orientation;
                    bool m_orientationHasBeenSet;

                    /**
                     * 车辆朝向置信度，0-100，仅车辆识别（增强版）支持
                     */
                    int64_t m_orientationConfidence;
                    bool m_orientationConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CARTAGITEM_H_
