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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTTRACTORVEHICLEBACK_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTTRACTORVEHICLEBACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 拖拉机行驶证副页正面的识别结果
                */
                class TextTractorVehicleBack : public AbstractModel
                {
                public:
                    TextTractorVehicleBack();
                    ~TextTractorVehicleBack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取号牌号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlateNo 号牌号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlateNo() const;

                    /**
                     * 设置号牌号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _plateNo 号牌号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlateNo(const std::string& _plateNo);

                    /**
                     * 判断参数 PlateNo 是否已赋值
                     * @return PlateNo 是否已赋值
                     * 
                     */
                    bool PlateNoHasBeenSet() const;

                    /**
                     * 获取准乘人数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowNum 准乘人数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllowNum() const;

                    /**
                     * 设置准乘人数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowNum 准乘人数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowNum(const std::string& _allowNum);

                    /**
                     * 判断参数 AllowNum 是否已赋值
                     * @return AllowNum 是否已赋值
                     * 
                     */
                    bool AllowNumHasBeenSet() const;

                    /**
                     * 获取联合收割机质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CombineHarvesterQuality 联合收割机质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCombineHarvesterQuality() const;

                    /**
                     * 设置联合收割机质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _combineHarvesterQuality 联合收割机质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCombineHarvesterQuality(const std::string& _combineHarvesterQuality);

                    /**
                     * 判断参数 CombineHarvesterQuality 是否已赋值
                     * @return CombineHarvesterQuality 是否已赋值
                     * 
                     */
                    bool CombineHarvesterQualityHasBeenSet() const;

                    /**
                     * 获取拖拉机最小使用质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TractorMinUsageWeight 拖拉机最小使用质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTractorMinUsageWeight() const;

                    /**
                     * 设置拖拉机最小使用质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tractorMinUsageWeight 拖拉机最小使用质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTractorMinUsageWeight(const std::string& _tractorMinUsageWeight);

                    /**
                     * 判断参数 TractorMinUsageWeight 是否已赋值
                     * @return TractorMinUsageWeight 是否已赋值
                     * 
                     */
                    bool TractorMinUsageWeightHasBeenSet() const;

                    /**
                     * 获取拖拉机最大允许载质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TractorMaxAllowLoadCapacity 拖拉机最大允许载质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTractorMaxAllowLoadCapacity() const;

                    /**
                     * 设置拖拉机最大允许载质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tractorMaxAllowLoadCapacity 拖拉机最大允许载质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTractorMaxAllowLoadCapacity(const std::string& _tractorMaxAllowLoadCapacity);

                    /**
                     * 判断参数 TractorMaxAllowLoadCapacity 是否已赋值
                     * @return TractorMaxAllowLoadCapacity 是否已赋值
                     * 
                     */
                    bool TractorMaxAllowLoadCapacityHasBeenSet() const;

                    /**
                     * 获取外廓尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalSize 外廓尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalSize() const;

                    /**
                     * 设置外廓尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalSize 外廓尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalSize(const std::string& _externalSize);

                    /**
                     * 判断参数 ExternalSize 是否已赋值
                     * @return ExternalSize 是否已赋值
                     * 
                     */
                    bool ExternalSizeHasBeenSet() const;

                    /**
                     * 获取检验记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Record 检验记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置检验记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _record 检验记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecord(const std::string& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VehicleType 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVehicleType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vehicleType 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVehicleType(const std::string& _vehicleType);

                    /**
                     * 判断参数 VehicleType 是否已赋值
                     * @return VehicleType 是否已赋值
                     * 
                     */
                    bool VehicleTypeHasBeenSet() const;

                    /**
                     * 获取住址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 住址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置住址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address 住址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                private:

                    /**
                     * 号牌号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_plateNo;
                    bool m_plateNoHasBeenSet;

                    /**
                     * 准乘人数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allowNum;
                    bool m_allowNumHasBeenSet;

                    /**
                     * 联合收割机质量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_combineHarvesterQuality;
                    bool m_combineHarvesterQualityHasBeenSet;

                    /**
                     * 拖拉机最小使用质量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tractorMinUsageWeight;
                    bool m_tractorMinUsageWeightHasBeenSet;

                    /**
                     * 拖拉机最大允许载质量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tractorMaxAllowLoadCapacity;
                    bool m_tractorMaxAllowLoadCapacityHasBeenSet;

                    /**
                     * 外廓尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalSize;
                    bool m_externalSizeHasBeenSet;

                    /**
                     * 检验记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * 住址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTTRACTORVEHICLEBACK_H_
