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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_SMARTDRUGINFORESP_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_SMARTDRUGINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/RecommendedUsage.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 智能用药响应
                */
                class SmartDrugInfoResp : public AbstractModel
                {
                public:
                    SmartDrugInfoResp();
                    ~SmartDrugInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品ID
                     * @return DrugId 药品ID
                     * 
                     */
                    std::string GetDrugId() const;

                    /**
                     * 设置药品ID
                     * @param _drugId 药品ID
                     * 
                     */
                    void SetDrugId(const std::string& _drugId);

                    /**
                     * 判断参数 DrugId 是否已赋值
                     * @return DrugId 是否已赋值
                     * 
                     */
                    bool DrugIdHasBeenSet() const;

                    /**
                     * 获取序列ID
                     * @return SequenceId 序列ID
                     * 
                     */
                    int64_t GetSequenceId() const;

                    /**
                     * 设置序列ID
                     * @param _sequenceId 序列ID
                     * 
                     */
                    void SetSequenceId(const int64_t& _sequenceId);

                    /**
                     * 判断参数 SequenceId 是否已赋值
                     * @return SequenceId 是否已赋值
                     * 
                     */
                    bool SequenceIdHasBeenSet() const;

                    /**
                     * 获取药品哈希ID
                     * @return DrugHashId 药品哈希ID
                     * 
                     */
                    std::string GetDrugHashId() const;

                    /**
                     * 设置药品哈希ID
                     * @param _drugHashId 药品哈希ID
                     * 
                     */
                    void SetDrugHashId(const std::string& _drugHashId);

                    /**
                     * 判断参数 DrugHashId 是否已赋值
                     * @return DrugHashId 是否已赋值
                     * 
                     */
                    bool DrugHashIdHasBeenSet() const;

                    /**
                     * 获取图片URL
                     * @return ImgUrl 图片URL
                     * 
                     */
                    std::string GetImgUrl() const;

                    /**
                     * 设置图片URL
                     * @param _imgUrl 图片URL
                     * 
                     */
                    void SetImgUrl(const std::string& _imgUrl);

                    /**
                     * 判断参数 ImgUrl 是否已赋值
                     * @return ImgUrl 是否已赋值
                     * 
                     */
                    bool ImgUrlHasBeenSet() const;

                    /**
                     * 获取药品名称
                     * @return DrugName 药品名称
                     * 
                     */
                    std::string GetDrugName() const;

                    /**
                     * 设置药品名称
                     * @param _drugName 药品名称
                     * 
                     */
                    void SetDrugName(const std::string& _drugName);

                    /**
                     * 判断参数 DrugName 是否已赋值
                     * @return DrugName 是否已赋值
                     * 
                     */
                    bool DrugNameHasBeenSet() const;

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
                     * 获取英文名称
                     * @return EnglishName 英文名称
                     * 
                     */
                    std::string GetEnglishName() const;

                    /**
                     * 设置英文名称
                     * @param _englishName 英文名称
                     * 
                     */
                    void SetEnglishName(const std::string& _englishName);

                    /**
                     * 判断参数 EnglishName 是否已赋值
                     * @return EnglishName 是否已赋值
                     * 
                     */
                    bool EnglishNameHasBeenSet() const;

                    /**
                     * 获取英文商品名
                     * @return EnglishTradeName 英文商品名
                     * 
                     */
                    std::string GetEnglishTradeName() const;

                    /**
                     * 设置英文商品名
                     * @param _englishTradeName 英文商品名
                     * 
                     */
                    void SetEnglishTradeName(const std::string& _englishTradeName);

                    /**
                     * 判断参数 EnglishTradeName 是否已赋值
                     * @return EnglishTradeName 是否已赋值
                     * 
                     */
                    bool EnglishTradeNameHasBeenSet() const;

                    /**
                     * 获取拼音
                     * @return Pinyin 拼音
                     * 
                     */
                    std::string GetPinyin() const;

                    /**
                     * 设置拼音
                     * @param _pinyin 拼音
                     * 
                     */
                    void SetPinyin(const std::string& _pinyin);

                    /**
                     * 判断参数 Pinyin 是否已赋值
                     * @return Pinyin 是否已赋值
                     * 
                     */
                    bool PinyinHasBeenSet() const;

                    /**
                     * 获取其他名称
                     * @return OtherNames 其他名称
                     * 
                     */
                    std::string GetOtherNames() const;

                    /**
                     * 设置其他名称
                     * @param _otherNames 其他名称
                     * 
                     */
                    void SetOtherNames(const std::string& _otherNames);

                    /**
                     * 判断参数 OtherNames 是否已赋值
                     * @return OtherNames 是否已赋值
                     * 
                     */
                    bool OtherNamesHasBeenSet() const;

                    /**
                     * 获取化学名称
                     * @return ChemicalName 化学名称
                     * 
                     */
                    std::string GetChemicalName() const;

                    /**
                     * 设置化学名称
                     * @param _chemicalName 化学名称
                     * 
                     */
                    void SetChemicalName(const std::string& _chemicalName);

                    /**
                     * 判断参数 ChemicalName 是否已赋值
                     * @return ChemicalName 是否已赋值
                     * 
                     */
                    bool ChemicalNameHasBeenSet() const;

                    /**
                     * 获取英文化学名称
                     * @return EnglishChemicalName 英文化学名称
                     * 
                     */
                    std::string GetEnglishChemicalName() const;

                    /**
                     * 设置英文化学名称
                     * @param _englishChemicalName 英文化学名称
                     * 
                     */
                    void SetEnglishChemicalName(const std::string& _englishChemicalName);

                    /**
                     * 判断参数 EnglishChemicalName 是否已赋值
                     * @return EnglishChemicalName 是否已赋值
                     * 
                     */
                    bool EnglishChemicalNameHasBeenSet() const;

                    /**
                     * 获取批准文号
                     * @return ApprovalNumber 批准文号
                     * 
                     */
                    std::string GetApprovalNumber() const;

                    /**
                     * 设置批准文号
                     * @param _approvalNumber 批准文号
                     * 
                     */
                    void SetApprovalNumber(const std::string& _approvalNumber);

                    /**
                     * 判断参数 ApprovalNumber 是否已赋值
                     * @return ApprovalNumber 是否已赋值
                     * 
                     */
                    bool ApprovalNumberHasBeenSet() const;

                    /**
                     * 获取药品属性标签 多个标签时 | 分隔，如抗菌药|抗生素|贵重药品
                     * @return Property 药品属性标签 多个标签时 | 分隔，如抗菌药|抗生素|贵重药品
                     * 
                     */
                    std::string GetProperty() const;

                    /**
                     * 设置药品属性标签 多个标签时 | 分隔，如抗菌药|抗生素|贵重药品
                     * @param _property 药品属性标签 多个标签时 | 分隔，如抗菌药|抗生素|贵重药品
                     * 
                     */
                    void SetProperty(const std::string& _property);

                    /**
                     * 判断参数 Property 是否已赋值
                     * @return Property 是否已赋值
                     * 
                     */
                    bool PropertyHasBeenSet() const;

                    /**
                     * 获取药品成分
                     * @return Ingredients 药品成分
                     * 
                     */
                    std::string GetIngredients() const;

                    /**
                     * 设置药品成分
                     * @param _ingredients 药品成分
                     * 
                     */
                    void SetIngredients(const std::string& _ingredients);

                    /**
                     * 判断参数 Ingredients 是否已赋值
                     * @return Ingredients 是否已赋值
                     * 
                     */
                    bool IngredientsHasBeenSet() const;

                    /**
                     * 获取药品性状
                     * @return PhenotypicTrait 药品性状
                     * 
                     */
                    std::string GetPhenotypicTrait() const;

                    /**
                     * 设置药品性状
                     * @param _phenotypicTrait 药品性状
                     * 
                     */
                    void SetPhenotypicTrait(const std::string& _phenotypicTrait);

                    /**
                     * 判断参数 PhenotypicTrait 是否已赋值
                     * @return PhenotypicTrait 是否已赋值
                     * 
                     */
                    bool PhenotypicTraitHasBeenSet() const;

                    /**
                     * 获取适应症
                     * @return Indications 适应症
                     * 
                     */
                    std::string GetIndications() const;

                    /**
                     * 设置适应症
                     * @param _indications 适应症
                     * 
                     */
                    void SetIndications(const std::string& _indications);

                    /**
                     * 判断参数 Indications 是否已赋值
                     * @return Indications 是否已赋值
                     * 
                     */
                    bool IndicationsHasBeenSet() const;

                    /**
                     * 获取规格
                     * @return Specifications 规格
                     * 
                     */
                    std::string GetSpecifications() const;

                    /**
                     * 设置规格
                     * @param _specifications 规格
                     * 
                     */
                    void SetSpecifications(const std::string& _specifications);

                    /**
                     * 判断参数 Specifications 是否已赋值
                     * @return Specifications 是否已赋值
                     * 
                     */
                    bool SpecificationsHasBeenSet() const;

                    /**
                     * 获取用法用量
                     * @return UsageAndDosage 用法用量
                     * 
                     */
                    std::string GetUsageAndDosage() const;

                    /**
                     * 设置用法用量
                     * @param _usageAndDosage 用法用量
                     * 
                     */
                    void SetUsageAndDosage(const std::string& _usageAndDosage);

                    /**
                     * 判断参数 UsageAndDosage 是否已赋值
                     * @return UsageAndDosage 是否已赋值
                     * 
                     */
                    bool UsageAndDosageHasBeenSet() const;

                    /**
                     * 获取推荐用法
                     * @return RecommendedUsage 推荐用法
                     * 
                     */
                    RecommendedUsage GetRecommendedUsage() const;

                    /**
                     * 设置推荐用法
                     * @param _recommendedUsage 推荐用法
                     * 
                     */
                    void SetRecommendedUsage(const RecommendedUsage& _recommendedUsage);

                    /**
                     * 判断参数 RecommendedUsage 是否已赋值
                     * @return RecommendedUsage 是否已赋值
                     * 
                     */
                    bool RecommendedUsageHasBeenSet() const;

                    /**
                     * 获取不良反应
                     * @return AdverseReaction 不良反应
                     * 
                     */
                    std::string GetAdverseReaction() const;

                    /**
                     * 设置不良反应
                     * @param _adverseReaction 不良反应
                     * 
                     */
                    void SetAdverseReaction(const std::string& _adverseReaction);

                    /**
                     * 判断参数 AdverseReaction 是否已赋值
                     * @return AdverseReaction 是否已赋值
                     * 
                     */
                    bool AdverseReactionHasBeenSet() const;

                    /**
                     * 获取禁忌
                     * @return Contraindication 禁忌
                     * 
                     */
                    std::string GetContraindication() const;

                    /**
                     * 设置禁忌
                     * @param _contraindication 禁忌
                     * 
                     */
                    void SetContraindication(const std::string& _contraindication);

                    /**
                     * 判断参数 Contraindication 是否已赋值
                     * @return Contraindication 是否已赋值
                     * 
                     */
                    bool ContraindicationHasBeenSet() const;

                    /**
                     * 获取注意事项
                     * @return Attentions 注意事项
                     * 
                     */
                    std::string GetAttentions() const;

                    /**
                     * 设置注意事项
                     * @param _attentions 注意事项
                     * 
                     */
                    void SetAttentions(const std::string& _attentions);

                    /**
                     * 判断参数 Attentions 是否已赋值
                     * @return Attentions 是否已赋值
                     * 
                     */
                    bool AttentionsHasBeenSet() const;

                    /**
                     * 获取药物过量
                     * @return Overdose 药物过量
                     * 
                     */
                    std::string GetOverdose() const;

                    /**
                     * 设置药物过量
                     * @param _overdose 药物过量
                     * 
                     */
                    void SetOverdose(const std::string& _overdose);

                    /**
                     * 判断参数 Overdose 是否已赋值
                     * @return Overdose 是否已赋值
                     * 
                     */
                    bool OverdoseHasBeenSet() const;

                    /**
                     * 获取孕妇及哺乳期妇女用药
                     * @return PregnantAndLactatingWomen 孕妇及哺乳期妇女用药
                     * 
                     */
                    std::string GetPregnantAndLactatingWomen() const;

                    /**
                     * 设置孕妇及哺乳期妇女用药
                     * @param _pregnantAndLactatingWomen 孕妇及哺乳期妇女用药
                     * 
                     */
                    void SetPregnantAndLactatingWomen(const std::string& _pregnantAndLactatingWomen);

                    /**
                     * 判断参数 PregnantAndLactatingWomen 是否已赋值
                     * @return PregnantAndLactatingWomen 是否已赋值
                     * 
                     */
                    bool PregnantAndLactatingWomenHasBeenSet() const;

                    /**
                     * 获取老年患者用药
                     * @return ElderlyPatients 老年患者用药
                     * 
                     */
                    std::string GetElderlyPatients() const;

                    /**
                     * 设置老年患者用药
                     * @param _elderlyPatients 老年患者用药
                     * 
                     */
                    void SetElderlyPatients(const std::string& _elderlyPatients);

                    /**
                     * 判断参数 ElderlyPatients 是否已赋值
                     * @return ElderlyPatients 是否已赋值
                     * 
                     */
                    bool ElderlyPatientsHasBeenSet() const;

                    /**
                     * 获取儿童用药
                     * @return PediatricDrugs 儿童用药
                     * 
                     */
                    std::string GetPediatricDrugs() const;

                    /**
                     * 设置儿童用药
                     * @param _pediatricDrugs 儿童用药
                     * 
                     */
                    void SetPediatricDrugs(const std::string& _pediatricDrugs);

                    /**
                     * 判断参数 PediatricDrugs 是否已赋值
                     * @return PediatricDrugs 是否已赋值
                     * 
                     */
                    bool PediatricDrugsHasBeenSet() const;

                    /**
                     * 获取药物相互作用
                     * @return Interactions 药物相互作用
                     * 
                     */
                    std::string GetInteractions() const;

                    /**
                     * 设置药物相互作用
                     * @param _interactions 药物相互作用
                     * 
                     */
                    void SetInteractions(const std::string& _interactions);

                    /**
                     * 判断参数 Interactions 是否已赋值
                     * @return Interactions 是否已赋值
                     * 
                     */
                    bool InteractionsHasBeenSet() const;

                    /**
                     * 获取临床研究
                     * @return ClinicalResearch 临床研究
                     * 
                     */
                    std::string GetClinicalResearch() const;

                    /**
                     * 设置临床研究
                     * @param _clinicalResearch 临床研究
                     * 
                     */
                    void SetClinicalResearch(const std::string& _clinicalResearch);

                    /**
                     * 判断参数 ClinicalResearch 是否已赋值
                     * @return ClinicalResearch 是否已赋值
                     * 
                     */
                    bool ClinicalResearchHasBeenSet() const;

                    /**
                     * 获取药理毒理
                     * @return PharmacologyToxicology 药理毒理
                     * 
                     */
                    std::string GetPharmacologyToxicology() const;

                    /**
                     * 设置药理毒理
                     * @param _pharmacologyToxicology 药理毒理
                     * 
                     */
                    void SetPharmacologyToxicology(const std::string& _pharmacologyToxicology);

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
                    std::string GetPharmacokinetics() const;

                    /**
                     * 设置药代动力学
                     * @param _pharmacokinetics 药代动力学
                     * 
                     */
                    void SetPharmacokinetics(const std::string& _pharmacokinetics);

                    /**
                     * 判断参数 Pharmacokinetics 是否已赋值
                     * @return Pharmacokinetics 是否已赋值
                     * 
                     */
                    bool PharmacokineticsHasBeenSet() const;

                    /**
                     * 获取警告
                     * @return Warning 警告
                     * 
                     */
                    std::string GetWarning() const;

                    /**
                     * 设置警告
                     * @param _warning 警告
                     * 
                     */
                    void SetWarning(const std::string& _warning);

                    /**
                     * 判断参数 Warning 是否已赋值
                     * @return Warning 是否已赋值
                     * 
                     */
                    bool WarningHasBeenSet() const;

                    /**
                     * 获取有效期
                     * @return ExpireDate 有效期
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置有效期
                     * @param _expireDate 有效期
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                    /**
                     * 获取贮藏
                     * @return Storage 贮藏
                     * 
                     */
                    std::string GetStorage() const;

                    /**
                     * 设置贮藏
                     * @param _storage 贮藏
                     * 
                     */
                    void SetStorage(const std::string& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取包装
                     * @return Pack 包装
                     * 
                     */
                    std::string GetPack() const;

                    /**
                     * 设置包装
                     * @param _pack 包装
                     * 
                     */
                    void SetPack(const std::string& _pack);

                    /**
                     * 判断参数 Pack 是否已赋值
                     * @return Pack 是否已赋值
                     * 
                     */
                    bool PackHasBeenSet() const;

                    /**
                     * 获取生产企业
                     * @return Manufacturer 生产企业
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置生产企业
                     * @param _manufacturer 生产企业
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取生产企业地址
                     * @return ManufacturerAddress 生产企业地址
                     * 
                     */
                    std::string GetManufacturerAddress() const;

                    /**
                     * 设置生产企业地址
                     * @param _manufacturerAddress 生产企业地址
                     * 
                     */
                    void SetManufacturerAddress(const std::string& _manufacturerAddress);

                    /**
                     * 判断参数 ManufacturerAddress 是否已赋值
                     * @return ManufacturerAddress 是否已赋值
                     * 
                     */
                    bool ManufacturerAddressHasBeenSet() const;

                    /**
                     * 获取生产企业电话
                     * @return ManufacturerPhone 生产企业电话
                     * 
                     */
                    std::string GetManufacturerPhone() const;

                    /**
                     * 设置生产企业电话
                     * @param _manufacturerPhone 生产企业电话
                     * 
                     */
                    void SetManufacturerPhone(const std::string& _manufacturerPhone);

                    /**
                     * 判断参数 ManufacturerPhone 是否已赋值
                     * @return ManufacturerPhone 是否已赋值
                     * 
                     */
                    bool ManufacturerPhoneHasBeenSet() const;

                    /**
                     * 获取生产企业邮箱
                     * @return ManufacturerEmail 生产企业邮箱
                     * 
                     */
                    std::string GetManufacturerEmail() const;

                    /**
                     * 设置生产企业邮箱
                     * @param _manufacturerEmail 生产企业邮箱
                     * 
                     */
                    void SetManufacturerEmail(const std::string& _manufacturerEmail);

                    /**
                     * 判断参数 ManufacturerEmail 是否已赋值
                     * @return ManufacturerEmail 是否已赋值
                     * 
                     */
                    bool ManufacturerEmailHasBeenSet() const;

                    /**
                     * 获取生产企业网站
                     * @return ManufacturerWebsite 生产企业网站
                     * 
                     */
                    std::string GetManufacturerWebsite() const;

                    /**
                     * 设置生产企业网站
                     * @param _manufacturerWebsite 生产企业网站
                     * 
                     */
                    void SetManufacturerWebsite(const std::string& _manufacturerWebsite);

                    /**
                     * 判断参数 ManufacturerWebsite 是否已赋值
                     * @return ManufacturerWebsite 是否已赋值
                     * 
                     */
                    bool ManufacturerWebsiteHasBeenSet() const;

                    /**
                     * 获取说明书制定和修订时间
                     * @return DocRevisionTime 说明书制定和修订时间
                     * 
                     */
                    std::string GetDocRevisionTime() const;

                    /**
                     * 设置说明书制定和修订时间
                     * @param _docRevisionTime 说明书制定和修订时间
                     * 
                     */
                    void SetDocRevisionTime(const std::string& _docRevisionTime);

                    /**
                     * 判断参数 DocRevisionTime 是否已赋值
                     * @return DocRevisionTime 是否已赋值
                     * 
                     */
                    bool DocRevisionTimeHasBeenSet() const;

                    /**
                     * 获取参考文献
                     * @return References 参考文献
                     * 
                     */
                    std::string GetReferences() const;

                    /**
                     * 设置参考文献
                     * @param _references 参考文献
                     * 
                     */
                    void SetReferences(const std::string& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取剂型
                     * @return DrugDosageForm 剂型
                     * 
                     */
                    std::string GetDrugDosageForm() const;

                    /**
                     * 设置剂型
                     * @param _drugDosageForm 剂型
                     * 
                     */
                    void SetDrugDosageForm(const std::string& _drugDosageForm);

                    /**
                     * 判断参数 DrugDosageForm 是否已赋值
                     * @return DrugDosageForm 是否已赋值
                     * 
                     */
                    bool DrugDosageFormHasBeenSet() const;

                    /**
                     * 获取给药途径
                     * @return DrugRoute 给药途径
                     * 
                     */
                    std::string GetDrugRoute() const;

                    /**
                     * 设置给药途径
                     * @param _drugRoute 给药途径
                     * 
                     */
                    void SetDrugRoute(const std::string& _drugRoute);

                    /**
                     * 判断参数 DrugRoute 是否已赋值
                     * @return DrugRoute 是否已赋值
                     * 
                     */
                    bool DrugRouteHasBeenSet() const;

                    /**
                     * 获取药品本位码
                     * @return DrugBasicCode 药品本位码
                     * 
                     */
                    std::string GetDrugBasicCode() const;

                    /**
                     * 设置药品本位码
                     * @param _drugBasicCode 药品本位码
                     * 
                     */
                    void SetDrugBasicCode(const std::string& _drugBasicCode);

                    /**
                     * 判断参数 DrugBasicCode 是否已赋值
                     * @return DrugBasicCode 是否已赋值
                     * 
                     */
                    bool DrugBasicCodeHasBeenSet() const;

                    /**
                     * 获取OTC标签
                     * @return OctTag OTC标签
                     * 
                     */
                    std::string GetOctTag() const;

                    /**
                     * 设置OTC标签
                     * @param _octTag OTC标签
                     * 
                     */
                    void SetOctTag(const std::string& _octTag);

                    /**
                     * 判断参数 OctTag 是否已赋值
                     * @return OctTag 是否已赋值
                     * 
                     */
                    bool OctTagHasBeenSet() const;

                private:

                    /**
                     * 药品ID
                     */
                    std::string m_drugId;
                    bool m_drugIdHasBeenSet;

                    /**
                     * 序列ID
                     */
                    int64_t m_sequenceId;
                    bool m_sequenceIdHasBeenSet;

                    /**
                     * 药品哈希ID
                     */
                    std::string m_drugHashId;
                    bool m_drugHashIdHasBeenSet;

                    /**
                     * 图片URL
                     */
                    std::string m_imgUrl;
                    bool m_imgUrlHasBeenSet;

                    /**
                     * 药品名称
                     */
                    std::string m_drugName;
                    bool m_drugNameHasBeenSet;

                    /**
                     * 商品名
                     */
                    std::string m_tradeName;
                    bool m_tradeNameHasBeenSet;

                    /**
                     * 英文名称
                     */
                    std::string m_englishName;
                    bool m_englishNameHasBeenSet;

                    /**
                     * 英文商品名
                     */
                    std::string m_englishTradeName;
                    bool m_englishTradeNameHasBeenSet;

                    /**
                     * 拼音
                     */
                    std::string m_pinyin;
                    bool m_pinyinHasBeenSet;

                    /**
                     * 其他名称
                     */
                    std::string m_otherNames;
                    bool m_otherNamesHasBeenSet;

                    /**
                     * 化学名称
                     */
                    std::string m_chemicalName;
                    bool m_chemicalNameHasBeenSet;

                    /**
                     * 英文化学名称
                     */
                    std::string m_englishChemicalName;
                    bool m_englishChemicalNameHasBeenSet;

                    /**
                     * 批准文号
                     */
                    std::string m_approvalNumber;
                    bool m_approvalNumberHasBeenSet;

                    /**
                     * 药品属性标签 多个标签时 | 分隔，如抗菌药|抗生素|贵重药品
                     */
                    std::string m_property;
                    bool m_propertyHasBeenSet;

                    /**
                     * 药品成分
                     */
                    std::string m_ingredients;
                    bool m_ingredientsHasBeenSet;

                    /**
                     * 药品性状
                     */
                    std::string m_phenotypicTrait;
                    bool m_phenotypicTraitHasBeenSet;

                    /**
                     * 适应症
                     */
                    std::string m_indications;
                    bool m_indicationsHasBeenSet;

                    /**
                     * 规格
                     */
                    std::string m_specifications;
                    bool m_specificationsHasBeenSet;

                    /**
                     * 用法用量
                     */
                    std::string m_usageAndDosage;
                    bool m_usageAndDosageHasBeenSet;

                    /**
                     * 推荐用法
                     */
                    RecommendedUsage m_recommendedUsage;
                    bool m_recommendedUsageHasBeenSet;

                    /**
                     * 不良反应
                     */
                    std::string m_adverseReaction;
                    bool m_adverseReactionHasBeenSet;

                    /**
                     * 禁忌
                     */
                    std::string m_contraindication;
                    bool m_contraindicationHasBeenSet;

                    /**
                     * 注意事项
                     */
                    std::string m_attentions;
                    bool m_attentionsHasBeenSet;

                    /**
                     * 药物过量
                     */
                    std::string m_overdose;
                    bool m_overdoseHasBeenSet;

                    /**
                     * 孕妇及哺乳期妇女用药
                     */
                    std::string m_pregnantAndLactatingWomen;
                    bool m_pregnantAndLactatingWomenHasBeenSet;

                    /**
                     * 老年患者用药
                     */
                    std::string m_elderlyPatients;
                    bool m_elderlyPatientsHasBeenSet;

                    /**
                     * 儿童用药
                     */
                    std::string m_pediatricDrugs;
                    bool m_pediatricDrugsHasBeenSet;

                    /**
                     * 药物相互作用
                     */
                    std::string m_interactions;
                    bool m_interactionsHasBeenSet;

                    /**
                     * 临床研究
                     */
                    std::string m_clinicalResearch;
                    bool m_clinicalResearchHasBeenSet;

                    /**
                     * 药理毒理
                     */
                    std::string m_pharmacologyToxicology;
                    bool m_pharmacologyToxicologyHasBeenSet;

                    /**
                     * 药代动力学
                     */
                    std::string m_pharmacokinetics;
                    bool m_pharmacokineticsHasBeenSet;

                    /**
                     * 警告
                     */
                    std::string m_warning;
                    bool m_warningHasBeenSet;

                    /**
                     * 有效期
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                    /**
                     * 贮藏
                     */
                    std::string m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 包装
                     */
                    std::string m_pack;
                    bool m_packHasBeenSet;

                    /**
                     * 生产企业
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 生产企业地址
                     */
                    std::string m_manufacturerAddress;
                    bool m_manufacturerAddressHasBeenSet;

                    /**
                     * 生产企业电话
                     */
                    std::string m_manufacturerPhone;
                    bool m_manufacturerPhoneHasBeenSet;

                    /**
                     * 生产企业邮箱
                     */
                    std::string m_manufacturerEmail;
                    bool m_manufacturerEmailHasBeenSet;

                    /**
                     * 生产企业网站
                     */
                    std::string m_manufacturerWebsite;
                    bool m_manufacturerWebsiteHasBeenSet;

                    /**
                     * 说明书制定和修订时间
                     */
                    std::string m_docRevisionTime;
                    bool m_docRevisionTimeHasBeenSet;

                    /**
                     * 参考文献
                     */
                    std::string m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 剂型
                     */
                    std::string m_drugDosageForm;
                    bool m_drugDosageFormHasBeenSet;

                    /**
                     * 给药途径
                     */
                    std::string m_drugRoute;
                    bool m_drugRouteHasBeenSet;

                    /**
                     * 药品本位码
                     */
                    std::string m_drugBasicCode;
                    bool m_drugBasicCodeHasBeenSet;

                    /**
                     * OTC标签
                     */
                    std::string m_octTag;
                    bool m_octTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_SMARTDRUGINFORESP_H_
