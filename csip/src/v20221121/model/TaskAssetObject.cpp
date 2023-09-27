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

#include <tencentcloud/csip/v20221121/model/TaskAssetObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TaskAssetObject::TaskAssetObject() :
    m_assetNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

CoreInternalOutcome TaskAssetObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAssetObject.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAssetObject.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAssetObject.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Asset") && !value["Asset"].IsNull())
    {
        if (!value["Asset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAssetObject.Asset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asset = string(value["Asset"].GetString());
        m_assetHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAssetObject.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Arn") && !value["Arn"].IsNull())
    {
        if (!value["Arn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAssetObject.Arn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arn = string(value["Arn"].GetString());
        m_arnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskAssetObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asset.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_arnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arn.c_str(), allocator).Move(), allocator);
    }

}


string TaskAssetObject::GetAssetName() const
{
    return m_assetName;
}

void TaskAssetObject::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool TaskAssetObject::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string TaskAssetObject::GetInstanceType() const
{
    return m_instanceType;
}

void TaskAssetObject::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool TaskAssetObject::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string TaskAssetObject::GetAssetType() const
{
    return m_assetType;
}

void TaskAssetObject::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool TaskAssetObject::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string TaskAssetObject::GetAsset() const
{
    return m_asset;
}

void TaskAssetObject::SetAsset(const string& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool TaskAssetObject::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string TaskAssetObject::GetRegion() const
{
    return m_region;
}

void TaskAssetObject::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool TaskAssetObject::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string TaskAssetObject::GetArn() const
{
    return m_arn;
}

void TaskAssetObject::SetArn(const string& _arn)
{
    m_arn = _arn;
    m_arnHasBeenSet = true;
}

bool TaskAssetObject::ArnHasBeenSet() const
{
    return m_arnHasBeenSet;
}

