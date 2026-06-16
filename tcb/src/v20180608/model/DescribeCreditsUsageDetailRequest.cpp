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

#include <tencentcloud/tcb/v20180608/model/DescribeCreditsUsageDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCreditsUsageDetailRequest::DescribeCreditsUsageDetailRequest() :
    m_modulesHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_needUsageDetailsHasBeenSet(false),
    m_envIdHasBeenSet(false)
{
}

string DescribeCreditsUsageDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modules.begin(); itr != m_modules.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_needUsageDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedUsageDetails";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needUsageDetails, allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeCreditsUsageDetailRequest::GetModules() const
{
    return m_modules;
}

void DescribeCreditsUsageDetailRequest::SetModules(const vector<string>& _modules)
{
    m_modules = _modules;
    m_modulesHasBeenSet = true;
}

bool DescribeCreditsUsageDetailRequest::ModulesHasBeenSet() const
{
    return m_modulesHasBeenSet;
}

string DescribeCreditsUsageDetailRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribeCreditsUsageDetailRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribeCreditsUsageDetailRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeCreditsUsageDetailRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeCreditsUsageDetailRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeCreditsUsageDetailRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

bool DescribeCreditsUsageDetailRequest::GetNeedUsageDetails() const
{
    return m_needUsageDetails;
}

void DescribeCreditsUsageDetailRequest::SetNeedUsageDetails(const bool& _needUsageDetails)
{
    m_needUsageDetails = _needUsageDetails;
    m_needUsageDetailsHasBeenSet = true;
}

bool DescribeCreditsUsageDetailRequest::NeedUsageDetailsHasBeenSet() const
{
    return m_needUsageDetailsHasBeenSet;
}

string DescribeCreditsUsageDetailRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeCreditsUsageDetailRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeCreditsUsageDetailRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}


