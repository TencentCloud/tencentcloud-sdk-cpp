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

#include <tencentcloud/billing/v20180709/model/ModifyAccountWarningRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ModifyAccountWarningRequest::ModifyAccountWarningRequest() :
    m_thresholdHasBeenSet(false),
    m_openHasBeenSet(false)
{
}

string ModifyAccountWarningRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_threshold, allocator);
    }

    if (m_openHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Open";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_open, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyAccountWarningRequest::GetThreshold() const
{
    return m_threshold;
}

void ModifyAccountWarningRequest::SetThreshold(const uint64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool ModifyAccountWarningRequest::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

uint64_t ModifyAccountWarningRequest::GetOpen() const
{
    return m_open;
}

void ModifyAccountWarningRequest::SetOpen(const uint64_t& _open)
{
    m_open = _open;
    m_openHasBeenSet = true;
}

bool ModifyAccountWarningRequest::OpenHasBeenSet() const
{
    return m_openHasBeenSet;
}


