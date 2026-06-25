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

#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

DescribeCloudNativeAPIGatewayLLMModelServicesRequest::DescribeCloudNativeAPIGatewayLLMModelServicesRequest() :
    m_gatewayIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_modelAPIIdHasBeenSet(false),
    m_secretKeyIdHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string DescribeCloudNativeAPIGatewayLLMModelServicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_modelAPIIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAPIId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelAPIId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudNativeAPIGatewayLLMModelServicesRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeCloudNativeAPIGatewayLLMModelServicesRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayLLMModelServicesRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

int64_t DescribeCloudNativeAPIGatewayLLMModelServicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCloudNativeAPIGatewayLLMModelServicesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayLLMModelServicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeCloudNativeAPIGatewayLLMModelServicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCloudNativeAPIGatewayLLMModelServicesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayLLMModelServicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filter> DescribeCloudNativeAPIGatewayLLMModelServicesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeCloudNativeAPIGatewayLLMModelServicesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayLLMModelServicesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeCloudNativeAPIGatewayLLMModelServicesRequest::GetModelAPIId() const
{
    return m_modelAPIId;
}

void DescribeCloudNativeAPIGatewayLLMModelServicesRequest::SetModelAPIId(const string& _modelAPIId)
{
    m_modelAPIId = _modelAPIId;
    m_modelAPIIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayLLMModelServicesRequest::ModelAPIIdHasBeenSet() const
{
    return m_modelAPIIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewayLLMModelServicesRequest::GetSecretKeyId() const
{
    return m_secretKeyId;
}

void DescribeCloudNativeAPIGatewayLLMModelServicesRequest::SetSecretKeyId(const string& _secretKeyId)
{
    m_secretKeyId = _secretKeyId;
    m_secretKeyIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayLLMModelServicesRequest::SecretKeyIdHasBeenSet() const
{
    return m_secretKeyIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewayLLMModelServicesRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeCloudNativeAPIGatewayLLMModelServicesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayLLMModelServicesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


