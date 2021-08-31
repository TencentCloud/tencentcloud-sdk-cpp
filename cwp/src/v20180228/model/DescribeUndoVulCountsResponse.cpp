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

#include <tencentcloud/cwp/v20180228/model/DescribeUndoVulCountsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeUndoVulCountsResponse::DescribeUndoVulCountsResponse() :
    m_undoVulCountHasBeenSet(false),
    m_undoHostCountHasBeenSet(false),
    m_notProfessionCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUndoVulCountsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UndoVulCount") && !rsp["UndoVulCount"].IsNull())
    {
        if (!rsp["UndoVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UndoVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_undoVulCount = rsp["UndoVulCount"].GetUint64();
        m_undoVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("UndoHostCount") && !rsp["UndoHostCount"].IsNull())
    {
        if (!rsp["UndoHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UndoHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_undoHostCount = rsp["UndoHostCount"].GetInt64();
        m_undoHostCountHasBeenSet = true;
    }

    if (rsp.HasMember("NotProfessionCount") && !rsp["NotProfessionCount"].IsNull())
    {
        if (!rsp["NotProfessionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotProfessionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notProfessionCount = rsp["NotProfessionCount"].GetUint64();
        m_notProfessionCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUndoVulCountsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_undoVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UndoVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_undoVulCount, allocator);
    }

    if (m_undoHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UndoHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_undoHostCount, allocator);
    }

    if (m_notProfessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotProfessionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notProfessionCount, allocator);
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


uint64_t DescribeUndoVulCountsResponse::GetUndoVulCount() const
{
    return m_undoVulCount;
}

bool DescribeUndoVulCountsResponse::UndoVulCountHasBeenSet() const
{
    return m_undoVulCountHasBeenSet;
}

int64_t DescribeUndoVulCountsResponse::GetUndoHostCount() const
{
    return m_undoHostCount;
}

bool DescribeUndoVulCountsResponse::UndoHostCountHasBeenSet() const
{
    return m_undoHostCountHasBeenSet;
}

uint64_t DescribeUndoVulCountsResponse::GetNotProfessionCount() const
{
    return m_notProfessionCount;
}

bool DescribeUndoVulCountsResponse::NotProfessionCountHasBeenSet() const
{
    return m_notProfessionCountHasBeenSet;
}


