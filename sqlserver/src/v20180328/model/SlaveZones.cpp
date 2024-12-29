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

#include <tencentcloud/sqlserver/v20180328/model/SlaveZones.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

SlaveZones::SlaveZones() :
    m_slaveZoneHasBeenSet(false),
    m_slaveZoneNameHasBeenSet(false),
    m_drInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome SlaveZones::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SlaveZone") && !value["SlaveZone"].IsNull())
    {
        if (!value["SlaveZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveZones.SlaveZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveZone = string(value["SlaveZone"].GetString());
        m_slaveZoneHasBeenSet = true;
    }

    if (value.HasMember("SlaveZoneName") && !value["SlaveZoneName"].IsNull())
    {
        if (!value["SlaveZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveZones.SlaveZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveZoneName = string(value["SlaveZoneName"].GetString());
        m_slaveZoneNameHasBeenSet = true;
    }

    if (value.HasMember("DrInstanceId") && !value["DrInstanceId"].IsNull())
    {
        if (!value["DrInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveZones.DrInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drInstanceId = string(value["DrInstanceId"].GetString());
        m_drInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlaveZones::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_drInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drInstanceId.c_str(), allocator).Move(), allocator);
    }

}


string SlaveZones::GetSlaveZone() const
{
    return m_slaveZone;
}

void SlaveZones::SetSlaveZone(const string& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool SlaveZones::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

string SlaveZones::GetSlaveZoneName() const
{
    return m_slaveZoneName;
}

void SlaveZones::SetSlaveZoneName(const string& _slaveZoneName)
{
    m_slaveZoneName = _slaveZoneName;
    m_slaveZoneNameHasBeenSet = true;
}

bool SlaveZones::SlaveZoneNameHasBeenSet() const
{
    return m_slaveZoneNameHasBeenSet;
}

string SlaveZones::GetDrInstanceId() const
{
    return m_drInstanceId;
}

void SlaveZones::SetDrInstanceId(const string& _drInstanceId)
{
    m_drInstanceId = _drInstanceId;
    m_drInstanceIdHasBeenSet = true;
}

bool SlaveZones::DrInstanceIdHasBeenSet() const
{
    return m_drInstanceIdHasBeenSet;
}

