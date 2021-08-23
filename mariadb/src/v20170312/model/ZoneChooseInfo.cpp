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

#include <tencentcloud/mariadb/v20170312/model/ZoneChooseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

ZoneChooseInfo::ZoneChooseInfo() :
    m_masterZoneHasBeenSet(false),
    m_slaveZonesHasBeenSet(false)
{
}

CoreInternalOutcome ZoneChooseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MasterZone") && !value["MasterZone"].IsNull())
    {
        if (!value["MasterZone"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneChooseInfo.MasterZone` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterZone.Deserialize(value["MasterZone"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterZoneHasBeenSet = true;
    }

    if (value.HasMember("SlaveZones") && !value["SlaveZones"].IsNull())
    {
        if (!value["SlaveZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneChooseInfo.SlaveZones` is not array type"));

        const rapidjson::Value &tmpValue = value["SlaveZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZonesInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slaveZones.push_back(item);
        }
        m_slaveZonesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneChooseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_masterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_masterZone.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_slaveZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slaveZones.begin(); itr != m_slaveZones.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ZonesInfo ZoneChooseInfo::GetMasterZone() const
{
    return m_masterZone;
}

void ZoneChooseInfo::SetMasterZone(const ZonesInfo& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool ZoneChooseInfo::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

vector<ZonesInfo> ZoneChooseInfo::GetSlaveZones() const
{
    return m_slaveZones;
}

void ZoneChooseInfo::SetSlaveZones(const vector<ZonesInfo>& _slaveZones)
{
    m_slaveZones = _slaveZones;
    m_slaveZonesHasBeenSet = true;
}

bool ZoneChooseInfo::SlaveZonesHasBeenSet() const
{
    return m_slaveZonesHasBeenSet;
}

