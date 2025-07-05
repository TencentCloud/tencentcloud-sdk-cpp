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

#include <tencentcloud/live/v20180801/model/DescribeLiveStreamMonitorListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveStreamMonitorListRequest::DescribeLiveStreamMonitorListRequest() :
    m_indexHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

string DescribeLiveStreamMonitorListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_index, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeLiveStreamMonitorListRequest::GetIndex() const
{
    return m_index;
}

void DescribeLiveStreamMonitorListRequest::SetIndex(const uint64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool DescribeLiveStreamMonitorListRequest::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

uint64_t DescribeLiveStreamMonitorListRequest::GetCount() const
{
    return m_count;
}

void DescribeLiveStreamMonitorListRequest::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DescribeLiveStreamMonitorListRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}


