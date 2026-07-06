/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tokenhub/v20260322/model/ModelChargingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModelChargingInfo::ModelChargingInfo() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scenarioHasBeenSet(false),
    m_chargingItemsHasBeenSet(false),
    m_chargeUnitHasBeenSet(false),
    m_referenceHasBeenSet(false)
{
}

CoreInternalOutcome ModelChargingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChargingInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChargingInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Scenario") && !value["Scenario"].IsNull())
    {
        if (!value["Scenario"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChargingInfo.Scenario` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenario = string(value["Scenario"].GetString());
        m_scenarioHasBeenSet = true;
    }

    if (value.HasMember("ChargingItems") && !value["ChargingItems"].IsNull())
    {
        if (!value["ChargingItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelChargingInfo.ChargingItems` is not array type"));

        const rapidjson::Value &tmpValue = value["ChargingItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModelChargingItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_chargingItems.push_back(item);
        }
        m_chargingItemsHasBeenSet = true;
    }

    if (value.HasMember("ChargeUnit") && !value["ChargeUnit"].IsNull())
    {
        if (!value["ChargeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChargingInfo.ChargeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeUnit = string(value["ChargeUnit"].GetString());
        m_chargeUnitHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChargingInfo.Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(value["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelChargingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scenario";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenario.c_str(), allocator).Move(), allocator);
    }

    if (m_chargingItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargingItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_chargingItems.begin(); itr != m_chargingItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_chargeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
    }

}


string ModelChargingInfo::GetType() const
{
    return m_type;
}

void ModelChargingInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModelChargingInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModelChargingInfo::GetName() const
{
    return m_name;
}

void ModelChargingInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModelChargingInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModelChargingInfo::GetScenario() const
{
    return m_scenario;
}

void ModelChargingInfo::SetScenario(const string& _scenario)
{
    m_scenario = _scenario;
    m_scenarioHasBeenSet = true;
}

bool ModelChargingInfo::ScenarioHasBeenSet() const
{
    return m_scenarioHasBeenSet;
}

vector<ModelChargingItem> ModelChargingInfo::GetChargingItems() const
{
    return m_chargingItems;
}

void ModelChargingInfo::SetChargingItems(const vector<ModelChargingItem>& _chargingItems)
{
    m_chargingItems = _chargingItems;
    m_chargingItemsHasBeenSet = true;
}

bool ModelChargingInfo::ChargingItemsHasBeenSet() const
{
    return m_chargingItemsHasBeenSet;
}

string ModelChargingInfo::GetChargeUnit() const
{
    return m_chargeUnit;
}

void ModelChargingInfo::SetChargeUnit(const string& _chargeUnit)
{
    m_chargeUnit = _chargeUnit;
    m_chargeUnitHasBeenSet = true;
}

bool ModelChargingInfo::ChargeUnitHasBeenSet() const
{
    return m_chargeUnitHasBeenSet;
}

string ModelChargingInfo::GetReference() const
{
    return m_reference;
}

void ModelChargingInfo::SetReference(const string& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool ModelChargingInfo::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

