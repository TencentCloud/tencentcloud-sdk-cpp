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

#include <tencentcloud/live/v20180801/model/DescribeCasterDisplayInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeCasterDisplayInfoResponse::DescribeCasterDisplayInfoResponse() :
    m_statusHasBeenSet(false),
    m_pvwDisplayInfoHasBeenSet(false),
    m_pgmDisplayInfoHasBeenSet(false),
    m_startLiveTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCasterDisplayInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("PvwDisplayInfo") && !rsp["PvwDisplayInfo"].IsNull())
    {
        if (!rsp["PvwDisplayInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PvwDisplayInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pvwDisplayInfo.Deserialize(rsp["PvwDisplayInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pvwDisplayInfoHasBeenSet = true;
    }

    if (rsp.HasMember("PgmDisplayInfo") && !rsp["PgmDisplayInfo"].IsNull())
    {
        if (!rsp["PgmDisplayInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PgmDisplayInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pgmDisplayInfo.Deserialize(rsp["PgmDisplayInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pgmDisplayInfoHasBeenSet = true;
    }

    if (rsp.HasMember("StartLiveTime") && !rsp["StartLiveTime"].IsNull())
    {
        if (!rsp["StartLiveTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StartLiveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startLiveTime = rsp["StartLiveTime"].GetUint64();
        m_startLiveTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCasterDisplayInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_pvwDisplayInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PvwDisplayInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pvwDisplayInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pgmDisplayInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmDisplayInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pgmDisplayInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startLiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartLiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startLiveTime, allocator);
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


uint64_t DescribeCasterDisplayInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCasterDisplayInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

CasterDisplayInfo DescribeCasterDisplayInfoResponse::GetPvwDisplayInfo() const
{
    return m_pvwDisplayInfo;
}

bool DescribeCasterDisplayInfoResponse::PvwDisplayInfoHasBeenSet() const
{
    return m_pvwDisplayInfoHasBeenSet;
}

CasterDisplayInfo DescribeCasterDisplayInfoResponse::GetPgmDisplayInfo() const
{
    return m_pgmDisplayInfo;
}

bool DescribeCasterDisplayInfoResponse::PgmDisplayInfoHasBeenSet() const
{
    return m_pgmDisplayInfoHasBeenSet;
}

uint64_t DescribeCasterDisplayInfoResponse::GetStartLiveTime() const
{
    return m_startLiveTime;
}

bool DescribeCasterDisplayInfoResponse::StartLiveTimeHasBeenSet() const
{
    return m_startLiveTimeHasBeenSet;
}


