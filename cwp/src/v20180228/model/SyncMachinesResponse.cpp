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

#include <tencentcloud/cwp/v20180228/model/SyncMachinesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

SyncMachinesResponse::SyncMachinesResponse() :
    m_stateHasBeenSet(false),
    m_latestStartTimeHasBeenSet(false),
    m_latestEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome SyncMachinesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(rsp["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (rsp.HasMember("LatestStartTime") && !rsp["LatestStartTime"].IsNull())
    {
        if (!rsp["LatestStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestStartTime = string(rsp["LatestStartTime"].GetString());
        m_latestStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LatestEndTime") && !rsp["LatestEndTime"].IsNull())
    {
        if (!rsp["LatestEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestEndTime = string(rsp["LatestEndTime"].GetString());
        m_latestEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SyncMachinesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_latestStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestEndTime.c_str(), allocator).Move(), allocator);
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


string SyncMachinesResponse::GetState() const
{
    return m_state;
}

bool SyncMachinesResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string SyncMachinesResponse::GetLatestStartTime() const
{
    return m_latestStartTime;
}

bool SyncMachinesResponse::LatestStartTimeHasBeenSet() const
{
    return m_latestStartTimeHasBeenSet;
}

string SyncMachinesResponse::GetLatestEndTime() const
{
    return m_latestEndTime;
}

bool SyncMachinesResponse::LatestEndTimeHasBeenSet() const
{
    return m_latestEndTimeHasBeenSet;
}


