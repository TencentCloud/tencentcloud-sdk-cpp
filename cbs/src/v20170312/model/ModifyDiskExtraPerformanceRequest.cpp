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

#include <tencentcloud/cbs/v20170312/model/ModifyDiskExtraPerformanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

ModifyDiskExtraPerformanceRequest::ModifyDiskExtraPerformanceRequest() :
    m_throughputPerformanceHasBeenSet(false),
    m_diskIdHasBeenSet(false)
{
}

string ModifyDiskExtraPerformanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_throughputPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThroughputPerformance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_throughputPerformance, allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyDiskExtraPerformanceRequest::GetThroughputPerformance() const
{
    return m_throughputPerformance;
}

void ModifyDiskExtraPerformanceRequest::SetThroughputPerformance(const uint64_t& _throughputPerformance)
{
    m_throughputPerformance = _throughputPerformance;
    m_throughputPerformanceHasBeenSet = true;
}

bool ModifyDiskExtraPerformanceRequest::ThroughputPerformanceHasBeenSet() const
{
    return m_throughputPerformanceHasBeenSet;
}

string ModifyDiskExtraPerformanceRequest::GetDiskId() const
{
    return m_diskId;
}

void ModifyDiskExtraPerformanceRequest::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool ModifyDiskExtraPerformanceRequest::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}


