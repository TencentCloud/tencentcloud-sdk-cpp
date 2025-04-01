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

#include <tencentcloud/vod/v20240718/model/IncrementalMigrationOriginFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

IncrementalMigrationOriginFileInfo::IncrementalMigrationOriginFileInfo() :
    m_prefixConfigHasBeenSet(false),
    m_suffixConfigHasBeenSet(false),
    m_fixedFileConfigHasBeenSet(false)
{
}

CoreInternalOutcome IncrementalMigrationOriginFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrefixConfig") && !value["PrefixConfig"].IsNull())
    {
        if (!value["PrefixConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationOriginFileInfo.PrefixConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prefixConfig.Deserialize(value["PrefixConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prefixConfigHasBeenSet = true;
    }

    if (value.HasMember("SuffixConfig") && !value["SuffixConfig"].IsNull())
    {
        if (!value["SuffixConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationOriginFileInfo.SuffixConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_suffixConfig.Deserialize(value["SuffixConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_suffixConfigHasBeenSet = true;
    }

    if (value.HasMember("FixedFileConfig") && !value["FixedFileConfig"].IsNull())
    {
        if (!value["FixedFileConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationOriginFileInfo.FixedFileConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fixedFileConfig.Deserialize(value["FixedFileConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fixedFileConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncrementalMigrationOriginFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_prefixConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrefixConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prefixConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_suffixConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuffixConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_suffixConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fixedFileConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedFileConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fixedFileConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


IncrementalMigrationOriginPrefixConfig IncrementalMigrationOriginFileInfo::GetPrefixConfig() const
{
    return m_prefixConfig;
}

void IncrementalMigrationOriginFileInfo::SetPrefixConfig(const IncrementalMigrationOriginPrefixConfig& _prefixConfig)
{
    m_prefixConfig = _prefixConfig;
    m_prefixConfigHasBeenSet = true;
}

bool IncrementalMigrationOriginFileInfo::PrefixConfigHasBeenSet() const
{
    return m_prefixConfigHasBeenSet;
}

IncrementalMigrationOriginSuffixConfig IncrementalMigrationOriginFileInfo::GetSuffixConfig() const
{
    return m_suffixConfig;
}

void IncrementalMigrationOriginFileInfo::SetSuffixConfig(const IncrementalMigrationOriginSuffixConfig& _suffixConfig)
{
    m_suffixConfig = _suffixConfig;
    m_suffixConfigHasBeenSet = true;
}

bool IncrementalMigrationOriginFileInfo::SuffixConfigHasBeenSet() const
{
    return m_suffixConfigHasBeenSet;
}

IncrementalMigrationOriginFixedFileConfig IncrementalMigrationOriginFileInfo::GetFixedFileConfig() const
{
    return m_fixedFileConfig;
}

void IncrementalMigrationOriginFileInfo::SetFixedFileConfig(const IncrementalMigrationOriginFixedFileConfig& _fixedFileConfig)
{
    m_fixedFileConfig = _fixedFileConfig;
    m_fixedFileConfigHasBeenSet = true;
}

bool IncrementalMigrationOriginFileInfo::FixedFileConfigHasBeenSet() const
{
    return m_fixedFileConfigHasBeenSet;
}

