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

#include <tencentcloud/clb/v20180317/model/DescribeModelRouterLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeModelRouterLogsRequest::DescribeModelRouterLogsRequest() :
    m_modelRouterIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResultsHasBeenSet(false)
{
}

string DescribeModelRouterLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeModelRouterLogsRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void DescribeModelRouterLogsRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool DescribeModelRouterLogsRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string DescribeModelRouterLogsRequest::GetKeyId() const
{
    return m_keyId;
}

void DescribeModelRouterLogsRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool DescribeModelRouterLogsRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string DescribeModelRouterLogsRequest::GetModel() const
{
    return m_model;
}

void DescribeModelRouterLogsRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool DescribeModelRouterLogsRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string DescribeModelRouterLogsRequest::GetStatus() const
{
    return m_status;
}

void DescribeModelRouterLogsRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeModelRouterLogsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeModelRouterLogsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeModelRouterLogsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeModelRouterLogsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeModelRouterLogsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeModelRouterLogsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeModelRouterLogsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeModelRouterLogsRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeModelRouterLogsRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeModelRouterLogsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

uint64_t DescribeModelRouterLogsRequest::GetMaxResults() const
{
    return m_maxResults;
}

void DescribeModelRouterLogsRequest::SetMaxResults(const uint64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool DescribeModelRouterLogsRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}


