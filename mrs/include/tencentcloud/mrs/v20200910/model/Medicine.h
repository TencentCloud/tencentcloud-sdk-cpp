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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MEDICINE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MEDICINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 药品
                */
                class Medicine : public AbstractModel
                {
                public:
                    Medicine();
                    ~Medicine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品名
                     * @return Name 药品名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置药品名
                     * @param _name 药品名
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
                     * 获取商品名
                     * @return TradeName 商品名
                     * 
                     */
                    std::string GetTradeName() const;

                    /**
                     * 设置商品名
                     * @param _tradeName 商品名
                     * 
                     */
                    void SetTradeName(const std::string& _tradeName);

                    /**
                     * 判断参数 TradeName 是否已赋值
                     * @return TradeName 是否已赋值
                     * 
                     */
                    bool TradeNameHasBeenSet() const;

                    /**
                     * 获取厂商
                     * @return Firm 厂商
                     * 
                     */
                    std::string GetFirm() const;

                    /**
                     * 设置厂商
                     * @param _firm 厂商
                     * 
                     */
                    void SetFirm(const std::string& _firm);

                    /**
                     * 判断参数 Firm 是否已赋值
                     * @return Firm 是否已赋值
                     * 
                     */
                    bool FirmHasBeenSet() const;

                    /**
                     * 获取医保类型
                     * @return Category 医保类型
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置医保类型
                     * @param _category 医保类型
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取规格
                     * @return Specification 规格
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置规格
                     * @param _specification 规格
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取最小包装数量
                     * @return MinQuantity 最小包装数量
                     * 
                     */
                    std::string GetMinQuantity() const;

                    /**
                     * 设置最小包装数量
                     * @param _minQuantity 最小包装数量
                     * 
                     */
                    void SetMinQuantity(const std::string& _minQuantity);

                    /**
                     * 判断参数 MinQuantity 是否已赋值
                     * @return MinQuantity 是否已赋值
                     * 
                     */
                    bool MinQuantityHasBeenSet() const;

                    /**
                     * 获取最小制剂单位
                     * @return DosageUnit 最小制剂单位
                     * 
                     */
                    std::string GetDosageUnit() const;

                    /**
                     * 设置最小制剂单位
                     * @param _dosageUnit 最小制剂单位
                     * 
                     */
                    void SetDosageUnit(const std::string& _dosageUnit);

                    /**
                     * 判断参数 DosageUnit 是否已赋值
                     * @return DosageUnit 是否已赋值
                     * 
                     */
                    bool DosageUnitHasBeenSet() const;

                    /**
                     * 获取最小包装单位
                     * @return PackingUnit 最小包装单位
                     * 
                     */
                    std::string GetPackingUnit() const;

                    /**
                     * 设置最小包装单位
                     * @param _packingUnit 最小包装单位
                     * 
                     */
                    void SetPackingUnit(const std::string& _packingUnit);

                    /**
                     * 判断参数 PackingUnit 是否已赋值
                     * @return PackingUnit 是否已赋值
                     * 
                     */
                    bool PackingUnitHasBeenSet() const;

                private:

                    /**
                     * 药品名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 商品名
                     */
                    std::string m_tradeName;
                    bool m_tradeNameHasBeenSet;

                    /**
                     * 厂商
                     */
                    std::string m_firm;
                    bool m_firmHasBeenSet;

                    /**
                     * 医保类型
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 规格
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 最小包装数量
                     */
                    std::string m_minQuantity;
                    bool m_minQuantityHasBeenSet;

                    /**
                     * 最小制剂单位
                     */
                    std::string m_dosageUnit;
                    bool m_dosageUnitHasBeenSet;

                    /**
                     * 最小包装单位
                     */
                    std::string m_packingUnit;
                    bool m_packingUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MEDICINE_H_
