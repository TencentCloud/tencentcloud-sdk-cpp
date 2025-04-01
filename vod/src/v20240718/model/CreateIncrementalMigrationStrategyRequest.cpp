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

#include <tencentcloud/vod/v20240718/model/CreateIncrementalMigrationStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

CreateIncrementalMigrationStrategyRequest::CreateIncrementalMigrationStrategyRequest() :
    m_subAppIdHasBeenSet(false),
    m_bucketIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_httpOriginConfigHasBeenSet(false)
{
}

string CreateIncrementalMigrationStrategyRequest::ToJsonString() const
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

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_httpOriginConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpOriginConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_httpOriginConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateIncrementalMigrationStrategyRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateIncrementalMigrationStrategyRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateIncrementalMigrationStrategyRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateIncrementalMigrationStrategyRequest::GetBucketId() const
{
    return m_bucketId;
}

void CreateIncrementalMigrationStrategyRequest::SetBucketId(const string& _bucketId)
{
    m_bucketId = _bucketId;
    m_bucketIdHasBeenSet = true;
}

bool CreateIncrementalMigrationStrategyRequest::BucketIdHasBeenSet() const
{
    return m_bucketIdHasBeenSet;
}

string CreateIncrementalMigrationStrategyRequest::GetStrategyName() const
{
    return m_strategyName;
}

void CreateIncrementalMigrationStrategyRequest::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool CreateIncrementalMigrationStrategyRequest::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string CreateIncrementalMigrationStrategyRequest::GetOriginType() const
{
    return m_originType;
}

void CreateIncrementalMigrationStrategyRequest::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool CreateIncrementalMigrationStrategyRequest::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

IncrementalMigrationHttpOriginConfig CreateIncrementalMigrationStrategyRequest::GetHttpOriginConfig() const
{
    return m_httpOriginConfig;
}

void CreateIncrementalMigrationStrategyRequest::SetHttpOriginConfig(const IncrementalMigrationHttpOriginConfig& _httpOriginConfig)
{
    m_httpOriginConfig = _httpOriginConfig;
    m_httpOriginConfigHasBeenSet = true;
}

bool CreateIncrementalMigrationStrategyRequest::HttpOriginConfigHasBeenSet() const
{
    return m_httpOriginConfigHasBeenSet;
}


