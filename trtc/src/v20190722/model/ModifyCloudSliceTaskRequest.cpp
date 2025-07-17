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

#include <tencentcloud/trtc/v20190722/model/ModifyCloudSliceTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ModifyCloudSliceTaskRequest::ModifyCloudSliceTaskRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_subscribeStreamUserIdsHasBeenSet(false)
{
}

string ModifyCloudSliceTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeStreamUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeStreamUserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subscribeStreamUserIds.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyCloudSliceTaskRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyCloudSliceTaskRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyCloudSliceTaskRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string ModifyCloudSliceTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyCloudSliceTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyCloudSliceTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

SubscribeStreamUserIds ModifyCloudSliceTaskRequest::GetSubscribeStreamUserIds() const
{
    return m_subscribeStreamUserIds;
}

void ModifyCloudSliceTaskRequest::SetSubscribeStreamUserIds(const SubscribeStreamUserIds& _subscribeStreamUserIds)
{
    m_subscribeStreamUserIds = _subscribeStreamUserIds;
    m_subscribeStreamUserIdsHasBeenSet = true;
}

bool ModifyCloudSliceTaskRequest::SubscribeStreamUserIdsHasBeenSet() const
{
    return m_subscribeStreamUserIdsHasBeenSet;
}


