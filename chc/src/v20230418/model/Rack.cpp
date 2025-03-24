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

#include <tencentcloud/chc/v20230418/model/Rack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

Rack::Rack() :
    m_rackNameHasBeenSet(false),
    m_idcUnitIdHasBeenSet(false),
    m_idcUnitNameHasBeenSet(false),
    m_idcNameHasBeenSet(false),
    m_idcIdHasBeenSet(false),
    m_rackIdHasBeenSet(false),
    m_isPowerOnHasBeenSet(false),
    m_rackOpenTimeHasBeenSet(false),
    m_hostingTypeHasBeenSet(false)
{
}

CoreInternalOutcome Rack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RackName") && !value["RackName"].IsNull())
    {
        if (!value["RackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rack.RackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackName = string(value["RackName"].GetString());
        m_rackNameHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitId") && !value["IdcUnitId"].IsNull())
    {
        if (!value["IdcUnitId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rack.IdcUnitId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitId = value["IdcUnitId"].GetUint64();
        m_idcUnitIdHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitName") && !value["IdcUnitName"].IsNull())
    {
        if (!value["IdcUnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rack.IdcUnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitName = string(value["IdcUnitName"].GetString());
        m_idcUnitNameHasBeenSet = true;
    }

    if (value.HasMember("IdcName") && !value["IdcName"].IsNull())
    {
        if (!value["IdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rack.IdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcName = string(value["IdcName"].GetString());
        m_idcNameHasBeenSet = true;
    }

    if (value.HasMember("IdcId") && !value["IdcId"].IsNull())
    {
        if (!value["IdcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rack.IdcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcId = value["IdcId"].GetUint64();
        m_idcIdHasBeenSet = true;
    }

    if (value.HasMember("RackId") && !value["RackId"].IsNull())
    {
        if (!value["RackId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rack.RackId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rackId = value["RackId"].GetUint64();
        m_rackIdHasBeenSet = true;
    }

    if (value.HasMember("IsPowerOn") && !value["IsPowerOn"].IsNull())
    {
        if (!value["IsPowerOn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Rack.IsPowerOn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPowerOn = value["IsPowerOn"].GetBool();
        m_isPowerOnHasBeenSet = true;
    }

    if (value.HasMember("RackOpenTime") && !value["RackOpenTime"].IsNull())
    {
        if (!value["RackOpenTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rack.RackOpenTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackOpenTime = string(value["RackOpenTime"].GetString());
        m_rackOpenTimeHasBeenSet = true;
    }

    if (value.HasMember("HostingType") && !value["HostingType"].IsNull())
    {
        if (!value["HostingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rack.HostingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostingType = string(value["HostingType"].GetString());
        m_hostingTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Rack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rackName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcUnitId, allocator);
    }

    if (m_idcUnitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcUnitName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcId, allocator);
    }

    if (m_rackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rackId, allocator);
    }

    if (m_isPowerOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPowerOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPowerOn, allocator);
    }

    if (m_rackOpenTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackOpenTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rackOpenTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostingType.c_str(), allocator).Move(), allocator);
    }

}


string Rack::GetRackName() const
{
    return m_rackName;
}

void Rack::SetRackName(const string& _rackName)
{
    m_rackName = _rackName;
    m_rackNameHasBeenSet = true;
}

bool Rack::RackNameHasBeenSet() const
{
    return m_rackNameHasBeenSet;
}

uint64_t Rack::GetIdcUnitId() const
{
    return m_idcUnitId;
}

void Rack::SetIdcUnitId(const uint64_t& _idcUnitId)
{
    m_idcUnitId = _idcUnitId;
    m_idcUnitIdHasBeenSet = true;
}

bool Rack::IdcUnitIdHasBeenSet() const
{
    return m_idcUnitIdHasBeenSet;
}

string Rack::GetIdcUnitName() const
{
    return m_idcUnitName;
}

void Rack::SetIdcUnitName(const string& _idcUnitName)
{
    m_idcUnitName = _idcUnitName;
    m_idcUnitNameHasBeenSet = true;
}

bool Rack::IdcUnitNameHasBeenSet() const
{
    return m_idcUnitNameHasBeenSet;
}

string Rack::GetIdcName() const
{
    return m_idcName;
}

void Rack::SetIdcName(const string& _idcName)
{
    m_idcName = _idcName;
    m_idcNameHasBeenSet = true;
}

bool Rack::IdcNameHasBeenSet() const
{
    return m_idcNameHasBeenSet;
}

uint64_t Rack::GetIdcId() const
{
    return m_idcId;
}

void Rack::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool Rack::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

uint64_t Rack::GetRackId() const
{
    return m_rackId;
}

void Rack::SetRackId(const uint64_t& _rackId)
{
    m_rackId = _rackId;
    m_rackIdHasBeenSet = true;
}

bool Rack::RackIdHasBeenSet() const
{
    return m_rackIdHasBeenSet;
}

bool Rack::GetIsPowerOn() const
{
    return m_isPowerOn;
}

void Rack::SetIsPowerOn(const bool& _isPowerOn)
{
    m_isPowerOn = _isPowerOn;
    m_isPowerOnHasBeenSet = true;
}

bool Rack::IsPowerOnHasBeenSet() const
{
    return m_isPowerOnHasBeenSet;
}

string Rack::GetRackOpenTime() const
{
    return m_rackOpenTime;
}

void Rack::SetRackOpenTime(const string& _rackOpenTime)
{
    m_rackOpenTime = _rackOpenTime;
    m_rackOpenTimeHasBeenSet = true;
}

bool Rack::RackOpenTimeHasBeenSet() const
{
    return m_rackOpenTimeHasBeenSet;
}

string Rack::GetHostingType() const
{
    return m_hostingType;
}

void Rack::SetHostingType(const string& _hostingType)
{
    m_hostingType = _hostingType;
    m_hostingTypeHasBeenSet = true;
}

bool Rack::HostingTypeHasBeenSet() const
{
    return m_hostingTypeHasBeenSet;
}

