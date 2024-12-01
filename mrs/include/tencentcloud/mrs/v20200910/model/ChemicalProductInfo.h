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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoName.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoActiveIngredient.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoAppearance.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoIndications.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoBrochure.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoDosage.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoAdverseReaction.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoContraindications.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoPrecautions.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoPregnancyLactationUse.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoPediatricUse.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoGeriatricUse.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoInteractions.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoOverdose.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoClinicalTrial.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoPharmacologyToxicology.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoPharmacokinetics.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoStorage.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoPackaging.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoValidityPeriod.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoExecutiveStandards.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoApproval.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoManufacturer.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 药品说明书消息定义
                */
                class ChemicalProductInfo : public AbstractModel
                {
                public:
                    ChemicalProductInfo();
                    ~ChemicalProductInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品名称，包括通用名和商品名
                     * @return Name 药品名称，包括通用名和商品名
                     * 
                     */
                    ChemicalProductInfoName GetName() const;

                    /**
                     * 设置药品名称，包括通用名和商品名
                     * @param _name 药品名称，包括通用名和商品名
                     * 
                     */
                    void SetName(const ChemicalProductInfoName& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取活性成份消息定义，如果是复方制剂，可以不列出每个活性成份的详细信息
                     * @return ActiveIngredient 活性成份消息定义，如果是复方制剂，可以不列出每个活性成份的详细信息
                     * 
                     */
                    ChemicalProductInfoActiveIngredient GetActiveIngredient() const;

                    /**
                     * 设置活性成份消息定义，如果是复方制剂，可以不列出每个活性成份的详细信息
                     * @param _activeIngredient 活性成份消息定义，如果是复方制剂，可以不列出每个活性成份的详细信息
                     * 
                     */
                    void SetActiveIngredient(const ChemicalProductInfoActiveIngredient& _activeIngredient);

                    /**
                     * 判断参数 ActiveIngredient 是否已赋值
                     * @return ActiveIngredient 是否已赋值
                     * 
                     */
                    bool ActiveIngredientHasBeenSet() const;

                    /**
                     * 获取性状
                     * @return Appearance 性状
                     * 
                     */
                    ChemicalProductInfoAppearance GetAppearance() const;

                    /**
                     * 设置性状
                     * @param _appearance 性状
                     * 
                     */
                    void SetAppearance(const ChemicalProductInfoAppearance& _appearance);

                    /**
                     * 判断参数 Appearance 是否已赋值
                     * @return Appearance 是否已赋值
                     * 
                     */
                    bool AppearanceHasBeenSet() const;

                    /**
                     * 获取适应症描述
                     * @return Indications 适应症描述
                     * 
                     */
                    ChemicalProductInfoIndications GetIndications() const;

                    /**
                     * 设置适应症描述
                     * @param _indications 适应症描述
                     * 
                     */
                    void SetIndications(const ChemicalProductInfoIndications& _indications);

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
                    ChemicalProductInfoBrochure GetBrochure() const;

                    /**
                     * 设置规格
                     * @param _brochure 规格
                     * 
                     */
                    void SetBrochure(const ChemicalProductInfoBrochure& _brochure);

                    /**
                     * 判断参数 Brochure 是否已赋值
                     * @return Brochure 是否已赋值
                     * 
                     */
                    bool BrochureHasBeenSet() const;

                    /**
                     * 获取用法用量
                     * @return Dosage 用法用量
                     * 
                     */
                    ChemicalProductInfoDosage GetDosage() const;

                    /**
                     * 设置用法用量
                     * @param _dosage 用法用量
                     * 
                     */
                    void SetDosage(const ChemicalProductInfoDosage& _dosage);

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
                    ChemicalProductInfoAdverseReaction GetAdverseReaction() const;

                    /**
                     * 设置不良反应
                     * @param _adverseReaction 不良反应
                     * 
                     */
                    void SetAdverseReaction(const ChemicalProductInfoAdverseReaction& _adverseReaction);

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
                    ChemicalProductInfoContraindications GetContraindications() const;

                    /**
                     * 设置禁忌情况
                     * @param _contraindications 禁忌情况
                     * 
                     */
                    void SetContraindications(const ChemicalProductInfoContraindications& _contraindications);

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
                    ChemicalProductInfoPrecautions GetPrecautions() const;

                    /**
                     * 设置注意事项
                     * @param _precautions 注意事项
                     * 
                     */
                    void SetPrecautions(const ChemicalProductInfoPrecautions& _precautions);

                    /**
                     * 判断参数 Precautions 是否已赋值
                     * @return Precautions 是否已赋值
                     * 
                     */
                    bool PrecautionsHasBeenSet() const;

                    /**
                     * 获取孕妇及哺乳期妇女用药
                     * @return PregnancyLactationUse 孕妇及哺乳期妇女用药
                     * 
                     */
                    ChemicalProductInfoPregnancyLactationUse GetPregnancyLactationUse() const;

                    /**
                     * 设置孕妇及哺乳期妇女用药
                     * @param _pregnancyLactationUse 孕妇及哺乳期妇女用药
                     * 
                     */
                    void SetPregnancyLactationUse(const ChemicalProductInfoPregnancyLactationUse& _pregnancyLactationUse);

                    /**
                     * 判断参数 PregnancyLactationUse 是否已赋值
                     * @return PregnancyLactationUse 是否已赋值
                     * 
                     */
                    bool PregnancyLactationUseHasBeenSet() const;

                    /**
                     * 获取儿童用药
                     * @return PediatricUse 儿童用药
                     * 
                     */
                    ChemicalProductInfoPediatricUse GetPediatricUse() const;

                    /**
                     * 设置儿童用药
                     * @param _pediatricUse 儿童用药
                     * 
                     */
                    void SetPediatricUse(const ChemicalProductInfoPediatricUse& _pediatricUse);

                    /**
                     * 判断参数 PediatricUse 是否已赋值
                     * @return PediatricUse 是否已赋值
                     * 
                     */
                    bool PediatricUseHasBeenSet() const;

                    /**
                     * 获取老年用药
                     * @return GeriatricUse 老年用药
                     * 
                     */
                    ChemicalProductInfoGeriatricUse GetGeriatricUse() const;

                    /**
                     * 设置老年用药
                     * @param _geriatricUse 老年用药
                     * 
                     */
                    void SetGeriatricUse(const ChemicalProductInfoGeriatricUse& _geriatricUse);

                    /**
                     * 判断参数 GeriatricUse 是否已赋值
                     * @return GeriatricUse 是否已赋值
                     * 
                     */
                    bool GeriatricUseHasBeenSet() const;

                    /**
                     * 获取药品的药物相互作用
                     * @return Interactions 药品的药物相互作用
                     * 
                     */
                    ChemicalProductInfoInteractions GetInteractions() const;

                    /**
                     * 设置药品的药物相互作用
                     * @param _interactions 药品的药物相互作用
                     * 
                     */
                    void SetInteractions(const ChemicalProductInfoInteractions& _interactions);

                    /**
                     * 判断参数 Interactions 是否已赋值
                     * @return Interactions 是否已赋值
                     * 
                     */
                    bool InteractionsHasBeenSet() const;

                    /**
                     * 获取药物过量
                     * @return Overdose 药物过量
                     * 
                     */
                    ChemicalProductInfoOverdose GetOverdose() const;

                    /**
                     * 设置药物过量
                     * @param _overdose 药物过量
                     * 
                     */
                    void SetOverdose(const ChemicalProductInfoOverdose& _overdose);

                    /**
                     * 判断参数 Overdose 是否已赋值
                     * @return Overdose 是否已赋值
                     * 
                     */
                    bool OverdoseHasBeenSet() const;

                    /**
                     * 获取临床试验
                     * @return ClinicalTrial 临床试验
                     * 
                     */
                    ChemicalProductInfoClinicalTrial GetClinicalTrial() const;

                    /**
                     * 设置临床试验
                     * @param _clinicalTrial 临床试验
                     * 
                     */
                    void SetClinicalTrial(const ChemicalProductInfoClinicalTrial& _clinicalTrial);

                    /**
                     * 判断参数 ClinicalTrial 是否已赋值
                     * @return ClinicalTrial 是否已赋值
                     * 
                     */
                    bool ClinicalTrialHasBeenSet() const;

                    /**
                     * 获取药理毒理
                     * @return PharmacologyToxicology 药理毒理
                     * 
                     */
                    ChemicalProductInfoPharmacologyToxicology GetPharmacologyToxicology() const;

                    /**
                     * 设置药理毒理
                     * @param _pharmacologyToxicology 药理毒理
                     * 
                     */
                    void SetPharmacologyToxicology(const ChemicalProductInfoPharmacologyToxicology& _pharmacologyToxicology);

                    /**
                     * 判断参数 PharmacologyToxicology 是否已赋值
                     * @return PharmacologyToxicology 是否已赋值
                     * 
                     */
                    bool PharmacologyToxicologyHasBeenSet() const;

                    /**
                     * 获取药代动力学
                     * @return Pharmacokinetics 药代动力学
                     * 
                     */
                    ChemicalProductInfoPharmacokinetics GetPharmacokinetics() const;

                    /**
                     * 设置药代动力学
                     * @param _pharmacokinetics 药代动力学
                     * 
                     */
                    void SetPharmacokinetics(const ChemicalProductInfoPharmacokinetics& _pharmacokinetics);

                    /**
                     * 判断参数 Pharmacokinetics 是否已赋值
                     * @return Pharmacokinetics 是否已赋值
                     * 
                     */
                    bool PharmacokineticsHasBeenSet() const;

                    /**
                     * 获取储存条件
                     * @return Storage 储存条件
                     * 
                     */
                    ChemicalProductInfoStorage GetStorage() const;

                    /**
                     * 设置储存条件
                     * @param _storage 储存条件
                     * 
                     */
                    void SetStorage(const ChemicalProductInfoStorage& _storage);

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
                    ChemicalProductInfoPackaging GetPackaging() const;

                    /**
                     * 设置包装信息
                     * @param _packaging 包装信息
                     * 
                     */
                    void SetPackaging(const ChemicalProductInfoPackaging& _packaging);

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
                    ChemicalProductInfoValidityPeriod GetValidityPeriod() const;

                    /**
                     * 设置有效期
                     * @param _validityPeriod 有效期
                     * 
                     */
                    void SetValidityPeriod(const ChemicalProductInfoValidityPeriod& _validityPeriod);

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
                    ChemicalProductInfoExecutiveStandards GetExecutiveStandards() const;

                    /**
                     * 设置执行标准
                     * @param _executiveStandards 执行标准
                     * 
                     */
                    void SetExecutiveStandards(const ChemicalProductInfoExecutiveStandards& _executiveStandards);

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
                    ChemicalProductInfoApproval GetApproval() const;

                    /**
                     * 设置批准文号
                     * @param _approval 批准文号
                     * 
                     */
                    void SetApproval(const ChemicalProductInfoApproval& _approval);

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
                    ChemicalProductInfoManufacturer GetManufacturer() const;

                    /**
                     * 设置生产企业名称和地址
                     * @param _manufacturer 生产企业名称和地址
                     * 
                     */
                    void SetManufacturer(const ChemicalProductInfoManufacturer& _manufacturer);

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
                    ChemicalProductInfoName m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 活性成份消息定义，如果是复方制剂，可以不列出每个活性成份的详细信息
                     */
                    ChemicalProductInfoActiveIngredient m_activeIngredient;
                    bool m_activeIngredientHasBeenSet;

                    /**
                     * 性状
                     */
                    ChemicalProductInfoAppearance m_appearance;
                    bool m_appearanceHasBeenSet;

                    /**
                     * 适应症描述
                     */
                    ChemicalProductInfoIndications m_indications;
                    bool m_indicationsHasBeenSet;

                    /**
                     * 规格
                     */
                    ChemicalProductInfoBrochure m_brochure;
                    bool m_brochureHasBeenSet;

                    /**
                     * 用法用量
                     */
                    ChemicalProductInfoDosage m_dosage;
                    bool m_dosageHasBeenSet;

                    /**
                     * 不良反应
                     */
                    ChemicalProductInfoAdverseReaction m_adverseReaction;
                    bool m_adverseReactionHasBeenSet;

                    /**
                     * 禁忌情况
                     */
                    ChemicalProductInfoContraindications m_contraindications;
                    bool m_contraindicationsHasBeenSet;

                    /**
                     * 注意事项
                     */
                    ChemicalProductInfoPrecautions m_precautions;
                    bool m_precautionsHasBeenSet;

                    /**
                     * 孕妇及哺乳期妇女用药
                     */
                    ChemicalProductInfoPregnancyLactationUse m_pregnancyLactationUse;
                    bool m_pregnancyLactationUseHasBeenSet;

                    /**
                     * 儿童用药
                     */
                    ChemicalProductInfoPediatricUse m_pediatricUse;
                    bool m_pediatricUseHasBeenSet;

                    /**
                     * 老年用药
                     */
                    ChemicalProductInfoGeriatricUse m_geriatricUse;
                    bool m_geriatricUseHasBeenSet;

                    /**
                     * 药品的药物相互作用
                     */
                    ChemicalProductInfoInteractions m_interactions;
                    bool m_interactionsHasBeenSet;

                    /**
                     * 药物过量
                     */
                    ChemicalProductInfoOverdose m_overdose;
                    bool m_overdoseHasBeenSet;

                    /**
                     * 临床试验
                     */
                    ChemicalProductInfoClinicalTrial m_clinicalTrial;
                    bool m_clinicalTrialHasBeenSet;

                    /**
                     * 药理毒理
                     */
                    ChemicalProductInfoPharmacologyToxicology m_pharmacologyToxicology;
                    bool m_pharmacologyToxicologyHasBeenSet;

                    /**
                     * 药代动力学
                     */
                    ChemicalProductInfoPharmacokinetics m_pharmacokinetics;
                    bool m_pharmacokineticsHasBeenSet;

                    /**
                     * 储存条件
                     */
                    ChemicalProductInfoStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 包装信息
                     */
                    ChemicalProductInfoPackaging m_packaging;
                    bool m_packagingHasBeenSet;

                    /**
                     * 有效期
                     */
                    ChemicalProductInfoValidityPeriod m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * 执行标准
                     */
                    ChemicalProductInfoExecutiveStandards m_executiveStandards;
                    bool m_executiveStandardsHasBeenSet;

                    /**
                     * 批准文号
                     */
                    ChemicalProductInfoApproval m_approval;
                    bool m_approvalHasBeenSet;

                    /**
                     * 生产企业名称和地址
                     */
                    ChemicalProductInfoManufacturer m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFO_H_
