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

#include <tencentcloud/live/v20180801/model/DescribeAuditKeywordsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeAuditKeywordsRequest::DescribeAuditKeywordsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_libIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

string DescribeAuditKeywordsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_libIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_libId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAuditKeywordsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAuditKeywordsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAuditKeywordsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAuditKeywordsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAuditKeywordsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAuditKeywordsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAuditKeywordsRequest::GetLibId() const
{
    return m_libId;
}

void DescribeAuditKeywordsRequest::SetLibId(const string& _libId)
{
    m_libId = _libId;
    m_libIdHasBeenSet = true;
}

bool DescribeAuditKeywordsRequest::LibIdHasBeenSet() const
{
    return m_libIdHasBeenSet;
}

string DescribeAuditKeywordsRequest::GetContent() const
{
    return m_content;
}

void DescribeAuditKeywordsRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DescribeAuditKeywordsRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<int64_t> DescribeAuditKeywordsRequest::GetLabels() const
{
    return m_labels;
}

void DescribeAuditKeywordsRequest::SetLabels(const vector<int64_t>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DescribeAuditKeywordsRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}


