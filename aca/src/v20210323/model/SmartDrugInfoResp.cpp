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

#include <tencentcloud/aca/v20210323/model/SmartDrugInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

SmartDrugInfoResp::SmartDrugInfoResp() :
    m_drugIdHasBeenSet(false),
    m_sequenceIdHasBeenSet(false),
    m_drugHashIdHasBeenSet(false),
    m_imgUrlHasBeenSet(false),
    m_drugNameHasBeenSet(false),
    m_tradeNameHasBeenSet(false),
    m_englishNameHasBeenSet(false),
    m_englishTradeNameHasBeenSet(false),
    m_pinyinHasBeenSet(false),
    m_otherNamesHasBeenSet(false),
    m_chemicalNameHasBeenSet(false),
    m_englishChemicalNameHasBeenSet(false),
    m_approvalNumberHasBeenSet(false),
    m_propertyHasBeenSet(false),
    m_ingredientsHasBeenSet(false),
    m_phenotypicTraitHasBeenSet(false),
    m_indicationsHasBeenSet(false),
    m_specificationsHasBeenSet(false),
    m_usageAndDosageHasBeenSet(false),
    m_recommendedUsageHasBeenSet(false),
    m_adverseReactionHasBeenSet(false),
    m_contraindicationHasBeenSet(false),
    m_attentionsHasBeenSet(false),
    m_overdoseHasBeenSet(false),
    m_pregnantAndLactatingWomenHasBeenSet(false),
    m_elderlyPatientsHasBeenSet(false),
    m_pediatricDrugsHasBeenSet(false),
    m_interactionsHasBeenSet(false),
    m_clinicalResearchHasBeenSet(false),
    m_pharmacologyToxicologyHasBeenSet(false),
    m_pharmacokineticsHasBeenSet(false),
    m_warningHasBeenSet(false),
    m_expireDateHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_packHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_manufacturerAddressHasBeenSet(false),
    m_manufacturerPhoneHasBeenSet(false),
    m_manufacturerEmailHasBeenSet(false),
    m_manufacturerWebsiteHasBeenSet(false),
    m_docRevisionTimeHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_drugDosageFormHasBeenSet(false),
    m_drugRouteHasBeenSet(false),
    m_drugBasicCodeHasBeenSet(false),
    m_octTagHasBeenSet(false)
{
}

CoreInternalOutcome SmartDrugInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugId") && !value["DrugId"].IsNull())
    {
        if (!value["DrugId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.DrugId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugId = string(value["DrugId"].GetString());
        m_drugIdHasBeenSet = true;
    }

    if (value.HasMember("SequenceId") && !value["SequenceId"].IsNull())
    {
        if (!value["SequenceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.SequenceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sequenceId = value["SequenceId"].GetInt64();
        m_sequenceIdHasBeenSet = true;
    }

    if (value.HasMember("DrugHashId") && !value["DrugHashId"].IsNull())
    {
        if (!value["DrugHashId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.DrugHashId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugHashId = string(value["DrugHashId"].GetString());
        m_drugHashIdHasBeenSet = true;
    }

    if (value.HasMember("ImgUrl") && !value["ImgUrl"].IsNull())
    {
        if (!value["ImgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.ImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imgUrl = string(value["ImgUrl"].GetString());
        m_imgUrlHasBeenSet = true;
    }

    if (value.HasMember("DrugName") && !value["DrugName"].IsNull())
    {
        if (!value["DrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.DrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugName = string(value["DrugName"].GetString());
        m_drugNameHasBeenSet = true;
    }

    if (value.HasMember("TradeName") && !value["TradeName"].IsNull())
    {
        if (!value["TradeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.TradeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeName = string(value["TradeName"].GetString());
        m_tradeNameHasBeenSet = true;
    }

    if (value.HasMember("EnglishName") && !value["EnglishName"].IsNull())
    {
        if (!value["EnglishName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.EnglishName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishName = string(value["EnglishName"].GetString());
        m_englishNameHasBeenSet = true;
    }

    if (value.HasMember("EnglishTradeName") && !value["EnglishTradeName"].IsNull())
    {
        if (!value["EnglishTradeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.EnglishTradeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishTradeName = string(value["EnglishTradeName"].GetString());
        m_englishTradeNameHasBeenSet = true;
    }

    if (value.HasMember("Pinyin") && !value["Pinyin"].IsNull())
    {
        if (!value["Pinyin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Pinyin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pinyin = string(value["Pinyin"].GetString());
        m_pinyinHasBeenSet = true;
    }

    if (value.HasMember("OtherNames") && !value["OtherNames"].IsNull())
    {
        if (!value["OtherNames"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.OtherNames` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherNames = string(value["OtherNames"].GetString());
        m_otherNamesHasBeenSet = true;
    }

    if (value.HasMember("ChemicalName") && !value["ChemicalName"].IsNull())
    {
        if (!value["ChemicalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.ChemicalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chemicalName = string(value["ChemicalName"].GetString());
        m_chemicalNameHasBeenSet = true;
    }

    if (value.HasMember("EnglishChemicalName") && !value["EnglishChemicalName"].IsNull())
    {
        if (!value["EnglishChemicalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.EnglishChemicalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishChemicalName = string(value["EnglishChemicalName"].GetString());
        m_englishChemicalNameHasBeenSet = true;
    }

    if (value.HasMember("ApprovalNumber") && !value["ApprovalNumber"].IsNull())
    {
        if (!value["ApprovalNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.ApprovalNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNumber = string(value["ApprovalNumber"].GetString());
        m_approvalNumberHasBeenSet = true;
    }

    if (value.HasMember("Property") && !value["Property"].IsNull())
    {
        if (!value["Property"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Property` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_property = string(value["Property"].GetString());
        m_propertyHasBeenSet = true;
    }

    if (value.HasMember("Ingredients") && !value["Ingredients"].IsNull())
    {
        if (!value["Ingredients"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Ingredients` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ingredients = string(value["Ingredients"].GetString());
        m_ingredientsHasBeenSet = true;
    }

    if (value.HasMember("PhenotypicTrait") && !value["PhenotypicTrait"].IsNull())
    {
        if (!value["PhenotypicTrait"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.PhenotypicTrait` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phenotypicTrait = string(value["PhenotypicTrait"].GetString());
        m_phenotypicTraitHasBeenSet = true;
    }

    if (value.HasMember("Indications") && !value["Indications"].IsNull())
    {
        if (!value["Indications"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Indications` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indications = string(value["Indications"].GetString());
        m_indicationsHasBeenSet = true;
    }

    if (value.HasMember("Specifications") && !value["Specifications"].IsNull())
    {
        if (!value["Specifications"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Specifications` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specifications = string(value["Specifications"].GetString());
        m_specificationsHasBeenSet = true;
    }

    if (value.HasMember("UsageAndDosage") && !value["UsageAndDosage"].IsNull())
    {
        if (!value["UsageAndDosage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.UsageAndDosage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageAndDosage = string(value["UsageAndDosage"].GetString());
        m_usageAndDosageHasBeenSet = true;
    }

    if (value.HasMember("RecommendedUsage") && !value["RecommendedUsage"].IsNull())
    {
        if (!value["RecommendedUsage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.RecommendedUsage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_recommendedUsage.Deserialize(value["RecommendedUsage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_recommendedUsageHasBeenSet = true;
    }

    if (value.HasMember("AdverseReaction") && !value["AdverseReaction"].IsNull())
    {
        if (!value["AdverseReaction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.AdverseReaction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adverseReaction = string(value["AdverseReaction"].GetString());
        m_adverseReactionHasBeenSet = true;
    }

    if (value.HasMember("Contraindication") && !value["Contraindication"].IsNull())
    {
        if (!value["Contraindication"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Contraindication` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contraindication = string(value["Contraindication"].GetString());
        m_contraindicationHasBeenSet = true;
    }

    if (value.HasMember("Attentions") && !value["Attentions"].IsNull())
    {
        if (!value["Attentions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Attentions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attentions = string(value["Attentions"].GetString());
        m_attentionsHasBeenSet = true;
    }

    if (value.HasMember("Overdose") && !value["Overdose"].IsNull())
    {
        if (!value["Overdose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Overdose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_overdose = string(value["Overdose"].GetString());
        m_overdoseHasBeenSet = true;
    }

    if (value.HasMember("PregnantAndLactatingWomen") && !value["PregnantAndLactatingWomen"].IsNull())
    {
        if (!value["PregnantAndLactatingWomen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.PregnantAndLactatingWomen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pregnantAndLactatingWomen = string(value["PregnantAndLactatingWomen"].GetString());
        m_pregnantAndLactatingWomenHasBeenSet = true;
    }

    if (value.HasMember("ElderlyPatients") && !value["ElderlyPatients"].IsNull())
    {
        if (!value["ElderlyPatients"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.ElderlyPatients` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elderlyPatients = string(value["ElderlyPatients"].GetString());
        m_elderlyPatientsHasBeenSet = true;
    }

    if (value.HasMember("PediatricDrugs") && !value["PediatricDrugs"].IsNull())
    {
        if (!value["PediatricDrugs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.PediatricDrugs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pediatricDrugs = string(value["PediatricDrugs"].GetString());
        m_pediatricDrugsHasBeenSet = true;
    }

    if (value.HasMember("Interactions") && !value["Interactions"].IsNull())
    {
        if (!value["Interactions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Interactions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interactions = string(value["Interactions"].GetString());
        m_interactionsHasBeenSet = true;
    }

    if (value.HasMember("ClinicalResearch") && !value["ClinicalResearch"].IsNull())
    {
        if (!value["ClinicalResearch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.ClinicalResearch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clinicalResearch = string(value["ClinicalResearch"].GetString());
        m_clinicalResearchHasBeenSet = true;
    }

    if (value.HasMember("PharmacologyToxicology") && !value["PharmacologyToxicology"].IsNull())
    {
        if (!value["PharmacologyToxicology"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.PharmacologyToxicology` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pharmacologyToxicology = string(value["PharmacologyToxicology"].GetString());
        m_pharmacologyToxicologyHasBeenSet = true;
    }

    if (value.HasMember("Pharmacokinetics") && !value["Pharmacokinetics"].IsNull())
    {
        if (!value["Pharmacokinetics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Pharmacokinetics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pharmacokinetics = string(value["Pharmacokinetics"].GetString());
        m_pharmacokineticsHasBeenSet = true;
    }

    if (value.HasMember("Warning") && !value["Warning"].IsNull())
    {
        if (!value["Warning"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Warning` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warning = string(value["Warning"].GetString());
        m_warningHasBeenSet = true;
    }

    if (value.HasMember("ExpireDate") && !value["ExpireDate"].IsNull())
    {
        if (!value["ExpireDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.ExpireDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireDate = string(value["ExpireDate"].GetString());
        m_expireDateHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Storage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storage = string(value["Storage"].GetString());
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("Pack") && !value["Pack"].IsNull())
    {
        if (!value["Pack"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Pack` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pack = string(value["Pack"].GetString());
        m_packHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("ManufacturerAddress") && !value["ManufacturerAddress"].IsNull())
    {
        if (!value["ManufacturerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.ManufacturerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturerAddress = string(value["ManufacturerAddress"].GetString());
        m_manufacturerAddressHasBeenSet = true;
    }

    if (value.HasMember("ManufacturerPhone") && !value["ManufacturerPhone"].IsNull())
    {
        if (!value["ManufacturerPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.ManufacturerPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturerPhone = string(value["ManufacturerPhone"].GetString());
        m_manufacturerPhoneHasBeenSet = true;
    }

    if (value.HasMember("ManufacturerEmail") && !value["ManufacturerEmail"].IsNull())
    {
        if (!value["ManufacturerEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.ManufacturerEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturerEmail = string(value["ManufacturerEmail"].GetString());
        m_manufacturerEmailHasBeenSet = true;
    }

    if (value.HasMember("ManufacturerWebsite") && !value["ManufacturerWebsite"].IsNull())
    {
        if (!value["ManufacturerWebsite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.ManufacturerWebsite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturerWebsite = string(value["ManufacturerWebsite"].GetString());
        m_manufacturerWebsiteHasBeenSet = true;
    }

    if (value.HasMember("DocRevisionTime") && !value["DocRevisionTime"].IsNull())
    {
        if (!value["DocRevisionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.DocRevisionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docRevisionTime = string(value["DocRevisionTime"].GetString());
        m_docRevisionTimeHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.References` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_references = string(value["References"].GetString());
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("DrugDosageForm") && !value["DrugDosageForm"].IsNull())
    {
        if (!value["DrugDosageForm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.DrugDosageForm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugDosageForm = string(value["DrugDosageForm"].GetString());
        m_drugDosageFormHasBeenSet = true;
    }

    if (value.HasMember("DrugRoute") && !value["DrugRoute"].IsNull())
    {
        if (!value["DrugRoute"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.DrugRoute` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugRoute = string(value["DrugRoute"].GetString());
        m_drugRouteHasBeenSet = true;
    }

    if (value.HasMember("DrugBasicCode") && !value["DrugBasicCode"].IsNull())
    {
        if (!value["DrugBasicCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.DrugBasicCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugBasicCode = string(value["DrugBasicCode"].GetString());
        m_drugBasicCodeHasBeenSet = true;
    }

    if (value.HasMember("OctTag") && !value["OctTag"].IsNull())
    {
        if (!value["OctTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoResp.OctTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_octTag = string(value["OctTag"].GetString());
        m_octTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartDrugInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drugIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugId.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SequenceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sequenceId, allocator);
    }

    if (m_drugHashIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugHashId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugHashId.c_str(), allocator).Move(), allocator);
    }

    if (m_imgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_drugNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugName.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeName.c_str(), allocator).Move(), allocator);
    }

    if (m_englishNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishName.c_str(), allocator).Move(), allocator);
    }

    if (m_englishTradeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishTradeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishTradeName.c_str(), allocator).Move(), allocator);
    }

    if (m_pinyinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pinyin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pinyin.c_str(), allocator).Move(), allocator);
    }

    if (m_otherNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherNames.c_str(), allocator).Move(), allocator);
    }

    if (m_chemicalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChemicalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chemicalName.c_str(), allocator).Move(), allocator);
    }

    if (m_englishChemicalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishChemicalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishChemicalName.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_propertyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Property";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_property.c_str(), allocator).Move(), allocator);
    }

    if (m_ingredientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ingredients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ingredients.c_str(), allocator).Move(), allocator);
    }

    if (m_phenotypicTraitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhenotypicTrait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phenotypicTrait.c_str(), allocator).Move(), allocator);
    }

    if (m_indicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indications.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specifications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specifications.c_str(), allocator).Move(), allocator);
    }

    if (m_usageAndDosageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageAndDosage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageAndDosage.c_str(), allocator).Move(), allocator);
    }

    if (m_recommendedUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecommendedUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recommendedUsage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adverseReactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdverseReaction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adverseReaction.c_str(), allocator).Move(), allocator);
    }

    if (m_contraindicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contraindication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contraindication.c_str(), allocator).Move(), allocator);
    }

    if (m_attentionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attentions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attentions.c_str(), allocator).Move(), allocator);
    }

    if (m_overdoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Overdose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_overdose.c_str(), allocator).Move(), allocator);
    }

    if (m_pregnantAndLactatingWomenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PregnantAndLactatingWomen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pregnantAndLactatingWomen.c_str(), allocator).Move(), allocator);
    }

    if (m_elderlyPatientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElderlyPatients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elderlyPatients.c_str(), allocator).Move(), allocator);
    }

    if (m_pediatricDrugsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PediatricDrugs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pediatricDrugs.c_str(), allocator).Move(), allocator);
    }

    if (m_interactionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interactions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interactions.c_str(), allocator).Move(), allocator);
    }

    if (m_clinicalResearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClinicalResearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clinicalResearch.c_str(), allocator).Move(), allocator);
    }

    if (m_pharmacologyToxicologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PharmacologyToxicology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pharmacologyToxicology.c_str(), allocator).Move(), allocator);
    }

    if (m_pharmacokineticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pharmacokinetics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pharmacokinetics.c_str(), allocator).Move(), allocator);
    }

    if (m_warningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Warning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warning.c_str(), allocator).Move(), allocator);
    }

    if (m_expireDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireDate.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storage.c_str(), allocator).Move(), allocator);
    }

    if (m_packHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pack.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManufacturerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManufacturerPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManufacturerEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturerEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerWebsiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManufacturerWebsite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturerWebsite.c_str(), allocator).Move(), allocator);
    }

    if (m_docRevisionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocRevisionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docRevisionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_references.c_str(), allocator).Move(), allocator);
    }

    if (m_drugDosageFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugDosageForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugDosageForm.c_str(), allocator).Move(), allocator);
    }

    if (m_drugRouteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugRoute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugRoute.c_str(), allocator).Move(), allocator);
    }

    if (m_drugBasicCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugBasicCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugBasicCode.c_str(), allocator).Move(), allocator);
    }

    if (m_octTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OctTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_octTag.c_str(), allocator).Move(), allocator);
    }

}


string SmartDrugInfoResp::GetDrugId() const
{
    return m_drugId;
}

void SmartDrugInfoResp::SetDrugId(const string& _drugId)
{
    m_drugId = _drugId;
    m_drugIdHasBeenSet = true;
}

bool SmartDrugInfoResp::DrugIdHasBeenSet() const
{
    return m_drugIdHasBeenSet;
}

int64_t SmartDrugInfoResp::GetSequenceId() const
{
    return m_sequenceId;
}

void SmartDrugInfoResp::SetSequenceId(const int64_t& _sequenceId)
{
    m_sequenceId = _sequenceId;
    m_sequenceIdHasBeenSet = true;
}

bool SmartDrugInfoResp::SequenceIdHasBeenSet() const
{
    return m_sequenceIdHasBeenSet;
}

string SmartDrugInfoResp::GetDrugHashId() const
{
    return m_drugHashId;
}

void SmartDrugInfoResp::SetDrugHashId(const string& _drugHashId)
{
    m_drugHashId = _drugHashId;
    m_drugHashIdHasBeenSet = true;
}

bool SmartDrugInfoResp::DrugHashIdHasBeenSet() const
{
    return m_drugHashIdHasBeenSet;
}

string SmartDrugInfoResp::GetImgUrl() const
{
    return m_imgUrl;
}

void SmartDrugInfoResp::SetImgUrl(const string& _imgUrl)
{
    m_imgUrl = _imgUrl;
    m_imgUrlHasBeenSet = true;
}

bool SmartDrugInfoResp::ImgUrlHasBeenSet() const
{
    return m_imgUrlHasBeenSet;
}

string SmartDrugInfoResp::GetDrugName() const
{
    return m_drugName;
}

void SmartDrugInfoResp::SetDrugName(const string& _drugName)
{
    m_drugName = _drugName;
    m_drugNameHasBeenSet = true;
}

bool SmartDrugInfoResp::DrugNameHasBeenSet() const
{
    return m_drugNameHasBeenSet;
}

string SmartDrugInfoResp::GetTradeName() const
{
    return m_tradeName;
}

void SmartDrugInfoResp::SetTradeName(const string& _tradeName)
{
    m_tradeName = _tradeName;
    m_tradeNameHasBeenSet = true;
}

bool SmartDrugInfoResp::TradeNameHasBeenSet() const
{
    return m_tradeNameHasBeenSet;
}

string SmartDrugInfoResp::GetEnglishName() const
{
    return m_englishName;
}

void SmartDrugInfoResp::SetEnglishName(const string& _englishName)
{
    m_englishName = _englishName;
    m_englishNameHasBeenSet = true;
}

bool SmartDrugInfoResp::EnglishNameHasBeenSet() const
{
    return m_englishNameHasBeenSet;
}

string SmartDrugInfoResp::GetEnglishTradeName() const
{
    return m_englishTradeName;
}

void SmartDrugInfoResp::SetEnglishTradeName(const string& _englishTradeName)
{
    m_englishTradeName = _englishTradeName;
    m_englishTradeNameHasBeenSet = true;
}

bool SmartDrugInfoResp::EnglishTradeNameHasBeenSet() const
{
    return m_englishTradeNameHasBeenSet;
}

string SmartDrugInfoResp::GetPinyin() const
{
    return m_pinyin;
}

void SmartDrugInfoResp::SetPinyin(const string& _pinyin)
{
    m_pinyin = _pinyin;
    m_pinyinHasBeenSet = true;
}

bool SmartDrugInfoResp::PinyinHasBeenSet() const
{
    return m_pinyinHasBeenSet;
}

string SmartDrugInfoResp::GetOtherNames() const
{
    return m_otherNames;
}

void SmartDrugInfoResp::SetOtherNames(const string& _otherNames)
{
    m_otherNames = _otherNames;
    m_otherNamesHasBeenSet = true;
}

bool SmartDrugInfoResp::OtherNamesHasBeenSet() const
{
    return m_otherNamesHasBeenSet;
}

string SmartDrugInfoResp::GetChemicalName() const
{
    return m_chemicalName;
}

void SmartDrugInfoResp::SetChemicalName(const string& _chemicalName)
{
    m_chemicalName = _chemicalName;
    m_chemicalNameHasBeenSet = true;
}

bool SmartDrugInfoResp::ChemicalNameHasBeenSet() const
{
    return m_chemicalNameHasBeenSet;
}

string SmartDrugInfoResp::GetEnglishChemicalName() const
{
    return m_englishChemicalName;
}

void SmartDrugInfoResp::SetEnglishChemicalName(const string& _englishChemicalName)
{
    m_englishChemicalName = _englishChemicalName;
    m_englishChemicalNameHasBeenSet = true;
}

bool SmartDrugInfoResp::EnglishChemicalNameHasBeenSet() const
{
    return m_englishChemicalNameHasBeenSet;
}

string SmartDrugInfoResp::GetApprovalNumber() const
{
    return m_approvalNumber;
}

void SmartDrugInfoResp::SetApprovalNumber(const string& _approvalNumber)
{
    m_approvalNumber = _approvalNumber;
    m_approvalNumberHasBeenSet = true;
}

bool SmartDrugInfoResp::ApprovalNumberHasBeenSet() const
{
    return m_approvalNumberHasBeenSet;
}

string SmartDrugInfoResp::GetProperty() const
{
    return m_property;
}

void SmartDrugInfoResp::SetProperty(const string& _property)
{
    m_property = _property;
    m_propertyHasBeenSet = true;
}

bool SmartDrugInfoResp::PropertyHasBeenSet() const
{
    return m_propertyHasBeenSet;
}

string SmartDrugInfoResp::GetIngredients() const
{
    return m_ingredients;
}

void SmartDrugInfoResp::SetIngredients(const string& _ingredients)
{
    m_ingredients = _ingredients;
    m_ingredientsHasBeenSet = true;
}

bool SmartDrugInfoResp::IngredientsHasBeenSet() const
{
    return m_ingredientsHasBeenSet;
}

string SmartDrugInfoResp::GetPhenotypicTrait() const
{
    return m_phenotypicTrait;
}

void SmartDrugInfoResp::SetPhenotypicTrait(const string& _phenotypicTrait)
{
    m_phenotypicTrait = _phenotypicTrait;
    m_phenotypicTraitHasBeenSet = true;
}

bool SmartDrugInfoResp::PhenotypicTraitHasBeenSet() const
{
    return m_phenotypicTraitHasBeenSet;
}

string SmartDrugInfoResp::GetIndications() const
{
    return m_indications;
}

void SmartDrugInfoResp::SetIndications(const string& _indications)
{
    m_indications = _indications;
    m_indicationsHasBeenSet = true;
}

bool SmartDrugInfoResp::IndicationsHasBeenSet() const
{
    return m_indicationsHasBeenSet;
}

string SmartDrugInfoResp::GetSpecifications() const
{
    return m_specifications;
}

void SmartDrugInfoResp::SetSpecifications(const string& _specifications)
{
    m_specifications = _specifications;
    m_specificationsHasBeenSet = true;
}

bool SmartDrugInfoResp::SpecificationsHasBeenSet() const
{
    return m_specificationsHasBeenSet;
}

string SmartDrugInfoResp::GetUsageAndDosage() const
{
    return m_usageAndDosage;
}

void SmartDrugInfoResp::SetUsageAndDosage(const string& _usageAndDosage)
{
    m_usageAndDosage = _usageAndDosage;
    m_usageAndDosageHasBeenSet = true;
}

bool SmartDrugInfoResp::UsageAndDosageHasBeenSet() const
{
    return m_usageAndDosageHasBeenSet;
}

RecommendedUsage SmartDrugInfoResp::GetRecommendedUsage() const
{
    return m_recommendedUsage;
}

void SmartDrugInfoResp::SetRecommendedUsage(const RecommendedUsage& _recommendedUsage)
{
    m_recommendedUsage = _recommendedUsage;
    m_recommendedUsageHasBeenSet = true;
}

bool SmartDrugInfoResp::RecommendedUsageHasBeenSet() const
{
    return m_recommendedUsageHasBeenSet;
}

string SmartDrugInfoResp::GetAdverseReaction() const
{
    return m_adverseReaction;
}

void SmartDrugInfoResp::SetAdverseReaction(const string& _adverseReaction)
{
    m_adverseReaction = _adverseReaction;
    m_adverseReactionHasBeenSet = true;
}

bool SmartDrugInfoResp::AdverseReactionHasBeenSet() const
{
    return m_adverseReactionHasBeenSet;
}

string SmartDrugInfoResp::GetContraindication() const
{
    return m_contraindication;
}

void SmartDrugInfoResp::SetContraindication(const string& _contraindication)
{
    m_contraindication = _contraindication;
    m_contraindicationHasBeenSet = true;
}

bool SmartDrugInfoResp::ContraindicationHasBeenSet() const
{
    return m_contraindicationHasBeenSet;
}

string SmartDrugInfoResp::GetAttentions() const
{
    return m_attentions;
}

void SmartDrugInfoResp::SetAttentions(const string& _attentions)
{
    m_attentions = _attentions;
    m_attentionsHasBeenSet = true;
}

bool SmartDrugInfoResp::AttentionsHasBeenSet() const
{
    return m_attentionsHasBeenSet;
}

string SmartDrugInfoResp::GetOverdose() const
{
    return m_overdose;
}

void SmartDrugInfoResp::SetOverdose(const string& _overdose)
{
    m_overdose = _overdose;
    m_overdoseHasBeenSet = true;
}

bool SmartDrugInfoResp::OverdoseHasBeenSet() const
{
    return m_overdoseHasBeenSet;
}

string SmartDrugInfoResp::GetPregnantAndLactatingWomen() const
{
    return m_pregnantAndLactatingWomen;
}

void SmartDrugInfoResp::SetPregnantAndLactatingWomen(const string& _pregnantAndLactatingWomen)
{
    m_pregnantAndLactatingWomen = _pregnantAndLactatingWomen;
    m_pregnantAndLactatingWomenHasBeenSet = true;
}

bool SmartDrugInfoResp::PregnantAndLactatingWomenHasBeenSet() const
{
    return m_pregnantAndLactatingWomenHasBeenSet;
}

string SmartDrugInfoResp::GetElderlyPatients() const
{
    return m_elderlyPatients;
}

void SmartDrugInfoResp::SetElderlyPatients(const string& _elderlyPatients)
{
    m_elderlyPatients = _elderlyPatients;
    m_elderlyPatientsHasBeenSet = true;
}

bool SmartDrugInfoResp::ElderlyPatientsHasBeenSet() const
{
    return m_elderlyPatientsHasBeenSet;
}

string SmartDrugInfoResp::GetPediatricDrugs() const
{
    return m_pediatricDrugs;
}

void SmartDrugInfoResp::SetPediatricDrugs(const string& _pediatricDrugs)
{
    m_pediatricDrugs = _pediatricDrugs;
    m_pediatricDrugsHasBeenSet = true;
}

bool SmartDrugInfoResp::PediatricDrugsHasBeenSet() const
{
    return m_pediatricDrugsHasBeenSet;
}

string SmartDrugInfoResp::GetInteractions() const
{
    return m_interactions;
}

void SmartDrugInfoResp::SetInteractions(const string& _interactions)
{
    m_interactions = _interactions;
    m_interactionsHasBeenSet = true;
}

bool SmartDrugInfoResp::InteractionsHasBeenSet() const
{
    return m_interactionsHasBeenSet;
}

string SmartDrugInfoResp::GetClinicalResearch() const
{
    return m_clinicalResearch;
}

void SmartDrugInfoResp::SetClinicalResearch(const string& _clinicalResearch)
{
    m_clinicalResearch = _clinicalResearch;
    m_clinicalResearchHasBeenSet = true;
}

bool SmartDrugInfoResp::ClinicalResearchHasBeenSet() const
{
    return m_clinicalResearchHasBeenSet;
}

string SmartDrugInfoResp::GetPharmacologyToxicology() const
{
    return m_pharmacologyToxicology;
}

void SmartDrugInfoResp::SetPharmacologyToxicology(const string& _pharmacologyToxicology)
{
    m_pharmacologyToxicology = _pharmacologyToxicology;
    m_pharmacologyToxicologyHasBeenSet = true;
}

bool SmartDrugInfoResp::PharmacologyToxicologyHasBeenSet() const
{
    return m_pharmacologyToxicologyHasBeenSet;
}

string SmartDrugInfoResp::GetPharmacokinetics() const
{
    return m_pharmacokinetics;
}

void SmartDrugInfoResp::SetPharmacokinetics(const string& _pharmacokinetics)
{
    m_pharmacokinetics = _pharmacokinetics;
    m_pharmacokineticsHasBeenSet = true;
}

bool SmartDrugInfoResp::PharmacokineticsHasBeenSet() const
{
    return m_pharmacokineticsHasBeenSet;
}

string SmartDrugInfoResp::GetWarning() const
{
    return m_warning;
}

void SmartDrugInfoResp::SetWarning(const string& _warning)
{
    m_warning = _warning;
    m_warningHasBeenSet = true;
}

bool SmartDrugInfoResp::WarningHasBeenSet() const
{
    return m_warningHasBeenSet;
}

string SmartDrugInfoResp::GetExpireDate() const
{
    return m_expireDate;
}

void SmartDrugInfoResp::SetExpireDate(const string& _expireDate)
{
    m_expireDate = _expireDate;
    m_expireDateHasBeenSet = true;
}

bool SmartDrugInfoResp::ExpireDateHasBeenSet() const
{
    return m_expireDateHasBeenSet;
}

string SmartDrugInfoResp::GetStorage() const
{
    return m_storage;
}

void SmartDrugInfoResp::SetStorage(const string& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool SmartDrugInfoResp::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string SmartDrugInfoResp::GetPack() const
{
    return m_pack;
}

void SmartDrugInfoResp::SetPack(const string& _pack)
{
    m_pack = _pack;
    m_packHasBeenSet = true;
}

bool SmartDrugInfoResp::PackHasBeenSet() const
{
    return m_packHasBeenSet;
}

string SmartDrugInfoResp::GetManufacturer() const
{
    return m_manufacturer;
}

void SmartDrugInfoResp::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool SmartDrugInfoResp::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string SmartDrugInfoResp::GetManufacturerAddress() const
{
    return m_manufacturerAddress;
}

void SmartDrugInfoResp::SetManufacturerAddress(const string& _manufacturerAddress)
{
    m_manufacturerAddress = _manufacturerAddress;
    m_manufacturerAddressHasBeenSet = true;
}

bool SmartDrugInfoResp::ManufacturerAddressHasBeenSet() const
{
    return m_manufacturerAddressHasBeenSet;
}

string SmartDrugInfoResp::GetManufacturerPhone() const
{
    return m_manufacturerPhone;
}

void SmartDrugInfoResp::SetManufacturerPhone(const string& _manufacturerPhone)
{
    m_manufacturerPhone = _manufacturerPhone;
    m_manufacturerPhoneHasBeenSet = true;
}

bool SmartDrugInfoResp::ManufacturerPhoneHasBeenSet() const
{
    return m_manufacturerPhoneHasBeenSet;
}

string SmartDrugInfoResp::GetManufacturerEmail() const
{
    return m_manufacturerEmail;
}

void SmartDrugInfoResp::SetManufacturerEmail(const string& _manufacturerEmail)
{
    m_manufacturerEmail = _manufacturerEmail;
    m_manufacturerEmailHasBeenSet = true;
}

bool SmartDrugInfoResp::ManufacturerEmailHasBeenSet() const
{
    return m_manufacturerEmailHasBeenSet;
}

string SmartDrugInfoResp::GetManufacturerWebsite() const
{
    return m_manufacturerWebsite;
}

void SmartDrugInfoResp::SetManufacturerWebsite(const string& _manufacturerWebsite)
{
    m_manufacturerWebsite = _manufacturerWebsite;
    m_manufacturerWebsiteHasBeenSet = true;
}

bool SmartDrugInfoResp::ManufacturerWebsiteHasBeenSet() const
{
    return m_manufacturerWebsiteHasBeenSet;
}

string SmartDrugInfoResp::GetDocRevisionTime() const
{
    return m_docRevisionTime;
}

void SmartDrugInfoResp::SetDocRevisionTime(const string& _docRevisionTime)
{
    m_docRevisionTime = _docRevisionTime;
    m_docRevisionTimeHasBeenSet = true;
}

bool SmartDrugInfoResp::DocRevisionTimeHasBeenSet() const
{
    return m_docRevisionTimeHasBeenSet;
}

string SmartDrugInfoResp::GetReferences() const
{
    return m_references;
}

void SmartDrugInfoResp::SetReferences(const string& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool SmartDrugInfoResp::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

string SmartDrugInfoResp::GetDrugDosageForm() const
{
    return m_drugDosageForm;
}

void SmartDrugInfoResp::SetDrugDosageForm(const string& _drugDosageForm)
{
    m_drugDosageForm = _drugDosageForm;
    m_drugDosageFormHasBeenSet = true;
}

bool SmartDrugInfoResp::DrugDosageFormHasBeenSet() const
{
    return m_drugDosageFormHasBeenSet;
}

string SmartDrugInfoResp::GetDrugRoute() const
{
    return m_drugRoute;
}

void SmartDrugInfoResp::SetDrugRoute(const string& _drugRoute)
{
    m_drugRoute = _drugRoute;
    m_drugRouteHasBeenSet = true;
}

bool SmartDrugInfoResp::DrugRouteHasBeenSet() const
{
    return m_drugRouteHasBeenSet;
}

string SmartDrugInfoResp::GetDrugBasicCode() const
{
    return m_drugBasicCode;
}

void SmartDrugInfoResp::SetDrugBasicCode(const string& _drugBasicCode)
{
    m_drugBasicCode = _drugBasicCode;
    m_drugBasicCodeHasBeenSet = true;
}

bool SmartDrugInfoResp::DrugBasicCodeHasBeenSet() const
{
    return m_drugBasicCodeHasBeenSet;
}

string SmartDrugInfoResp::GetOctTag() const
{
    return m_octTag;
}

void SmartDrugInfoResp::SetOctTag(const string& _octTag)
{
    m_octTag = _octTag;
    m_octTagHasBeenSet = true;
}

bool SmartDrugInfoResp::OctTagHasBeenSet() const
{
    return m_octTagHasBeenSet;
}

