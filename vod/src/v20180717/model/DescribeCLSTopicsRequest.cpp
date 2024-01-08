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

#include <tencentcloud/vod/v20180717/model/DescribeCLSTopicsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DescribeCLSTopicsRequest::DescribeCLSTopicsRequest() :
    m_cLSRegionHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeCLSTopicsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cLSRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cLSRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topicIds.begin(); itr != m_topicIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCLSTopicsRequest::GetCLSRegion() const
{
    return m_cLSRegion;
}

void DescribeCLSTopicsRequest::SetCLSRegion(const string& _cLSRegion)
{
    m_cLSRegion = _cLSRegion;
    m_cLSRegionHasBeenSet = true;
}

bool DescribeCLSTopicsRequest::CLSRegionHasBeenSet() const
{
    return m_cLSRegionHasBeenSet;
}

string DescribeCLSTopicsRequest::GetLogsetId() const
{
    return m_logsetId;
}

void DescribeCLSTopicsRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool DescribeCLSTopicsRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

vector<string> DescribeCLSTopicsRequest::GetTopicIds() const
{
    return m_topicIds;
}

void DescribeCLSTopicsRequest::SetTopicIds(const vector<string>& _topicIds)
{
    m_topicIds = _topicIds;
    m_topicIdsHasBeenSet = true;
}

bool DescribeCLSTopicsRequest::TopicIdsHasBeenSet() const
{
    return m_topicIdsHasBeenSet;
}

int64_t DescribeCLSTopicsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCLSTopicsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCLSTopicsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeCLSTopicsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCLSTopicsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCLSTopicsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


