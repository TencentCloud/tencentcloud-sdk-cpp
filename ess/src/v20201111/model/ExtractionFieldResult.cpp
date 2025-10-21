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

#include <tencentcloud/ess/v20201111/model/ExtractionFieldResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ExtractionFieldResult::ExtractionFieldResult() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_requiresSemanticExtractionHasBeenSet(false),
    m_positionsHasBeenSet(false)
{
}

CoreInternalOutcome ExtractionFieldResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractionFieldResult.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractionFieldResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractionFieldResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtractionFieldResult.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("RequiresSemanticExtraction") && !value["RequiresSemanticExtraction"].IsNull())
    {
        if (!value["RequiresSemanticExtraction"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractionFieldResult.RequiresSemanticExtraction` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_requiresSemanticExtraction = value["RequiresSemanticExtraction"].GetBool();
        m_requiresSemanticExtractionHasBeenSet = true;
    }

    if (value.HasMember("Positions") && !value["Positions"].IsNull())
    {
        if (!value["Positions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtractionFieldResult.Positions` is not array type"));

        const rapidjson::Value &tmpValue = value["Positions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PositionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_positions.push_back(item);
        }
        m_positionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtractionFieldResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_requiresSemanticExtractionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequiresSemanticExtraction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requiresSemanticExtraction, allocator);
    }

    if (m_positionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_positions.begin(); itr != m_positions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ExtractionFieldResult::GetId() const
{
    return m_id;
}

void ExtractionFieldResult::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ExtractionFieldResult::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ExtractionFieldResult::GetName() const
{
    return m_name;
}

void ExtractionFieldResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ExtractionFieldResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ExtractionFieldResult::GetType() const
{
    return m_type;
}

void ExtractionFieldResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExtractionFieldResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> ExtractionFieldResult::GetValues() const
{
    return m_values;
}

void ExtractionFieldResult::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool ExtractionFieldResult::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

bool ExtractionFieldResult::GetRequiresSemanticExtraction() const
{
    return m_requiresSemanticExtraction;
}

void ExtractionFieldResult::SetRequiresSemanticExtraction(const bool& _requiresSemanticExtraction)
{
    m_requiresSemanticExtraction = _requiresSemanticExtraction;
    m_requiresSemanticExtractionHasBeenSet = true;
}

bool ExtractionFieldResult::RequiresSemanticExtractionHasBeenSet() const
{
    return m_requiresSemanticExtractionHasBeenSet;
}

vector<PositionInfo> ExtractionFieldResult::GetPositions() const
{
    return m_positions;
}

void ExtractionFieldResult::SetPositions(const vector<PositionInfo>& _positions)
{
    m_positions = _positions;
    m_positionsHasBeenSet = true;
}

bool ExtractionFieldResult::PositionsHasBeenSet() const
{
    return m_positionsHasBeenSet;
}

