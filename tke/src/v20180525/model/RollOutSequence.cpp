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

#include <tencentcloud/tke/v20180525/model/RollOutSequence.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

RollOutSequence::RollOutSequence() :
    m_nameHasBeenSet(false),
    m_sequenceFlowsHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

CoreInternalOutcome RollOutSequence::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollOutSequence.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SequenceFlows") && !value["SequenceFlows"].IsNull())
    {
        if (!value["SequenceFlows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RollOutSequence.SequenceFlows` is not array type"));

        const rapidjson::Value &tmpValue = value["SequenceFlows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SequenceFlow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sequenceFlows.push_back(item);
        }
        m_sequenceFlowsHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RollOutSequence.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RollOutSequence.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollOutSequence::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceFlowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SequenceFlows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sequenceFlows.begin(); itr != m_sequenceFlows.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

}


string RollOutSequence::GetName() const
{
    return m_name;
}

void RollOutSequence::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RollOutSequence::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<SequenceFlow> RollOutSequence::GetSequenceFlows() const
{
    return m_sequenceFlows;
}

void RollOutSequence::SetSequenceFlows(const vector<SequenceFlow>& _sequenceFlows)
{
    m_sequenceFlows = _sequenceFlows;
    m_sequenceFlowsHasBeenSet = true;
}

bool RollOutSequence::SequenceFlowsHasBeenSet() const
{
    return m_sequenceFlowsHasBeenSet;
}

bool RollOutSequence::GetEnabled() const
{
    return m_enabled;
}

void RollOutSequence::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool RollOutSequence::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t RollOutSequence::GetID() const
{
    return m_iD;
}

void RollOutSequence::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool RollOutSequence::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

