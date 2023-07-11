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

#include <tencentcloud/cms/v20190321/model/DescribeLibSamplesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

DescribeLibSamplesRequest::DescribeLibSamplesRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_libIDHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_evilTypeListHasBeenSet(false),
    m_sampleIDsHasBeenSet(false)
{
}

string DescribeLibSamplesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_libIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_libID.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_evilTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_evilTypeList.begin(); itr != m_evilTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_sampleIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sampleIDs.begin(); itr != m_sampleIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeLibSamplesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLibSamplesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLibSamplesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeLibSamplesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLibSamplesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLibSamplesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeLibSamplesRequest::GetLibID() const
{
    return m_libID;
}

void DescribeLibSamplesRequest::SetLibID(const string& _libID)
{
    m_libID = _libID;
    m_libIDHasBeenSet = true;
}

bool DescribeLibSamplesRequest::LibIDHasBeenSet() const
{
    return m_libIDHasBeenSet;
}

string DescribeLibSamplesRequest::GetContent() const
{
    return m_content;
}

void DescribeLibSamplesRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DescribeLibSamplesRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<int64_t> DescribeLibSamplesRequest::GetEvilTypeList() const
{
    return m_evilTypeList;
}

void DescribeLibSamplesRequest::SetEvilTypeList(const vector<int64_t>& _evilTypeList)
{
    m_evilTypeList = _evilTypeList;
    m_evilTypeListHasBeenSet = true;
}

bool DescribeLibSamplesRequest::EvilTypeListHasBeenSet() const
{
    return m_evilTypeListHasBeenSet;
}

vector<string> DescribeLibSamplesRequest::GetSampleIDs() const
{
    return m_sampleIDs;
}

void DescribeLibSamplesRequest::SetSampleIDs(const vector<string>& _sampleIDs)
{
    m_sampleIDs = _sampleIDs;
    m_sampleIDsHasBeenSet = true;
}

bool DescribeLibSamplesRequest::SampleIDsHasBeenSet() const
{
    return m_sampleIDsHasBeenSet;
}


