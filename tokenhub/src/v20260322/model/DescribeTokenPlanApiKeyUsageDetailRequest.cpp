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

#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyUsageDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

DescribeTokenPlanApiKeyUsageDetailRequest::DescribeTokenPlanApiKeyUsageDetailRequest() :
    m_teamIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_apiKeyIdHasBeenSet(false),
    m_apiKeyNameHasBeenSet(false),
    m_modelNameHasBeenSet(false)
{
}

string DescribeTokenPlanApiKeyUsageDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_to.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTokenPlanApiKeyUsageDetailRequest::GetTeamId() const
{
    return m_teamId;
}

void DescribeTokenPlanApiKeyUsageDetailRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyUsageDetailRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DescribeTokenPlanApiKeyUsageDetailRequest::GetFrom() const
{
    return m_from;
}

void DescribeTokenPlanApiKeyUsageDetailRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyUsageDetailRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeTokenPlanApiKeyUsageDetailRequest::GetTo() const
{
    return m_to;
}

void DescribeTokenPlanApiKeyUsageDetailRequest::SetTo(const string& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyUsageDetailRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string DescribeTokenPlanApiKeyUsageDetailRequest::GetSort() const
{
    return m_sort;
}

void DescribeTokenPlanApiKeyUsageDetailRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyUsageDetailRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t DescribeTokenPlanApiKeyUsageDetailRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTokenPlanApiKeyUsageDetailRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyUsageDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTokenPlanApiKeyUsageDetailRequest::GetContext() const
{
    return m_context;
}

void DescribeTokenPlanApiKeyUsageDetailRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyUsageDetailRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string DescribeTokenPlanApiKeyUsageDetailRequest::GetApiKeyId() const
{
    return m_apiKeyId;
}

void DescribeTokenPlanApiKeyUsageDetailRequest::SetApiKeyId(const string& _apiKeyId)
{
    m_apiKeyId = _apiKeyId;
    m_apiKeyIdHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyUsageDetailRequest::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string DescribeTokenPlanApiKeyUsageDetailRequest::GetApiKeyName() const
{
    return m_apiKeyName;
}

void DescribeTokenPlanApiKeyUsageDetailRequest::SetApiKeyName(const string& _apiKeyName)
{
    m_apiKeyName = _apiKeyName;
    m_apiKeyNameHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyUsageDetailRequest::ApiKeyNameHasBeenSet() const
{
    return m_apiKeyNameHasBeenSet;
}

string DescribeTokenPlanApiKeyUsageDetailRequest::GetModelName() const
{
    return m_modelName;
}

void DescribeTokenPlanApiKeyUsageDetailRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyUsageDetailRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}


