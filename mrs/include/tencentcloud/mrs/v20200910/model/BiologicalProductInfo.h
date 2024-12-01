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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_BIOLOGICALPRODUCTINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_BIOLOGICALPRODUCTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoName.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoIngredientAndAppearance.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoVaccinationTarget.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoIndications.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoBrochure.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoDosage.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoAdverseReaction.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoContraindications.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoPrecautions.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoStorage.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoPackaging.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoValidityPeriod.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoExecutiveStandards.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoApproval.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfoManufacturer.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 预防用生物制品说明书
                */
                class BiologicalProductInfo : public AbstractModel
                {
                public:
                    BiologicalProductInfo();
                    ~BiologicalProductInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品名称，包括通用名和商品名
                     * @return Name 药品名称，包括通用名和商品名
                     * 
                     */
                    BiologicalProductInfoName GetName() const;

                    /**
                     * 设置药品名称，包括通用名和商品名
                     * @param _name 药品名称，包括通用名和商品名
                     * 
                     */
                    void SetName(const BiologicalProductInfoName& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取成份和性状
                     * @return IngredientAndAppearance 成份和性状
                     * 
                     */
                    BiologicalProductInfoIngredientAndAppearance GetIngredientAndAppearance() const;

                    /**
                     * 设置成份和性状
                     * @param _ingredientAndAppearance 成份和性状
                     * 
                     */
                    void SetIngredientAndAppearance(const BiologicalProductInfoIngredientAndAppearance& _ingredientAndAppearance);

                    /**
                     * 判断参数 IngredientAndAppearance 是否已赋值
                     * @return IngredientAndAppearance 是否已赋值
                     * 
                     */
                    bool IngredientAndAppearanceHasBeenSet() const;

                    /**
                     * 获取接种对象
                     * @return VaccinationTarget 接种对象
                     * 
                     */
                    BiologicalProductInfoVaccinationTarget GetVaccinationTarget() const;

                    /**
                     * 设置接种对象
                     * @param _vaccinationTarget 接种对象
                     * 
                     */
                    void SetVaccinationTarget(const BiologicalProductInfoVaccinationTarget& _vaccinationTarget);

                    /**
                     * 判断参数 VaccinationTarget 是否已赋值
                     * @return VaccinationTarget 是否已赋值
                     * 
                     */
                    bool VaccinationTargetHasBeenSet() const;

                    /**
                     * 获取作用与用途
                     * @return Indications 作用与用途
                     * 
                     */
                    BiologicalProductInfoIndications GetIndications() const;

                    /**
                     * 设置作用与用途
                     * @param _indications 作用与用途
                     * 
                     */
                    void SetIndications(const BiologicalProductInfoIndications& _indications);

                    /**
                     * 判断参数 Indications 是否已赋值
                     * @return Indications 是否已赋值
                     * 
                     */
                    bool IndicationsHasBeenSet() const;

                    /**
                     * 获取规格
                     * @return Brochure 规格
                     * 
                     */
                    BiologicalProductInfoBrochure GetBrochure() const;

                    /**
                     * 设置规格
                     * @param _brochure 规格
                     * 
                     */
                    void SetBrochure(const BiologicalProductInfoBrochure& _brochure);

                    /**
                     * 判断参数 Brochure 是否已赋值
                     * @return Brochure 是否已赋值
                     * 
                     */
                    bool BrochureHasBeenSet() const;

                    /**
                     * 获取免疫程序和剂量
                     * @return Dosage 免疫程序和剂量
                     * 
                     */
                    BiologicalProductInfoDosage GetDosage() const;

                    /**
                     * 设置免疫程序和剂量
                     * @param _dosage 免疫程序和剂量
                     * 
                     */
                    void SetDosage(const BiologicalProductInfoDosage& _dosage);

                    /**
                     * 判断参数 Dosage 是否已赋值
                     * @return Dosage 是否已赋值
                     * 
                     */
                    bool DosageHasBeenSet() const;

                    /**
                     * 获取不良反应
                     * @return AdverseReaction 不良反应
                     * 
                     */
                    BiologicalProductInfoAdverseReaction GetAdverseReaction() const;

                    /**
                     * 设置不良反应
                     * @param _adverseReaction 不良反应
                     * 
                     */
                    void SetAdverseReaction(const BiologicalProductInfoAdverseReaction& _adverseReaction);

                    /**
                     * 判断参数 AdverseReaction 是否已赋值
                     * @return AdverseReaction 是否已赋值
                     * 
                     */
                    bool AdverseReactionHasBeenSet() const;

                    /**
                     * 获取禁忌情况
                     * @return Contraindications 禁忌情况
                     * 
                     */
                    BiologicalProductInfoContraindications GetContraindications() const;

                    /**
                     * 设置禁忌情况
                     * @param _contraindications 禁忌情况
                     * 
                     */
                    void SetContraindications(const BiologicalProductInfoContraindications& _contraindications);

                    /**
                     * 判断参数 Contraindications 是否已赋值
                     * @return Contraindications 是否已赋值
                     * 
                     */
                    bool ContraindicationsHasBeenSet() const;

                    /**
                     * 获取注意事项
                     * @return Precautions 注意事项
                     * 
                     */
                    BiologicalProductInfoPrecautions GetPrecautions() const;

                    /**
                     * 设置注意事项
                     * @param _precautions 注意事项
                     * 
                     */
                    void SetPrecautions(const BiologicalProductInfoPrecautions& _precautions);

                    /**
                     * 判断参数 Precautions 是否已赋值
                     * @return Precautions 是否已赋值
                     * 
                     */
                    bool PrecautionsHasBeenSet() const;

                    /**
                     * 获取储存条件
                     * @return Storage 储存条件
                     * 
                     */
                    BiologicalProductInfoStorage GetStorage() const;

                    /**
                     * 设置储存条件
                     * @param _storage 储存条件
                     * 
                     */
                    void SetStorage(const BiologicalProductInfoStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取包装信息
                     * @return Packaging 包装信息
                     * 
                     */
                    BiologicalProductInfoPackaging GetPackaging() const;

                    /**
                     * 设置包装信息
                     * @param _packaging 包装信息
                     * 
                     */
                    void SetPackaging(const BiologicalProductInfoPackaging& _packaging);

                    /**
                     * 判断参数 Packaging 是否已赋值
                     * @return Packaging 是否已赋值
                     * 
                     */
                    bool PackagingHasBeenSet() const;

                    /**
                     * 获取有效期
                     * @return ValidityPeriod 有效期
                     * 
                     */
                    BiologicalProductInfoValidityPeriod GetValidityPeriod() const;

                    /**
                     * 设置有效期
                     * @param _validityPeriod 有效期
                     * 
                     */
                    void SetValidityPeriod(const BiologicalProductInfoValidityPeriod& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取执行标准
                     * @return ExecutiveStandards 执行标准
                     * 
                     */
                    BiologicalProductInfoExecutiveStandards GetExecutiveStandards() const;

                    /**
                     * 设置执行标准
                     * @param _executiveStandards 执行标准
                     * 
                     */
                    void SetExecutiveStandards(const BiologicalProductInfoExecutiveStandards& _executiveStandards);

                    /**
                     * 判断参数 ExecutiveStandards 是否已赋值
                     * @return ExecutiveStandards 是否已赋值
                     * 
                     */
                    bool ExecutiveStandardsHasBeenSet() const;

                    /**
                     * 获取批准文号
                     * @return Approval 批准文号
                     * 
                     */
                    BiologicalProductInfoApproval GetApproval() const;

                    /**
                     * 设置批准文号
                     * @param _approval 批准文号
                     * 
                     */
                    void SetApproval(const BiologicalProductInfoApproval& _approval);

                    /**
                     * 判断参数 Approval 是否已赋值
                     * @return Approval 是否已赋值
                     * 
                     */
                    bool ApprovalHasBeenSet() const;

                    /**
                     * 获取生产企业名称和地址
                     * @return Manufacturer 生产企业名称和地址
                     * 
                     */
                    BiologicalProductInfoManufacturer GetManufacturer() const;

                    /**
                     * 设置生产企业名称和地址
                     * @param _manufacturer 生产企业名称和地址
                     * 
                     */
                    void SetManufacturer(const BiologicalProductInfoManufacturer& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                private:

                    /**
                     * 药品名称，包括通用名和商品名
                     */
                    BiologicalProductInfoName m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 成份和性状
                     */
                    BiologicalProductInfoIngredientAndAppearance m_ingredientAndAppearance;
                    bool m_ingredientAndAppearanceHasBeenSet;

                    /**
                     * 接种对象
                     */
                    BiologicalProductInfoVaccinationTarget m_vaccinationTarget;
                    bool m_vaccinationTargetHasBeenSet;

                    /**
                     * 作用与用途
                     */
                    BiologicalProductInfoIndications m_indications;
                    bool m_indicationsHasBeenSet;

                    /**
                     * 规格
                     */
                    BiologicalProductInfoBrochure m_brochure;
                    bool m_brochureHasBeenSet;

                    /**
                     * 免疫程序和剂量
                     */
                    BiologicalProductInfoDosage m_dosage;
                    bool m_dosageHasBeenSet;

                    /**
                     * 不良反应
                     */
                    BiologicalProductInfoAdverseReaction m_adverseReaction;
                    bool m_adverseReactionHasBeenSet;

                    /**
                     * 禁忌情况
                     */
                    BiologicalProductInfoContraindications m_contraindications;
                    bool m_contraindicationsHasBeenSet;

                    /**
                     * 注意事项
                     */
                    BiologicalProductInfoPrecautions m_precautions;
                    bool m_precautionsHasBeenSet;

                    /**
                     * 储存条件
                     */
                    BiologicalProductInfoStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 包装信息
                     */
                    BiologicalProductInfoPackaging m_packaging;
                    bool m_packagingHasBeenSet;

                    /**
                     * 有效期
                     */
                    BiologicalProductInfoValidityPeriod m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * 执行标准
                     */
                    BiologicalProductInfoExecutiveStandards m_executiveStandards;
                    bool m_executiveStandardsHasBeenSet;

                    /**
                     * 批准文号
                     */
                    BiologicalProductInfoApproval m_approval;
                    bool m_approvalHasBeenSet;

                    /**
                     * 生产企业名称和地址
                     */
                    BiologicalProductInfoManufacturer m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_BIOLOGICALPRODUCTINFO_H_
