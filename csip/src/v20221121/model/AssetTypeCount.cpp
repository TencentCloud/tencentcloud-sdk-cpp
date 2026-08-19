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

#include <tencentcloud/csip/v20221121/model/AssetTypeCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetTypeCount::AssetTypeCount() :
    m_assetTypeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_assetTypeNameHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

CoreInternalOutcome AssetTypeCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeCount.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeCount.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeName") && !value["AssetTypeName"].IsNull())
    {
        if (!value["AssetTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeCount.AssetTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeName = string(value["AssetTypeName"].GetString());
        m_assetTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeCount.Filter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filter = string(value["Filter"].GetString());
        m_filterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetTypeCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_assetTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

}


string AssetTypeCount::GetAssetType() const
{
    return m_assetType;
}

void AssetTypeCount::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool AssetTypeCount::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

uint64_t AssetTypeCount::GetCount() const
{
    return m_count;
}

void AssetTypeCount::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool AssetTypeCount::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string AssetTypeCount::GetAssetTypeName() const
{
    return m_assetTypeName;
}

void AssetTypeCount::SetAssetTypeName(const string& _assetTypeName)
{
    m_assetTypeName = _assetTypeName;
    m_assetTypeNameHasBeenSet = true;
}

bool AssetTypeCount::AssetTypeNameHasBeenSet() const
{
    return m_assetTypeNameHasBeenSet;
}

string AssetTypeCount::GetFilter() const
{
    return m_filter;
}

void AssetTypeCount::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool AssetTypeCount::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

