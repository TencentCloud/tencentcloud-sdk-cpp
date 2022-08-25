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

#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeRangeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeRollbackTimeRangeResponse::DescribeRollbackTimeRangeResponse() :
    m_timeRangeStartHasBeenSet(false),
    m_timeRangeEndHasBeenSet(false),
    m_rollbackTimeRangesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRollbackTimeRangeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TimeRangeStart") && !rsp["TimeRangeStart"].IsNull())
    {
        if (!rsp["TimeRangeStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeRangeStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRangeStart = string(rsp["TimeRangeStart"].GetString());
        m_timeRangeStartHasBeenSet = true;
    }

    if (rsp.HasMember("TimeRangeEnd") && !rsp["TimeRangeEnd"].IsNull())
    {
        if (!rsp["TimeRangeEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeRangeEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRangeEnd = string(rsp["TimeRangeEnd"].GetString());
        m_timeRangeEndHasBeenSet = true;
    }

    if (rsp.HasMember("RollbackTimeRanges") && !rsp["RollbackTimeRanges"].IsNull())
    {
        if (!rsp["RollbackTimeRanges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RollbackTimeRanges` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RollbackTimeRanges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RollbackTimeRange item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rollbackTimeRanges.push_back(item);
        }
        m_rollbackTimeRangesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRollbackTimeRangeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_timeRangeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeRangeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_timeRangeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeRangeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackTimeRangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackTimeRanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rollbackTimeRanges.begin(); itr != m_rollbackTimeRanges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeRollbackTimeRangeResponse::GetTimeRangeStart() const
{
    return m_timeRangeStart;
}

bool DescribeRollbackTimeRangeResponse::TimeRangeStartHasBeenSet() const
{
    return m_timeRangeStartHasBeenSet;
}

string DescribeRollbackTimeRangeResponse::GetTimeRangeEnd() const
{
    return m_timeRangeEnd;
}

bool DescribeRollbackTimeRangeResponse::TimeRangeEndHasBeenSet() const
{
    return m_timeRangeEndHasBeenSet;
}

vector<RollbackTimeRange> DescribeRollbackTimeRangeResponse::GetRollbackTimeRanges() const
{
    return m_rollbackTimeRanges;
}

bool DescribeRollbackTimeRangeResponse::RollbackTimeRangesHasBeenSet() const
{
    return m_rollbackTimeRangesHasBeenSet;
}


