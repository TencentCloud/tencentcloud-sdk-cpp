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

#include <tencentcloud/teo/v20220901/model/OriginGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginGroup::OriginGroup() :
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_originGroupIdHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_originGroupNameHasBeenSet(false),
    m_configurationTypeHasBeenSet(false),
    m_originRecordsHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_hostHeaderHasBeenSet(false)
{
}

CoreInternalOutcome OriginGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("OriginGroupId") && !value["OriginGroupId"].IsNull())
    {
        if (!value["OriginGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.OriginGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originGroupId = string(value["OriginGroupId"].GetString());
        m_originGroupIdHasBeenSet = true;
    }

    if (value.HasMember("OriginType") && !value["OriginType"].IsNull())
    {
        if (!value["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(value["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginGroupName") && !value["OriginGroupName"].IsNull())
    {
        if (!value["OriginGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.OriginGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originGroupName = string(value["OriginGroupName"].GetString());
        m_originGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigurationType") && !value["ConfigurationType"].IsNull())
    {
        if (!value["ConfigurationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.ConfigurationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configurationType = string(value["ConfigurationType"].GetString());
        m_configurationTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginRecords") && !value["OriginRecords"].IsNull())
    {
        if (!value["OriginRecords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginGroup.OriginRecords` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginRecords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_originRecords.push_back(item);
        }
        m_originRecordsHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("HostHeader") && !value["HostHeader"].IsNull())
    {
        if (!value["HostHeader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.HostHeader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostHeader = string(value["HostHeader"].GetString());
        m_hostHeaderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_originGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_originGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_configurationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigurationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configurationType.c_str(), allocator).Move(), allocator);
    }

    if (m_originRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originRecords.begin(); itr != m_originRecords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostHeader.c_str(), allocator).Move(), allocator);
    }

}


string OriginGroup::GetZoneId() const
{
    return m_zoneId;
}

void OriginGroup::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool OriginGroup::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string OriginGroup::GetZoneName() const
{
    return m_zoneName;
}

void OriginGroup::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool OriginGroup::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string OriginGroup::GetOriginGroupId() const
{
    return m_originGroupId;
}

void OriginGroup::SetOriginGroupId(const string& _originGroupId)
{
    m_originGroupId = _originGroupId;
    m_originGroupIdHasBeenSet = true;
}

bool OriginGroup::OriginGroupIdHasBeenSet() const
{
    return m_originGroupIdHasBeenSet;
}

string OriginGroup::GetOriginType() const
{
    return m_originType;
}

void OriginGroup::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool OriginGroup::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

string OriginGroup::GetOriginGroupName() const
{
    return m_originGroupName;
}

void OriginGroup::SetOriginGroupName(const string& _originGroupName)
{
    m_originGroupName = _originGroupName;
    m_originGroupNameHasBeenSet = true;
}

bool OriginGroup::OriginGroupNameHasBeenSet() const
{
    return m_originGroupNameHasBeenSet;
}

string OriginGroup::GetConfigurationType() const
{
    return m_configurationType;
}

void OriginGroup::SetConfigurationType(const string& _configurationType)
{
    m_configurationType = _configurationType;
    m_configurationTypeHasBeenSet = true;
}

bool OriginGroup::ConfigurationTypeHasBeenSet() const
{
    return m_configurationTypeHasBeenSet;
}

vector<OriginRecord> OriginGroup::GetOriginRecords() const
{
    return m_originRecords;
}

void OriginGroup::SetOriginRecords(const vector<OriginRecord>& _originRecords)
{
    m_originRecords = _originRecords;
    m_originRecordsHasBeenSet = true;
}

bool OriginGroup::OriginRecordsHasBeenSet() const
{
    return m_originRecordsHasBeenSet;
}

string OriginGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void OriginGroup::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OriginGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string OriginGroup::GetHostHeader() const
{
    return m_hostHeader;
}

void OriginGroup::SetHostHeader(const string& _hostHeader)
{
    m_hostHeader = _hostHeader;
    m_hostHeaderHasBeenSet = true;
}

bool OriginGroup::HostHeaderHasBeenSet() const
{
    return m_hostHeaderHasBeenSet;
}

