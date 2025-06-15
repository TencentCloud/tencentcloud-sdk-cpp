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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTVEHICLEFRONT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTVEHICLEFRONT_H_

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
                * 行驶证主页正面的识别结果
                */
                class TextVehicleFront : public AbstractModel
                {
                public:
                    TextVehicleFront();
                    ~TextVehicleFront() = default;
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
                     * 获取车辆类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VehicleType 车辆类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVehicleType() const;

                    /**
                     * 设置车辆类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vehicleType 车辆类型
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
                     * 获取所有人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 所有人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置所有人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 所有人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

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

                    /**
                     * 获取使用性质
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseCharacter 使用性质
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUseCharacter() const;

                    /**
                     * 设置使用性质
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useCharacter 使用性质
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUseCharacter(const std::string& _useCharacter);

                    /**
                     * 判断参数 UseCharacter 是否已赋值
                     * @return UseCharacter 是否已赋值
                     * 
                     */
                    bool UseCharacterHasBeenSet() const;

                    /**
                     * 获取品牌型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 品牌型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置品牌型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _model 品牌型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取车辆识别代号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vin 车辆识别代号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVin() const;

                    /**
                     * 设置车辆识别代号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vin 车辆识别代号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVin(const std::string& _vin);

                    /**
                     * 判断参数 Vin 是否已赋值
                     * @return Vin 是否已赋值
                     * 
                     */
                    bool VinHasBeenSet() const;

                    /**
                     * 获取发动机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineNo 发动机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineNo() const;

                    /**
                     * 设置发动机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineNo 发动机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineNo(const std::string& _engineNo);

                    /**
                     * 判断参数 EngineNo 是否已赋值
                     * @return EngineNo 是否已赋值
                     * 
                     */
                    bool EngineNoHasBeenSet() const;

                    /**
                     * 获取注册日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegisterDate 注册日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegisterDate() const;

                    /**
                     * 设置注册日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registerDate 注册日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegisterDate(const std::string& _registerDate);

                    /**
                     * 判断参数 RegisterDate 是否已赋值
                     * @return RegisterDate 是否已赋值
                     * 
                     */
                    bool RegisterDateHasBeenSet() const;

                    /**
                     * 获取发证日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssueDate 发证日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 设置发证日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issueDate 发证日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIssueDate(const std::string& _issueDate);

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取印章
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seal 印章
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeal() const;

                    /**
                     * 设置印章
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seal 印章
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeal(const std::string& _seal);

                    /**
                     * 判断参数 Seal 是否已赋值
                     * @return Seal 是否已赋值
                     * 
                     */
                    bool SealHasBeenSet() const;

                    /**
                     * 获取状态，该字段仅支持电子行驶证返回
                     * @return StateElectronic 状态，该字段仅支持电子行驶证返回
                     * 
                     */
                    std::string GetStateElectronic() const;

                    /**
                     * 设置状态，该字段仅支持电子行驶证返回
                     * @param _stateElectronic 状态，该字段仅支持电子行驶证返回
                     * 
                     */
                    void SetStateElectronic(const std::string& _stateElectronic);

                    /**
                     * 判断参数 StateElectronic 是否已赋值
                     * @return StateElectronic 是否已赋值
                     * 
                     */
                    bool StateElectronicHasBeenSet() const;

                    /**
                     * 获取检验有效期，该字段仅支持电子行驶证返回
                     * @return InspectionValidityTimeElectronic 检验有效期，该字段仅支持电子行驶证返回
                     * 
                     */
                    std::string GetInspectionValidityTimeElectronic() const;

                    /**
                     * 设置检验有效期，该字段仅支持电子行驶证返回
                     * @param _inspectionValidityTimeElectronic 检验有效期，该字段仅支持电子行驶证返回
                     * 
                     */
                    void SetInspectionValidityTimeElectronic(const std::string& _inspectionValidityTimeElectronic);

                    /**
                     * 判断参数 InspectionValidityTimeElectronic 是否已赋值
                     * @return InspectionValidityTimeElectronic 是否已赋值
                     * 
                     */
                    bool InspectionValidityTimeElectronicHasBeenSet() const;

                    /**
                     * 获取生成时间，该字段仅支持电子行驶证返回
                     * @return GenerationTimeElectronic 生成时间，该字段仅支持电子行驶证返回
                     * 
                     */
                    std::string GetGenerationTimeElectronic() const;

                    /**
                     * 设置生成时间，该字段仅支持电子行驶证返回
                     * @param _generationTimeElectronic 生成时间，该字段仅支持电子行驶证返回
                     * 
                     */
                    void SetGenerationTimeElectronic(const std::string& _generationTimeElectronic);

                    /**
                     * 判断参数 GenerationTimeElectronic 是否已赋值
                     * @return GenerationTimeElectronic 是否已赋值
                     * 
                     */
                    bool GenerationTimeElectronicHasBeenSet() const;

                private:

                    /**
                     * 号牌号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_plateNo;
                    bool m_plateNoHasBeenSet;

                    /**
                     * 车辆类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * 所有人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 住址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 使用性质
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_useCharacter;
                    bool m_useCharacterHasBeenSet;

                    /**
                     * 品牌型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 车辆识别代号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vin;
                    bool m_vinHasBeenSet;

                    /**
                     * 发动机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineNo;
                    bool m_engineNoHasBeenSet;

                    /**
                     * 注册日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registerDate;
                    bool m_registerDateHasBeenSet;

                    /**
                     * 发证日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * 印章
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seal;
                    bool m_sealHasBeenSet;

                    /**
                     * 状态，该字段仅支持电子行驶证返回
                     */
                    std::string m_stateElectronic;
                    bool m_stateElectronicHasBeenSet;

                    /**
                     * 检验有效期，该字段仅支持电子行驶证返回
                     */
                    std::string m_inspectionValidityTimeElectronic;
                    bool m_inspectionValidityTimeElectronicHasBeenSet;

                    /**
                     * 生成时间，该字段仅支持电子行驶证返回
                     */
                    std::string m_generationTimeElectronic;
                    bool m_generationTimeElectronicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTVEHICLEFRONT_H_
