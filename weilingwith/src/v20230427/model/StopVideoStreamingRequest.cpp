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

#include <tencentcloud/weilingwith/v20230427/model/StopVideoStreamingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

StopVideoStreamingRequest::StopVideoStreamingRequest() :
    m_streamHasBeenSet(false),
    m_wIDHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false)
{
}

string StopVideoStreamingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stream.c_str(), allocator).Move(), allocator);
    }

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StopVideoStreamingRequest::GetStream() const
{
    return m_stream;
}

void StopVideoStreamingRequest::SetStream(const string& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool StopVideoStreamingRequest::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

string StopVideoStreamingRequest::GetWID() const
{
    return m_wID;
}

void StopVideoStreamingRequest::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool StopVideoStreamingRequest::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

int64_t StopVideoStreamingRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void StopVideoStreamingRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool StopVideoStreamingRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string StopVideoStreamingRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void StopVideoStreamingRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool StopVideoStreamingRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}


