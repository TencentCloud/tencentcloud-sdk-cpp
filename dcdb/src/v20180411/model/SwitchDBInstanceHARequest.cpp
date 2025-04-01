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

#include <tencentcloud/dcdb/v20180411/model/SwitchDBInstanceHARequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

SwitchDBInstanceHARequest::SwitchDBInstanceHARequest() :
    m_instanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_shardInstanceIdsHasBeenSet(false),
    m_zoneModeHasBeenSet(false)
{
}

string SwitchDBInstanceHARequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_shardInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shardInstanceIds.begin(); itr != m_shardInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SwitchDBInstanceHARequest::GetInstanceId() const
{
    return m_instanceId;
}

void SwitchDBInstanceHARequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SwitchDBInstanceHARequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SwitchDBInstanceHARequest::GetZone() const
{
    return m_zone;
}

void SwitchDBInstanceHARequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SwitchDBInstanceHARequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<string> SwitchDBInstanceHARequest::GetShardInstanceIds() const
{
    return m_shardInstanceIds;
}

void SwitchDBInstanceHARequest::SetShardInstanceIds(const vector<string>& _shardInstanceIds)
{
    m_shardInstanceIds = _shardInstanceIds;
    m_shardInstanceIdsHasBeenSet = true;
}

bool SwitchDBInstanceHARequest::ShardInstanceIdsHasBeenSet() const
{
    return m_shardInstanceIdsHasBeenSet;
}

string SwitchDBInstanceHARequest::GetZoneMode() const
{
    return m_zoneMode;
}

void SwitchDBInstanceHARequest::SetZoneMode(const string& _zoneMode)
{
    m_zoneMode = _zoneMode;
    m_zoneModeHasBeenSet = true;
}

bool SwitchDBInstanceHARequest::ZoneModeHasBeenSet() const
{
    return m_zoneModeHasBeenSet;
}


