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

#include <tencentcloud/teo/v20220106/model/LoadBalancing.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

LoadBalancing::LoadBalancing() :
    m_loadBalancingIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_originIdHasBeenSet(false),
    m_originHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cnameHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancing::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancingId") && !value["LoadBalancingId"].IsNull())
    {
        if (!value["LoadBalancingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancing.LoadBalancingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancingId = string(value["LoadBalancingId"].GetString());
        m_loadBalancingIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancing.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancing.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancing.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancing.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("OriginId") && !value["OriginId"].IsNull())
    {
        if (!value["OriginId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancing.OriginId` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originId.push_back((*itr).GetString());
        }
        m_originIdHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancing.Origin` is not array type"));

        const rapidjson::Value &tmpValue = value["Origin"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_origin.push_back(item);
        }
        m_originHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancing.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancing.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancing.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancing::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancingId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTL, allocator);
    }

    if (m_originIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originId.begin(); itr != m_originId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_origin.begin(); itr != m_origin.end(); ++itr, ++i)
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

}


string LoadBalancing::GetLoadBalancingId() const
{
    return m_loadBalancingId;
}

void LoadBalancing::SetLoadBalancingId(const string& _loadBalancingId)
{
    m_loadBalancingId = _loadBalancingId;
    m_loadBalancingIdHasBeenSet = true;
}

bool LoadBalancing::LoadBalancingIdHasBeenSet() const
{
    return m_loadBalancingIdHasBeenSet;
}

string LoadBalancing::GetZoneId() const
{
    return m_zoneId;
}

void LoadBalancing::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool LoadBalancing::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string LoadBalancing::GetHost() const
{
    return m_host;
}

void LoadBalancing::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool LoadBalancing::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string LoadBalancing::GetType() const
{
    return m_type;
}

void LoadBalancing::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LoadBalancing::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t LoadBalancing::GetTTL() const
{
    return m_tTL;
}

void LoadBalancing::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool LoadBalancing::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

vector<string> LoadBalancing::GetOriginId() const
{
    return m_originId;
}

void LoadBalancing::SetOriginId(const vector<string>& _originId)
{
    m_originId = _originId;
    m_originIdHasBeenSet = true;
}

bool LoadBalancing::OriginIdHasBeenSet() const
{
    return m_originIdHasBeenSet;
}

vector<OriginGroup> LoadBalancing::GetOrigin() const
{
    return m_origin;
}

void LoadBalancing::SetOrigin(const vector<OriginGroup>& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool LoadBalancing::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string LoadBalancing::GetUpdateTime() const
{
    return m_updateTime;
}

void LoadBalancing::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LoadBalancing::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string LoadBalancing::GetStatus() const
{
    return m_status;
}

void LoadBalancing::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LoadBalancing::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LoadBalancing::GetCname() const
{
    return m_cname;
}

void LoadBalancing::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool LoadBalancing::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

