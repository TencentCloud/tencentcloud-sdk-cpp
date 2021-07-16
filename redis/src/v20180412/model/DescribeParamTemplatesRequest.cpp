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

#include <tencentcloud/redis/v20180412/model/DescribeParamTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeParamTemplatesRequest::DescribeParamTemplatesRequest() :
    m_productTypesHasBeenSet(false),
    m_templateNamesHasBeenSet(false),
    m_templateIdsHasBeenSet(false)
{
}

string DescribeParamTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productTypes.begin(); itr != m_productTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
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
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DescribeParamTemplatesRequest::GetProductTypes() const
{
    return m_productTypes;
}

void DescribeParamTemplatesRequest::SetProductTypes(const vector<int64_t>& _productTypes)
{
    m_productTypes = _productTypes;
    m_productTypesHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::ProductTypesHasBeenSet() const
{
    return m_productTypesHasBeenSet;
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

vector<string> DescribeParamTemplatesRequest::GetTemplateIds() const
{
    return m_templateIds;
}

void DescribeParamTemplatesRequest::SetTemplateIds(const vector<string>& _templateIds)
{
    m_templateIds = _templateIds;
    m_templateIdsHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::TemplateIdsHasBeenSet() const
{
    return m_templateIdsHasBeenSet;
}


