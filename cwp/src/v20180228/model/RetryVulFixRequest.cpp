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

#include <tencentcloud/cwp/v20180228/model/RetryVulFixRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RetryVulFixRequest::RetryVulFixRequest() :
    m_fixIdHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_vulIdHasBeenSet(false)
{
}

string RetryVulFixRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fixIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fixId, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vulId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t RetryVulFixRequest::GetFixId() const
{
    return m_fixId;
}

void RetryVulFixRequest::SetFixId(const uint64_t& _fixId)
{
    m_fixId = _fixId;
    m_fixIdHasBeenSet = true;
}

bool RetryVulFixRequest::FixIdHasBeenSet() const
{
    return m_fixIdHasBeenSet;
}

string RetryVulFixRequest::GetQuuid() const
{
    return m_quuid;
}

void RetryVulFixRequest::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RetryVulFixRequest::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t RetryVulFixRequest::GetVulId() const
{
    return m_vulId;
}

void RetryVulFixRequest::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool RetryVulFixRequest::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}


