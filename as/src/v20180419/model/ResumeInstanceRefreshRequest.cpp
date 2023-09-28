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

#include <tencentcloud/as/v20180419/model/ResumeInstanceRefreshRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ResumeInstanceRefreshRequest::ResumeInstanceRefreshRequest() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_refreshActivityIdHasBeenSet(false),
    m_resumeModeHasBeenSet(false)
{
}

string ResumeInstanceRefreshRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshActivityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshActivityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refreshActivityId.c_str(), allocator).Move(), allocator);
    }

    if (m_resumeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResumeMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resumeMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResumeInstanceRefreshRequest::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void ResumeInstanceRefreshRequest::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool ResumeInstanceRefreshRequest::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string ResumeInstanceRefreshRequest::GetRefreshActivityId() const
{
    return m_refreshActivityId;
}

void ResumeInstanceRefreshRequest::SetRefreshActivityId(const string& _refreshActivityId)
{
    m_refreshActivityId = _refreshActivityId;
    m_refreshActivityIdHasBeenSet = true;
}

bool ResumeInstanceRefreshRequest::RefreshActivityIdHasBeenSet() const
{
    return m_refreshActivityIdHasBeenSet;
}

string ResumeInstanceRefreshRequest::GetResumeMode() const
{
    return m_resumeMode;
}

void ResumeInstanceRefreshRequest::SetResumeMode(const string& _resumeMode)
{
    m_resumeMode = _resumeMode;
    m_resumeModeHasBeenSet = true;
}

bool ResumeInstanceRefreshRequest::ResumeModeHasBeenSet() const
{
    return m_resumeModeHasBeenSet;
}


