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

#include <tencentcloud/cls/v20201016/model/JsonExpandInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

JsonExpandInfo::JsonExpandInfo() :
    m_switchHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_dropOriginalHasBeenSet(false),
    m_conflictPolicyHasBeenSet(false)
{
}

CoreInternalOutcome JsonExpandInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `JsonExpandInfo.Switch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_switch = value["Switch"].GetBool();
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Fields") && !value["Fields"].IsNull())
    {
        if (!value["Fields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JsonExpandInfo.Fields` is not array type"));

        const rapidjson::Value &tmpValue = value["Fields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fields.push_back((*itr).GetString());
        }
        m_fieldsHasBeenSet = true;
    }

    if (value.HasMember("DropOriginal") && !value["DropOriginal"].IsNull())
    {
        if (!value["DropOriginal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `JsonExpandInfo.DropOriginal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dropOriginal = value["DropOriginal"].GetBool();
        m_dropOriginalHasBeenSet = true;
    }

    if (value.HasMember("ConflictPolicy") && !value["ConflictPolicy"].IsNull())
    {
        if (!value["ConflictPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JsonExpandInfo.ConflictPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conflictPolicy = string(value["ConflictPolicy"].GetString());
        m_conflictPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JsonExpandInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switch, allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dropOriginalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropOriginal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropOriginal, allocator);
    }

    if (m_conflictPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conflictPolicy.c_str(), allocator).Move(), allocator);
    }

}


bool JsonExpandInfo::GetSwitch() const
{
    return m_switch;
}

void JsonExpandInfo::SetSwitch(const bool& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool JsonExpandInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> JsonExpandInfo::GetFields() const
{
    return m_fields;
}

void JsonExpandInfo::SetFields(const vector<string>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool JsonExpandInfo::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

bool JsonExpandInfo::GetDropOriginal() const
{
    return m_dropOriginal;
}

void JsonExpandInfo::SetDropOriginal(const bool& _dropOriginal)
{
    m_dropOriginal = _dropOriginal;
    m_dropOriginalHasBeenSet = true;
}

bool JsonExpandInfo::DropOriginalHasBeenSet() const
{
    return m_dropOriginalHasBeenSet;
}

string JsonExpandInfo::GetConflictPolicy() const
{
    return m_conflictPolicy;
}

void JsonExpandInfo::SetConflictPolicy(const string& _conflictPolicy)
{
    m_conflictPolicy = _conflictPolicy;
    m_conflictPolicyHasBeenSet = true;
}

bool JsonExpandInfo::ConflictPolicyHasBeenSet() const
{
    return m_conflictPolicyHasBeenSet;
}

