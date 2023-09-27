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

#include <tencentcloud/dbbrain/v20210527/model/DescribeIndexRecommendInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeIndexRecommendInfoResponse::DescribeIndexRecommendInfoResponse() :
    m_collectionNumHasBeenSet(false),
    m_indexNumHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_optimizedHasBeenSet(false),
    m_optimizedCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeIndexRecommendInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CollectionNum") && !rsp["CollectionNum"].IsNull())
    {
        if (!rsp["CollectionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CollectionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_collectionNum = rsp["CollectionNum"].GetInt64();
        m_collectionNumHasBeenSet = true;
    }

    if (rsp.HasMember("IndexNum") && !rsp["IndexNum"].IsNull())
    {
        if (!rsp["IndexNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexNum = rsp["IndexNum"].GetInt64();
        m_indexNumHasBeenSet = true;
    }

    if (rsp.HasMember("Items") && !rsp["Items"].IsNull())
    {
        if (!rsp["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Items` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MongoDBIndex item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = rsp["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("Optimized") && !rsp["Optimized"].IsNull())
    {
        if (!rsp["Optimized"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Optimized` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_optimized = rsp["Optimized"].GetInt64();
        m_optimizedHasBeenSet = true;
    }

    if (rsp.HasMember("OptimizedCount") && !rsp["OptimizedCount"].IsNull())
    {
        if (!rsp["OptimizedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OptimizedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_optimizedCount = rsp["OptimizedCount"].GetInt64();
        m_optimizedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeIndexRecommendInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_collectionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_collectionNum, allocator);
    }

    if (m_indexNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexNum, allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_optimizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Optimized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_optimized, allocator);
    }

    if (m_optimizedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptimizedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_optimizedCount, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeIndexRecommendInfoResponse::GetCollectionNum() const
{
    return m_collectionNum;
}

bool DescribeIndexRecommendInfoResponse::CollectionNumHasBeenSet() const
{
    return m_collectionNumHasBeenSet;
}

int64_t DescribeIndexRecommendInfoResponse::GetIndexNum() const
{
    return m_indexNum;
}

bool DescribeIndexRecommendInfoResponse::IndexNumHasBeenSet() const
{
    return m_indexNumHasBeenSet;
}

vector<MongoDBIndex> DescribeIndexRecommendInfoResponse::GetItems() const
{
    return m_items;
}

bool DescribeIndexRecommendInfoResponse::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

int64_t DescribeIndexRecommendInfoResponse::GetLevel() const
{
    return m_level;
}

bool DescribeIndexRecommendInfoResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t DescribeIndexRecommendInfoResponse::GetOptimized() const
{
    return m_optimized;
}

bool DescribeIndexRecommendInfoResponse::OptimizedHasBeenSet() const
{
    return m_optimizedHasBeenSet;
}

int64_t DescribeIndexRecommendInfoResponse::GetOptimizedCount() const
{
    return m_optimizedCount;
}

bool DescribeIndexRecommendInfoResponse::OptimizedCountHasBeenSet() const
{
    return m_optimizedCountHasBeenSet;
}


