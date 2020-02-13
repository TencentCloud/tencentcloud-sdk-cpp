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

#include <tencentcloud/tcaplusdb/v20190823/model/ZoneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

ZoneInfo::ZoneInfo() :
    m_logicZoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_tableCountHasBeenSet(false),
    m_totalSizeHasBeenSet(false)
{
}

CoreInternalOutcome ZoneInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LogicZoneId") && !value["LogicZoneId"].IsNull())
    {
        if (!value["LogicZoneId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.LogicZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicZoneId = string(value["LogicZoneId"].GetString());
        m_logicZoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("TableCount") && !value["TableCount"].IsNull())
    {
        if (!value["TableCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.TableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableCount = value["TableCount"].GetUint64();
        m_tableCountHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.TotalSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetUint64();
        m_totalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_logicZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogicZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_logicZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tableCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableCount, allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

}


string ZoneInfo::GetLogicZoneId() const
{
    return m_logicZoneId;
}

void ZoneInfo::SetLogicZoneId(const string& _logicZoneId)
{
    m_logicZoneId = _logicZoneId;
    m_logicZoneIdHasBeenSet = true;
}

bool ZoneInfo::LogicZoneIdHasBeenSet() const
{
    return m_logicZoneIdHasBeenSet;
}

string ZoneInfo::GetZoneName() const
{
    return m_zoneName;
}

void ZoneInfo::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneInfo::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string ZoneInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void ZoneInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ZoneInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

uint64_t ZoneInfo::GetTableCount() const
{
    return m_tableCount;
}

void ZoneInfo::SetTableCount(const uint64_t& _tableCount)
{
    m_tableCount = _tableCount;
    m_tableCountHasBeenSet = true;
}

bool ZoneInfo::TableCountHasBeenSet() const
{
    return m_tableCountHasBeenSet;
}

uint64_t ZoneInfo::GetTotalSize() const
{
    return m_totalSize;
}

void ZoneInfo::SetTotalSize(const uint64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool ZoneInfo::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

