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

#include <tencentcloud/cynosdb/v20190107/model/SlaveZoneAttrItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SlaveZoneAttrItem::SlaveZoneAttrItem() :
    m_zoneHasBeenSet(false),
    m_binlogSyncWayHasBeenSet(false),
    m_semiSyncTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome SlaveZoneAttrItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveZoneAttrItem.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("BinlogSyncWay") && !value["BinlogSyncWay"].IsNull())
    {
        if (!value["BinlogSyncWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveZoneAttrItem.BinlogSyncWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_binlogSyncWay = string(value["BinlogSyncWay"].GetString());
        m_binlogSyncWayHasBeenSet = true;
    }

    if (value.HasMember("SemiSyncTimeout") && !value["SemiSyncTimeout"].IsNull())
    {
        if (!value["SemiSyncTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveZoneAttrItem.SemiSyncTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_semiSyncTimeout = value["SemiSyncTimeout"].GetInt64();
        m_semiSyncTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlaveZoneAttrItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogSyncWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogSyncWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_binlogSyncWay.c_str(), allocator).Move(), allocator);
    }

    if (m_semiSyncTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SemiSyncTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_semiSyncTimeout, allocator);
    }

}


string SlaveZoneAttrItem::GetZone() const
{
    return m_zone;
}

void SlaveZoneAttrItem::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SlaveZoneAttrItem::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string SlaveZoneAttrItem::GetBinlogSyncWay() const
{
    return m_binlogSyncWay;
}

void SlaveZoneAttrItem::SetBinlogSyncWay(const string& _binlogSyncWay)
{
    m_binlogSyncWay = _binlogSyncWay;
    m_binlogSyncWayHasBeenSet = true;
}

bool SlaveZoneAttrItem::BinlogSyncWayHasBeenSet() const
{
    return m_binlogSyncWayHasBeenSet;
}

int64_t SlaveZoneAttrItem::GetSemiSyncTimeout() const
{
    return m_semiSyncTimeout;
}

void SlaveZoneAttrItem::SetSemiSyncTimeout(const int64_t& _semiSyncTimeout)
{
    m_semiSyncTimeout = _semiSyncTimeout;
    m_semiSyncTimeoutHasBeenSet = true;
}

bool SlaveZoneAttrItem::SemiSyncTimeoutHasBeenSet() const
{
    return m_semiSyncTimeoutHasBeenSet;
}

