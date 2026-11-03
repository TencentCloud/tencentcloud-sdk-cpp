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

#include <tencentcloud/csip/v20221121/model/HostAutoScaleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

HostAutoScaleConfig::HostAutoScaleConfig() :
    m_switchHasBeenSet(false),
    m_protectTypeHasBeenSet(false),
    m_assetRangeHasBeenSet(false),
    m_tagIdsHasBeenSet(false)
{
}

CoreInternalOutcome HostAutoScaleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostAutoScaleConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ProtectType") && !value["ProtectType"].IsNull())
    {
        if (!value["ProtectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostAutoScaleConfig.ProtectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectType = string(value["ProtectType"].GetString());
        m_protectTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetRange") && !value["AssetRange"].IsNull())
    {
        if (!value["AssetRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostAutoScaleConfig.AssetRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRange = string(value["AssetRange"].GetString());
        m_assetRangeHasBeenSet = true;
    }

    if (value.HasMember("TagIds") && !value["TagIds"].IsNull())
    {
        if (!value["TagIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostAutoScaleConfig.TagIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TagIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagIds.push_back((*itr).GetInt64());
        }
        m_tagIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostAutoScaleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_protectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetRange.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string HostAutoScaleConfig::GetSwitch() const
{
    return m_switch;
}

void HostAutoScaleConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool HostAutoScaleConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string HostAutoScaleConfig::GetProtectType() const
{
    return m_protectType;
}

void HostAutoScaleConfig::SetProtectType(const string& _protectType)
{
    m_protectType = _protectType;
    m_protectTypeHasBeenSet = true;
}

bool HostAutoScaleConfig::ProtectTypeHasBeenSet() const
{
    return m_protectTypeHasBeenSet;
}

string HostAutoScaleConfig::GetAssetRange() const
{
    return m_assetRange;
}

void HostAutoScaleConfig::SetAssetRange(const string& _assetRange)
{
    m_assetRange = _assetRange;
    m_assetRangeHasBeenSet = true;
}

bool HostAutoScaleConfig::AssetRangeHasBeenSet() const
{
    return m_assetRangeHasBeenSet;
}

vector<int64_t> HostAutoScaleConfig::GetTagIds() const
{
    return m_tagIds;
}

void HostAutoScaleConfig::SetTagIds(const vector<int64_t>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool HostAutoScaleConfig::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

