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

#include <tencentcloud/csip/v20221121/model/DescribeCosIpInvokeRecordFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCosIpInvokeRecordFileRequest::DescribeCosIpInvokeRecordFileRequest() :
    m_relAppIdHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string DescribeCosIpInvokeRecordFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_relAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_relAppId, allocator);
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


uint64_t DescribeCosIpInvokeRecordFileRequest::GetRelAppId() const
{
    return m_relAppId;
}

void DescribeCosIpInvokeRecordFileRequest::SetRelAppId(const uint64_t& _relAppId)
{
    m_relAppId = _relAppId;
    m_relAppIdHasBeenSet = true;
}

bool DescribeCosIpInvokeRecordFileRequest::RelAppIdHasBeenSet() const
{
    return m_relAppIdHasBeenSet;
}

Filter DescribeCosIpInvokeRecordFileRequest::GetFilter() const
{
    return m_filter;
}

void DescribeCosIpInvokeRecordFileRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeCosIpInvokeRecordFileRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


