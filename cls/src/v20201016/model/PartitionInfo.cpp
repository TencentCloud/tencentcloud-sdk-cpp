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

#include <tencentcloud/cls/v20201016/model/PartitionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

PartitionInfo::PartitionInfo() :
    m_partitionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inclusiveBeginKeyHasBeenSet(false),
    m_exclusiveEndKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastWriteTimeHasBeenSet(false)
{
}

CoreInternalOutcome PartitionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionId") && !value["PartitionId"].IsNull())
    {
        if (!value["PartitionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.PartitionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionId = value["PartitionId"].GetInt64();
        m_partitionIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InclusiveBeginKey") && !value["InclusiveBeginKey"].IsNull())
    {
        if (!value["InclusiveBeginKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.InclusiveBeginKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inclusiveBeginKey = string(value["InclusiveBeginKey"].GetString());
        m_inclusiveBeginKeyHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveEndKey") && !value["ExclusiveEndKey"].IsNull())
    {
        if (!value["ExclusiveEndKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.ExclusiveEndKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveEndKey = string(value["ExclusiveEndKey"].GetString());
        m_exclusiveEndKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastWriteTime") && !value["LastWriteTime"].IsNull())
    {
        if (!value["LastWriteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.LastWriteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastWriteTime = string(value["LastWriteTime"].GetString());
        m_lastWriteTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PartitionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_inclusiveBeginKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InclusiveBeginKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inclusiveBeginKey.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveEndKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveEndKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exclusiveEndKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastWriteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastWriteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastWriteTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t PartitionInfo::GetPartitionId() const
{
    return m_partitionId;
}

void PartitionInfo::SetPartitionId(const int64_t& _partitionId)
{
    m_partitionId = _partitionId;
    m_partitionIdHasBeenSet = true;
}

bool PartitionInfo::PartitionIdHasBeenSet() const
{
    return m_partitionIdHasBeenSet;
}

string PartitionInfo::GetStatus() const
{
    return m_status;
}

void PartitionInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PartitionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PartitionInfo::GetInclusiveBeginKey() const
{
    return m_inclusiveBeginKey;
}

void PartitionInfo::SetInclusiveBeginKey(const string& _inclusiveBeginKey)
{
    m_inclusiveBeginKey = _inclusiveBeginKey;
    m_inclusiveBeginKeyHasBeenSet = true;
}

bool PartitionInfo::InclusiveBeginKeyHasBeenSet() const
{
    return m_inclusiveBeginKeyHasBeenSet;
}

string PartitionInfo::GetExclusiveEndKey() const
{
    return m_exclusiveEndKey;
}

void PartitionInfo::SetExclusiveEndKey(const string& _exclusiveEndKey)
{
    m_exclusiveEndKey = _exclusiveEndKey;
    m_exclusiveEndKeyHasBeenSet = true;
}

bool PartitionInfo::ExclusiveEndKeyHasBeenSet() const
{
    return m_exclusiveEndKeyHasBeenSet;
}

string PartitionInfo::GetCreateTime() const
{
    return m_createTime;
}

void PartitionInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PartitionInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PartitionInfo::GetLastWriteTime() const
{
    return m_lastWriteTime;
}

void PartitionInfo::SetLastWriteTime(const string& _lastWriteTime)
{
    m_lastWriteTime = _lastWriteTime;
    m_lastWriteTimeHasBeenSet = true;
}

bool PartitionInfo::LastWriteTimeHasBeenSet() const
{
    return m_lastWriteTimeHasBeenSet;
}

