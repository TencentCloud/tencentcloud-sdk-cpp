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

#include <tencentcloud/csip/v20221121/model/DescribeSkillScanResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeSkillScanResultRequest::DescribeSkillScanResultRequest() :
    m_contentHashHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_reportURLExpireHoursHasBeenSet(false)
{
}

string DescribeSkillScanResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_contentHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentHash.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_engineVersion, allocator);
    }

    if (m_reportURLExpireHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportURLExpireHours";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportURLExpireHours, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSkillScanResultRequest::GetContentHash() const
{
    return m_contentHash;
}

void DescribeSkillScanResultRequest::SetContentHash(const string& _contentHash)
{
    m_contentHash = _contentHash;
    m_contentHashHasBeenSet = true;
}

bool DescribeSkillScanResultRequest::ContentHashHasBeenSet() const
{
    return m_contentHashHasBeenSet;
}

int64_t DescribeSkillScanResultRequest::GetEngineVersion() const
{
    return m_engineVersion;
}

void DescribeSkillScanResultRequest::SetEngineVersion(const int64_t& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool DescribeSkillScanResultRequest::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

int64_t DescribeSkillScanResultRequest::GetReportURLExpireHours() const
{
    return m_reportURLExpireHours;
}

void DescribeSkillScanResultRequest::SetReportURLExpireHours(const int64_t& _reportURLExpireHours)
{
    m_reportURLExpireHours = _reportURLExpireHours;
    m_reportURLExpireHoursHasBeenSet = true;
}

bool DescribeSkillScanResultRequest::ReportURLExpireHoursHasBeenSet() const
{
    return m_reportURLExpireHoursHasBeenSet;
}


