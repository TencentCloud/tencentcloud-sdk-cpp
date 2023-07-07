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

#include <tencentcloud/dbbrain/v20210527/model/CreateRedisBigKeyAnalysisTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

CreateRedisBigKeyAnalysisTaskRequest::CreateRedisBigKeyAnalysisTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_shardIdsHasBeenSet(false),
    m_keyDelimiterListHasBeenSet(false)
{
}

string CreateRedisBigKeyAnalysisTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_shardIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shardIds.begin(); itr != m_shardIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_keyDelimiterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyDelimiterList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyDelimiterList.begin(); itr != m_keyDelimiterList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRedisBigKeyAnalysisTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateRedisBigKeyAnalysisTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateRedisBigKeyAnalysisTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateRedisBigKeyAnalysisTaskRequest::GetProduct() const
{
    return m_product;
}

void CreateRedisBigKeyAnalysisTaskRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateRedisBigKeyAnalysisTaskRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<int64_t> CreateRedisBigKeyAnalysisTaskRequest::GetShardIds() const
{
    return m_shardIds;
}

void CreateRedisBigKeyAnalysisTaskRequest::SetShardIds(const vector<int64_t>& _shardIds)
{
    m_shardIds = _shardIds;
    m_shardIdsHasBeenSet = true;
}

bool CreateRedisBigKeyAnalysisTaskRequest::ShardIdsHasBeenSet() const
{
    return m_shardIdsHasBeenSet;
}

vector<string> CreateRedisBigKeyAnalysisTaskRequest::GetKeyDelimiterList() const
{
    return m_keyDelimiterList;
}

void CreateRedisBigKeyAnalysisTaskRequest::SetKeyDelimiterList(const vector<string>& _keyDelimiterList)
{
    m_keyDelimiterList = _keyDelimiterList;
    m_keyDelimiterListHasBeenSet = true;
}

bool CreateRedisBigKeyAnalysisTaskRequest::KeyDelimiterListHasBeenSet() const
{
    return m_keyDelimiterListHasBeenSet;
}


