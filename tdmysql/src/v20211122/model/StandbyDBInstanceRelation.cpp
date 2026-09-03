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

#include <tencentcloud/tdmysql/v20211122/model/StandbyDBInstanceRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

StandbyDBInstanceRelation::StandbyDBInstanceRelation() :
    m_primaryInstanceIdHasBeenSet(false),
    m_primaryInstanceNameHasBeenSet(false),
    m_primaryRegionHasBeenSet(false),
    m_primaryVipHasBeenSet(false),
    m_primaryVportHasBeenSet(false),
    m_primaryZonesHasBeenSet(false),
    m_primaryStatusHasBeenSet(false),
    m_secondaryInstanceIdHasBeenSet(false),
    m_secondaryInstanceNameHasBeenSet(false),
    m_secondaryRegionHasBeenSet(false),
    m_secondaryVipHasBeenSet(false),
    m_secondaryVportHasBeenSet(false),
    m_secondaryZonesHasBeenSet(false),
    m_secondaryStatusHasBeenSet(false),
    m_connTypeHasBeenSet(false),
    m_syncModeHasBeenSet(false),
    m_syncStatusHasBeenSet(false),
    m_syncStatusDescHasBeenSet(false),
    m_standbyStatusHasBeenSet(false),
    m_primaryCreateVersionHasBeenSet(false),
    m_secondaryCreateVersionHasBeenSet(false),
    m_syncDelayHasBeenSet(false)
{
}

CoreInternalOutcome StandbyDBInstanceRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrimaryInstanceId") && !value["PrimaryInstanceId"].IsNull())
    {
        if (!value["PrimaryInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.PrimaryInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryInstanceId = string(value["PrimaryInstanceId"].GetString());
        m_primaryInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("PrimaryInstanceName") && !value["PrimaryInstanceName"].IsNull())
    {
        if (!value["PrimaryInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.PrimaryInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryInstanceName = string(value["PrimaryInstanceName"].GetString());
        m_primaryInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("PrimaryRegion") && !value["PrimaryRegion"].IsNull())
    {
        if (!value["PrimaryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.PrimaryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryRegion = string(value["PrimaryRegion"].GetString());
        m_primaryRegionHasBeenSet = true;
    }

    if (value.HasMember("PrimaryVip") && !value["PrimaryVip"].IsNull())
    {
        if (!value["PrimaryVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.PrimaryVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryVip = string(value["PrimaryVip"].GetString());
        m_primaryVipHasBeenSet = true;
    }

    if (value.HasMember("PrimaryVport") && !value["PrimaryVport"].IsNull())
    {
        if (!value["PrimaryVport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.PrimaryVport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_primaryVport = value["PrimaryVport"].GetInt64();
        m_primaryVportHasBeenSet = true;
    }

    if (value.HasMember("PrimaryZones") && !value["PrimaryZones"].IsNull())
    {
        if (!value["PrimaryZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.PrimaryZones` is not array type"));

        const rapidjson::Value &tmpValue = value["PrimaryZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_primaryZones.push_back((*itr).GetString());
        }
        m_primaryZonesHasBeenSet = true;
    }

    if (value.HasMember("PrimaryStatus") && !value["PrimaryStatus"].IsNull())
    {
        if (!value["PrimaryStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.PrimaryStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryStatus = string(value["PrimaryStatus"].GetString());
        m_primaryStatusHasBeenSet = true;
    }

    if (value.HasMember("SecondaryInstanceId") && !value["SecondaryInstanceId"].IsNull())
    {
        if (!value["SecondaryInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SecondaryInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryInstanceId = string(value["SecondaryInstanceId"].GetString());
        m_secondaryInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("SecondaryInstanceName") && !value["SecondaryInstanceName"].IsNull())
    {
        if (!value["SecondaryInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SecondaryInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryInstanceName = string(value["SecondaryInstanceName"].GetString());
        m_secondaryInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("SecondaryRegion") && !value["SecondaryRegion"].IsNull())
    {
        if (!value["SecondaryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SecondaryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryRegion = string(value["SecondaryRegion"].GetString());
        m_secondaryRegionHasBeenSet = true;
    }

    if (value.HasMember("SecondaryVip") && !value["SecondaryVip"].IsNull())
    {
        if (!value["SecondaryVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SecondaryVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryVip = string(value["SecondaryVip"].GetString());
        m_secondaryVipHasBeenSet = true;
    }

    if (value.HasMember("SecondaryVport") && !value["SecondaryVport"].IsNull())
    {
        if (!value["SecondaryVport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SecondaryVport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryVport = value["SecondaryVport"].GetInt64();
        m_secondaryVportHasBeenSet = true;
    }

    if (value.HasMember("SecondaryZones") && !value["SecondaryZones"].IsNull())
    {
        if (!value["SecondaryZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SecondaryZones` is not array type"));

        const rapidjson::Value &tmpValue = value["SecondaryZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_secondaryZones.push_back((*itr).GetString());
        }
        m_secondaryZonesHasBeenSet = true;
    }

    if (value.HasMember("SecondaryStatus") && !value["SecondaryStatus"].IsNull())
    {
        if (!value["SecondaryStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SecondaryStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryStatus = string(value["SecondaryStatus"].GetString());
        m_secondaryStatusHasBeenSet = true;
    }

    if (value.HasMember("ConnType") && !value["ConnType"].IsNull())
    {
        if (!value["ConnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.ConnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connType = string(value["ConnType"].GetString());
        m_connTypeHasBeenSet = true;
    }

    if (value.HasMember("SyncMode") && !value["SyncMode"].IsNull())
    {
        if (!value["SyncMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SyncMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncMode = string(value["SyncMode"].GetString());
        m_syncModeHasBeenSet = true;
    }

    if (value.HasMember("SyncStatus") && !value["SyncStatus"].IsNull())
    {
        if (!value["SyncStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SyncStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = value["SyncStatus"].GetInt64();
        m_syncStatusHasBeenSet = true;
    }

    if (value.HasMember("SyncStatusDesc") && !value["SyncStatusDesc"].IsNull())
    {
        if (!value["SyncStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SyncStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatusDesc = string(value["SyncStatusDesc"].GetString());
        m_syncStatusDescHasBeenSet = true;
    }

    if (value.HasMember("StandbyStatus") && !value["StandbyStatus"].IsNull())
    {
        if (!value["StandbyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.StandbyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standbyStatus = string(value["StandbyStatus"].GetString());
        m_standbyStatusHasBeenSet = true;
    }

    if (value.HasMember("PrimaryCreateVersion") && !value["PrimaryCreateVersion"].IsNull())
    {
        if (!value["PrimaryCreateVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.PrimaryCreateVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryCreateVersion = string(value["PrimaryCreateVersion"].GetString());
        m_primaryCreateVersionHasBeenSet = true;
    }

    if (value.HasMember("SecondaryCreateVersion") && !value["SecondaryCreateVersion"].IsNull())
    {
        if (!value["SecondaryCreateVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SecondaryCreateVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryCreateVersion = string(value["SecondaryCreateVersion"].GetString());
        m_secondaryCreateVersionHasBeenSet = true;
    }

    if (value.HasMember("SyncDelay") && !value["SyncDelay"].IsNull())
    {
        if (!value["SyncDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyDBInstanceRelation.SyncDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncDelay = value["SyncDelay"].GetInt64();
        m_syncDelayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandbyDBInstanceRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_primaryInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryVip.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryVportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryVport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_primaryVport, allocator);
    }

    if (m_primaryZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_primaryZones.begin(); itr != m_primaryZones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_primaryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryVip.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryVportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryVport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondaryVport, allocator);
    }

    if (m_secondaryZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_secondaryZones.begin(); itr != m_secondaryZones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_secondaryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_connTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connType.c_str(), allocator).Move(), allocator);
    }

    if (m_syncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncMode.c_str(), allocator).Move(), allocator);
    }

    if (m_syncStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncStatus, allocator);
    }

    if (m_syncStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_standbyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandbyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standbyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryCreateVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryCreateVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryCreateVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryCreateVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryCreateVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryCreateVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_syncDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncDelay, allocator);
    }

}


string StandbyDBInstanceRelation::GetPrimaryInstanceId() const
{
    return m_primaryInstanceId;
}

void StandbyDBInstanceRelation::SetPrimaryInstanceId(const string& _primaryInstanceId)
{
    m_primaryInstanceId = _primaryInstanceId;
    m_primaryInstanceIdHasBeenSet = true;
}

bool StandbyDBInstanceRelation::PrimaryInstanceIdHasBeenSet() const
{
    return m_primaryInstanceIdHasBeenSet;
}

string StandbyDBInstanceRelation::GetPrimaryInstanceName() const
{
    return m_primaryInstanceName;
}

void StandbyDBInstanceRelation::SetPrimaryInstanceName(const string& _primaryInstanceName)
{
    m_primaryInstanceName = _primaryInstanceName;
    m_primaryInstanceNameHasBeenSet = true;
}

bool StandbyDBInstanceRelation::PrimaryInstanceNameHasBeenSet() const
{
    return m_primaryInstanceNameHasBeenSet;
}

string StandbyDBInstanceRelation::GetPrimaryRegion() const
{
    return m_primaryRegion;
}

void StandbyDBInstanceRelation::SetPrimaryRegion(const string& _primaryRegion)
{
    m_primaryRegion = _primaryRegion;
    m_primaryRegionHasBeenSet = true;
}

bool StandbyDBInstanceRelation::PrimaryRegionHasBeenSet() const
{
    return m_primaryRegionHasBeenSet;
}

string StandbyDBInstanceRelation::GetPrimaryVip() const
{
    return m_primaryVip;
}

void StandbyDBInstanceRelation::SetPrimaryVip(const string& _primaryVip)
{
    m_primaryVip = _primaryVip;
    m_primaryVipHasBeenSet = true;
}

bool StandbyDBInstanceRelation::PrimaryVipHasBeenSet() const
{
    return m_primaryVipHasBeenSet;
}

int64_t StandbyDBInstanceRelation::GetPrimaryVport() const
{
    return m_primaryVport;
}

void StandbyDBInstanceRelation::SetPrimaryVport(const int64_t& _primaryVport)
{
    m_primaryVport = _primaryVport;
    m_primaryVportHasBeenSet = true;
}

bool StandbyDBInstanceRelation::PrimaryVportHasBeenSet() const
{
    return m_primaryVportHasBeenSet;
}

vector<string> StandbyDBInstanceRelation::GetPrimaryZones() const
{
    return m_primaryZones;
}

void StandbyDBInstanceRelation::SetPrimaryZones(const vector<string>& _primaryZones)
{
    m_primaryZones = _primaryZones;
    m_primaryZonesHasBeenSet = true;
}

bool StandbyDBInstanceRelation::PrimaryZonesHasBeenSet() const
{
    return m_primaryZonesHasBeenSet;
}

string StandbyDBInstanceRelation::GetPrimaryStatus() const
{
    return m_primaryStatus;
}

void StandbyDBInstanceRelation::SetPrimaryStatus(const string& _primaryStatus)
{
    m_primaryStatus = _primaryStatus;
    m_primaryStatusHasBeenSet = true;
}

bool StandbyDBInstanceRelation::PrimaryStatusHasBeenSet() const
{
    return m_primaryStatusHasBeenSet;
}

string StandbyDBInstanceRelation::GetSecondaryInstanceId() const
{
    return m_secondaryInstanceId;
}

void StandbyDBInstanceRelation::SetSecondaryInstanceId(const string& _secondaryInstanceId)
{
    m_secondaryInstanceId = _secondaryInstanceId;
    m_secondaryInstanceIdHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SecondaryInstanceIdHasBeenSet() const
{
    return m_secondaryInstanceIdHasBeenSet;
}

string StandbyDBInstanceRelation::GetSecondaryInstanceName() const
{
    return m_secondaryInstanceName;
}

void StandbyDBInstanceRelation::SetSecondaryInstanceName(const string& _secondaryInstanceName)
{
    m_secondaryInstanceName = _secondaryInstanceName;
    m_secondaryInstanceNameHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SecondaryInstanceNameHasBeenSet() const
{
    return m_secondaryInstanceNameHasBeenSet;
}

string StandbyDBInstanceRelation::GetSecondaryRegion() const
{
    return m_secondaryRegion;
}

void StandbyDBInstanceRelation::SetSecondaryRegion(const string& _secondaryRegion)
{
    m_secondaryRegion = _secondaryRegion;
    m_secondaryRegionHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SecondaryRegionHasBeenSet() const
{
    return m_secondaryRegionHasBeenSet;
}

string StandbyDBInstanceRelation::GetSecondaryVip() const
{
    return m_secondaryVip;
}

void StandbyDBInstanceRelation::SetSecondaryVip(const string& _secondaryVip)
{
    m_secondaryVip = _secondaryVip;
    m_secondaryVipHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SecondaryVipHasBeenSet() const
{
    return m_secondaryVipHasBeenSet;
}

int64_t StandbyDBInstanceRelation::GetSecondaryVport() const
{
    return m_secondaryVport;
}

void StandbyDBInstanceRelation::SetSecondaryVport(const int64_t& _secondaryVport)
{
    m_secondaryVport = _secondaryVport;
    m_secondaryVportHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SecondaryVportHasBeenSet() const
{
    return m_secondaryVportHasBeenSet;
}

vector<string> StandbyDBInstanceRelation::GetSecondaryZones() const
{
    return m_secondaryZones;
}

void StandbyDBInstanceRelation::SetSecondaryZones(const vector<string>& _secondaryZones)
{
    m_secondaryZones = _secondaryZones;
    m_secondaryZonesHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SecondaryZonesHasBeenSet() const
{
    return m_secondaryZonesHasBeenSet;
}

string StandbyDBInstanceRelation::GetSecondaryStatus() const
{
    return m_secondaryStatus;
}

void StandbyDBInstanceRelation::SetSecondaryStatus(const string& _secondaryStatus)
{
    m_secondaryStatus = _secondaryStatus;
    m_secondaryStatusHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SecondaryStatusHasBeenSet() const
{
    return m_secondaryStatusHasBeenSet;
}

string StandbyDBInstanceRelation::GetConnType() const
{
    return m_connType;
}

void StandbyDBInstanceRelation::SetConnType(const string& _connType)
{
    m_connType = _connType;
    m_connTypeHasBeenSet = true;
}

bool StandbyDBInstanceRelation::ConnTypeHasBeenSet() const
{
    return m_connTypeHasBeenSet;
}

string StandbyDBInstanceRelation::GetSyncMode() const
{
    return m_syncMode;
}

void StandbyDBInstanceRelation::SetSyncMode(const string& _syncMode)
{
    m_syncMode = _syncMode;
    m_syncModeHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SyncModeHasBeenSet() const
{
    return m_syncModeHasBeenSet;
}

int64_t StandbyDBInstanceRelation::GetSyncStatus() const
{
    return m_syncStatus;
}

void StandbyDBInstanceRelation::SetSyncStatus(const int64_t& _syncStatus)
{
    m_syncStatus = _syncStatus;
    m_syncStatusHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

string StandbyDBInstanceRelation::GetSyncStatusDesc() const
{
    return m_syncStatusDesc;
}

void StandbyDBInstanceRelation::SetSyncStatusDesc(const string& _syncStatusDesc)
{
    m_syncStatusDesc = _syncStatusDesc;
    m_syncStatusDescHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SyncStatusDescHasBeenSet() const
{
    return m_syncStatusDescHasBeenSet;
}

string StandbyDBInstanceRelation::GetStandbyStatus() const
{
    return m_standbyStatus;
}

void StandbyDBInstanceRelation::SetStandbyStatus(const string& _standbyStatus)
{
    m_standbyStatus = _standbyStatus;
    m_standbyStatusHasBeenSet = true;
}

bool StandbyDBInstanceRelation::StandbyStatusHasBeenSet() const
{
    return m_standbyStatusHasBeenSet;
}

string StandbyDBInstanceRelation::GetPrimaryCreateVersion() const
{
    return m_primaryCreateVersion;
}

void StandbyDBInstanceRelation::SetPrimaryCreateVersion(const string& _primaryCreateVersion)
{
    m_primaryCreateVersion = _primaryCreateVersion;
    m_primaryCreateVersionHasBeenSet = true;
}

bool StandbyDBInstanceRelation::PrimaryCreateVersionHasBeenSet() const
{
    return m_primaryCreateVersionHasBeenSet;
}

string StandbyDBInstanceRelation::GetSecondaryCreateVersion() const
{
    return m_secondaryCreateVersion;
}

void StandbyDBInstanceRelation::SetSecondaryCreateVersion(const string& _secondaryCreateVersion)
{
    m_secondaryCreateVersion = _secondaryCreateVersion;
    m_secondaryCreateVersionHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SecondaryCreateVersionHasBeenSet() const
{
    return m_secondaryCreateVersionHasBeenSet;
}

int64_t StandbyDBInstanceRelation::GetSyncDelay() const
{
    return m_syncDelay;
}

void StandbyDBInstanceRelation::SetSyncDelay(const int64_t& _syncDelay)
{
    m_syncDelay = _syncDelay;
    m_syncDelayHasBeenSet = true;
}

bool StandbyDBInstanceRelation::SyncDelayHasBeenSet() const
{
    return m_syncDelayHasBeenSet;
}

