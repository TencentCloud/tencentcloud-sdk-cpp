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

#include <tencentcloud/cls/v20201016/model/DescribeSplunkPreviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeSplunkPreviewRequest::DescribeSplunkPreviewRequest() :
    m_topicIdHasBeenSet(false),
    m_metadataInfoHasBeenSet(false),
    m_dSLFilterHasBeenSet(false)
{
}

string DescribeSplunkPreviewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetadataInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadataInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dSLFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DSLFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dSLFilter.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSplunkPreviewRequest::GetTopicId() const
{
    return m_topicId;
}

void DescribeSplunkPreviewRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DescribeSplunkPreviewRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

MetadataInfo DescribeSplunkPreviewRequest::GetMetadataInfo() const
{
    return m_metadataInfo;
}

void DescribeSplunkPreviewRequest::SetMetadataInfo(const MetadataInfo& _metadataInfo)
{
    m_metadataInfo = _metadataInfo;
    m_metadataInfoHasBeenSet = true;
}

bool DescribeSplunkPreviewRequest::MetadataInfoHasBeenSet() const
{
    return m_metadataInfoHasBeenSet;
}

string DescribeSplunkPreviewRequest::GetDSLFilter() const
{
    return m_dSLFilter;
}

void DescribeSplunkPreviewRequest::SetDSLFilter(const string& _dSLFilter)
{
    m_dSLFilter = _dSLFilter;
    m_dSLFilterHasBeenSet = true;
}

bool DescribeSplunkPreviewRequest::DSLFilterHasBeenSet() const
{
    return m_dSLFilterHasBeenSet;
}


