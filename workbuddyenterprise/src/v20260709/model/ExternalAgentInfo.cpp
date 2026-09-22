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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ExternalAgentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ExternalAgentInfo::ExternalAgentInfo() :
    m_a2AAgentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_bindingIdHasBeenSet(false),
    m_boundHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_a2AVersionHasBeenSet(false),
    m_a2ASkillSetHasBeenSet(false)
{
}

CoreInternalOutcome ExternalAgentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("A2AAgentId") && !value["A2AAgentId"].IsNull())
    {
        if (!value["A2AAgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAgentInfo.A2AAgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2AAgentId = string(value["A2AAgentId"].GetString());
        m_a2AAgentIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAgentInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAgentInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAgentInfo.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("BindingId") && !value["BindingId"].IsNull())
    {
        if (!value["BindingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAgentInfo.BindingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindingId = string(value["BindingId"].GetString());
        m_bindingIdHasBeenSet = true;
    }

    if (value.HasMember("Bound") && !value["Bound"].IsNull())
    {
        if (!value["Bound"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAgentInfo.Bound` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bound = value["Bound"].GetBool();
        m_boundHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAgentInfo.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("A2AVersion") && !value["A2AVersion"].IsNull())
    {
        if (!value["A2AVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAgentInfo.A2AVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2AVersion = string(value["A2AVersion"].GetString());
        m_a2AVersionHasBeenSet = true;
    }

    if (value.HasMember("A2ASkillSet") && !value["A2ASkillSet"].IsNull())
    {
        if (!value["A2ASkillSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExternalAgentInfo.A2ASkillSet` is not array type"));

        const rapidjson::Value &tmpValue = value["A2ASkillSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            A2ASkillItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_a2ASkillSet.push_back(item);
        }
        m_a2ASkillSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalAgentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_a2AAgentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AAgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2AAgentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_bindingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindingId.c_str(), allocator).Move(), allocator);
    }

    if (m_boundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bound, allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_a2AVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2AVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_a2ASkillSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2ASkillSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_a2ASkillSet.begin(); itr != m_a2ASkillSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ExternalAgentInfo::GetA2AAgentId() const
{
    return m_a2AAgentId;
}

void ExternalAgentInfo::SetA2AAgentId(const string& _a2AAgentId)
{
    m_a2AAgentId = _a2AAgentId;
    m_a2AAgentIdHasBeenSet = true;
}

bool ExternalAgentInfo::A2AAgentIdHasBeenSet() const
{
    return m_a2AAgentIdHasBeenSet;
}

string ExternalAgentInfo::GetName() const
{
    return m_name;
}

void ExternalAgentInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ExternalAgentInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ExternalAgentInfo::GetDescription() const
{
    return m_description;
}

void ExternalAgentInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ExternalAgentInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ExternalAgentInfo::GetEndpoint() const
{
    return m_endpoint;
}

void ExternalAgentInfo::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool ExternalAgentInfo::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string ExternalAgentInfo::GetBindingId() const
{
    return m_bindingId;
}

void ExternalAgentInfo::SetBindingId(const string& _bindingId)
{
    m_bindingId = _bindingId;
    m_bindingIdHasBeenSet = true;
}

bool ExternalAgentInfo::BindingIdHasBeenSet() const
{
    return m_bindingIdHasBeenSet;
}

bool ExternalAgentInfo::GetBound() const
{
    return m_bound;
}

void ExternalAgentInfo::SetBound(const bool& _bound)
{
    m_bound = _bound;
    m_boundHasBeenSet = true;
}

bool ExternalAgentInfo::BoundHasBeenSet() const
{
    return m_boundHasBeenSet;
}

string ExternalAgentInfo::GetIconUrl() const
{
    return m_iconUrl;
}

void ExternalAgentInfo::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool ExternalAgentInfo::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string ExternalAgentInfo::GetA2AVersion() const
{
    return m_a2AVersion;
}

void ExternalAgentInfo::SetA2AVersion(const string& _a2AVersion)
{
    m_a2AVersion = _a2AVersion;
    m_a2AVersionHasBeenSet = true;
}

bool ExternalAgentInfo::A2AVersionHasBeenSet() const
{
    return m_a2AVersionHasBeenSet;
}

vector<A2ASkillItem> ExternalAgentInfo::GetA2ASkillSet() const
{
    return m_a2ASkillSet;
}

void ExternalAgentInfo::SetA2ASkillSet(const vector<A2ASkillItem>& _a2ASkillSet)
{
    m_a2ASkillSet = _a2ASkillSet;
    m_a2ASkillSetHasBeenSet = true;
}

bool ExternalAgentInfo::A2ASkillSetHasBeenSet() const
{
    return m_a2ASkillSetHasBeenSet;
}

