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

#include <tencentcloud/asw/v20200722/model/StartExecutionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

StartExecutionResponse::StartExecutionResponse() :
    m_executionResourceNameHasBeenSet(false),
    m_startDateHasBeenSet(false)
{
}

CoreInternalOutcome StartExecutionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ExecutionResourceName") && !rsp["ExecutionResourceName"].IsNull())
    {
        if (!rsp["ExecutionResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionResourceName = string(rsp["ExecutionResourceName"].GetString());
        m_executionResourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("StartDate") && !rsp["StartDate"].IsNull())
    {
        if (!rsp["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(rsp["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string StartExecutionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_executionResourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionResourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
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


string StartExecutionResponse::GetExecutionResourceName() const
{
    return m_executionResourceName;
}

bool StartExecutionResponse::ExecutionResourceNameHasBeenSet() const
{
    return m_executionResourceNameHasBeenSet;
}

string StartExecutionResponse::GetStartDate() const
{
    return m_startDate;
}

bool StartExecutionResponse::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}


