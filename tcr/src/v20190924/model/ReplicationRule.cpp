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

#include <tencentcloud/tcr/v20190924/model/ReplicationRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ReplicationRule::ReplicationRule() :
    m_nameHasBeenSet(false),
    m_destNamespaceHasBeenSet(false),
    m_overrideHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_deletionHasBeenSet(false)
{
}

CoreInternalOutcome ReplicationRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DestNamespace") && !value["DestNamespace"].IsNull())
    {
        if (!value["DestNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationRule.DestNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destNamespace = string(value["DestNamespace"].GetString());
        m_destNamespaceHasBeenSet = true;
    }

    if (value.HasMember("Override") && !value["Override"].IsNull())
    {
        if (!value["Override"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationRule.Override` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_override = value["Override"].GetBool();
        m_overrideHasBeenSet = true;
    }

    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReplicationRule.Filters` is not array type"));

        const rapidjson::Value &tmpValue = value["Filters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReplicationFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filters.push_back(item);
        }
        m_filtersHasBeenSet = true;
    }

    if (value.HasMember("Deletion") && !value["Deletion"].IsNull())
    {
        if (!value["Deletion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationRule.Deletion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deletion = value["Deletion"].GetBool();
        m_deletionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplicationRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_destNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_overrideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Override";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_override, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deletionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deletion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletion, allocator);
    }

}


string ReplicationRule::GetName() const
{
    return m_name;
}

void ReplicationRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReplicationRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ReplicationRule::GetDestNamespace() const
{
    return m_destNamespace;
}

void ReplicationRule::SetDestNamespace(const string& _destNamespace)
{
    m_destNamespace = _destNamespace;
    m_destNamespaceHasBeenSet = true;
}

bool ReplicationRule::DestNamespaceHasBeenSet() const
{
    return m_destNamespaceHasBeenSet;
}

bool ReplicationRule::GetOverride() const
{
    return m_override;
}

void ReplicationRule::SetOverride(const bool& _override)
{
    m_override = _override;
    m_overrideHasBeenSet = true;
}

bool ReplicationRule::OverrideHasBeenSet() const
{
    return m_overrideHasBeenSet;
}

vector<ReplicationFilter> ReplicationRule::GetFilters() const
{
    return m_filters;
}

void ReplicationRule::SetFilters(const vector<ReplicationFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ReplicationRule::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool ReplicationRule::GetDeletion() const
{
    return m_deletion;
}

void ReplicationRule::SetDeletion(const bool& _deletion)
{
    m_deletion = _deletion;
    m_deletionHasBeenSet = true;
}

bool ReplicationRule::DeletionHasBeenSet() const
{
    return m_deletionHasBeenSet;
}

