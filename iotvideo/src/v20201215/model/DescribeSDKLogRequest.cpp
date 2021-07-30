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

#include <tencentcloud/iotvideo/v20201215/model/DescribeSDKLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DescribeSDKLogRequest::DescribeSDKLogRequest() :
    m_minTimeHasBeenSet(false),
    m_maxTimeHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_maxNumHasBeenSet(false)
{
}

string DescribeSDKLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_minTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minTime, allocator);
    }

    if (m_maxTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxTime, allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keywords.c_str(), allocator).Move(), allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeSDKLogRequest::GetMinTime() const
{
    return m_minTime;
}

void DescribeSDKLogRequest::SetMinTime(const uint64_t& _minTime)
{
    m_minTime = _minTime;
    m_minTimeHasBeenSet = true;
}

bool DescribeSDKLogRequest::MinTimeHasBeenSet() const
{
    return m_minTimeHasBeenSet;
}

uint64_t DescribeSDKLogRequest::GetMaxTime() const
{
    return m_maxTime;
}

void DescribeSDKLogRequest::SetMaxTime(const uint64_t& _maxTime)
{
    m_maxTime = _maxTime;
    m_maxTimeHasBeenSet = true;
}

bool DescribeSDKLogRequest::MaxTimeHasBeenSet() const
{
    return m_maxTimeHasBeenSet;
}

string DescribeSDKLogRequest::GetKeywords() const
{
    return m_keywords;
}

void DescribeSDKLogRequest::SetKeywords(const string& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool DescribeSDKLogRequest::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string DescribeSDKLogRequest::GetContext() const
{
    return m_context;
}

void DescribeSDKLogRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeSDKLogRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

uint64_t DescribeSDKLogRequest::GetMaxNum() const
{
    return m_maxNum;
}

void DescribeSDKLogRequest::SetMaxNum(const uint64_t& _maxNum)
{
    m_maxNum = _maxNum;
    m_maxNumHasBeenSet = true;
}

bool DescribeSDKLogRequest::MaxNumHasBeenSet() const
{
    return m_maxNumHasBeenSet;
}


