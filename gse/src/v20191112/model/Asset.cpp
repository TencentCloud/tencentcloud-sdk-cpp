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

#include <tencentcloud/gse/v20191112/model/Asset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

Asset::Asset() :
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetVersionHasBeenSet(false),
    m_operateSystemHasBeenSet(false),
    m_stautsHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_bindFleetNumHasBeenSet(false),
    m_assetArnHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_sharingStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome Asset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetVersion") && !value["AssetVersion"].IsNull())
    {
        if (!value["AssetVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetVersion = string(value["AssetVersion"].GetString());
        m_assetVersionHasBeenSet = true;
    }

    if (value.HasMember("OperateSystem") && !value["OperateSystem"].IsNull())
    {
        if (!value["OperateSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.OperateSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateSystem = string(value["OperateSystem"].GetString());
        m_operateSystemHasBeenSet = true;
    }

    if (value.HasMember("Stauts") && !value["Stauts"].IsNull())
    {
        if (!value["Stauts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.Stauts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stauts = value["Stauts"].GetInt64();
        m_stautsHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.Size` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_size = string(value["Size"].GetString());
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BindFleetNum") && !value["BindFleetNum"].IsNull())
    {
        if (!value["BindFleetNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.BindFleetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindFleetNum = value["BindFleetNum"].GetInt64();
        m_bindFleetNumHasBeenSet = true;
    }

    if (value.HasMember("AssetArn") && !value["AssetArn"].IsNull())
    {
        if (!value["AssetArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetArn = string(value["AssetArn"].GetString());
        m_assetArnHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.OsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osType = string(value["OsType"].GetString());
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SharingStatus") && !value["SharingStatus"].IsNull())
    {
        if (!value["SharingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.SharingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharingStatus = string(value["SharingStatus"].GetString());
        m_sharingStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Asset.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Asset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_operateSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_stautsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stauts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stauts, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_size.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bindFleetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindFleetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindFleetNum, allocator);
    }

    if (m_assetArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetArn.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sharingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharingStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Asset::GetAssetId() const
{
    return m_assetId;
}

void Asset::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool Asset::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string Asset::GetAssetName() const
{
    return m_assetName;
}

void Asset::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool Asset::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string Asset::GetAssetVersion() const
{
    return m_assetVersion;
}

void Asset::SetAssetVersion(const string& _assetVersion)
{
    m_assetVersion = _assetVersion;
    m_assetVersionHasBeenSet = true;
}

bool Asset::AssetVersionHasBeenSet() const
{
    return m_assetVersionHasBeenSet;
}

string Asset::GetOperateSystem() const
{
    return m_operateSystem;
}

void Asset::SetOperateSystem(const string& _operateSystem)
{
    m_operateSystem = _operateSystem;
    m_operateSystemHasBeenSet = true;
}

bool Asset::OperateSystemHasBeenSet() const
{
    return m_operateSystemHasBeenSet;
}

int64_t Asset::GetStauts() const
{
    return m_stauts;
}

void Asset::SetStauts(const int64_t& _stauts)
{
    m_stauts = _stauts;
    m_stautsHasBeenSet = true;
}

bool Asset::StautsHasBeenSet() const
{
    return m_stautsHasBeenSet;
}

string Asset::GetSize() const
{
    return m_size;
}

void Asset::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool Asset::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string Asset::GetCreateTime() const
{
    return m_createTime;
}

void Asset::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Asset::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Asset::GetBindFleetNum() const
{
    return m_bindFleetNum;
}

void Asset::SetBindFleetNum(const int64_t& _bindFleetNum)
{
    m_bindFleetNum = _bindFleetNum;
    m_bindFleetNumHasBeenSet = true;
}

bool Asset::BindFleetNumHasBeenSet() const
{
    return m_bindFleetNumHasBeenSet;
}

string Asset::GetAssetArn() const
{
    return m_assetArn;
}

void Asset::SetAssetArn(const string& _assetArn)
{
    m_assetArn = _assetArn;
    m_assetArnHasBeenSet = true;
}

bool Asset::AssetArnHasBeenSet() const
{
    return m_assetArnHasBeenSet;
}

string Asset::GetImageId() const
{
    return m_imageId;
}

void Asset::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool Asset::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string Asset::GetOsType() const
{
    return m_osType;
}

void Asset::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool Asset::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string Asset::GetResourceType() const
{
    return m_resourceType;
}

void Asset::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool Asset::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string Asset::GetSharingStatus() const
{
    return m_sharingStatus;
}

void Asset::SetSharingStatus(const string& _sharingStatus)
{
    m_sharingStatus = _sharingStatus;
    m_sharingStatusHasBeenSet = true;
}

bool Asset::SharingStatusHasBeenSet() const
{
    return m_sharingStatusHasBeenSet;
}

vector<Tag> Asset::GetTags() const
{
    return m_tags;
}

void Asset::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Asset::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

