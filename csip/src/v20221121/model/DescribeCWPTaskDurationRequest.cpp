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

#include <tencentcloud/csip/v20221121/model/DescribeCWPTaskDurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCWPTaskDurationRequest::DescribeCWPTaskDurationRequest() :
    m_uuidCntHasBeenSet(false),
    m_timingScanHasBeenSet(false)
{
}

string DescribeCWPTaskDurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uuidCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UuidCnt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uuidCnt, allocator);
    }

    if (m_timingScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimingScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timingScan, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeCWPTaskDurationRequest::GetUuidCnt() const
{
    return m_uuidCnt;
}

void DescribeCWPTaskDurationRequest::SetUuidCnt(const uint64_t& _uuidCnt)
{
    m_uuidCnt = _uuidCnt;
    m_uuidCntHasBeenSet = true;
}

bool DescribeCWPTaskDurationRequest::UuidCntHasBeenSet() const
{
    return m_uuidCntHasBeenSet;
}

bool DescribeCWPTaskDurationRequest::GetTimingScan() const
{
    return m_timingScan;
}

void DescribeCWPTaskDurationRequest::SetTimingScan(const bool& _timingScan)
{
    m_timingScan = _timingScan;
    m_timingScanHasBeenSet = true;
}

bool DescribeCWPTaskDurationRequest::TimingScanHasBeenSet() const
{
    return m_timingScanHasBeenSet;
}


