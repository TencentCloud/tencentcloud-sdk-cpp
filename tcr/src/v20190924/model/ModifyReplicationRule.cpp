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

#include <tencentcloud/tcr/v20190924/model/ModifyReplicationRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ModifyReplicationRule::ModifyReplicationRule() :
    m_destNamespaceHasBeenSet(false),
    m_overrideHasBeenSet(false),
    m_deletionHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome ModifyReplicationRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DestNamespace") && !value["DestNamespace"].IsNull())
    {
        if (!value["DestNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyReplicationRule.DestNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destNamespace = string(value["DestNamespace"].GetString());
        m_destNamespaceHasBeenSet = true;
    }

    if (value.HasMember("Override") && !value["Override"].IsNull())
    {
        if (!value["Override"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyReplicationRule.Override` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_override = value["Override"].GetBool();
        m_overrideHasBeenSet = true;
    }

    if (value.HasMember("Deletion") && !value["Deletion"].IsNull())
    {
        if (!value["Deletion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyReplicationRule.Deletion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deletion = value["Deletion"].GetBool();
        m_deletionHasBeenSet = true;
    }

    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyReplicationRule.Filters` is not array type"));

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

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyReplicationRule.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyReplicationRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_deletionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deletion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletion, allocator);
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

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string ModifyReplicationRule::GetDestNamespace() const
{
    return m_destNamespace;
}

void ModifyReplicationRule::SetDestNamespace(const string& _destNamespace)
{
    m_destNamespace = _destNamespace;
    m_destNamespaceHasBeenSet = true;
}

bool ModifyReplicationRule::DestNamespaceHasBeenSet() const
{
    return m_destNamespaceHasBeenSet;
}

bool ModifyReplicationRule::GetOverride() const
{
    return m_override;
}

void ModifyReplicationRule::SetOverride(const bool& _override)
{
    m_override = _override;
    m_overrideHasBeenSet = true;
}

bool ModifyReplicationRule::OverrideHasBeenSet() const
{
    return m_overrideHasBeenSet;
}

bool ModifyReplicationRule::GetDeletion() const
{
    return m_deletion;
}

void ModifyReplicationRule::SetDeletion(const bool& _deletion)
{
    m_deletion = _deletion;
    m_deletionHasBeenSet = true;
}

bool ModifyReplicationRule::DeletionHasBeenSet() const
{
    return m_deletionHasBeenSet;
}

vector<ReplicationFilter> ModifyReplicationRule::GetFilters() const
{
    return m_filters;
}

void ModifyReplicationRule::SetFilters(const vector<ReplicationFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ModifyReplicationRule::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool ModifyReplicationRule::GetEnabled() const
{
    return m_enabled;
}

void ModifyReplicationRule::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ModifyReplicationRule::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

