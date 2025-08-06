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

#include <tencentcloud/csip/v20221121/model/DescribeCallRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCallRecordRequest::DescribeCallRecordRequest() :
    m_memberIdHasBeenSet(false),
    m_accessKeyIDHasBeenSet(false),
    m_sourceIPIDHasBeenSet(false),
    m_accUinHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string DescribeCallRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_accessKeyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessKeyID, allocator);
    }

    if (m_sourceIPIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIPID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceIPID, allocator);
    }

    if (m_accUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accUin.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeCallRecordRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeCallRecordRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeCallRecordRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t DescribeCallRecordRequest::GetAccessKeyID() const
{
    return m_accessKeyID;
}

void DescribeCallRecordRequest::SetAccessKeyID(const uint64_t& _accessKeyID)
{
    m_accessKeyID = _accessKeyID;
    m_accessKeyIDHasBeenSet = true;
}

bool DescribeCallRecordRequest::AccessKeyIDHasBeenSet() const
{
    return m_accessKeyIDHasBeenSet;
}

uint64_t DescribeCallRecordRequest::GetSourceIPID() const
{
    return m_sourceIPID;
}

void DescribeCallRecordRequest::SetSourceIPID(const uint64_t& _sourceIPID)
{
    m_sourceIPID = _sourceIPID;
    m_sourceIPIDHasBeenSet = true;
}

bool DescribeCallRecordRequest::SourceIPIDHasBeenSet() const
{
    return m_sourceIPIDHasBeenSet;
}

string DescribeCallRecordRequest::GetAccUin() const
{
    return m_accUin;
}

void DescribeCallRecordRequest::SetAccUin(const string& _accUin)
{
    m_accUin = _accUin;
    m_accUinHasBeenSet = true;
}

bool DescribeCallRecordRequest::AccUinHasBeenSet() const
{
    return m_accUinHasBeenSet;
}

Filter DescribeCallRecordRequest::GetFilter() const
{
    return m_filter;
}

void DescribeCallRecordRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeCallRecordRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


