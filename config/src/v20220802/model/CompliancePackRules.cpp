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

#include <tencentcloud/config/v20220802/model/CompliancePackRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

CompliancePackRules::CompliancePackRules() :
    m_identifierHasBeenSet(false),
    m_controlHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
}

CoreInternalOutcome CompliancePackRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRules.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("Control") && !value["Control"].IsNull())
    {
        if (!value["Control"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompliancePackRules.Control` is not array type"));

        const rapidjson::Value &tmpValue = value["Control"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Control item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_control.push_back(item);
        }
        m_controlHasBeenSet = true;
    }

    if (value.HasMember("ResourceTypes") && !value["ResourceTypes"].IsNull())
    {
        if (!value["ResourceTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompliancePackRules.ResourceTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceTypes.push_back((*itr).GetString());
        }
        m_resourceTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompliancePackRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifier.c_str(), allocator).Move(), allocator);
    }

    if (m_controlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Control";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_control.begin(); itr != m_control.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceTypes.begin(); itr != m_resourceTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CompliancePackRules::GetIdentifier() const
{
    return m_identifier;
}

void CompliancePackRules::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool CompliancePackRules::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

vector<Control> CompliancePackRules::GetControl() const
{
    return m_control;
}

void CompliancePackRules::SetControl(const vector<Control>& _control)
{
    m_control = _control;
    m_controlHasBeenSet = true;
}

bool CompliancePackRules::ControlHasBeenSet() const
{
    return m_controlHasBeenSet;
}

vector<string> CompliancePackRules::GetResourceTypes() const
{
    return m_resourceTypes;
}

void CompliancePackRules::SetResourceTypes(const vector<string>& _resourceTypes)
{
    m_resourceTypes = _resourceTypes;
    m_resourceTypesHasBeenSet = true;
}

bool CompliancePackRules::ResourceTypesHasBeenSet() const
{
    return m_resourceTypesHasBeenSet;
}

