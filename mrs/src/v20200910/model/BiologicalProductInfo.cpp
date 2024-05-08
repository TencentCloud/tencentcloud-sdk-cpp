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

#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

BiologicalProductInfo::BiologicalProductInfo() :
    m_nameHasBeenSet(false),
    m_ingredientAndAppearanceHasBeenSet(false),
    m_vaccinationTargetHasBeenSet(false),
    m_indicationsHasBeenSet(false),
    m_brochureHasBeenSet(false),
    m_dosageHasBeenSet(false),
    m_adverseReactionHasBeenSet(false),
    m_contraindicationsHasBeenSet(false),
    m_precautionsHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_packagingHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_executiveStandardsHasBeenSet(false),
    m_approvalHasBeenSet(false),
    m_manufacturerHasBeenSet(false)
{
}

CoreInternalOutcome BiologicalProductInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.Name` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_name.Deserialize(value["Name"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IngredientAndAppearance") && !value["IngredientAndAppearance"].IsNull())
    {
        if (!value["IngredientAndAppearance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.IngredientAndAppearance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ingredientAndAppearance.Deserialize(value["IngredientAndAppearance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ingredientAndAppearanceHasBeenSet = true;
    }

    if (value.HasMember("VaccinationTarget") && !value["VaccinationTarget"].IsNull())
    {
        if (!value["VaccinationTarget"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.VaccinationTarget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vaccinationTarget.Deserialize(value["VaccinationTarget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vaccinationTargetHasBeenSet = true;
    }

    if (value.HasMember("Indications") && !value["Indications"].IsNull())
    {
        if (!value["Indications"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.Indications` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.Brochure` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.Dosage` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.AdverseReaction` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.Contraindications` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.Precautions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_precautions.Deserialize(value["Precautions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_precautionsHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.Storage` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.Packaging` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.ValidityPeriod` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.ExecutiveStandards` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.Approval` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo.Manufacturer` is not object type").SetRequestId(requestId));
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

void BiologicalProductInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_name.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ingredientAndAppearanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngredientAndAppearance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ingredientAndAppearance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vaccinationTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaccinationTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vaccinationTarget.ToJsonObject(value[key.c_str()], allocator);
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


BiologicalProductInfoName BiologicalProductInfo::GetName() const
{
    return m_name;
}

void BiologicalProductInfo::SetName(const BiologicalProductInfoName& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BiologicalProductInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

BiologicalProductInfoIngredientAndAppearance BiologicalProductInfo::GetIngredientAndAppearance() const
{
    return m_ingredientAndAppearance;
}

void BiologicalProductInfo::SetIngredientAndAppearance(const BiologicalProductInfoIngredientAndAppearance& _ingredientAndAppearance)
{
    m_ingredientAndAppearance = _ingredientAndAppearance;
    m_ingredientAndAppearanceHasBeenSet = true;
}

bool BiologicalProductInfo::IngredientAndAppearanceHasBeenSet() const
{
    return m_ingredientAndAppearanceHasBeenSet;
}

BiologicalProductInfoVaccinationTarget BiologicalProductInfo::GetVaccinationTarget() const
{
    return m_vaccinationTarget;
}

void BiologicalProductInfo::SetVaccinationTarget(const BiologicalProductInfoVaccinationTarget& _vaccinationTarget)
{
    m_vaccinationTarget = _vaccinationTarget;
    m_vaccinationTargetHasBeenSet = true;
}

bool BiologicalProductInfo::VaccinationTargetHasBeenSet() const
{
    return m_vaccinationTargetHasBeenSet;
}

BiologicalProductInfoIndications BiologicalProductInfo::GetIndications() const
{
    return m_indications;
}

void BiologicalProductInfo::SetIndications(const BiologicalProductInfoIndications& _indications)
{
    m_indications = _indications;
    m_indicationsHasBeenSet = true;
}

bool BiologicalProductInfo::IndicationsHasBeenSet() const
{
    return m_indicationsHasBeenSet;
}

BiologicalProductInfoBrochure BiologicalProductInfo::GetBrochure() const
{
    return m_brochure;
}

void BiologicalProductInfo::SetBrochure(const BiologicalProductInfoBrochure& _brochure)
{
    m_brochure = _brochure;
    m_brochureHasBeenSet = true;
}

bool BiologicalProductInfo::BrochureHasBeenSet() const
{
    return m_brochureHasBeenSet;
}

BiologicalProductInfoDosage BiologicalProductInfo::GetDosage() const
{
    return m_dosage;
}

void BiologicalProductInfo::SetDosage(const BiologicalProductInfoDosage& _dosage)
{
    m_dosage = _dosage;
    m_dosageHasBeenSet = true;
}

bool BiologicalProductInfo::DosageHasBeenSet() const
{
    return m_dosageHasBeenSet;
}

BiologicalProductInfoAdverseReaction BiologicalProductInfo::GetAdverseReaction() const
{
    return m_adverseReaction;
}

void BiologicalProductInfo::SetAdverseReaction(const BiologicalProductInfoAdverseReaction& _adverseReaction)
{
    m_adverseReaction = _adverseReaction;
    m_adverseReactionHasBeenSet = true;
}

bool BiologicalProductInfo::AdverseReactionHasBeenSet() const
{
    return m_adverseReactionHasBeenSet;
}

BiologicalProductInfoContraindications BiologicalProductInfo::GetContraindications() const
{
    return m_contraindications;
}

void BiologicalProductInfo::SetContraindications(const BiologicalProductInfoContraindications& _contraindications)
{
    m_contraindications = _contraindications;
    m_contraindicationsHasBeenSet = true;
}

bool BiologicalProductInfo::ContraindicationsHasBeenSet() const
{
    return m_contraindicationsHasBeenSet;
}

BiologicalProductInfoPrecautions BiologicalProductInfo::GetPrecautions() const
{
    return m_precautions;
}

void BiologicalProductInfo::SetPrecautions(const BiologicalProductInfoPrecautions& _precautions)
{
    m_precautions = _precautions;
    m_precautionsHasBeenSet = true;
}

bool BiologicalProductInfo::PrecautionsHasBeenSet() const
{
    return m_precautionsHasBeenSet;
}

BiologicalProductInfoStorage BiologicalProductInfo::GetStorage() const
{
    return m_storage;
}

void BiologicalProductInfo::SetStorage(const BiologicalProductInfoStorage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool BiologicalProductInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

BiologicalProductInfoPackaging BiologicalProductInfo::GetPackaging() const
{
    return m_packaging;
}

void BiologicalProductInfo::SetPackaging(const BiologicalProductInfoPackaging& _packaging)
{
    m_packaging = _packaging;
    m_packagingHasBeenSet = true;
}

bool BiologicalProductInfo::PackagingHasBeenSet() const
{
    return m_packagingHasBeenSet;
}

BiologicalProductInfoValidityPeriod BiologicalProductInfo::GetValidityPeriod() const
{
    return m_validityPeriod;
}

void BiologicalProductInfo::SetValidityPeriod(const BiologicalProductInfoValidityPeriod& _validityPeriod)
{
    m_validityPeriod = _validityPeriod;
    m_validityPeriodHasBeenSet = true;
}

bool BiologicalProductInfo::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

BiologicalProductInfoExecutiveStandards BiologicalProductInfo::GetExecutiveStandards() const
{
    return m_executiveStandards;
}

void BiologicalProductInfo::SetExecutiveStandards(const BiologicalProductInfoExecutiveStandards& _executiveStandards)
{
    m_executiveStandards = _executiveStandards;
    m_executiveStandardsHasBeenSet = true;
}

bool BiologicalProductInfo::ExecutiveStandardsHasBeenSet() const
{
    return m_executiveStandardsHasBeenSet;
}

BiologicalProductInfoApproval BiologicalProductInfo::GetApproval() const
{
    return m_approval;
}

void BiologicalProductInfo::SetApproval(const BiologicalProductInfoApproval& _approval)
{
    m_approval = _approval;
    m_approvalHasBeenSet = true;
}

bool BiologicalProductInfo::ApprovalHasBeenSet() const
{
    return m_approvalHasBeenSet;
}

BiologicalProductInfoManufacturer BiologicalProductInfo::GetManufacturer() const
{
    return m_manufacturer;
}

void BiologicalProductInfo::SetManufacturer(const BiologicalProductInfoManufacturer& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool BiologicalProductInfo::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

