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

#include <tencentcloud/live/v20180801/model/RecordParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

RecordParam::RecordParam() :
    m_recordIntervalHasBeenSet(false),
    m_storageTimeHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_vodSubAppIdHasBeenSet(false),
    m_vodFileNameHasBeenSet(false)
{
}

CoreInternalOutcome RecordParam::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordInterval") && !value["RecordInterval"].IsNull())
    {
        if (!value["RecordInterval"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RecordParam.RecordInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordInterval = value["RecordInterval"].GetInt64();
        m_recordIntervalHasBeenSet = true;
    }

    if (value.HasMember("StorageTime") && !value["StorageTime"].IsNull())
    {
        if (!value["StorageTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RecordParam.StorageTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageTime = value["StorageTime"].GetInt64();
        m_storageTimeHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RecordParam.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("VodSubAppId") && !value["VodSubAppId"].IsNull())
    {
        if (!value["VodSubAppId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RecordParam.VodSubAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vodSubAppId = value["VodSubAppId"].GetInt64();
        m_vodSubAppIdHasBeenSet = true;
    }

    if (value.HasMember("VodFileName") && !value["VodFileName"].IsNull())
    {
        if (!value["VodFileName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RecordParam.VodFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodFileName = string(value["VodFileName"].GetString());
        m_vodFileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordParam::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_recordIntervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordInterval, allocator);
    }

    if (m_storageTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageTime, allocator);
    }

    if (m_enableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_vodSubAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VodSubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vodSubAppId, allocator);
    }

    if (m_vodFileNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VodFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vodFileName.c_str(), allocator).Move(), allocator);
    }

}


int64_t RecordParam::GetRecordInterval() const
{
    return m_recordInterval;
}

void RecordParam::SetRecordInterval(const int64_t& _recordInterval)
{
    m_recordInterval = _recordInterval;
    m_recordIntervalHasBeenSet = true;
}

bool RecordParam::RecordIntervalHasBeenSet() const
{
    return m_recordIntervalHasBeenSet;
}

int64_t RecordParam::GetStorageTime() const
{
    return m_storageTime;
}

void RecordParam::SetStorageTime(const int64_t& _storageTime)
{
    m_storageTime = _storageTime;
    m_storageTimeHasBeenSet = true;
}

bool RecordParam::StorageTimeHasBeenSet() const
{
    return m_storageTimeHasBeenSet;
}

int64_t RecordParam::GetEnable() const
{
    return m_enable;
}

void RecordParam::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool RecordParam::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t RecordParam::GetVodSubAppId() const
{
    return m_vodSubAppId;
}

void RecordParam::SetVodSubAppId(const int64_t& _vodSubAppId)
{
    m_vodSubAppId = _vodSubAppId;
    m_vodSubAppIdHasBeenSet = true;
}

bool RecordParam::VodSubAppIdHasBeenSet() const
{
    return m_vodSubAppIdHasBeenSet;
}

string RecordParam::GetVodFileName() const
{
    return m_vodFileName;
}

void RecordParam::SetVodFileName(const string& _vodFileName)
{
    m_vodFileName = _vodFileName;
    m_vodFileNameHasBeenSet = true;
}

bool RecordParam::VodFileNameHasBeenSet() const
{
    return m_vodFileNameHasBeenSet;
}

