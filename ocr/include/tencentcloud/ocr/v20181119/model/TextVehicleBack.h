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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTVEHICLEBACK_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTVEHICLEBACK_H_

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
                * 行驶证副页正面的识别结果
                */
                class TextVehicleBack : public AbstractModel
                {
                public:
                    TextVehicleBack();
                    ~TextVehicleBack() = default;
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
                     * 获取档案编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileNo 档案编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileNo() const;

                    /**
                     * 设置档案编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileNo 档案编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileNo(const std::string& _fileNo);

                    /**
                     * 判断参数 FileNo 是否已赋值
                     * @return FileNo 是否已赋值
                     * 
                     */
                    bool FileNoHasBeenSet() const;

                    /**
                     * 获取核定人数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowNum 核定人数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllowNum() const;

                    /**
                     * 设置核定人数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowNum 核定人数
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
                     * 获取总质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalMass 总质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalMass() const;

                    /**
                     * 设置总质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalMass 总质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalMass(const std::string& _totalMass);

                    /**
                     * 判断参数 TotalMass 是否已赋值
                     * @return TotalMass 是否已赋值
                     * 
                     */
                    bool TotalMassHasBeenSet() const;

                    /**
                     * 获取整备质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurbWeight 整备质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurbWeight() const;

                    /**
                     * 设置整备质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curbWeight 整备质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurbWeight(const std::string& _curbWeight);

                    /**
                     * 判断参数 CurbWeight 是否已赋值
                     * @return CurbWeight 是否已赋值
                     * 
                     */
                    bool CurbWeightHasBeenSet() const;

                    /**
                     * 获取核定载质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadQuality 核定载质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoadQuality() const;

                    /**
                     * 设置核定载质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadQuality 核定载质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadQuality(const std::string& _loadQuality);

                    /**
                     * 判断参数 LoadQuality 是否已赋值
                     * @return LoadQuality 是否已赋值
                     * 
                     */
                    bool LoadQualityHasBeenSet() const;

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
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Marks 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMarks() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _marks 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMarks(const std::string& _marks);

                    /**
                     * 判断参数 Marks 是否已赋值
                     * @return Marks 是否已赋值
                     * 
                     */
                    bool MarksHasBeenSet() const;

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
                     * 获取准牵引总质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalQuasiMass 准牵引总质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalQuasiMass() const;

                    /**
                     * 设置准牵引总质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalQuasiMass 准牵引总质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalQuasiMass(const std::string& _totalQuasiMass);

                    /**
                     * 判断参数 TotalQuasiMass 是否已赋值
                     * @return TotalQuasiMass 是否已赋值
                     * 
                     */
                    bool TotalQuasiMassHasBeenSet() const;

                    /**
                     * 获取副页编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubPageCode 副页编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubPageCode() const;

                    /**
                     * 设置副页编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subPageCode 副页编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubPageCode(const std::string& _subPageCode);

                    /**
                     * 判断参数 SubPageCode 是否已赋值
                     * @return SubPageCode 是否已赋值
                     * 
                     */
                    bool SubPageCodeHasBeenSet() const;

                    /**
                     * 获取燃料种类

注意：此字段可能返回 null，表示取不到有效值。
                     * @return FuelType 燃料种类

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFuelType() const;

                    /**
                     * 设置燃料种类

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fuelType 燃料种类

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFuelType(const std::string& _fuelType);

                    /**
                     * 判断参数 FuelType 是否已赋值
                     * @return FuelType 是否已赋值
                     * 
                     */
                    bool FuelTypeHasBeenSet() const;

                    /**
                     * 获取住址
                     * @return AddressElectronic 住址
                     * 
                     */
                    std::string GetAddressElectronic() const;

                    /**
                     * 设置住址
                     * @param _addressElectronic 住址
                     * 
                     */
                    void SetAddressElectronic(const std::string& _addressElectronic);

                    /**
                     * 判断参数 AddressElectronic 是否已赋值
                     * @return AddressElectronic 是否已赋值
                     * 
                     */
                    bool AddressElectronicHasBeenSet() const;

                    /**
                     * 获取发证机关
                     * @return IssueAuthorityElectronic 发证机关
                     * 
                     */
                    std::string GetIssueAuthorityElectronic() const;

                    /**
                     * 设置发证机关
                     * @param _issueAuthorityElectronic 发证机关
                     * 
                     */
                    void SetIssueAuthorityElectronic(const std::string& _issueAuthorityElectronic);

                    /**
                     * 判断参数 IssueAuthorityElectronic 是否已赋值
                     * @return IssueAuthorityElectronic 是否已赋值
                     * 
                     */
                    bool IssueAuthorityElectronicHasBeenSet() const;

                    /**
                     * 获取车身颜色
                     * @return CarBodyColor 车身颜色
                     * 
                     */
                    std::string GetCarBodyColor() const;

                    /**
                     * 设置车身颜色
                     * @param _carBodyColor 车身颜色
                     * 
                     */
                    void SetCarBodyColor(const std::string& _carBodyColor);

                    /**
                     * 判断参数 CarBodyColor 是否已赋值
                     * @return CarBodyColor 是否已赋值
                     * 
                     */
                    bool CarBodyColorHasBeenSet() const;

                private:

                    /**
                     * 号牌号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_plateNo;
                    bool m_plateNoHasBeenSet;

                    /**
                     * 档案编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileNo;
                    bool m_fileNoHasBeenSet;

                    /**
                     * 核定人数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allowNum;
                    bool m_allowNumHasBeenSet;

                    /**
                     * 总质量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalMass;
                    bool m_totalMassHasBeenSet;

                    /**
                     * 整备质量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curbWeight;
                    bool m_curbWeightHasBeenSet;

                    /**
                     * 核定载质量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadQuality;
                    bool m_loadQualityHasBeenSet;

                    /**
                     * 外廓尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalSize;
                    bool m_externalSizeHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_marks;
                    bool m_marksHasBeenSet;

                    /**
                     * 检验记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * 准牵引总质量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalQuasiMass;
                    bool m_totalQuasiMassHasBeenSet;

                    /**
                     * 副页编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subPageCode;
                    bool m_subPageCodeHasBeenSet;

                    /**
                     * 燃料种类

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fuelType;
                    bool m_fuelTypeHasBeenSet;

                    /**
                     * 住址
                     */
                    std::string m_addressElectronic;
                    bool m_addressElectronicHasBeenSet;

                    /**
                     * 发证机关
                     */
                    std::string m_issueAuthorityElectronic;
                    bool m_issueAuthorityElectronicHasBeenSet;

                    /**
                     * 车身颜色
                     */
                    std::string m_carBodyColor;
                    bool m_carBodyColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTVEHICLEBACK_H_
