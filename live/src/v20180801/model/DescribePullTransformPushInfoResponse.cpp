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

#include <tencentcloud/live/v20180801/model/DescribePullTransformPushInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribePullTransformPushInfoResponse::DescribePullTransformPushInfoResponse() :
    m_dataInfoListHasBeenSet(false),
    m_totalDurationHasBeenSet(false),
    m_totalDurationSecondHasBeenSet(false)
{
}

CoreInternalOutcome DescribePullTransformPushInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DataInfoList") && !rsp["DataInfoList"].IsNull())
    {
        if (!rsp["DataInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DataInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskDurationInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataInfoList.push_back(item);
        }
        m_dataInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("TotalDuration") && !rsp["TotalDuration"].IsNull())
    {
        if (!rsp["TotalDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDuration = rsp["TotalDuration"].GetUint64();
        m_totalDurationHasBeenSet = true;
    }

    if (rsp.HasMember("TotalDurationSecond") && !rsp["TotalDurationSecond"].IsNull())
    {
        if (!rsp["TotalDurationSecond"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalDurationSecond` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDurationSecond = rsp["TotalDurationSecond"].GetUint64();
        m_totalDurationSecondHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePullTransformPushInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataInfoList.begin(); itr != m_dataInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDuration, allocator);
    }

    if (m_totalDurationSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDurationSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDurationSecond, allocator);
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


vector<TaskDurationInfo> DescribePullTransformPushInfoResponse::GetDataInfoList() const
{
    return m_dataInfoList;
}

bool DescribePullTransformPushInfoResponse::DataInfoListHasBeenSet() const
{
    return m_dataInfoListHasBeenSet;
}

uint64_t DescribePullTransformPushInfoResponse::GetTotalDuration() const
{
    return m_totalDuration;
}

bool DescribePullTransformPushInfoResponse::TotalDurationHasBeenSet() const
{
    return m_totalDurationHasBeenSet;
}

uint64_t DescribePullTransformPushInfoResponse::GetTotalDurationSecond() const
{
    return m_totalDurationSecond;
}

bool DescribePullTransformPushInfoResponse::TotalDurationSecondHasBeenSet() const
{
    return m_totalDurationSecondHasBeenSet;
}


