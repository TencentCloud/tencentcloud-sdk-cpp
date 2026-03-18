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

#include <tencentcloud/tione/v20211111/model/MaterialInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

MaterialInfo::MaterialInfo() :
    m_storageTypeHasBeenSet(false),
    m_cosPathInfoHasBeenSet(false),
    m_materialNameHasBeenSet(false),
    m_materialTypeHasBeenSet(false),
    m_mountPathHasBeenSet(false)
{
}

CoreInternalOutcome MaterialInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("CosPathInfo") && !value["CosPathInfo"].IsNull())
    {
        if (!value["CosPathInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.CosPathInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosPathInfo.Deserialize(value["CosPathInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosPathInfoHasBeenSet = true;
    }

    if (value.HasMember("MaterialName") && !value["MaterialName"].IsNull())
    {
        if (!value["MaterialName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.MaterialName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialName = string(value["MaterialName"].GetString());
        m_materialNameHasBeenSet = true;
    }

    if (value.HasMember("MaterialType") && !value["MaterialType"].IsNull())
    {
        if (!value["MaterialType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.MaterialType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialType = string(value["MaterialType"].GetString());
        m_materialTypeHasBeenSet = true;
    }

    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_cosPathInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPathInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosPathInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialName.c_str(), allocator).Move(), allocator);
    }

    if (m_materialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialType.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPath.c_str(), allocator).Move(), allocator);
    }

}


string MaterialInfo::GetStorageType() const
{
    return m_storageType;
}

void MaterialInfo::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool MaterialInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

CosPathInfo MaterialInfo::GetCosPathInfo() const
{
    return m_cosPathInfo;
}

void MaterialInfo::SetCosPathInfo(const CosPathInfo& _cosPathInfo)
{
    m_cosPathInfo = _cosPathInfo;
    m_cosPathInfoHasBeenSet = true;
}

bool MaterialInfo::CosPathInfoHasBeenSet() const
{
    return m_cosPathInfoHasBeenSet;
}

string MaterialInfo::GetMaterialName() const
{
    return m_materialName;
}

void MaterialInfo::SetMaterialName(const string& _materialName)
{
    m_materialName = _materialName;
    m_materialNameHasBeenSet = true;
}

bool MaterialInfo::MaterialNameHasBeenSet() const
{
    return m_materialNameHasBeenSet;
}

string MaterialInfo::GetMaterialType() const
{
    return m_materialType;
}

void MaterialInfo::SetMaterialType(const string& _materialType)
{
    m_materialType = _materialType;
    m_materialTypeHasBeenSet = true;
}

bool MaterialInfo::MaterialTypeHasBeenSet() const
{
    return m_materialTypeHasBeenSet;
}

string MaterialInfo::GetMountPath() const
{
    return m_mountPath;
}

void MaterialInfo::SetMountPath(const string& _mountPath)
{
    m_mountPath = _mountPath;
    m_mountPathHasBeenSet = true;
}

bool MaterialInfo::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

