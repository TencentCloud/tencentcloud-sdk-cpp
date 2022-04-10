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

#include <tencentcloud/ssa/v20180608/model/AssetTypeStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

AssetTypeStatistic::AssetTypeStatistic() :
    m_assetTypeHasBeenSet(false),
    m_assetCountHasBeenSet(false)
{
}

CoreInternalOutcome AssetTypeStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeStatistic.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeStatistic.AssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetUint64();
        m_assetCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetTypeStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

}


string AssetTypeStatistic::GetAssetType() const
{
    return m_assetType;
}

void AssetTypeStatistic::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool AssetTypeStatistic::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

uint64_t AssetTypeStatistic::GetAssetCount() const
{
    return m_assetCount;
}

void AssetTypeStatistic::SetAssetCount(const uint64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool AssetTypeStatistic::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

