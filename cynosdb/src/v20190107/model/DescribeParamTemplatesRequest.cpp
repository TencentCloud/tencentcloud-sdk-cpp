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

#include <tencentcloud/cynosdb/v20190107/model/DescribeParamTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeParamTemplatesRequest::DescribeParamTemplatesRequest() :
    m_engineVersionsHasBeenSet(false),
    m_templateNamesHasBeenSet(false),
    m_templateIdsHasBeenSet(false),
    m_dbModesHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_productsHasBeenSet(false),
    m_templateTypesHasBeenSet(false),
    m_engineTypesHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderDirectionHasBeenSet(false)
{
}

string DescribeParamTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineVersions.begin(); itr != m_engineVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateNames.begin(); itr != m_templateNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateIds.begin(); itr != m_templateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_dbModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbModes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dbModes.begin(); itr != m_dbModes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_productsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Products";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_products.begin(); itr != m_products.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateTypes.begin(); itr != m_templateTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_engineTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineTypes.begin(); itr != m_engineTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeParamTemplatesRequest::GetEngineVersions() const
{
    return m_engineVersions;
}

void DescribeParamTemplatesRequest::SetEngineVersions(const vector<string>& _engineVersions)
{
    m_engineVersions = _engineVersions;
    m_engineVersionsHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::EngineVersionsHasBeenSet() const
{
    return m_engineVersionsHasBeenSet;
}

vector<string> DescribeParamTemplatesRequest::GetTemplateNames() const
{
    return m_templateNames;
}

void DescribeParamTemplatesRequest::SetTemplateNames(const vector<string>& _templateNames)
{
    m_templateNames = _templateNames;
    m_templateNamesHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::TemplateNamesHasBeenSet() const
{
    return m_templateNamesHasBeenSet;
}

vector<int64_t> DescribeParamTemplatesRequest::GetTemplateIds() const
{
    return m_templateIds;
}

void DescribeParamTemplatesRequest::SetTemplateIds(const vector<int64_t>& _templateIds)
{
    m_templateIds = _templateIds;
    m_templateIdsHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::TemplateIdsHasBeenSet() const
{
    return m_templateIdsHasBeenSet;
}

vector<string> DescribeParamTemplatesRequest::GetDbModes() const
{
    return m_dbModes;
}

void DescribeParamTemplatesRequest::SetDbModes(const vector<string>& _dbModes)
{
    m_dbModes = _dbModes;
    m_dbModesHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::DbModesHasBeenSet() const
{
    return m_dbModesHasBeenSet;
}

int64_t DescribeParamTemplatesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeParamTemplatesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeParamTemplatesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeParamTemplatesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeParamTemplatesRequest::GetProducts() const
{
    return m_products;
}

void DescribeParamTemplatesRequest::SetProducts(const vector<string>& _products)
{
    m_products = _products;
    m_productsHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::ProductsHasBeenSet() const
{
    return m_productsHasBeenSet;
}

vector<string> DescribeParamTemplatesRequest::GetTemplateTypes() const
{
    return m_templateTypes;
}

void DescribeParamTemplatesRequest::SetTemplateTypes(const vector<string>& _templateTypes)
{
    m_templateTypes = _templateTypes;
    m_templateTypesHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::TemplateTypesHasBeenSet() const
{
    return m_templateTypesHasBeenSet;
}

vector<string> DescribeParamTemplatesRequest::GetEngineTypes() const
{
    return m_engineTypes;
}

void DescribeParamTemplatesRequest::SetEngineTypes(const vector<string>& _engineTypes)
{
    m_engineTypes = _engineTypes;
    m_engineTypesHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::EngineTypesHasBeenSet() const
{
    return m_engineTypesHasBeenSet;
}

string DescribeParamTemplatesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeParamTemplatesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeParamTemplatesRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeParamTemplatesRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}


