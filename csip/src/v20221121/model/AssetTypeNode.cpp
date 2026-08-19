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

#include <tencentcloud/csip/v20221121/model/AssetTypeNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetTypeNode::AssetTypeNode() :
    m_assetTypeHasBeenSet(false),
    m_assetTypeNameHasBeenSet(false),
    m_assetCountHasBeenSet(false),
    m_assetTypeIDHasBeenSet(false)
{
}

CoreInternalOutcome AssetTypeNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeNode.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeName") && !value["AssetTypeName"].IsNull())
    {
        if (!value["AssetTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeNode.AssetTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeName = string(value["AssetTypeName"].GetString());
        m_assetTypeNameHasBeenSet = true;
    }

    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeNode.AssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetUint64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeID") && !value["AssetTypeID"].IsNull())
    {
        if (!value["AssetTypeID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeNode.AssetTypeID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeID = value["AssetTypeID"].GetUint64();
        m_assetTypeIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetTypeNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

    if (m_assetTypeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetTypeID, allocator);
    }

}


string AssetTypeNode::GetAssetType() const
{
    return m_assetType;
}

void AssetTypeNode::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool AssetTypeNode::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string AssetTypeNode::GetAssetTypeName() const
{
    return m_assetTypeName;
}

void AssetTypeNode::SetAssetTypeName(const string& _assetTypeName)
{
    m_assetTypeName = _assetTypeName;
    m_assetTypeNameHasBeenSet = true;
}

bool AssetTypeNode::AssetTypeNameHasBeenSet() const
{
    return m_assetTypeNameHasBeenSet;
}

uint64_t AssetTypeNode::GetAssetCount() const
{
    return m_assetCount;
}

void AssetTypeNode::SetAssetCount(const uint64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool AssetTypeNode::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

uint64_t AssetTypeNode::GetAssetTypeID() const
{
    return m_assetTypeID;
}

void AssetTypeNode::SetAssetTypeID(const uint64_t& _assetTypeID)
{
    m_assetTypeID = _assetTypeID;
    m_assetTypeIDHasBeenSet = true;
}

bool AssetTypeNode::AssetTypeIDHasBeenSet() const
{
    return m_assetTypeIDHasBeenSet;
}

