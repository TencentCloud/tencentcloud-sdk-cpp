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

#include <tencentcloud/bda/v20200324/model/GetSummaryInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

GetSummaryInfoResponse::GetSummaryInfoResponse() :
    m_groupCountHasBeenSet(false),
    m_personCountHasBeenSet(false),
    m_traceCountHasBeenSet(false)
{
}

CoreInternalOutcome GetSummaryInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GroupCount") && !rsp["GroupCount"].IsNull())
    {
        if (!rsp["GroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupCount = rsp["GroupCount"].GetUint64();
        m_groupCountHasBeenSet = true;
    }

    if (rsp.HasMember("PersonCount") && !rsp["PersonCount"].IsNull())
    {
        if (!rsp["PersonCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_personCount = rsp["PersonCount"].GetUint64();
        m_personCountHasBeenSet = true;
    }

    if (rsp.HasMember("TraceCount") && !rsp["TraceCount"].IsNull())
    {
        if (!rsp["TraceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_traceCount = rsp["TraceCount"].GetUint64();
        m_traceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetSummaryInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_groupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupCount, allocator);
    }

    if (m_personCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personCount, allocator);
    }

    if (m_traceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_traceCount, allocator);
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


uint64_t GetSummaryInfoResponse::GetGroupCount() const
{
    return m_groupCount;
}

bool GetSummaryInfoResponse::GroupCountHasBeenSet() const
{
    return m_groupCountHasBeenSet;
}

uint64_t GetSummaryInfoResponse::GetPersonCount() const
{
    return m_personCount;
}

bool GetSummaryInfoResponse::PersonCountHasBeenSet() const
{
    return m_personCountHasBeenSet;
}

uint64_t GetSummaryInfoResponse::GetTraceCount() const
{
    return m_traceCount;
}

bool GetSummaryInfoResponse::TraceCountHasBeenSet() const
{
    return m_traceCountHasBeenSet;
}


