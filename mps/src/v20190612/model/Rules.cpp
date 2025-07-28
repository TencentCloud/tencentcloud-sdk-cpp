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

#include <tencentcloud/mps/v20190612/model/Rules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

Rules::Rules() :
    m_idHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_linkerHasBeenSet(false),
    m_rearDriveIndexsHasBeenSet(false)
{
}

CoreInternalOutcome Rules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rules.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Conditions") && !value["Conditions"].IsNull())
    {
        if (!value["Conditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rules.Conditions` is not array type"));

        const rapidjson::Value &tmpValue = value["Conditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleConditionItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditions.push_back(item);
        }
        m_conditionsHasBeenSet = true;
    }

    if (value.HasMember("Linker") && !value["Linker"].IsNull())
    {
        if (!value["Linker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rules.Linker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linker = string(value["Linker"].GetString());
        m_linkerHasBeenSet = true;
    }

    if (value.HasMember("RearDriveIndexs") && !value["RearDriveIndexs"].IsNull())
    {
        if (!value["RearDriveIndexs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rules.RearDriveIndexs` is not array type"));

        const rapidjson::Value &tmpValue = value["RearDriveIndexs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rearDriveIndexs.push_back((*itr).GetInt64());
        }
        m_rearDriveIndexsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Rules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_linkerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Linker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linker.c_str(), allocator).Move(), allocator);
    }

    if (m_rearDriveIndexsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RearDriveIndexs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rearDriveIndexs.begin(); itr != m_rearDriveIndexs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string Rules::GetId() const
{
    return m_id;
}

void Rules::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Rules::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<RuleConditionItem> Rules::GetConditions() const
{
    return m_conditions;
}

void Rules::SetConditions(const vector<RuleConditionItem>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool Rules::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

string Rules::GetLinker() const
{
    return m_linker;
}

void Rules::SetLinker(const string& _linker)
{
    m_linker = _linker;
    m_linkerHasBeenSet = true;
}

bool Rules::LinkerHasBeenSet() const
{
    return m_linkerHasBeenSet;
}

vector<int64_t> Rules::GetRearDriveIndexs() const
{
    return m_rearDriveIndexs;
}

void Rules::SetRearDriveIndexs(const vector<int64_t>& _rearDriveIndexs)
{
    m_rearDriveIndexs = _rearDriveIndexs;
    m_rearDriveIndexsHasBeenSet = true;
}

bool Rules::RearDriveIndexsHasBeenSet() const
{
    return m_rearDriveIndexsHasBeenSet;
}

