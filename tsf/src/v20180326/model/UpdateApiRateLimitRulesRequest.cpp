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

#include <tencentcloud/tsf/v20180326/model/UpdateApiRateLimitRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

UpdateApiRateLimitRulesRequest::UpdateApiRateLimitRulesRequest() :
    m_apiIdsHasBeenSet(false),
    m_usableStatusHasBeenSet(false),
    m_maxQpsHasBeenSet(false)
{
}

string UpdateApiRateLimitRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiIds.begin(); itr != m_apiIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_usableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsableStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_usableStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_maxQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxQps, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UpdateApiRateLimitRulesRequest::GetApiIds() const
{
    return m_apiIds;
}

void UpdateApiRateLimitRulesRequest::SetApiIds(const vector<string>& _apiIds)
{
    m_apiIds = _apiIds;
    m_apiIdsHasBeenSet = true;
}

bool UpdateApiRateLimitRulesRequest::ApiIdsHasBeenSet() const
{
    return m_apiIdsHasBeenSet;
}

string UpdateApiRateLimitRulesRequest::GetUsableStatus() const
{
    return m_usableStatus;
}

void UpdateApiRateLimitRulesRequest::SetUsableStatus(const string& _usableStatus)
{
    m_usableStatus = _usableStatus;
    m_usableStatusHasBeenSet = true;
}

bool UpdateApiRateLimitRulesRequest::UsableStatusHasBeenSet() const
{
    return m_usableStatusHasBeenSet;
}

int64_t UpdateApiRateLimitRulesRequest::GetMaxQps() const
{
    return m_maxQps;
}

void UpdateApiRateLimitRulesRequest::SetMaxQps(const int64_t& _maxQps)
{
    m_maxQps = _maxQps;
    m_maxQpsHasBeenSet = true;
}

bool UpdateApiRateLimitRulesRequest::MaxQpsHasBeenSet() const
{
    return m_maxQpsHasBeenSet;
}


