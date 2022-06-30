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

#include <tencentcloud/teo/v20220106/model/OriginGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

OriginGroup::OriginGroup() :
    m_originIdHasBeenSet(false),
    m_originNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_applicationProxyUsedHasBeenSet(false),
    m_loadBalancingUsedHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_loadBalancingUsedTypeHasBeenSet(false)
{
}

CoreInternalOutcome OriginGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginId") && !value["OriginId"].IsNull())
    {
        if (!value["OriginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.OriginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originId = string(value["OriginId"].GetString());
        m_originIdHasBeenSet = true;
    }

    if (value.HasMember("OriginName") && !value["OriginName"].IsNull())
    {
        if (!value["OriginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.OriginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originName = string(value["OriginName"].GetString());
        m_originNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Record") && !value["Record"].IsNull())
    {
        if (!value["Record"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginGroup.Record` is not array type"));

        const rapidjson::Value &tmpValue = value["Record"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_record.push_back(item);
        }
        m_recordHasBeenSet = true;
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

    if (value.HasMember("OriginType") && !value["OriginType"].IsNull())
    {
        if (!value["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(value["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationProxyUsed") && !value["ApplicationProxyUsed"].IsNull())
    {
        if (!value["ApplicationProxyUsed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.ApplicationProxyUsed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_applicationProxyUsed = value["ApplicationProxyUsed"].GetBool();
        m_applicationProxyUsedHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancingUsed") && !value["LoadBalancingUsed"].IsNull())
    {
        if (!value["LoadBalancingUsed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.LoadBalancingUsed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancingUsed = value["LoadBalancingUsed"].GetBool();
        m_loadBalancingUsedHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancingUsedType") && !value["LoadBalancingUsedType"].IsNull())
    {
        if (!value["LoadBalancingUsedType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroup.LoadBalancingUsedType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancingUsedType = string(value["LoadBalancingUsedType"].GetString());
        m_loadBalancingUsedTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originId.c_str(), allocator).Move(), allocator);
    }

    if (m_originNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_record.begin(); itr != m_record.end(); ++itr, ++i)
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

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationProxyUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationProxyUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationProxyUsed, allocator);
    }

    if (m_loadBalancingUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancingUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalancingUsed, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_loadBalancingUsedTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancingUsedType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancingUsedType.c_str(), allocator).Move(), allocator);
    }

}


string OriginGroup::GetOriginId() const
{
    return m_originId;
}

void OriginGroup::SetOriginId(const string& _originId)
{
    m_originId = _originId;
    m_originIdHasBeenSet = true;
}

bool OriginGroup::OriginIdHasBeenSet() const
{
    return m_originIdHasBeenSet;
}

string OriginGroup::GetOriginName() const
{
    return m_originName;
}

void OriginGroup::SetOriginName(const string& _originName)
{
    m_originName = _originName;
    m_originNameHasBeenSet = true;
}

bool OriginGroup::OriginNameHasBeenSet() const
{
    return m_originNameHasBeenSet;
}

string OriginGroup::GetType() const
{
    return m_type;
}

void OriginGroup::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OriginGroup::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<OriginRecord> OriginGroup::GetRecord() const
{
    return m_record;
}

void OriginGroup::SetRecord(const vector<OriginRecord>& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool OriginGroup::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
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

bool OriginGroup::GetApplicationProxyUsed() const
{
    return m_applicationProxyUsed;
}

void OriginGroup::SetApplicationProxyUsed(const bool& _applicationProxyUsed)
{
    m_applicationProxyUsed = _applicationProxyUsed;
    m_applicationProxyUsedHasBeenSet = true;
}

bool OriginGroup::ApplicationProxyUsedHasBeenSet() const
{
    return m_applicationProxyUsedHasBeenSet;
}

bool OriginGroup::GetLoadBalancingUsed() const
{
    return m_loadBalancingUsed;
}

void OriginGroup::SetLoadBalancingUsed(const bool& _loadBalancingUsed)
{
    m_loadBalancingUsed = _loadBalancingUsed;
    m_loadBalancingUsedHasBeenSet = true;
}

bool OriginGroup::LoadBalancingUsedHasBeenSet() const
{
    return m_loadBalancingUsedHasBeenSet;
}

OriginCheckOriginStatus OriginGroup::GetStatus() const
{
    return m_status;
}

void OriginGroup::SetStatus(const OriginCheckOriginStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OriginGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OriginGroup::GetLoadBalancingUsedType() const
{
    return m_loadBalancingUsedType;
}

void OriginGroup::SetLoadBalancingUsedType(const string& _loadBalancingUsedType)
{
    m_loadBalancingUsedType = _loadBalancingUsedType;
    m_loadBalancingUsedTypeHasBeenSet = true;
}

bool OriginGroup::LoadBalancingUsedTypeHasBeenSet() const
{
    return m_loadBalancingUsedTypeHasBeenSet;
}

