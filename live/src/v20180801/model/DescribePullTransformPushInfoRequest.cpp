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

#include <tencentcloud/live/v20180801/model/DescribePullTransformPushInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribePullTransformPushInfoRequest::DescribePullTransformPushInfoRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_mainlandOrOverseaHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

string DescribePullTransformPushInfoRequest::ToJsonString() const
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

    if (m_mainlandOrOverseaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainlandOrOversea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainlandOrOversea.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePullTransformPushInfoRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribePullTransformPushInfoRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribePullTransformPushInfoRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribePullTransformPushInfoRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribePullTransformPushInfoRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribePullTransformPushInfoRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribePullTransformPushInfoRequest::GetMainlandOrOversea() const
{
    return m_mainlandOrOversea;
}

void DescribePullTransformPushInfoRequest::SetMainlandOrOversea(const string& _mainlandOrOversea)
{
    m_mainlandOrOversea = _mainlandOrOversea;
    m_mainlandOrOverseaHasBeenSet = true;
}

bool DescribePullTransformPushInfoRequest::MainlandOrOverseaHasBeenSet() const
{
    return m_mainlandOrOverseaHasBeenSet;
}

string DescribePullTransformPushInfoRequest::GetSourceType() const
{
    return m_sourceType;
}

void DescribePullTransformPushInfoRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DescribePullTransformPushInfoRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}


