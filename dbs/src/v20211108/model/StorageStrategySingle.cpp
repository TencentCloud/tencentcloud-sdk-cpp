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

#include <tencentcloud/dbs/v20211108/model/StorageStrategySingle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

StorageStrategySingle::StorageStrategySingle() :
    m_retentionTypeHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_tieredStrategyHasBeenSet(false)
{
}

CoreInternalOutcome StorageStrategySingle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RetentionType") && !value["RetentionType"].IsNull())
    {
        if (!value["RetentionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategySingle.RetentionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retentionType = string(value["RetentionType"].GetString());
        m_retentionTypeHasBeenSet = true;
    }

    if (value.HasMember("RetentionPeriod") && !value["RetentionPeriod"].IsNull())
    {
        if (!value["RetentionPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategySingle.RetentionPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionPeriod = value["RetentionPeriod"].GetInt64();
        m_retentionPeriodHasBeenSet = true;
    }

    if (value.HasMember("TieredStrategy") && !value["TieredStrategy"].IsNull())
    {
        if (!value["TieredStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategySingle.TieredStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tieredStrategy.Deserialize(value["TieredStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tieredStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageStrategySingle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_retentionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retentionType.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionPeriod, allocator);
    }

    if (m_tieredStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TieredStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tieredStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StorageStrategySingle::GetRetentionType() const
{
    return m_retentionType;
}

void StorageStrategySingle::SetRetentionType(const string& _retentionType)
{
    m_retentionType = _retentionType;
    m_retentionTypeHasBeenSet = true;
}

bool StorageStrategySingle::RetentionTypeHasBeenSet() const
{
    return m_retentionTypeHasBeenSet;
}

int64_t StorageStrategySingle::GetRetentionPeriod() const
{
    return m_retentionPeriod;
}

void StorageStrategySingle::SetRetentionPeriod(const int64_t& _retentionPeriod)
{
    m_retentionPeriod = _retentionPeriod;
    m_retentionPeriodHasBeenSet = true;
}

bool StorageStrategySingle::RetentionPeriodHasBeenSet() const
{
    return m_retentionPeriodHasBeenSet;
}

StorageTieredStrategy StorageStrategySingle::GetTieredStrategy() const
{
    return m_tieredStrategy;
}

void StorageStrategySingle::SetTieredStrategy(const StorageTieredStrategy& _tieredStrategy)
{
    m_tieredStrategy = _tieredStrategy;
    m_tieredStrategyHasBeenSet = true;
}

bool StorageStrategySingle::TieredStrategyHasBeenSet() const
{
    return m_tieredStrategyHasBeenSet;
}

