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

#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeInstanceLogDetailRequest::DescribeInstanceLogDetailRequest() :
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_logLevelTypeHasBeenSet(false),
    m_executionFileTypeHasBeenSet(false),
    m_executionJobIdHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_originFileNameHasBeenSet(false),
    m_startCountHasBeenSet(false),
    m_lineCountHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_requestFromSourceHasBeenSet(false),
    m_instanceLifeDetailDtoListHasBeenSet(false),
    m_currentLifeRoundHasBeenSet(false),
    m_maxLifeRoundHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_dynamicHasBeenSet(false)
{
}

string DescribeInstanceLogDetailRequest::ToJsonString() const
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

    if (m_executionJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionJobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionJobId.c_str(), allocator).Move(), allocator);
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

    if (m_startCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startCount, allocator);
    }

    if (m_lineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lineCount, allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_requestFromSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFromSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestFromSource.c_str(), allocator).Move(), allocator);
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


string DescribeInstanceLogDetailRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeInstanceLogDetailRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeInstanceLogDetailRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeInstanceLogDetailRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeInstanceLogDetailRequest::GetCurRunDate() const
{
    return m_curRunDate;
}

void DescribeInstanceLogDetailRequest::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string DescribeInstanceLogDetailRequest::GetLogLevelType() const
{
    return m_logLevelType;
}

void DescribeInstanceLogDetailRequest::SetLogLevelType(const string& _logLevelType)
{
    m_logLevelType = _logLevelType;
    m_logLevelTypeHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::LogLevelTypeHasBeenSet() const
{
    return m_logLevelTypeHasBeenSet;
}

string DescribeInstanceLogDetailRequest::GetExecutionFileType() const
{
    return m_executionFileType;
}

void DescribeInstanceLogDetailRequest::SetExecutionFileType(const string& _executionFileType)
{
    m_executionFileType = _executionFileType;
    m_executionFileTypeHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::ExecutionFileTypeHasBeenSet() const
{
    return m_executionFileTypeHasBeenSet;
}

string DescribeInstanceLogDetailRequest::GetExecutionJobId() const
{
    return m_executionJobId;
}

void DescribeInstanceLogDetailRequest::SetExecutionJobId(const string& _executionJobId)
{
    m_executionJobId = _executionJobId;
    m_executionJobIdHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::ExecutionJobIdHasBeenSet() const
{
    return m_executionJobIdHasBeenSet;
}

string DescribeInstanceLogDetailRequest::GetBrokerIp() const
{
    return m_brokerIp;
}

void DescribeInstanceLogDetailRequest::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string DescribeInstanceLogDetailRequest::GetOriginFileName() const
{
    return m_originFileName;
}

void DescribeInstanceLogDetailRequest::SetOriginFileName(const string& _originFileName)
{
    m_originFileName = _originFileName;
    m_originFileNameHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::OriginFileNameHasBeenSet() const
{
    return m_originFileNameHasBeenSet;
}

int64_t DescribeInstanceLogDetailRequest::GetStartCount() const
{
    return m_startCount;
}

void DescribeInstanceLogDetailRequest::SetStartCount(const int64_t& _startCount)
{
    m_startCount = _startCount;
    m_startCountHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::StartCountHasBeenSet() const
{
    return m_startCountHasBeenSet;
}

int64_t DescribeInstanceLogDetailRequest::GetLineCount() const
{
    return m_lineCount;
}

void DescribeInstanceLogDetailRequest::SetLineCount(const int64_t& _lineCount)
{
    m_lineCount = _lineCount;
    m_lineCountHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::LineCountHasBeenSet() const
{
    return m_lineCountHasBeenSet;
}

string DescribeInstanceLogDetailRequest::GetExtInfo() const
{
    return m_extInfo;
}

void DescribeInstanceLogDetailRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

string DescribeInstanceLogDetailRequest::GetRequestFromSource() const
{
    return m_requestFromSource;
}

void DescribeInstanceLogDetailRequest::SetRequestFromSource(const string& _requestFromSource)
{
    m_requestFromSource = _requestFromSource;
    m_requestFromSourceHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::RequestFromSourceHasBeenSet() const
{
    return m_requestFromSourceHasBeenSet;
}

vector<InstanceLifeDetailDto> DescribeInstanceLogDetailRequest::GetInstanceLifeDetailDtoList() const
{
    return m_instanceLifeDetailDtoList;
}

void DescribeInstanceLogDetailRequest::SetInstanceLifeDetailDtoList(const vector<InstanceLifeDetailDto>& _instanceLifeDetailDtoList)
{
    m_instanceLifeDetailDtoList = _instanceLifeDetailDtoList;
    m_instanceLifeDetailDtoListHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::InstanceLifeDetailDtoListHasBeenSet() const
{
    return m_instanceLifeDetailDtoListHasBeenSet;
}

int64_t DescribeInstanceLogDetailRequest::GetCurrentLifeRound() const
{
    return m_currentLifeRound;
}

void DescribeInstanceLogDetailRequest::SetCurrentLifeRound(const int64_t& _currentLifeRound)
{
    m_currentLifeRound = _currentLifeRound;
    m_currentLifeRoundHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::CurrentLifeRoundHasBeenSet() const
{
    return m_currentLifeRoundHasBeenSet;
}

int64_t DescribeInstanceLogDetailRequest::GetMaxLifeRound() const
{
    return m_maxLifeRound;
}

void DescribeInstanceLogDetailRequest::SetMaxLifeRound(const int64_t& _maxLifeRound)
{
    m_maxLifeRound = _maxLifeRound;
    m_maxLifeRoundHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::MaxLifeRoundHasBeenSet() const
{
    return m_maxLifeRoundHasBeenSet;
}

int64_t DescribeInstanceLogDetailRequest::GetTries() const
{
    return m_tries;
}

void DescribeInstanceLogDetailRequest::SetTries(const int64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

bool DescribeInstanceLogDetailRequest::GetDynamic() const
{
    return m_dynamic;
}

void DescribeInstanceLogDetailRequest::SetDynamic(const bool& _dynamic)
{
    m_dynamic = _dynamic;
    m_dynamicHasBeenSet = true;
}

bool DescribeInstanceLogDetailRequest::DynamicHasBeenSet() const
{
    return m_dynamicHasBeenSet;
}


