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

#include <tencentcloud/tsf/v20180326/model/CreateApiRateLimitRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateApiRateLimitRuleRequest::CreateApiRateLimitRuleRequest() :
    m_apiIdHasBeenSet(false),
    m_maxQpsHasBeenSet(false),
    m_usableStatusHasBeenSet(false)
{
}

string CreateApiRateLimitRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxQps, allocator);
    }

    if (m_usableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsableStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_usableStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApiRateLimitRuleRequest::GetApiId() const
{
    return m_apiId;
}

void CreateApiRateLimitRuleRequest::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool CreateApiRateLimitRuleRequest::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

uint64_t CreateApiRateLimitRuleRequest::GetMaxQps() const
{
    return m_maxQps;
}

void CreateApiRateLimitRuleRequest::SetMaxQps(const uint64_t& _maxQps)
{
    m_maxQps = _maxQps;
    m_maxQpsHasBeenSet = true;
}

bool CreateApiRateLimitRuleRequest::MaxQpsHasBeenSet() const
{
    return m_maxQpsHasBeenSet;
}

string CreateApiRateLimitRuleRequest::GetUsableStatus() const
{
    return m_usableStatus;
}

void CreateApiRateLimitRuleRequest::SetUsableStatus(const string& _usableStatus)
{
    m_usableStatus = _usableStatus;
    m_usableStatusHasBeenSet = true;
}

bool CreateApiRateLimitRuleRequest::UsableStatusHasBeenSet() const
{
    return m_usableStatusHasBeenSet;
}


