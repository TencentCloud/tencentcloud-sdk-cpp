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

#include <tencentcloud/tcb/v20180608/model/DescribePlatformEnvUsageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribePlatformEnvUsageRequest::DescribePlatformEnvUsageRequest() :
    m_envIdHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_needUsageDetailsHasBeenSet(false)
{
}

string DescribePlatformEnvUsageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
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

    if (m_resourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceTypes.begin(); itr != m_resourceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_needUsageDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedUsageDetails";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needUsageDetails, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePlatformEnvUsageRequest::GetEnvId() const
{
    return m_envId;
}

void DescribePlatformEnvUsageRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribePlatformEnvUsageRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribePlatformEnvUsageRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribePlatformEnvUsageRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribePlatformEnvUsageRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribePlatformEnvUsageRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribePlatformEnvUsageRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribePlatformEnvUsageRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

vector<string> DescribePlatformEnvUsageRequest::GetResourceTypes() const
{
    return m_resourceTypes;
}

void DescribePlatformEnvUsageRequest::SetResourceTypes(const vector<string>& _resourceTypes)
{
    m_resourceTypes = _resourceTypes;
    m_resourceTypesHasBeenSet = true;
}

bool DescribePlatformEnvUsageRequest::ResourceTypesHasBeenSet() const
{
    return m_resourceTypesHasBeenSet;
}

bool DescribePlatformEnvUsageRequest::GetNeedUsageDetails() const
{
    return m_needUsageDetails;
}

void DescribePlatformEnvUsageRequest::SetNeedUsageDetails(const bool& _needUsageDetails)
{
    m_needUsageDetails = _needUsageDetails;
    m_needUsageDetailsHasBeenSet = true;
}

bool DescribePlatformEnvUsageRequest::NeedUsageDetailsHasBeenSet() const
{
    return m_needUsageDetailsHasBeenSet;
}


