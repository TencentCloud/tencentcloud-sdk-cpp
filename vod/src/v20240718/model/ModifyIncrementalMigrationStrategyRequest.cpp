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

#include <tencentcloud/vod/v20240718/model/ModifyIncrementalMigrationStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

ModifyIncrementalMigrationStrategyRequest::ModifyIncrementalMigrationStrategyRequest() :
    m_subAppIdHasBeenSet(false),
    m_bucketIdHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_httpOriginConfigHasBeenSet(false)
{
}

string ModifyIncrementalMigrationStrategyRequest::ToJsonString() const
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


uint64_t ModifyIncrementalMigrationStrategyRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyIncrementalMigrationStrategyRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyIncrementalMigrationStrategyRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ModifyIncrementalMigrationStrategyRequest::GetBucketId() const
{
    return m_bucketId;
}

void ModifyIncrementalMigrationStrategyRequest::SetBucketId(const string& _bucketId)
{
    m_bucketId = _bucketId;
    m_bucketIdHasBeenSet = true;
}

bool ModifyIncrementalMigrationStrategyRequest::BucketIdHasBeenSet() const
{
    return m_bucketIdHasBeenSet;
}

string ModifyIncrementalMigrationStrategyRequest::GetStrategyId() const
{
    return m_strategyId;
}

void ModifyIncrementalMigrationStrategyRequest::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool ModifyIncrementalMigrationStrategyRequest::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string ModifyIncrementalMigrationStrategyRequest::GetStrategyName() const
{
    return m_strategyName;
}

void ModifyIncrementalMigrationStrategyRequest::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool ModifyIncrementalMigrationStrategyRequest::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string ModifyIncrementalMigrationStrategyRequest::GetOriginType() const
{
    return m_originType;
}

void ModifyIncrementalMigrationStrategyRequest::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool ModifyIncrementalMigrationStrategyRequest::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

IncrementalMigrationHttpOriginConfig ModifyIncrementalMigrationStrategyRequest::GetHttpOriginConfig() const
{
    return m_httpOriginConfig;
}

void ModifyIncrementalMigrationStrategyRequest::SetHttpOriginConfig(const IncrementalMigrationHttpOriginConfig& _httpOriginConfig)
{
    m_httpOriginConfig = _httpOriginConfig;
    m_httpOriginConfigHasBeenSet = true;
}

bool ModifyIncrementalMigrationStrategyRequest::HttpOriginConfigHasBeenSet() const
{
    return m_httpOriginConfigHasBeenSet;
}


