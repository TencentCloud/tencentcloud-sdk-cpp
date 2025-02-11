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

#include <tencentcloud/wedata/v20210820/model/DescribeInstanceDetailInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeInstanceDetailInfoRequest::DescribeInstanceDetailInfoRequest() :
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_lifeRoundHasBeenSet(false),
    m_lifeRoundStartIndexHasBeenSet(false),
    m_lifeRoundSizeHasBeenSet(false),
    m_totalLifeRoundHasBeenSet(false),
    m_dynamicHasBeenSet(false)
{
}

string DescribeInstanceDetailInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeRoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeRound";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lifeRound, allocator);
    }

    if (m_lifeRoundStartIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeRoundStartIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lifeRoundStartIndex, allocator);
    }

    if (m_lifeRoundSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeRoundSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lifeRoundSize, allocator);
    }

    if (m_totalLifeRoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalLifeRound";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_totalLifeRound.c_str(), allocator).Move(), allocator);
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


string DescribeInstanceDetailInfoRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeInstanceDetailInfoRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeInstanceDetailInfoRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeInstanceDetailInfoRequest::GetCurRunDate() const
{
    return m_curRunDate;
}

void DescribeInstanceDetailInfoRequest::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool DescribeInstanceDetailInfoRequest::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string DescribeInstanceDetailInfoRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeInstanceDetailInfoRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeInstanceDetailInfoRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeInstanceDetailInfoRequest::GetLifeRound() const
{
    return m_lifeRound;
}

void DescribeInstanceDetailInfoRequest::SetLifeRound(const int64_t& _lifeRound)
{
    m_lifeRound = _lifeRound;
    m_lifeRoundHasBeenSet = true;
}

bool DescribeInstanceDetailInfoRequest::LifeRoundHasBeenSet() const
{
    return m_lifeRoundHasBeenSet;
}

int64_t DescribeInstanceDetailInfoRequest::GetLifeRoundStartIndex() const
{
    return m_lifeRoundStartIndex;
}

void DescribeInstanceDetailInfoRequest::SetLifeRoundStartIndex(const int64_t& _lifeRoundStartIndex)
{
    m_lifeRoundStartIndex = _lifeRoundStartIndex;
    m_lifeRoundStartIndexHasBeenSet = true;
}

bool DescribeInstanceDetailInfoRequest::LifeRoundStartIndexHasBeenSet() const
{
    return m_lifeRoundStartIndexHasBeenSet;
}

int64_t DescribeInstanceDetailInfoRequest::GetLifeRoundSize() const
{
    return m_lifeRoundSize;
}

void DescribeInstanceDetailInfoRequest::SetLifeRoundSize(const int64_t& _lifeRoundSize)
{
    m_lifeRoundSize = _lifeRoundSize;
    m_lifeRoundSizeHasBeenSet = true;
}

bool DescribeInstanceDetailInfoRequest::LifeRoundSizeHasBeenSet() const
{
    return m_lifeRoundSizeHasBeenSet;
}

string DescribeInstanceDetailInfoRequest::GetTotalLifeRound() const
{
    return m_totalLifeRound;
}

void DescribeInstanceDetailInfoRequest::SetTotalLifeRound(const string& _totalLifeRound)
{
    m_totalLifeRound = _totalLifeRound;
    m_totalLifeRoundHasBeenSet = true;
}

bool DescribeInstanceDetailInfoRequest::TotalLifeRoundHasBeenSet() const
{
    return m_totalLifeRoundHasBeenSet;
}

bool DescribeInstanceDetailInfoRequest::GetDynamic() const
{
    return m_dynamic;
}

void DescribeInstanceDetailInfoRequest::SetDynamic(const bool& _dynamic)
{
    m_dynamic = _dynamic;
    m_dynamicHasBeenSet = true;
}

bool DescribeInstanceDetailInfoRequest::DynamicHasBeenSet() const
{
    return m_dynamicHasBeenSet;
}


