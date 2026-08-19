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

#include <tencentcloud/csip/v20221121/model/BaselineClusterAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineClusterAsset::BaselineClusterAsset() :
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_onlineNodeCountHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_assetNameHasBeenSet(false)
{
}

CoreInternalOutcome BaselineClusterAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineClusterAsset.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineClusterAsset.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineClusterAsset.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineClusterAsset.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("OnlineNodeCount") && !value["OnlineNodeCount"].IsNull())
    {
        if (!value["OnlineNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineClusterAsset.OnlineNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineNodeCount = value["OnlineNodeCount"].GetUint64();
        m_onlineNodeCountHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineClusterAsset.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineClusterAsset.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineClusterAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_onlineNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineNodeCount, allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

}


string BaselineClusterAsset::GetClusterID() const
{
    return m_clusterID;
}

void BaselineClusterAsset::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool BaselineClusterAsset::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string BaselineClusterAsset::GetClusterName() const
{
    return m_clusterName;
}

void BaselineClusterAsset::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool BaselineClusterAsset::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string BaselineClusterAsset::GetClusterType() const
{
    return m_clusterType;
}

void BaselineClusterAsset::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool BaselineClusterAsset::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

uint64_t BaselineClusterAsset::GetNodeCount() const
{
    return m_nodeCount;
}

void BaselineClusterAsset::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool BaselineClusterAsset::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

uint64_t BaselineClusterAsset::GetOnlineNodeCount() const
{
    return m_onlineNodeCount;
}

void BaselineClusterAsset::SetOnlineNodeCount(const uint64_t& _onlineNodeCount)
{
    m_onlineNodeCount = _onlineNodeCount;
    m_onlineNodeCountHasBeenSet = true;
}

bool BaselineClusterAsset::OnlineNodeCountHasBeenSet() const
{
    return m_onlineNodeCountHasBeenSet;
}

uint64_t BaselineClusterAsset::GetAppid() const
{
    return m_appid;
}

void BaselineClusterAsset::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool BaselineClusterAsset::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string BaselineClusterAsset::GetAssetName() const
{
    return m_assetName;
}

void BaselineClusterAsset::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool BaselineClusterAsset::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

