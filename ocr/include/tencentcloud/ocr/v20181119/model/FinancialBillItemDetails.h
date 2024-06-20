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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_FINANCIALBILLITEMDETAILS_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_FINANCIALBILLITEMDETAILS_H_

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
                * 财务票据查验返回结果-项目清单
                */
                class FinancialBillItemDetails : public AbstractModel
                {
                public:
                    FinancialBillItemDetails();
                    ~FinancialBillItemDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemID 项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItemID() const;

                    /**
                     * 设置项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itemID 项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItemID(const std::string& _itemID);

                    /**
                     * 判断参数 ItemID 是否已赋值
                     * @return ItemID 是否已赋值
                     * 
                     */
                    bool ItemIDHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unit 单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unit 单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quantity 数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuantity() const;

                    /**
                     * 设置数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quantity 数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuantity(const std::string& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取规格标准
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Standard 规格标准
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStandard() const;

                    /**
                     * 设置规格标准
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standard 规格标准
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandard(const std::string& _standard);

                    /**
                     * 判断参数 Standard 是否已赋值
                     * @return Standard 是否已赋值
                     * 
                     */
                    bool StandardHasBeenSet() const;

                    /**
                     * 获取金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取项目序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialNumber 项目序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置项目序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialNumber 项目序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_itemID;
                    bool m_itemIDHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 规格标准
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_standard;
                    bool m_standardHasBeenSet;

                    /**
                     * 金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 项目序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_FINANCIALBILLITEMDETAILS_H_
