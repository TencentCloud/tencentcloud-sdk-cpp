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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_DURGPROPERTYINFO_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_DURGPROPERTYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 药品属性
                */
                class DurgPropertyInfo : public AbstractModel
                {
                public:
                    DurgPropertyInfo();
                    ~DurgPropertyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品类型 1:西药,2:中成药,3:中药,4:化学药品,5:生物制药
                     * @return DrugType 药品类型 1:西药,2:中成药,3:中药,4:化学药品,5:生物制药
                     * 
                     */
                    int64_t GetDrugType() const;

                    /**
                     * 设置药品类型 1:西药,2:中成药,3:中药,4:化学药品,5:生物制药
                     * @param _drugType 药品类型 1:西药,2:中成药,3:中药,4:化学药品,5:生物制药
                     * 
                     */
                    void SetDrugType(const int64_t& _drugType);

                    /**
                     * 判断参数 DrugType 是否已赋值
                     * @return DrugType 是否已赋值
                     * 
                     */
                    bool DrugTypeHasBeenSet() const;

                    /**
                     * 获取抗菌药分类 1:抗真菌药物, 2:抗细菌药物, 3:抗结核药物, 4:其他抗菌药, 0:普通药品
                     * @return AntibacterialType 抗菌药分类 1:抗真菌药物, 2:抗细菌药物, 3:抗结核药物, 4:其他抗菌药, 0:普通药品
                     * 
                     */
                    int64_t GetAntibacterialType() const;

                    /**
                     * 设置抗菌药分类 1:抗真菌药物, 2:抗细菌药物, 3:抗结核药物, 4:其他抗菌药, 0:普通药品
                     * @param _antibacterialType 抗菌药分类 1:抗真菌药物, 2:抗细菌药物, 3:抗结核药物, 4:其他抗菌药, 0:普通药品
                     * 
                     */
                    void SetAntibacterialType(const int64_t& _antibacterialType);

                    /**
                     * 判断参数 AntibacterialType 是否已赋值
                     * @return AntibacterialType 是否已赋值
                     * 
                     */
                    bool AntibacterialTypeHasBeenSet() const;

                    /**
                     * 获取抗菌药级别 1:非限制级, 2:限制级, 3:特殊使用级 
                     * @return AntibacterialClass 抗菌药级别 1:非限制级, 2:限制级, 3:特殊使用级 
                     * 
                     */
                    int64_t GetAntibacterialClass() const;

                    /**
                     * 设置抗菌药级别 1:非限制级, 2:限制级, 3:特殊使用级 
                     * @param _antibacterialClass 抗菌药级别 1:非限制级, 2:限制级, 3:特殊使用级 
                     * 
                     */
                    void SetAntibacterialClass(const int64_t& _antibacterialClass);

                    /**
                     * 判断参数 AntibacterialClass 是否已赋值
                     * @return AntibacterialClass 是否已赋值
                     * 
                     */
                    bool AntibacterialClassHasBeenSet() const;

                    /**
                     * 获取特殊药品类型 1:毒性药品, 2:麻醉药品, 3:放射药品, 4:精神一类药品, 5:精神二类药品, 6:其他特管药品， 7:贵重药品
                     * @return SpeciallyDrugType 特殊药品类型 1:毒性药品, 2:麻醉药品, 3:放射药品, 4:精神一类药品, 5:精神二类药品, 6:其他特管药品， 7:贵重药品
                     * 
                     */
                    int64_t GetSpeciallyDrugType() const;

                    /**
                     * 设置特殊药品类型 1:毒性药品, 2:麻醉药品, 3:放射药品, 4:精神一类药品, 5:精神二类药品, 6:其他特管药品， 7:贵重药品
                     * @param _speciallyDrugType 特殊药品类型 1:毒性药品, 2:麻醉药品, 3:放射药品, 4:精神一类药品, 5:精神二类药品, 6:其他特管药品， 7:贵重药品
                     * 
                     */
                    void SetSpeciallyDrugType(const int64_t& _speciallyDrugType);

                    /**
                     * 判断参数 SpeciallyDrugType 是否已赋值
                     * @return SpeciallyDrugType 是否已赋值
                     * 
                     */
                    bool SpeciallyDrugTypeHasBeenSet() const;

                    /**
                     * 获取是否为基本药物 1:是, 2:否, 0:未知
                     * @return IsBasicDrug 是否为基本药物 1:是, 2:否, 0:未知
                     * 
                     */
                    int64_t GetIsBasicDrug() const;

                    /**
                     * 设置是否为基本药物 1:是, 2:否, 0:未知
                     * @param _isBasicDrug 是否为基本药物 1:是, 2:否, 0:未知
                     * 
                     */
                    void SetIsBasicDrug(const int64_t& _isBasicDrug);

                    /**
                     * 判断参数 IsBasicDrug 是否已赋值
                     * @return IsBasicDrug 是否已赋值
                     * 
                     */
                    bool IsBasicDrugHasBeenSet() const;

                    /**
                     * 获取社保药品 1:甲类药品, 2:乙类药品, 3:双跨药品, 4:自费药品, 0:未知
                     * @return ChargeType 社保药品 1:甲类药品, 2:乙类药品, 3:双跨药品, 4:自费药品, 0:未知
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置社保药品 1:甲类药品, 2:乙类药品, 3:双跨药品, 4:自费药品, 0:未知
                     * @param _chargeType 社保药品 1:甲类药品, 2:乙类药品, 3:双跨药品, 4:自费药品, 0:未知
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                private:

                    /**
                     * 药品类型 1:西药,2:中成药,3:中药,4:化学药品,5:生物制药
                     */
                    int64_t m_drugType;
                    bool m_drugTypeHasBeenSet;

                    /**
                     * 抗菌药分类 1:抗真菌药物, 2:抗细菌药物, 3:抗结核药物, 4:其他抗菌药, 0:普通药品
                     */
                    int64_t m_antibacterialType;
                    bool m_antibacterialTypeHasBeenSet;

                    /**
                     * 抗菌药级别 1:非限制级, 2:限制级, 3:特殊使用级 
                     */
                    int64_t m_antibacterialClass;
                    bool m_antibacterialClassHasBeenSet;

                    /**
                     * 特殊药品类型 1:毒性药品, 2:麻醉药品, 3:放射药品, 4:精神一类药品, 5:精神二类药品, 6:其他特管药品， 7:贵重药品
                     */
                    int64_t m_speciallyDrugType;
                    bool m_speciallyDrugTypeHasBeenSet;

                    /**
                     * 是否为基本药物 1:是, 2:否, 0:未知
                     */
                    int64_t m_isBasicDrug;
                    bool m_isBasicDrugHasBeenSet;

                    /**
                     * 社保药品 1:甲类药品, 2:乙类药品, 3:双跨药品, 4:自费药品, 0:未知
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_DURGPROPERTYINFO_H_
