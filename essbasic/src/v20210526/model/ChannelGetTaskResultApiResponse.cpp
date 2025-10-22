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

#include <tencentcloud/essbasic/v20210526/model/ChannelGetTaskResultApiResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelGetTaskResultApiResponse::ChannelGetTaskResultApiResponse() :
    m_taskIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskMessageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_previewUrlHasBeenSet(false)
{
}

CoreInternalOutcome ChannelGetTaskResultApiResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("TaskStatus") && !rsp["TaskStatus"].IsNull())
    {
        if (!rsp["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = rsp["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (rsp.HasMember("TaskMessage") && !rsp["TaskMessage"].IsNull())
    {
        if (!rsp["TaskMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskMessage = string(rsp["TaskMessage"].GetString());
        m_taskMessageHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("PreviewUrl") && !rsp["PreviewUrl"].IsNull())
    {
        if (!rsp["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(rsp["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ChannelGetTaskResultApiResponse::ToJsonString() const
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

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_taskMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_previewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewUrl.c_str(), allocator).Move(), allocator);
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


string ChannelGetTaskResultApiResponse::GetTaskId() const
{
    return m_taskId;
}

bool ChannelGetTaskResultApiResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t ChannelGetTaskResultApiResponse::GetTaskStatus() const
{
    return m_taskStatus;
}

bool ChannelGetTaskResultApiResponse::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string ChannelGetTaskResultApiResponse::GetTaskMessage() const
{
    return m_taskMessage;
}

bool ChannelGetTaskResultApiResponse::TaskMessageHasBeenSet() const
{
    return m_taskMessageHasBeenSet;
}

string ChannelGetTaskResultApiResponse::GetResourceId() const
{
    return m_resourceId;
}

bool ChannelGetTaskResultApiResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ChannelGetTaskResultApiResponse::GetPreviewUrl() const
{
    return m_previewUrl;
}

bool ChannelGetTaskResultApiResponse::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}


