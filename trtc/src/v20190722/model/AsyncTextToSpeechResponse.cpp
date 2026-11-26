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

#include <tencentcloud/trtc/v20190722/model/AsyncTextToSpeechResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AsyncTextToSpeechResponse::AsyncTextToSpeechResponse() :
    m_taskIdHasBeenSet(false),
    m_currentTaskCountHasBeenSet(false),
    m_maxTaskCountHasBeenSet(false)
{
}

CoreInternalOutcome AsyncTextToSpeechResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("CurrentTaskCount") && !rsp["CurrentTaskCount"].IsNull())
    {
        if (!rsp["CurrentTaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentTaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentTaskCount = rsp["CurrentTaskCount"].GetUint64();
        m_currentTaskCountHasBeenSet = true;
    }

    if (rsp.HasMember("MaxTaskCount") && !rsp["MaxTaskCount"].IsNull())
    {
        if (!rsp["MaxTaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxTaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTaskCount = rsp["MaxTaskCount"].GetUint64();
        m_maxTaskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AsyncTextToSpeechResponse::ToJsonString() const
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

    if (m_currentTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentTaskCount, allocator);
    }

    if (m_maxTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTaskCount, allocator);
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


string AsyncTextToSpeechResponse::GetTaskId() const
{
    return m_taskId;
}

bool AsyncTextToSpeechResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t AsyncTextToSpeechResponse::GetCurrentTaskCount() const
{
    return m_currentTaskCount;
}

bool AsyncTextToSpeechResponse::CurrentTaskCountHasBeenSet() const
{
    return m_currentTaskCountHasBeenSet;
}

uint64_t AsyncTextToSpeechResponse::GetMaxTaskCount() const
{
    return m_maxTaskCount;
}

bool AsyncTextToSpeechResponse::MaxTaskCountHasBeenSet() const
{
    return m_maxTaskCountHasBeenSet;
}


