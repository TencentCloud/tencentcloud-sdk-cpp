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

#include <tencentcloud/weilingwith/v20230427/model/DescribeVideoRecordStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeVideoRecordStreamRequest::DescribeVideoRecordStreamRequest() :
    m_wIDHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_playBackRateHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_streamHasBeenSet(false),
    m_envHasBeenSet(false)
{
}

string DescribeVideoRecordStreamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_playBackRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayBackRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_playBackRate, allocator);
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

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stream.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeVideoRecordStreamRequest::GetWID() const
{
    return m_wID;
}

void DescribeVideoRecordStreamRequest::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool DescribeVideoRecordStreamRequest::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

string DescribeVideoRecordStreamRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeVideoRecordStreamRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeVideoRecordStreamRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t DescribeVideoRecordStreamRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeVideoRecordStreamRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeVideoRecordStreamRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeVideoRecordStreamRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeVideoRecordStreamRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeVideoRecordStreamRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

double DescribeVideoRecordStreamRequest::GetPlayBackRate() const
{
    return m_playBackRate;
}

void DescribeVideoRecordStreamRequest::SetPlayBackRate(const double& _playBackRate)
{
    m_playBackRate = _playBackRate;
    m_playBackRateHasBeenSet = true;
}

bool DescribeVideoRecordStreamRequest::PlayBackRateHasBeenSet() const
{
    return m_playBackRateHasBeenSet;
}

int64_t DescribeVideoRecordStreamRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeVideoRecordStreamRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeVideoRecordStreamRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeVideoRecordStreamRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeVideoRecordStreamRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeVideoRecordStreamRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

string DescribeVideoRecordStreamRequest::GetStream() const
{
    return m_stream;
}

void DescribeVideoRecordStreamRequest::SetStream(const string& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool DescribeVideoRecordStreamRequest::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

string DescribeVideoRecordStreamRequest::GetEnv() const
{
    return m_env;
}

void DescribeVideoRecordStreamRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeVideoRecordStreamRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}


