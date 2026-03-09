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

#include <tencentcloud/tse/v20201207/model/GovernanceLaneGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GovernanceLaneGroup::GovernanceLaneGroup() :
    m_nameHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_trafficEntriesHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_consistencyHasBeenSet(false)
{
}

CoreInternalOutcome GovernanceLaneGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneGroup.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("TrafficEntries") && !value["TrafficEntries"].IsNull())
    {
        if (!value["TrafficEntries"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneGroup.TrafficEntries` is not array type"));

        const rapidjson::Value &tmpValue = value["TrafficEntries"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LaneTrafficEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trafficEntries.push_back(item);
        }
        m_trafficEntriesHasBeenSet = true;
    }

    if (value.HasMember("Destinations") && !value["Destinations"].IsNull())
    {
        if (!value["Destinations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneGroup.Destinations` is not array type"));

        const rapidjson::Value &tmpValue = value["Destinations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GovernanceServiceDestination item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinations.push_back(item);
        }
        m_destinationsHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneGroup.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GovernanceLaneRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("Revision") && !value["Revision"].IsNull())
    {
        if (!value["Revision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneGroup.Revision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revision = string(value["Revision"].GetString());
        m_revisionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneGroup.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Consistency") && !value["Consistency"].IsNull())
    {
        if (!value["Consistency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneGroup.Consistency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consistency = string(value["Consistency"].GetString());
        m_consistencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GovernanceLaneGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficEntriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficEntries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trafficEntries.begin(); itr != m_trafficEntries.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_destinationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_revisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revision.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_consistencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Consistency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consistency.c_str(), allocator).Move(), allocator);
    }

}


string GovernanceLaneGroup::GetName() const
{
    return m_name;
}

void GovernanceLaneGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GovernanceLaneGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GovernanceLaneGroup::GetID() const
{
    return m_iD;
}

void GovernanceLaneGroup::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool GovernanceLaneGroup::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

vector<LaneTrafficEntry> GovernanceLaneGroup::GetTrafficEntries() const
{
    return m_trafficEntries;
}

void GovernanceLaneGroup::SetTrafficEntries(const vector<LaneTrafficEntry>& _trafficEntries)
{
    m_trafficEntries = _trafficEntries;
    m_trafficEntriesHasBeenSet = true;
}

bool GovernanceLaneGroup::TrafficEntriesHasBeenSet() const
{
    return m_trafficEntriesHasBeenSet;
}

vector<GovernanceServiceDestination> GovernanceLaneGroup::GetDestinations() const
{
    return m_destinations;
}

void GovernanceLaneGroup::SetDestinations(const vector<GovernanceServiceDestination>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool GovernanceLaneGroup::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

string GovernanceLaneGroup::GetDescription() const
{
    return m_description;
}

void GovernanceLaneGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GovernanceLaneGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<GovernanceLaneRule> GovernanceLaneGroup::GetRules() const
{
    return m_rules;
}

void GovernanceLaneGroup::SetRules(const vector<GovernanceLaneRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool GovernanceLaneGroup::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string GovernanceLaneGroup::GetRevision() const
{
    return m_revision;
}

void GovernanceLaneGroup::SetRevision(const string& _revision)
{
    m_revision = _revision;
    m_revisionHasBeenSet = true;
}

bool GovernanceLaneGroup::RevisionHasBeenSet() const
{
    return m_revisionHasBeenSet;
}

string GovernanceLaneGroup::GetCreateTime() const
{
    return m_createTime;
}

void GovernanceLaneGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GovernanceLaneGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GovernanceLaneGroup::GetModifyTime() const
{
    return m_modifyTime;
}

void GovernanceLaneGroup::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool GovernanceLaneGroup::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string GovernanceLaneGroup::GetConsistency() const
{
    return m_consistency;
}

void GovernanceLaneGroup::SetConsistency(const string& _consistency)
{
    m_consistency = _consistency;
    m_consistencyHasBeenSet = true;
}

bool GovernanceLaneGroup::ConsistencyHasBeenSet() const
{
    return m_consistencyHasBeenSet;
}

