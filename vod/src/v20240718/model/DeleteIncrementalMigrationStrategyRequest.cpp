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

#include <tencentcloud/vod/v20240718/model/DeleteIncrementalMigrationStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

DeleteIncrementalMigrationStrategyRequest::DeleteIncrementalMigrationStrategyRequest() :
    m_subAppIdHasBeenSet(false),
    m_bucketIdHasBeenSet(false),
    m_strategyIdHasBeenSet(false)
{
}

string DeleteIncrementalMigrationStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_bucketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteIncrementalMigrationStrategyRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DeleteIncrementalMigrationStrategyRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DeleteIncrementalMigrationStrategyRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string DeleteIncrementalMigrationStrategyRequest::GetBucketId() const
{
    return m_bucketId;
}

void DeleteIncrementalMigrationStrategyRequest::SetBucketId(const string& _bucketId)
{
    m_bucketId = _bucketId;
    m_bucketIdHasBeenSet = true;
}

bool DeleteIncrementalMigrationStrategyRequest::BucketIdHasBeenSet() const
{
    return m_bucketIdHasBeenSet;
}

string DeleteIncrementalMigrationStrategyRequest::GetStrategyId() const
{
    return m_strategyId;
}

void DeleteIncrementalMigrationStrategyRequest::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool DeleteIncrementalMigrationStrategyRequest::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}


