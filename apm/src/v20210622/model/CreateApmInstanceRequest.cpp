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

#include <tencentcloud/apm/v20210622/model/CreateApmInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

CreateApmInstanceRequest::CreateApmInstanceRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_traceDurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_spanDailyCountersHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_freeHasBeenSet(false)
{
}

string CreateApmInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_traceDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_traceDuration, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_spanDailyCountersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpanDailyCounters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_spanDailyCounters, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_freeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Free";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_free, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApmInstanceRequest::GetName() const
{
    return m_name;
}

void CreateApmInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateApmInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateApmInstanceRequest::GetDescription() const
{
    return m_description;
}

void CreateApmInstanceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateApmInstanceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateApmInstanceRequest::GetTraceDuration() const
{
    return m_traceDuration;
}

void CreateApmInstanceRequest::SetTraceDuration(const int64_t& _traceDuration)
{
    m_traceDuration = _traceDuration;
    m_traceDurationHasBeenSet = true;
}

bool CreateApmInstanceRequest::TraceDurationHasBeenSet() const
{
    return m_traceDurationHasBeenSet;
}

vector<ApmTag> CreateApmInstanceRequest::GetTags() const
{
    return m_tags;
}

void CreateApmInstanceRequest::SetTags(const vector<ApmTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateApmInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t CreateApmInstanceRequest::GetSpanDailyCounters() const
{
    return m_spanDailyCounters;
}

void CreateApmInstanceRequest::SetSpanDailyCounters(const uint64_t& _spanDailyCounters)
{
    m_spanDailyCounters = _spanDailyCounters;
    m_spanDailyCountersHasBeenSet = true;
}

bool CreateApmInstanceRequest::SpanDailyCountersHasBeenSet() const
{
    return m_spanDailyCountersHasBeenSet;
}

int64_t CreateApmInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateApmInstanceRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateApmInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CreateApmInstanceRequest::GetFree() const
{
    return m_free;
}

void CreateApmInstanceRequest::SetFree(const int64_t& _free)
{
    m_free = _free;
    m_freeHasBeenSet = true;
}

bool CreateApmInstanceRequest::FreeHasBeenSet() const
{
    return m_freeHasBeenSet;
}


