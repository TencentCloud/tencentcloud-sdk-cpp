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

#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ChemicalProductInfo::ChemicalProductInfo() :
    m_nameHasBeenSet(false),
    m_activeIngredientHasBeenSet(false),
    m_appearanceHasBeenSet(false),
    m_indicationsHasBeenSet(false),
    m_brochureHasBeenSet(false),
    m_dosageHasBeenSet(false),
    m_adverseReactionHasBeenSet(false),
    m_contraindicationsHasBeenSet(false),
    m_precautionsHasBeenSet(false),
    m_pregnancyLactationUseHasBeenSet(false),
    m_pediatricUseHasBeenSet(false),
    m_geriatricUseHasBeenSet(false),
    m_interactionsHasBeenSet(false),
    m_overdoseHasBeenSet(false),
    m_clinicalTrialHasBeenSet(false),
    m_pharmacologyToxicologyHasBeenSet(false),
    m_pharmacokineticsHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_packagingHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_executiveStandardsHasBeenSet(false),
    m_approvalHasBeenSet(false),
    m_manufacturerHasBeenSet(false)
{
}

CoreInternalOutcome ChemicalProductInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Name` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_name.Deserialize(value["Name"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ActiveIngredient") && !value["ActiveIngredient"].IsNull())
    {
        if (!value["ActiveIngredient"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.ActiveIngredient` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_activeIngredient.Deserialize(value["ActiveIngredient"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_activeIngredientHasBeenSet = true;
    }

    if (value.HasMember("Appearance") && !value["Appearance"].IsNull())
    {
        if (!value["Appearance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Appearance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appearance.Deserialize(value["Appearance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appearanceHasBeenSet = true;
    }

    if (value.HasMember("Indications") && !value["Indications"].IsNull())
    {
        if (!value["Indications"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Indications` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indications.Deserialize(value["Indications"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indicationsHasBeenSet = true;
    }

    if (value.HasMember("Brochure") && !value["Brochure"].IsNull())
    {
        if (!value["Brochure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Brochure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_brochure.Deserialize(value["Brochure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_brochureHasBeenSet = true;
    }

    if (value.HasMember("Dosage") && !value["Dosage"].IsNull())
    {
        if (!value["Dosage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Dosage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dosage.Deserialize(value["Dosage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dosageHasBeenSet = true;
    }

    if (value.HasMember("AdverseReaction") && !value["AdverseReaction"].IsNull())
    {
        if (!value["AdverseReaction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.AdverseReaction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adverseReaction.Deserialize(value["AdverseReaction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adverseReactionHasBeenSet = true;
    }

    if (value.HasMember("Contraindications") && !value["Contraindications"].IsNull())
    {
        if (!value["Contraindications"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Contraindications` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_contraindications.Deserialize(value["Contraindications"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contraindicationsHasBeenSet = true;
    }

    if (value.HasMember("Precautions") && !value["Precautions"].IsNull())
    {
        if (!value["Precautions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Precautions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_precautions.Deserialize(value["Precautions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_precautionsHasBeenSet = true;
    }

    if (value.HasMember("PregnancyLactationUse") && !value["PregnancyLactationUse"].IsNull())
    {
        if (!value["PregnancyLactationUse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.PregnancyLactationUse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pregnancyLactationUse.Deserialize(value["PregnancyLactationUse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pregnancyLactationUseHasBeenSet = true;
    }

    if (value.HasMember("PediatricUse") && !value["PediatricUse"].IsNull())
    {
        if (!value["PediatricUse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.PediatricUse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pediatricUse.Deserialize(value["PediatricUse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pediatricUseHasBeenSet = true;
    }

    if (value.HasMember("GeriatricUse") && !value["GeriatricUse"].IsNull())
    {
        if (!value["GeriatricUse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.GeriatricUse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_geriatricUse.Deserialize(value["GeriatricUse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_geriatricUseHasBeenSet = true;
    }

    if (value.HasMember("Interactions") && !value["Interactions"].IsNull())
    {
        if (!value["Interactions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Interactions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_interactions.Deserialize(value["Interactions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_interactionsHasBeenSet = true;
    }

    if (value.HasMember("Overdose") && !value["Overdose"].IsNull())
    {
        if (!value["Overdose"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Overdose` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_overdose.Deserialize(value["Overdose"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_overdoseHasBeenSet = true;
    }

    if (value.HasMember("ClinicalTrial") && !value["ClinicalTrial"].IsNull())
    {
        if (!value["ClinicalTrial"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.ClinicalTrial` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clinicalTrial.Deserialize(value["ClinicalTrial"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clinicalTrialHasBeenSet = true;
    }

    if (value.HasMember("PharmacologyToxicology") && !value["PharmacologyToxicology"].IsNull())
    {
        if (!value["PharmacologyToxicology"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.PharmacologyToxicology` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pharmacologyToxicology.Deserialize(value["PharmacologyToxicology"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pharmacologyToxicologyHasBeenSet = true;
    }

    if (value.HasMember("Pharmacokinetics") && !value["Pharmacokinetics"].IsNull())
    {
        if (!value["Pharmacokinetics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Pharmacokinetics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pharmacokinetics.Deserialize(value["Pharmacokinetics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pharmacokineticsHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Storage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storage.Deserialize(value["Storage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageHasBeenSet = true;
    }

    if (value.HasMember("Packaging") && !value["Packaging"].IsNull())
    {
        if (!value["Packaging"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Packaging` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_packaging.Deserialize(value["Packaging"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_packagingHasBeenSet = true;
    }

    if (value.HasMember("ValidityPeriod") && !value["ValidityPeriod"].IsNull())
    {
        if (!value["ValidityPeriod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.ValidityPeriod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_validityPeriod.Deserialize(value["ValidityPeriod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_validityPeriodHasBeenSet = true;
    }

    if (value.HasMember("ExecutiveStandards") && !value["ExecutiveStandards"].IsNull())
    {
        if (!value["ExecutiveStandards"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.ExecutiveStandards` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_executiveStandards.Deserialize(value["ExecutiveStandards"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_executiveStandardsHasBeenSet = true;
    }

    if (value.HasMember("Approval") && !value["Approval"].IsNull())
    {
        if (!value["Approval"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Approval` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_approval.Deserialize(value["Approval"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_approvalHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo.Manufacturer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_manufacturer.Deserialize(value["Manufacturer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_manufacturerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChemicalProductInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_name.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_activeIngredientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveIngredient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_activeIngredient.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appearanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appearance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appearance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indications.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_brochureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brochure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_brochure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dosageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dosage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dosage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adverseReactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdverseReaction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adverseReaction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_contraindicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contraindications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contraindications.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_precautionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Precautions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_precautions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pregnancyLactationUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PregnancyLactationUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pregnancyLactationUse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pediatricUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PediatricUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pediatricUse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_geriatricUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeriatricUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_geriatricUse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_interactionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interactions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_interactions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_overdoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Overdose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_overdose.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clinicalTrialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClinicalTrial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clinicalTrial.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pharmacologyToxicologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PharmacologyToxicology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pharmacologyToxicology.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pharmacokineticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pharmacokinetics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pharmacokinetics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_packagingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Packaging";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_packaging.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_validityPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidityPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_validityPeriod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_executiveStandardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutiveStandards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_executiveStandards.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_approvalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Approval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_approval.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_manufacturer.ToJsonObject(value[key.c_str()], allocator);
    }

}


ChemicalProductInfoName ChemicalProductInfo::GetName() const
{
    return m_name;
}

void ChemicalProductInfo::SetName(const ChemicalProductInfoName& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChemicalProductInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

ChemicalProductInfoActiveIngredient ChemicalProductInfo::GetActiveIngredient() const
{
    return m_activeIngredient;
}

void ChemicalProductInfo::SetActiveIngredient(const ChemicalProductInfoActiveIngredient& _activeIngredient)
{
    m_activeIngredient = _activeIngredient;
    m_activeIngredientHasBeenSet = true;
}

bool ChemicalProductInfo::ActiveIngredientHasBeenSet() const
{
    return m_activeIngredientHasBeenSet;
}

ChemicalProductInfoAppearance ChemicalProductInfo::GetAppearance() const
{
    return m_appearance;
}

void ChemicalProductInfo::SetAppearance(const ChemicalProductInfoAppearance& _appearance)
{
    m_appearance = _appearance;
    m_appearanceHasBeenSet = true;
}

bool ChemicalProductInfo::AppearanceHasBeenSet() const
{
    return m_appearanceHasBeenSet;
}

ChemicalProductInfoIndications ChemicalProductInfo::GetIndications() const
{
    return m_indications;
}

void ChemicalProductInfo::SetIndications(const ChemicalProductInfoIndications& _indications)
{
    m_indications = _indications;
    m_indicationsHasBeenSet = true;
}

bool ChemicalProductInfo::IndicationsHasBeenSet() const
{
    return m_indicationsHasBeenSet;
}

ChemicalProductInfoBrochure ChemicalProductInfo::GetBrochure() const
{
    return m_brochure;
}

void ChemicalProductInfo::SetBrochure(const ChemicalProductInfoBrochure& _brochure)
{
    m_brochure = _brochure;
    m_brochureHasBeenSet = true;
}

bool ChemicalProductInfo::BrochureHasBeenSet() const
{
    return m_brochureHasBeenSet;
}

ChemicalProductInfoDosage ChemicalProductInfo::GetDosage() const
{
    return m_dosage;
}

void ChemicalProductInfo::SetDosage(const ChemicalProductInfoDosage& _dosage)
{
    m_dosage = _dosage;
    m_dosageHasBeenSet = true;
}

bool ChemicalProductInfo::DosageHasBeenSet() const
{
    return m_dosageHasBeenSet;
}

ChemicalProductInfoAdverseReaction ChemicalProductInfo::GetAdverseReaction() const
{
    return m_adverseReaction;
}

void ChemicalProductInfo::SetAdverseReaction(const ChemicalProductInfoAdverseReaction& _adverseReaction)
{
    m_adverseReaction = _adverseReaction;
    m_adverseReactionHasBeenSet = true;
}

bool ChemicalProductInfo::AdverseReactionHasBeenSet() const
{
    return m_adverseReactionHasBeenSet;
}

ChemicalProductInfoContraindications ChemicalProductInfo::GetContraindications() const
{
    return m_contraindications;
}

void ChemicalProductInfo::SetContraindications(const ChemicalProductInfoContraindications& _contraindications)
{
    m_contraindications = _contraindications;
    m_contraindicationsHasBeenSet = true;
}

bool ChemicalProductInfo::ContraindicationsHasBeenSet() const
{
    return m_contraindicationsHasBeenSet;
}

ChemicalProductInfoPrecautions ChemicalProductInfo::GetPrecautions() const
{
    return m_precautions;
}

void ChemicalProductInfo::SetPrecautions(const ChemicalProductInfoPrecautions& _precautions)
{
    m_precautions = _precautions;
    m_precautionsHasBeenSet = true;
}

bool ChemicalProductInfo::PrecautionsHasBeenSet() const
{
    return m_precautionsHasBeenSet;
}

ChemicalProductInfoPregnancyLactationUse ChemicalProductInfo::GetPregnancyLactationUse() const
{
    return m_pregnancyLactationUse;
}

void ChemicalProductInfo::SetPregnancyLactationUse(const ChemicalProductInfoPregnancyLactationUse& _pregnancyLactationUse)
{
    m_pregnancyLactationUse = _pregnancyLactationUse;
    m_pregnancyLactationUseHasBeenSet = true;
}

bool ChemicalProductInfo::PregnancyLactationUseHasBeenSet() const
{
    return m_pregnancyLactationUseHasBeenSet;
}

ChemicalProductInfoPediatricUse ChemicalProductInfo::GetPediatricUse() const
{
    return m_pediatricUse;
}

void ChemicalProductInfo::SetPediatricUse(const ChemicalProductInfoPediatricUse& _pediatricUse)
{
    m_pediatricUse = _pediatricUse;
    m_pediatricUseHasBeenSet = true;
}

bool ChemicalProductInfo::PediatricUseHasBeenSet() const
{
    return m_pediatricUseHasBeenSet;
}

ChemicalProductInfoGeriatricUse ChemicalProductInfo::GetGeriatricUse() const
{
    return m_geriatricUse;
}

void ChemicalProductInfo::SetGeriatricUse(const ChemicalProductInfoGeriatricUse& _geriatricUse)
{
    m_geriatricUse = _geriatricUse;
    m_geriatricUseHasBeenSet = true;
}

bool ChemicalProductInfo::GeriatricUseHasBeenSet() const
{
    return m_geriatricUseHasBeenSet;
}

ChemicalProductInfoInteractions ChemicalProductInfo::GetInteractions() const
{
    return m_interactions;
}

void ChemicalProductInfo::SetInteractions(const ChemicalProductInfoInteractions& _interactions)
{
    m_interactions = _interactions;
    m_interactionsHasBeenSet = true;
}

bool ChemicalProductInfo::InteractionsHasBeenSet() const
{
    return m_interactionsHasBeenSet;
}

ChemicalProductInfoOverdose ChemicalProductInfo::GetOverdose() const
{
    return m_overdose;
}

void ChemicalProductInfo::SetOverdose(const ChemicalProductInfoOverdose& _overdose)
{
    m_overdose = _overdose;
    m_overdoseHasBeenSet = true;
}

bool ChemicalProductInfo::OverdoseHasBeenSet() const
{
    return m_overdoseHasBeenSet;
}

ChemicalProductInfoClinicalTrial ChemicalProductInfo::GetClinicalTrial() const
{
    return m_clinicalTrial;
}

void ChemicalProductInfo::SetClinicalTrial(const ChemicalProductInfoClinicalTrial& _clinicalTrial)
{
    m_clinicalTrial = _clinicalTrial;
    m_clinicalTrialHasBeenSet = true;
}

bool ChemicalProductInfo::ClinicalTrialHasBeenSet() const
{
    return m_clinicalTrialHasBeenSet;
}

ChemicalProductInfoPharmacologyToxicology ChemicalProductInfo::GetPharmacologyToxicology() const
{
    return m_pharmacologyToxicology;
}

void ChemicalProductInfo::SetPharmacologyToxicology(const ChemicalProductInfoPharmacologyToxicology& _pharmacologyToxicology)
{
    m_pharmacologyToxicology = _pharmacologyToxicology;
    m_pharmacologyToxicologyHasBeenSet = true;
}

bool ChemicalProductInfo::PharmacologyToxicologyHasBeenSet() const
{
    return m_pharmacologyToxicologyHasBeenSet;
}

ChemicalProductInfoPharmacokinetics ChemicalProductInfo::GetPharmacokinetics() const
{
    return m_pharmacokinetics;
}

void ChemicalProductInfo::SetPharmacokinetics(const ChemicalProductInfoPharmacokinetics& _pharmacokinetics)
{
    m_pharmacokinetics = _pharmacokinetics;
    m_pharmacokineticsHasBeenSet = true;
}

bool ChemicalProductInfo::PharmacokineticsHasBeenSet() const
{
    return m_pharmacokineticsHasBeenSet;
}

ChemicalProductInfoStorage ChemicalProductInfo::GetStorage() const
{
    return m_storage;
}

void ChemicalProductInfo::SetStorage(const ChemicalProductInfoStorage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool ChemicalProductInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

ChemicalProductInfoPackaging ChemicalProductInfo::GetPackaging() const
{
    return m_packaging;
}

void ChemicalProductInfo::SetPackaging(const ChemicalProductInfoPackaging& _packaging)
{
    m_packaging = _packaging;
    m_packagingHasBeenSet = true;
}

bool ChemicalProductInfo::PackagingHasBeenSet() const
{
    return m_packagingHasBeenSet;
}

ChemicalProductInfoValidityPeriod ChemicalProductInfo::GetValidityPeriod() const
{
    return m_validityPeriod;
}

void ChemicalProductInfo::SetValidityPeriod(const ChemicalProductInfoValidityPeriod& _validityPeriod)
{
    m_validityPeriod = _validityPeriod;
    m_validityPeriodHasBeenSet = true;
}

bool ChemicalProductInfo::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

ChemicalProductInfoExecutiveStandards ChemicalProductInfo::GetExecutiveStandards() const
{
    return m_executiveStandards;
}

void ChemicalProductInfo::SetExecutiveStandards(const ChemicalProductInfoExecutiveStandards& _executiveStandards)
{
    m_executiveStandards = _executiveStandards;
    m_executiveStandardsHasBeenSet = true;
}

bool ChemicalProductInfo::ExecutiveStandardsHasBeenSet() const
{
    return m_executiveStandardsHasBeenSet;
}

ChemicalProductInfoApproval ChemicalProductInfo::GetApproval() const
{
    return m_approval;
}

void ChemicalProductInfo::SetApproval(const ChemicalProductInfoApproval& _approval)
{
    m_approval = _approval;
    m_approvalHasBeenSet = true;
}

bool ChemicalProductInfo::ApprovalHasBeenSet() const
{
    return m_approvalHasBeenSet;
}

ChemicalProductInfoManufacturer ChemicalProductInfo::GetManufacturer() const
{
    return m_manufacturer;
}

void ChemicalProductInfo::SetManufacturer(const ChemicalProductInfoManufacturer& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool ChemicalProductInfo::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

