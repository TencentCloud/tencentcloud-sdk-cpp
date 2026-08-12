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

#include <tencentcloud/rce/v20260130/model/DigitalOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

DigitalOrder::DigitalOrder() :
    m_digitalAssetHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

CoreInternalOutcome DigitalOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DigitalAsset") && !value["DigitalAsset"].IsNull())
    {
        if (!value["DigitalAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DigitalOrder.DigitalAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digitalAsset = string(value["DigitalAsset"].GetString());
        m_digitalAssetHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DigitalOrder.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("OrderType") && !value["OrderType"].IsNull())
    {
        if (!value["OrderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DigitalOrder.OrderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderType = string(value["OrderType"].GetString());
        m_orderTypeHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DigitalOrder.Volume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetDouble();
        m_volumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DigitalOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_digitalAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DigitalAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_digitalAsset.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

}


string DigitalOrder::GetDigitalAsset() const
{
    return m_digitalAsset;
}

void DigitalOrder::SetDigitalAsset(const string& _digitalAsset)
{
    m_digitalAsset = _digitalAsset;
    m_digitalAssetHasBeenSet = true;
}

bool DigitalOrder::DigitalAssetHasBeenSet() const
{
    return m_digitalAssetHasBeenSet;
}

string DigitalOrder::GetAssetType() const
{
    return m_assetType;
}

void DigitalOrder::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DigitalOrder::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DigitalOrder::GetOrderType() const
{
    return m_orderType;
}

void DigitalOrder::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DigitalOrder::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

double DigitalOrder::GetVolume() const
{
    return m_volume;
}

void DigitalOrder::SetVolume(const double& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool DigitalOrder::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

