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

#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeInstanceLogFileRequest::DescribeInstanceLogFileRequest() :
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_requestFromSourceHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_originFileNameHasBeenSet(false),
    m_executionJobIdHasBeenSet(false),
    m_logLevelTypeHasBeenSet(false),
    m_executionFileTypeHasBeenSet(false),
    m_instanceLifeDetailDtoListHasBeenSet(false),
    m_currentLifeRoundHasBeenSet(false),
    m_maxLifeRoundHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_dynamicHasBeenSet(false)
{
}

string DescribeInstanceLogFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_requestFromSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFromSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestFromSource.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_originFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_executionJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionJobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_logLevelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logLevelType.c_str(), allocator).Move(), allocator);
    }

    if (m_executionFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionFileType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceLifeDetailDtoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLifeDetailDtoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceLifeDetailDtoList.begin(); itr != m_instanceLifeDetailDtoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_currentLifeRoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentLifeRound";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_currentLifeRound, allocator);
    }

    if (m_maxLifeRoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLifeRound";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxLifeRound, allocator);
    }

    if (m_triesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tries, allocator);
    }

    if (m_dynamicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dynamic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dynamic, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceLogFileRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeInstanceLogFileRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeInstanceLogFileRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeInstanceLogFileRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeInstanceLogFileRequest::GetCurRunDate() const
{
    return m_curRunDate;
}

void DescribeInstanceLogFileRequest::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string DescribeInstanceLogFileRequest::GetRequestFromSource() const
{
    return m_requestFromSource;
}

void DescribeInstanceLogFileRequest::SetRequestFromSource(const string& _requestFromSource)
{
    m_requestFromSource = _requestFromSource;
    m_requestFromSourceHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::RequestFromSourceHasBeenSet() const
{
    return m_requestFromSourceHasBeenSet;
}

string DescribeInstanceLogFileRequest::GetBrokerIp() const
{
    return m_brokerIp;
}

void DescribeInstanceLogFileRequest::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string DescribeInstanceLogFileRequest::GetOriginFileName() const
{
    return m_originFileName;
}

void DescribeInstanceLogFileRequest::SetOriginFileName(const string& _originFileName)
{
    m_originFileName = _originFileName;
    m_originFileNameHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::OriginFileNameHasBeenSet() const
{
    return m_originFileNameHasBeenSet;
}

string DescribeInstanceLogFileRequest::GetExecutionJobId() const
{
    return m_executionJobId;
}

void DescribeInstanceLogFileRequest::SetExecutionJobId(const string& _executionJobId)
{
    m_executionJobId = _executionJobId;
    m_executionJobIdHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::ExecutionJobIdHasBeenSet() const
{
    return m_executionJobIdHasBeenSet;
}

string DescribeInstanceLogFileRequest::GetLogLevelType() const
{
    return m_logLevelType;
}

void DescribeInstanceLogFileRequest::SetLogLevelType(const string& _logLevelType)
{
    m_logLevelType = _logLevelType;
    m_logLevelTypeHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::LogLevelTypeHasBeenSet() const
{
    return m_logLevelTypeHasBeenSet;
}

string DescribeInstanceLogFileRequest::GetExecutionFileType() const
{
    return m_executionFileType;
}

void DescribeInstanceLogFileRequest::SetExecutionFileType(const string& _executionFileType)
{
    m_executionFileType = _executionFileType;
    m_executionFileTypeHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::ExecutionFileTypeHasBeenSet() const
{
    return m_executionFileTypeHasBeenSet;
}

vector<InstanceLifeDetailDto> DescribeInstanceLogFileRequest::GetInstanceLifeDetailDtoList() const
{
    return m_instanceLifeDetailDtoList;
}

void DescribeInstanceLogFileRequest::SetInstanceLifeDetailDtoList(const vector<InstanceLifeDetailDto>& _instanceLifeDetailDtoList)
{
    m_instanceLifeDetailDtoList = _instanceLifeDetailDtoList;
    m_instanceLifeDetailDtoListHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::InstanceLifeDetailDtoListHasBeenSet() const
{
    return m_instanceLifeDetailDtoListHasBeenSet;
}

int64_t DescribeInstanceLogFileRequest::GetCurrentLifeRound() const
{
    return m_currentLifeRound;
}

void DescribeInstanceLogFileRequest::SetCurrentLifeRound(const int64_t& _currentLifeRound)
{
    m_currentLifeRound = _currentLifeRound;
    m_currentLifeRoundHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::CurrentLifeRoundHasBeenSet() const
{
    return m_currentLifeRoundHasBeenSet;
}

int64_t DescribeInstanceLogFileRequest::GetMaxLifeRound() const
{
    return m_maxLifeRound;
}

void DescribeInstanceLogFileRequest::SetMaxLifeRound(const int64_t& _maxLifeRound)
{
    m_maxLifeRound = _maxLifeRound;
    m_maxLifeRoundHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::MaxLifeRoundHasBeenSet() const
{
    return m_maxLifeRoundHasBeenSet;
}

int64_t DescribeInstanceLogFileRequest::GetTries() const
{
    return m_tries;
}

void DescribeInstanceLogFileRequest::SetTries(const int64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

bool DescribeInstanceLogFileRequest::GetDynamic() const
{
    return m_dynamic;
}

void DescribeInstanceLogFileRequest::SetDynamic(const bool& _dynamic)
{
    m_dynamic = _dynamic;
    m_dynamicHasBeenSet = true;
}

bool DescribeInstanceLogFileRequest::DynamicHasBeenSet() const
{
    return m_dynamicHasBeenSet;
}


