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

#include <tencentcloud/cbs/v20170312/model/Cdc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

Cdc::Cdc() :
    m_cageIdHasBeenSet(false),
    m_cdcStateHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_cdcNameHasBeenSet(false),
    m_cdcResourceHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome Cdc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CageId") && !value["CageId"].IsNull())
    {
        if (!value["CageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cdc.CageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cageId = string(value["CageId"].GetString());
        m_cageIdHasBeenSet = true;
    }

    if (value.HasMember("CdcState") && !value["CdcState"].IsNull())
    {
        if (!value["CdcState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cdc.CdcState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcState = string(value["CdcState"].GetString());
        m_cdcStateHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cdc.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CdcName") && !value["CdcName"].IsNull())
    {
        if (!value["CdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cdc.CdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcName = string(value["CdcName"].GetString());
        m_cdcNameHasBeenSet = true;
    }

    if (value.HasMember("CdcResource") && !value["CdcResource"].IsNull())
    {
        if (!value["CdcResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cdc.CdcResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cdcResource.Deserialize(value["CdcResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cdcResourceHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cdc.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cdc.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cdc.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cdc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cageId.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcState.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcName.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cdcResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

}


string Cdc::GetCageId() const
{
    return m_cageId;
}

void Cdc::SetCageId(const string& _cageId)
{
    m_cageId = _cageId;
    m_cageIdHasBeenSet = true;
}

bool Cdc::CageIdHasBeenSet() const
{
    return m_cageIdHasBeenSet;
}

string Cdc::GetCdcState() const
{
    return m_cdcState;
}

void Cdc::SetCdcState(const string& _cdcState)
{
    m_cdcState = _cdcState;
    m_cdcStateHasBeenSet = true;
}

bool Cdc::CdcStateHasBeenSet() const
{
    return m_cdcStateHasBeenSet;
}

string Cdc::GetZone() const
{
    return m_zone;
}

void Cdc::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Cdc::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Cdc::GetCdcName() const
{
    return m_cdcName;
}

void Cdc::SetCdcName(const string& _cdcName)
{
    m_cdcName = _cdcName;
    m_cdcNameHasBeenSet = true;
}

bool Cdc::CdcNameHasBeenSet() const
{
    return m_cdcNameHasBeenSet;
}

CdcSize Cdc::GetCdcResource() const
{
    return m_cdcResource;
}

void Cdc::SetCdcResource(const CdcSize& _cdcResource)
{
    m_cdcResource = _cdcResource;
    m_cdcResourceHasBeenSet = true;
}

bool Cdc::CdcResourceHasBeenSet() const
{
    return m_cdcResourceHasBeenSet;
}

string Cdc::GetCdcId() const
{
    return m_cdcId;
}

void Cdc::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool Cdc::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

string Cdc::GetDiskType() const
{
    return m_diskType;
}

void Cdc::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool Cdc::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string Cdc::GetExpiredTime() const
{
    return m_expiredTime;
}

void Cdc::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool Cdc::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

