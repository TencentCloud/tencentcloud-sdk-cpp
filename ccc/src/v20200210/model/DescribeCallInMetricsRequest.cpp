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

#include <tencentcloud/ccc/v20200210/model/DescribeCallInMetricsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeCallInMetricsRequest::DescribeCallInMetricsRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_enabledSkillGroupHasBeenSet(false),
    m_enabledNumberHasBeenSet(false)
{
}

string DescribeCallInMetricsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_enabledSkillGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledSkillGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabledSkillGroup, allocator);
    }

    if (m_enabledNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabledNumber, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeCallInMetricsRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeCallInMetricsRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeCallInMetricsRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

bool DescribeCallInMetricsRequest::GetEnabledSkillGroup() const
{
    return m_enabledSkillGroup;
}

void DescribeCallInMetricsRequest::SetEnabledSkillGroup(const bool& _enabledSkillGroup)
{
    m_enabledSkillGroup = _enabledSkillGroup;
    m_enabledSkillGroupHasBeenSet = true;
}

bool DescribeCallInMetricsRequest::EnabledSkillGroupHasBeenSet() const
{
    return m_enabledSkillGroupHasBeenSet;
}

bool DescribeCallInMetricsRequest::GetEnabledNumber() const
{
    return m_enabledNumber;
}

void DescribeCallInMetricsRequest::SetEnabledNumber(const bool& _enabledNumber)
{
    m_enabledNumber = _enabledNumber;
    m_enabledNumberHasBeenSet = true;
}

bool DescribeCallInMetricsRequest::EnabledNumberHasBeenSet() const
{
    return m_enabledNumberHasBeenSet;
}


