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

#include <tencentcloud/tcr/v20190924/model/ReplicationPolicyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ReplicationPolicyInfo::ReplicationPolicyInfo() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_overrideHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_srcResourceHasBeenSet(false),
    m_destResourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ReplicationPolicyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationPolicyInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationPolicyInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationPolicyInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReplicationPolicyInfo.Filters` is not array type"));

        const rapidjson::Value &tmpValue = value["Filters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PolicyFilter item;
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

    if (value.HasMember("Override") && !value["Override"].IsNull())
    {
        if (!value["Override"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationPolicyInfo.Override` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_override = value["Override"].GetBool();
        m_overrideHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationPolicyInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("SrcResource") && !value["SrcResource"].IsNull())
    {
        if (!value["SrcResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationPolicyInfo.SrcResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcResource = string(value["SrcResource"].GetString());
        m_srcResourceHasBeenSet = true;
    }

    if (value.HasMember("DestResource") && !value["DestResource"].IsNull())
    {
        if (!value["DestResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationPolicyInfo.DestResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destResource = string(value["DestResource"].GetString());
        m_destResourceHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationPolicyInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationPolicyInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplicationPolicyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
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

    if (m_overrideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Override";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_override, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_srcResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcResource.c_str(), allocator).Move(), allocator);
    }

    if (m_destResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destResource.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t ReplicationPolicyInfo::GetID() const
{
    return m_iD;
}

void ReplicationPolicyInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ReplicationPolicyInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ReplicationPolicyInfo::GetName() const
{
    return m_name;
}

void ReplicationPolicyInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReplicationPolicyInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ReplicationPolicyInfo::GetDescription() const
{
    return m_description;
}

void ReplicationPolicyInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ReplicationPolicyInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<PolicyFilter> ReplicationPolicyInfo::GetFilters() const
{
    return m_filters;
}

void ReplicationPolicyInfo::SetFilters(const vector<PolicyFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ReplicationPolicyInfo::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool ReplicationPolicyInfo::GetOverride() const
{
    return m_override;
}

void ReplicationPolicyInfo::SetOverride(const bool& _override)
{
    m_override = _override;
    m_overrideHasBeenSet = true;
}

bool ReplicationPolicyInfo::OverrideHasBeenSet() const
{
    return m_overrideHasBeenSet;
}

bool ReplicationPolicyInfo::GetEnabled() const
{
    return m_enabled;
}

void ReplicationPolicyInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ReplicationPolicyInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string ReplicationPolicyInfo::GetSrcResource() const
{
    return m_srcResource;
}

void ReplicationPolicyInfo::SetSrcResource(const string& _srcResource)
{
    m_srcResource = _srcResource;
    m_srcResourceHasBeenSet = true;
}

bool ReplicationPolicyInfo::SrcResourceHasBeenSet() const
{
    return m_srcResourceHasBeenSet;
}

string ReplicationPolicyInfo::GetDestResource() const
{
    return m_destResource;
}

void ReplicationPolicyInfo::SetDestResource(const string& _destResource)
{
    m_destResource = _destResource;
    m_destResourceHasBeenSet = true;
}

bool ReplicationPolicyInfo::DestResourceHasBeenSet() const
{
    return m_destResourceHasBeenSet;
}

string ReplicationPolicyInfo::GetCreationTime() const
{
    return m_creationTime;
}

void ReplicationPolicyInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool ReplicationPolicyInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string ReplicationPolicyInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ReplicationPolicyInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ReplicationPolicyInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

