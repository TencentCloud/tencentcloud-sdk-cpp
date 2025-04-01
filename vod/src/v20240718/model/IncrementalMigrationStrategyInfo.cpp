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

#include <tencentcloud/vod/v20240718/model/IncrementalMigrationStrategyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

IncrementalMigrationStrategyInfo::IncrementalMigrationStrategyInfo() :
    m_strategyIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_bucketIdHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_httpOriginConfigHasBeenSet(false)
{
}

CoreInternalOutcome IncrementalMigrationStrategyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationStrategyInfo.StrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = string(value["StrategyId"].GetString());
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationStrategyInfo.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationStrategyInfo.SubAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = value["SubAppId"].GetUint64();
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("BucketId") && !value["BucketId"].IsNull())
    {
        if (!value["BucketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationStrategyInfo.BucketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketId = string(value["BucketId"].GetString());
        m_bucketIdHasBeenSet = true;
    }

    if (value.HasMember("OriginType") && !value["OriginType"].IsNull())
    {
        if (!value["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationStrategyInfo.OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(value["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (value.HasMember("HttpOriginConfig") && !value["HttpOriginConfig"].IsNull())
    {
        if (!value["HttpOriginConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationStrategyInfo.HttpOriginConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_httpOriginConfig.Deserialize(value["HttpOriginConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpOriginConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncrementalMigrationStrategyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_bucketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketId.c_str(), allocator).Move(), allocator);
    }

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_httpOriginConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpOriginConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_httpOriginConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string IncrementalMigrationStrategyInfo::GetStrategyId() const
{
    return m_strategyId;
}

void IncrementalMigrationStrategyInfo::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool IncrementalMigrationStrategyInfo::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string IncrementalMigrationStrategyInfo::GetStrategyName() const
{
    return m_strategyName;
}

void IncrementalMigrationStrategyInfo::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool IncrementalMigrationStrategyInfo::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

uint64_t IncrementalMigrationStrategyInfo::GetSubAppId() const
{
    return m_subAppId;
}

void IncrementalMigrationStrategyInfo::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool IncrementalMigrationStrategyInfo::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string IncrementalMigrationStrategyInfo::GetBucketId() const
{
    return m_bucketId;
}

void IncrementalMigrationStrategyInfo::SetBucketId(const string& _bucketId)
{
    m_bucketId = _bucketId;
    m_bucketIdHasBeenSet = true;
}

bool IncrementalMigrationStrategyInfo::BucketIdHasBeenSet() const
{
    return m_bucketIdHasBeenSet;
}

string IncrementalMigrationStrategyInfo::GetOriginType() const
{
    return m_originType;
}

void IncrementalMigrationStrategyInfo::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool IncrementalMigrationStrategyInfo::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

IncrementalMigrationHttpOriginConfig IncrementalMigrationStrategyInfo::GetHttpOriginConfig() const
{
    return m_httpOriginConfig;
}

void IncrementalMigrationStrategyInfo::SetHttpOriginConfig(const IncrementalMigrationHttpOriginConfig& _httpOriginConfig)
{
    m_httpOriginConfig = _httpOriginConfig;
    m_httpOriginConfigHasBeenSet = true;
}

bool IncrementalMigrationStrategyInfo::HttpOriginConfigHasBeenSet() const
{
    return m_httpOriginConfigHasBeenSet;
}

