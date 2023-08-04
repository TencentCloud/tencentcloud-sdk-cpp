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

#include <tencentcloud/iss/v20230517/model/DescribeRecordRetrieveTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeRecordRetrieveTaskResponse::DescribeRecordRetrieveTaskResponse() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_expirationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_channelCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRecordRetrieveTaskResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskName") && !rsp["TaskName"].IsNull())
    {
        if (!rsp["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(rsp["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = rsp["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Mode") && !rsp["Mode"].IsNull())
    {
        if (!rsp["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = rsp["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (rsp.HasMember("Expiration") && !rsp["Expiration"].IsNull())
    {
        if (!rsp["Expiration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Expiration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiration = rsp["Expiration"].GetInt64();
        m_expirationHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Capacity") && !rsp["Capacity"].IsNull())
    {
        if (!rsp["Capacity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Capacity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = rsp["Capacity"].GetDouble();
        m_capacityHasBeenSet = true;
    }

    if (rsp.HasMember("Channels") && !rsp["Channels"].IsNull())
    {
        if (!rsp["Channels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Channels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Channels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordRetrieveTaskChannelInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_channels.push_back(item);
        }
        m_channelsHasBeenSet = true;
    }

    if (rsp.HasMember("Describe") && !rsp["Describe"].IsNull())
    {
        if (!rsp["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(rsp["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelCount") && !rsp["ChannelCount"].IsNull())
    {
        if (!rsp["ChannelCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelCount = rsp["ChannelCount"].GetInt64();
        m_channelCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRecordRetrieveTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_expirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiration, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacity, allocator);
    }

    if (m_channelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_channels.begin(); itr != m_channels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_channelCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelCount, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeRecordRetrieveTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeRecordRetrieveTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeRecordRetrieveTaskResponse::GetTaskName() const
{
    return m_taskName;
}

bool DescribeRecordRetrieveTaskResponse::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t DescribeRecordRetrieveTaskResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeRecordRetrieveTaskResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeRecordRetrieveTaskResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeRecordRetrieveTaskResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeRecordRetrieveTaskResponse::GetMode() const
{
    return m_mode;
}

bool DescribeRecordRetrieveTaskResponse::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t DescribeRecordRetrieveTaskResponse::GetExpiration() const
{
    return m_expiration;
}

bool DescribeRecordRetrieveTaskResponse::ExpirationHasBeenSet() const
{
    return m_expirationHasBeenSet;
}

int64_t DescribeRecordRetrieveTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeRecordRetrieveTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double DescribeRecordRetrieveTaskResponse::GetCapacity() const
{
    return m_capacity;
}

bool DescribeRecordRetrieveTaskResponse::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

vector<RecordRetrieveTaskChannelInfo> DescribeRecordRetrieveTaskResponse::GetChannels() const
{
    return m_channels;
}

bool DescribeRecordRetrieveTaskResponse::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}

string DescribeRecordRetrieveTaskResponse::GetDescribe() const
{
    return m_describe;
}

bool DescribeRecordRetrieveTaskResponse::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

int64_t DescribeRecordRetrieveTaskResponse::GetChannelCount() const
{
    return m_channelCount;
}

bool DescribeRecordRetrieveTaskResponse::ChannelCountHasBeenSet() const
{
    return m_channelCountHasBeenSet;
}


