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

#include <tencentcloud/dbbrain/v20210527/model/DescribeIndexRecommendAggregationSlowLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeIndexRecommendAggregationSlowLogsRequest::DescribeIndexRecommendAggregationSlowLogsRequest() :
    m_productHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_dbHasBeenSet(false),
    m_collectionHasBeenSet(false),
    m_signsHasBeenSet(false)
{
}

string DescribeIndexRecommendAggregationSlowLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_collectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collection.c_str(), allocator).Move(), allocator);
    }

    if (m_signsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Signs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_signs.begin(); itr != m_signs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIndexRecommendAggregationSlowLogsRequest::GetProduct() const
{
    return m_product;
}

void DescribeIndexRecommendAggregationSlowLogsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeIndexRecommendAggregationSlowLogsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeIndexRecommendAggregationSlowLogsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeIndexRecommendAggregationSlowLogsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeIndexRecommendAggregationSlowLogsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeIndexRecommendAggregationSlowLogsRequest::GetDb() const
{
    return m_db;
}

void DescribeIndexRecommendAggregationSlowLogsRequest::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool DescribeIndexRecommendAggregationSlowLogsRequest::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string DescribeIndexRecommendAggregationSlowLogsRequest::GetCollection() const
{
    return m_collection;
}

void DescribeIndexRecommendAggregationSlowLogsRequest::SetCollection(const string& _collection)
{
    m_collection = _collection;
    m_collectionHasBeenSet = true;
}

bool DescribeIndexRecommendAggregationSlowLogsRequest::CollectionHasBeenSet() const
{
    return m_collectionHasBeenSet;
}

vector<string> DescribeIndexRecommendAggregationSlowLogsRequest::GetSigns() const
{
    return m_signs;
}

void DescribeIndexRecommendAggregationSlowLogsRequest::SetSigns(const vector<string>& _signs)
{
    m_signs = _signs;
    m_signsHasBeenSet = true;
}

bool DescribeIndexRecommendAggregationSlowLogsRequest::SignsHasBeenSet() const
{
    return m_signsHasBeenSet;
}


