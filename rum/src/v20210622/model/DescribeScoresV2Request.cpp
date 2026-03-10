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

#include <tencentcloud/rum/v20210622/model/DescribeScoresV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeScoresV2Request::DescribeScoresV2Request() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_iDListHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_envHasBeenSet(false)
{
}

string DescribeScoresV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_iDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iDList.begin(); itr != m_iDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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


string DescribeScoresV2Request::GetStartTime() const
{
    return m_startTime;
}

void DescribeScoresV2Request::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeScoresV2Request::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeScoresV2Request::GetEndTime() const
{
    return m_endTime;
}

void DescribeScoresV2Request::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeScoresV2Request::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<int64_t> DescribeScoresV2Request::GetIDList() const
{
    return m_iDList;
}

void DescribeScoresV2Request::SetIDList(const vector<int64_t>& _iDList)
{
    m_iDList = _iDList;
    m_iDListHasBeenSet = true;
}

bool DescribeScoresV2Request::IDListHasBeenSet() const
{
    return m_iDListHasBeenSet;
}

string DescribeScoresV2Request::GetType() const
{
    return m_type;
}

void DescribeScoresV2Request::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeScoresV2Request::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeScoresV2Request::GetEnv() const
{
    return m_env;
}

void DescribeScoresV2Request::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeScoresV2Request::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}


