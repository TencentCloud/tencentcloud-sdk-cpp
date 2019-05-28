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

#include <tencentcloud/live/v20180801/model/StreamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

StreamInfo::StreamInfo() :
    m_appNameHasBeenSet(false),
    m_createModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_waterMarkIdHasBeenSet(false)
{
}

CoreInternalOutcome StreamInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Error("response `StreamInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("CreateMode") && !value["CreateMode"].IsNull())
    {
        if (!value["CreateMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `StreamInfo.CreateMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createMode = string(value["CreateMode"].GetString());
        m_createModeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `StreamInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `StreamInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StreamId") && !value["StreamId"].IsNull())
    {
        if (!value["StreamId"].IsString())
        {
            return CoreInternalOutcome(Error("response `StreamInfo.StreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamId = string(value["StreamId"].GetString());
        m_streamIdHasBeenSet = true;
    }

    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Error("response `StreamInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkId") && !value["WaterMarkId"].IsNull())
    {
        if (!value["WaterMarkId"].IsString())
        {
            return CoreInternalOutcome(Error("response `StreamInfo.WaterMarkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkId = string(value["WaterMarkId"].GetString());
        m_waterMarkIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_appNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_createModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createMode.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_streamIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_waterMarkIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WaterMarkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_waterMarkId.c_str(), allocator).Move(), allocator);
    }

}


string StreamInfo::GetAppName() const
{
    return m_appName;
}

void StreamInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool StreamInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string StreamInfo::GetCreateMode() const
{
    return m_createMode;
}

void StreamInfo::SetCreateMode(const string& _createMode)
{
    m_createMode = _createMode;
    m_createModeHasBeenSet = true;
}

bool StreamInfo::CreateModeHasBeenSet() const
{
    return m_createModeHasBeenSet;
}

string StreamInfo::GetCreateTime() const
{
    return m_createTime;
}

void StreamInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool StreamInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t StreamInfo::GetStatus() const
{
    return m_status;
}

void StreamInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StreamInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StreamInfo::GetStreamId() const
{
    return m_streamId;
}

void StreamInfo::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool StreamInfo::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

string StreamInfo::GetStreamName() const
{
    return m_streamName;
}

void StreamInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool StreamInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string StreamInfo::GetWaterMarkId() const
{
    return m_waterMarkId;
}

void StreamInfo::SetWaterMarkId(const string& _waterMarkId)
{
    m_waterMarkId = _waterMarkId;
    m_waterMarkIdHasBeenSet = true;
}

bool StreamInfo::WaterMarkIdHasBeenSet() const
{
    return m_waterMarkIdHasBeenSet;
}

