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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_CARPLATECONTENT_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_CARPLATECONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/Coord.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 车牌信息
                */
                class CarPlateContent : public AbstractModel
                {
                public:
                    CarPlateContent();
                    ~CarPlateContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取车牌信息。
                     * @return Plate 车牌信息。
                     * 
                     */
                    std::string GetPlate() const;

                    /**
                     * 设置车牌信息。
                     * @param _plate 车牌信息。
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
                     * 获取车牌颜色。
                     * @return Color 车牌颜色。
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置车牌颜色。
                     * @param _color 车牌颜色。
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
                     * 获取车牌类型，包含：0普通蓝牌，1双层黄牌，2单层黄牌，3新能源车牌，4使馆车牌，5领馆车牌，6澳门车牌，7香港车牌，8警用车牌，9教练车牌，10武警车牌，11军用车牌   -2遮挡污损模糊车牌/异常   其他无牌
注意：
此字段可能返回 null，表示取不到有效值。
此字段结果遮挡污损模糊车牌/异常：包含PlateStatus参数的“遮挡污损模糊车牌”，针对车牌异常，建议参考此字段，更全面
                     * @return Type 车牌类型，包含：0普通蓝牌，1双层黄牌，2单层黄牌，3新能源车牌，4使馆车牌，5领馆车牌，6澳门车牌，7香港车牌，8警用车牌，9教练车牌，10武警车牌，11军用车牌   -2遮挡污损模糊车牌/异常   其他无牌
注意：
此字段可能返回 null，表示取不到有效值。
此字段结果遮挡污损模糊车牌/异常：包含PlateStatus参数的“遮挡污损模糊车牌”，针对车牌异常，建议参考此字段，更全面
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置车牌类型，包含：0普通蓝牌，1双层黄牌，2单层黄牌，3新能源车牌，4使馆车牌，5领馆车牌，6澳门车牌，7香港车牌，8警用车牌，9教练车牌，10武警车牌，11军用车牌   -2遮挡污损模糊车牌/异常   其他无牌
注意：
此字段可能返回 null，表示取不到有效值。
此字段结果遮挡污损模糊车牌/异常：包含PlateStatus参数的“遮挡污损模糊车牌”，针对车牌异常，建议参考此字段，更全面
                     * @param _type 车牌类型，包含：0普通蓝牌，1双层黄牌，2单层黄牌，3新能源车牌，4使馆车牌，5领馆车牌，6澳门车牌，7香港车牌，8警用车牌，9教练车牌，10武警车牌，11军用车牌   -2遮挡污损模糊车牌/异常   其他无牌
注意：
此字段可能返回 null，表示取不到有效值。
此字段结果遮挡污损模糊车牌/异常：包含PlateStatus参数的“遮挡污损模糊车牌”，针对车牌异常，建议参考此字段，更全面
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
                     * 获取车牌在图片中的坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlateLocation 车牌在图片中的坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Coord> GetPlateLocation() const;

                    /**
                     * 设置车牌在图片中的坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _plateLocation 车牌在图片中的坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlateLocation(const std::vector<Coord>& _plateLocation);

                    /**
                     * 判断参数 PlateLocation 是否已赋值
                     * @return PlateLocation 是否已赋值
                     * 
                     */
                    bool PlateLocationHasBeenSet() const;

                    /**
                     * 获取判断车牌是否遮挡：“遮挡污损模糊车牌”和"正常车牌"。
                     * @return PlateStatus 判断车牌是否遮挡：“遮挡污损模糊车牌”和"正常车牌"。
                     * 
                     */
                    std::string GetPlateStatus() const;

                    /**
                     * 设置判断车牌是否遮挡：“遮挡污损模糊车牌”和"正常车牌"。
                     * @param _plateStatus 判断车牌是否遮挡：“遮挡污损模糊车牌”和"正常车牌"。
                     * 
                     */
                    void SetPlateStatus(const std::string& _plateStatus);

                    /**
                     * 判断参数 PlateStatus 是否已赋值
                     * @return PlateStatus 是否已赋值
                     * 
                     */
                    bool PlateStatusHasBeenSet() const;

                    /**
                     * 获取车牌遮挡的置信度，0-100。
                     * @return PlateStatusConfidence 车牌遮挡的置信度，0-100。
                     * 
                     */
                    int64_t GetPlateStatusConfidence() const;

                    /**
                     * 设置车牌遮挡的置信度，0-100。
                     * @param _plateStatusConfidence 车牌遮挡的置信度，0-100。
                     * 
                     */
                    void SetPlateStatusConfidence(const int64_t& _plateStatusConfidence);

                    /**
                     * 判断参数 PlateStatusConfidence 是否已赋值
                     * @return PlateStatusConfidence 是否已赋值
                     * 
                     */
                    bool PlateStatusConfidenceHasBeenSet() const;

                    /**
                     * 获取车牌角度。
                     * @return PlateAngle 车牌角度。
                     * 
                     */
                    double GetPlateAngle() const;

                    /**
                     * 设置车牌角度。
                     * @param _plateAngle 车牌角度。
                     * 
                     */
                    void SetPlateAngle(const double& _plateAngle);

                    /**
                     * 判断参数 PlateAngle 是否已赋值
                     * @return PlateAngle 是否已赋值
                     * 
                     */
                    bool PlateAngleHasBeenSet() const;

                private:

                    /**
                     * 车牌信息。
                     */
                    std::string m_plate;
                    bool m_plateHasBeenSet;

                    /**
                     * 车牌颜色。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 车牌类型，包含：0普通蓝牌，1双层黄牌，2单层黄牌，3新能源车牌，4使馆车牌，5领馆车牌，6澳门车牌，7香港车牌，8警用车牌，9教练车牌，10武警车牌，11军用车牌   -2遮挡污损模糊车牌/异常   其他无牌
注意：
此字段可能返回 null，表示取不到有效值。
此字段结果遮挡污损模糊车牌/异常：包含PlateStatus参数的“遮挡污损模糊车牌”，针对车牌异常，建议参考此字段，更全面
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 车牌在图片中的坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> m_plateLocation;
                    bool m_plateLocationHasBeenSet;

                    /**
                     * 判断车牌是否遮挡：“遮挡污损模糊车牌”和"正常车牌"。
                     */
                    std::string m_plateStatus;
                    bool m_plateStatusHasBeenSet;

                    /**
                     * 车牌遮挡的置信度，0-100。
                     */
                    int64_t m_plateStatusConfidence;
                    bool m_plateStatusConfidenceHasBeenSet;

                    /**
                     * 车牌角度。
                     */
                    double m_plateAngle;
                    bool m_plateAngleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CARPLATECONTENT_H_
