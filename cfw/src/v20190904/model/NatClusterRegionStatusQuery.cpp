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

#include <tencentcloud/cfw/v20190904/model/NatClusterRegionStatusQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatClusterRegionStatusQuery::NatClusterRegionStatusQuery() :
    m_ccnIdHasBeenSet(false),
    m_natInsIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_routingModeHasBeenSet(false)
{
}

CoreInternalOutcome NatClusterRegionStatusQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatClusterRegionStatusQuery.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("NatInsId") && !value["NatInsId"].IsNull())
    {
        if (!value["NatInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatClusterRegionStatusQuery.NatInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natInsId = string(value["NatInsId"].GetString());
        m_natInsIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatClusterRegionStatusQuery.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("RoutingMode") && !value["RoutingMode"].IsNull())
    {
        if (!value["RoutingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatClusterRegionStatusQuery.RoutingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routingMode = value["RoutingMode"].GetInt64();
        m_routingModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatClusterRegionStatusQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_natInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_routingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routingMode, allocator);
    }

}


string NatClusterRegionStatusQuery::GetCcnId() const
{
    return m_ccnId;
}

void NatClusterRegionStatusQuery::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool NatClusterRegionStatusQuery::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string NatClusterRegionStatusQuery::GetNatInsId() const
{
    return m_natInsId;
}

void NatClusterRegionStatusQuery::SetNatInsId(const string& _natInsId)
{
    m_natInsId = _natInsId;
    m_natInsIdHasBeenSet = true;
}

bool NatClusterRegionStatusQuery::NatInsIdHasBeenSet() const
{
    return m_natInsIdHasBeenSet;
}

string NatClusterRegionStatusQuery::GetAssetType() const
{
    return m_assetType;
}

void NatClusterRegionStatusQuery::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool NatClusterRegionStatusQuery::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

int64_t NatClusterRegionStatusQuery::GetRoutingMode() const
{
    return m_routingMode;
}

void NatClusterRegionStatusQuery::SetRoutingMode(const int64_t& _routingMode)
{
    m_routingMode = _routingMode;
    m_routingModeHasBeenSet = true;
}

bool NatClusterRegionStatusQuery::RoutingModeHasBeenSet() const
{
    return m_routingModeHasBeenSet;
}

