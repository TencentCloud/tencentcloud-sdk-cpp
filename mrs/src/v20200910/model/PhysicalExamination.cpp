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

#include <tencentcloud/mrs/v20200910/model/PhysicalExamination.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PhysicalExamination::PhysicalExamination() :
    m_generalExaminationHasBeenSet(false),
    m_internalMedicineHasBeenSet(false),
    m_surgeryHasBeenSet(false),
    m_stomatologyHasBeenSet(false),
    m_ophthalmologyHasBeenSet(false),
    m_otolaryngologyHasBeenSet(false),
    m_gynaecologyHasBeenSet(false),
    m_unclassifiedHasBeenSet(false)
{
}

CoreInternalOutcome PhysicalExamination::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GeneralExamination") && !value["GeneralExamination"].IsNull())
    {
        if (!value["GeneralExamination"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExamination.GeneralExamination` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_generalExamination.Deserialize(value["GeneralExamination"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_generalExaminationHasBeenSet = true;
    }

    if (value.HasMember("InternalMedicine") && !value["InternalMedicine"].IsNull())
    {
        if (!value["InternalMedicine"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExamination.InternalMedicine` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internalMedicine.Deserialize(value["InternalMedicine"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internalMedicineHasBeenSet = true;
    }

    if (value.HasMember("Surgery") && !value["Surgery"].IsNull())
    {
        if (!value["Surgery"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExamination.Surgery` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_surgery.Deserialize(value["Surgery"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_surgeryHasBeenSet = true;
    }

    if (value.HasMember("Stomatology") && !value["Stomatology"].IsNull())
    {
        if (!value["Stomatology"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExamination.Stomatology` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stomatology.Deserialize(value["Stomatology"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stomatologyHasBeenSet = true;
    }

    if (value.HasMember("Ophthalmology") && !value["Ophthalmology"].IsNull())
    {
        if (!value["Ophthalmology"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExamination.Ophthalmology` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ophthalmology.Deserialize(value["Ophthalmology"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ophthalmologyHasBeenSet = true;
    }

    if (value.HasMember("Otolaryngology") && !value["Otolaryngology"].IsNull())
    {
        if (!value["Otolaryngology"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExamination.Otolaryngology` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_otolaryngology.Deserialize(value["Otolaryngology"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_otolaryngologyHasBeenSet = true;
    }

    if (value.HasMember("Gynaecology") && !value["Gynaecology"].IsNull())
    {
        if (!value["Gynaecology"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExamination.Gynaecology` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gynaecology.Deserialize(value["Gynaecology"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gynaecologyHasBeenSet = true;
    }

    if (value.HasMember("Unclassified") && !value["Unclassified"].IsNull())
    {
        if (!value["Unclassified"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PhysicalExamination.Unclassified` is not array type"));

        const rapidjson::Value &tmpValue = value["Unclassified"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_unclassified.push_back(item);
        }
        m_unclassifiedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhysicalExamination::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_generalExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_generalExamination.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_internalMedicineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalMedicine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internalMedicine.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_surgeryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Surgery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_surgery.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stomatologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stomatology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stomatology.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ophthalmologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ophthalmology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ophthalmology.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otolaryngologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Otolaryngology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_otolaryngology.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gynaecologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gynaecology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gynaecology.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_unclassifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unclassified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unclassified.begin(); itr != m_unclassified.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


GeneralExaminationBaseItem PhysicalExamination::GetGeneralExamination() const
{
    return m_generalExamination;
}

void PhysicalExamination::SetGeneralExamination(const GeneralExaminationBaseItem& _generalExamination)
{
    m_generalExamination = _generalExamination;
    m_generalExaminationHasBeenSet = true;
}

bool PhysicalExamination::GeneralExaminationHasBeenSet() const
{
    return m_generalExaminationHasBeenSet;
}

InternalMedicineBaseItem PhysicalExamination::GetInternalMedicine() const
{
    return m_internalMedicine;
}

void PhysicalExamination::SetInternalMedicine(const InternalMedicineBaseItem& _internalMedicine)
{
    m_internalMedicine = _internalMedicine;
    m_internalMedicineHasBeenSet = true;
}

bool PhysicalExamination::InternalMedicineHasBeenSet() const
{
    return m_internalMedicineHasBeenSet;
}

SurgeryBaseItem PhysicalExamination::GetSurgery() const
{
    return m_surgery;
}

void PhysicalExamination::SetSurgery(const SurgeryBaseItem& _surgery)
{
    m_surgery = _surgery;
    m_surgeryHasBeenSet = true;
}

bool PhysicalExamination::SurgeryHasBeenSet() const
{
    return m_surgeryHasBeenSet;
}

StomatologyBaseItem PhysicalExamination::GetStomatology() const
{
    return m_stomatology;
}

void PhysicalExamination::SetStomatology(const StomatologyBaseItem& _stomatology)
{
    m_stomatology = _stomatology;
    m_stomatologyHasBeenSet = true;
}

bool PhysicalExamination::StomatologyHasBeenSet() const
{
    return m_stomatologyHasBeenSet;
}

OphthalmologyBaseItem PhysicalExamination::GetOphthalmology() const
{
    return m_ophthalmology;
}

void PhysicalExamination::SetOphthalmology(const OphthalmologyBaseItem& _ophthalmology)
{
    m_ophthalmology = _ophthalmology;
    m_ophthalmologyHasBeenSet = true;
}

bool PhysicalExamination::OphthalmologyHasBeenSet() const
{
    return m_ophthalmologyHasBeenSet;
}

OtolaryngologyBaseItem PhysicalExamination::GetOtolaryngology() const
{
    return m_otolaryngology;
}

void PhysicalExamination::SetOtolaryngology(const OtolaryngologyBaseItem& _otolaryngology)
{
    m_otolaryngology = _otolaryngology;
    m_otolaryngologyHasBeenSet = true;
}

bool PhysicalExamination::OtolaryngologyHasBeenSet() const
{
    return m_otolaryngologyHasBeenSet;
}

GynaecologyBaseItem PhysicalExamination::GetGynaecology() const
{
    return m_gynaecology;
}

void PhysicalExamination::SetGynaecology(const GynaecologyBaseItem& _gynaecology)
{
    m_gynaecology = _gynaecology;
    m_gynaecologyHasBeenSet = true;
}

bool PhysicalExamination::GynaecologyHasBeenSet() const
{
    return m_gynaecologyHasBeenSet;
}

vector<KeyValueItem> PhysicalExamination::GetUnclassified() const
{
    return m_unclassified;
}

void PhysicalExamination::SetUnclassified(const vector<KeyValueItem>& _unclassified)
{
    m_unclassified = _unclassified;
    m_unclassifiedHasBeenSet = true;
}

bool PhysicalExamination::UnclassifiedHasBeenSet() const
{
    return m_unclassifiedHasBeenSet;
}

