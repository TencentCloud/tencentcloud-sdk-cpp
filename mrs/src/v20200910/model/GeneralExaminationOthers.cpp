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

#include <tencentcloud/mrs/v20200910/model/GeneralExaminationOthers.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

GeneralExaminationOthers::GeneralExaminationOthers() :
    m_countenanceHasBeenSet(false),
    m_mentalStatusHasBeenSet(false),
    m_developmentConditionHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_hiplineHasBeenSet(false),
    m_waistHipRatioHasBeenSet(false),
    m_addictionHasBeenSet(false),
    m_abilityOfLifeADLHasBeenSet(false),
    m_othersHasBeenSet(false),
    m_chestCircumferenceHasBeenSet(false)
{
}

CoreInternalOutcome GeneralExaminationOthers::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Countenance") && !value["Countenance"].IsNull())
    {
        if (!value["Countenance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationOthers.Countenance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_countenance.Deserialize(value["Countenance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_countenanceHasBeenSet = true;
    }

    if (value.HasMember("MentalStatus") && !value["MentalStatus"].IsNull())
    {
        if (!value["MentalStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationOthers.MentalStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mentalStatus.Deserialize(value["MentalStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mentalStatusHasBeenSet = true;
    }

    if (value.HasMember("DevelopmentCondition") && !value["DevelopmentCondition"].IsNull())
    {
        if (!value["DevelopmentCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationOthers.DevelopmentCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_developmentCondition.Deserialize(value["DevelopmentCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_developmentConditionHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationOthers.Memory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memory.Deserialize(value["Memory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Hipline") && !value["Hipline"].IsNull())
    {
        if (!value["Hipline"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationOthers.Hipline` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hipline.Deserialize(value["Hipline"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hiplineHasBeenSet = true;
    }

    if (value.HasMember("WaistHipRatio") && !value["WaistHipRatio"].IsNull())
    {
        if (!value["WaistHipRatio"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationOthers.WaistHipRatio` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waistHipRatio.Deserialize(value["WaistHipRatio"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_waistHipRatioHasBeenSet = true;
    }

    if (value.HasMember("Addiction") && !value["Addiction"].IsNull())
    {
        if (!value["Addiction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationOthers.Addiction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addiction.Deserialize(value["Addiction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addictionHasBeenSet = true;
    }

    if (value.HasMember("AbilityOfLifeADL") && !value["AbilityOfLifeADL"].IsNull())
    {
        if (!value["AbilityOfLifeADL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationOthers.AbilityOfLifeADL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_abilityOfLifeADL.Deserialize(value["AbilityOfLifeADL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_abilityOfLifeADLHasBeenSet = true;
    }

    if (value.HasMember("Others") && !value["Others"].IsNull())
    {
        if (!value["Others"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationOthers.Others` is not array type"));

        const rapidjson::Value &tmpValue = value["Others"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_others.push_back(item);
        }
        m_othersHasBeenSet = true;
    }

    if (value.HasMember("ChestCircumference") && !value["ChestCircumference"].IsNull())
    {
        if (!value["ChestCircumference"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationOthers.ChestCircumference` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_chestCircumference.Deserialize(value["ChestCircumference"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_chestCircumferenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralExaminationOthers::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countenanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Countenance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_countenance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mentalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MentalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mentalStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_developmentConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevelopmentCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_developmentCondition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hiplineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hipline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hipline.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_waistHipRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaistHipRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waistHipRatio.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addictionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addiction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addiction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_abilityOfLifeADLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbilityOfLifeADL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_abilityOfLifeADL.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_othersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Others";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_others.begin(); itr != m_others.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_chestCircumferenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChestCircumference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chestCircumference.ToJsonObject(value[key.c_str()], allocator);
    }

}


KeyValueItem GeneralExaminationOthers::GetCountenance() const
{
    return m_countenance;
}

void GeneralExaminationOthers::SetCountenance(const KeyValueItem& _countenance)
{
    m_countenance = _countenance;
    m_countenanceHasBeenSet = true;
}

bool GeneralExaminationOthers::CountenanceHasBeenSet() const
{
    return m_countenanceHasBeenSet;
}

KeyValueItem GeneralExaminationOthers::GetMentalStatus() const
{
    return m_mentalStatus;
}

void GeneralExaminationOthers::SetMentalStatus(const KeyValueItem& _mentalStatus)
{
    m_mentalStatus = _mentalStatus;
    m_mentalStatusHasBeenSet = true;
}

bool GeneralExaminationOthers::MentalStatusHasBeenSet() const
{
    return m_mentalStatusHasBeenSet;
}

KeyValueItem GeneralExaminationOthers::GetDevelopmentCondition() const
{
    return m_developmentCondition;
}

void GeneralExaminationOthers::SetDevelopmentCondition(const KeyValueItem& _developmentCondition)
{
    m_developmentCondition = _developmentCondition;
    m_developmentConditionHasBeenSet = true;
}

bool GeneralExaminationOthers::DevelopmentConditionHasBeenSet() const
{
    return m_developmentConditionHasBeenSet;
}

KeyValueItem GeneralExaminationOthers::GetMemory() const
{
    return m_memory;
}

void GeneralExaminationOthers::SetMemory(const KeyValueItem& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool GeneralExaminationOthers::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

ValueUnitItem GeneralExaminationOthers::GetHipline() const
{
    return m_hipline;
}

void GeneralExaminationOthers::SetHipline(const ValueUnitItem& _hipline)
{
    m_hipline = _hipline;
    m_hiplineHasBeenSet = true;
}

bool GeneralExaminationOthers::HiplineHasBeenSet() const
{
    return m_hiplineHasBeenSet;
}

ValueUnitItem GeneralExaminationOthers::GetWaistHipRatio() const
{
    return m_waistHipRatio;
}

void GeneralExaminationOthers::SetWaistHipRatio(const ValueUnitItem& _waistHipRatio)
{
    m_waistHipRatio = _waistHipRatio;
    m_waistHipRatioHasBeenSet = true;
}

bool GeneralExaminationOthers::WaistHipRatioHasBeenSet() const
{
    return m_waistHipRatioHasBeenSet;
}

KeyValueItem GeneralExaminationOthers::GetAddiction() const
{
    return m_addiction;
}

void GeneralExaminationOthers::SetAddiction(const KeyValueItem& _addiction)
{
    m_addiction = _addiction;
    m_addictionHasBeenSet = true;
}

bool GeneralExaminationOthers::AddictionHasBeenSet() const
{
    return m_addictionHasBeenSet;
}

KeyValueItem GeneralExaminationOthers::GetAbilityOfLifeADL() const
{
    return m_abilityOfLifeADL;
}

void GeneralExaminationOthers::SetAbilityOfLifeADL(const KeyValueItem& _abilityOfLifeADL)
{
    m_abilityOfLifeADL = _abilityOfLifeADL;
    m_abilityOfLifeADLHasBeenSet = true;
}

bool GeneralExaminationOthers::AbilityOfLifeADLHasBeenSet() const
{
    return m_abilityOfLifeADLHasBeenSet;
}

vector<KeyValueItem> GeneralExaminationOthers::GetOthers() const
{
    return m_others;
}

void GeneralExaminationOthers::SetOthers(const vector<KeyValueItem>& _others)
{
    m_others = _others;
    m_othersHasBeenSet = true;
}

bool GeneralExaminationOthers::OthersHasBeenSet() const
{
    return m_othersHasBeenSet;
}

ChestCircumferenceItem GeneralExaminationOthers::GetChestCircumference() const
{
    return m_chestCircumference;
}

void GeneralExaminationOthers::SetChestCircumference(const ChestCircumferenceItem& _chestCircumference)
{
    m_chestCircumference = _chestCircumference;
    m_chestCircumferenceHasBeenSet = true;
}

bool GeneralExaminationOthers::ChestCircumferenceHasBeenSet() const
{
    return m_chestCircumferenceHasBeenSet;
}

