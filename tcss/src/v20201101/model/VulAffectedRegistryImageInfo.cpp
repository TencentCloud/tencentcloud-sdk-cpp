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

#include <tencentcloud/tcss/v20201101/model/VulAffectedRegistryImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulAffectedRegistryImageInfo::VulAffectedRegistryImageInfo() :
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_imageRepoAddressHasBeenSet(false),
    m_componentListHasBeenSet(false),
    m_isLatestImageHasBeenSet(false),
    m_imageAssetIdHasBeenSet(false)
{
}

CoreInternalOutcome VulAffectedRegistryImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedRegistryImageInfo.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedRegistryImageInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedRegistryImageInfo.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedRegistryImageInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ImageRepoAddress") && !value["ImageRepoAddress"].IsNull())
    {
        if (!value["ImageRepoAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedRegistryImageInfo.ImageRepoAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRepoAddress = string(value["ImageRepoAddress"].GetString());
        m_imageRepoAddressHasBeenSet = true;
    }

    if (value.HasMember("ComponentList") && !value["ComponentList"].IsNull())
    {
        if (!value["ComponentList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulAffectedRegistryImageInfo.ComponentList` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulAffectedImageComponentInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_componentList.push_back(item);
        }
        m_componentListHasBeenSet = true;
    }

    if (value.HasMember("IsLatestImage") && !value["IsLatestImage"].IsNull())
    {
        if (!value["IsLatestImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedRegistryImageInfo.IsLatestImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLatestImage = value["IsLatestImage"].GetBool();
        m_isLatestImageHasBeenSet = true;
    }

    if (value.HasMember("ImageAssetId") && !value["ImageAssetId"].IsNull())
    {
        if (!value["ImageAssetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedRegistryImageInfo.ImageAssetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageAssetId = value["ImageAssetId"].GetInt64();
        m_imageAssetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulAffectedRegistryImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageTag.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRepoAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRepoAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRepoAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_componentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_componentList.begin(); itr != m_componentList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isLatestImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatestImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLatestImage, allocator);
    }

    if (m_imageAssetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageAssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageAssetId, allocator);
    }

}


string VulAffectedRegistryImageInfo::GetImageID() const
{
    return m_imageID;
}

void VulAffectedRegistryImageInfo::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool VulAffectedRegistryImageInfo::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string VulAffectedRegistryImageInfo::GetImageName() const
{
    return m_imageName;
}

void VulAffectedRegistryImageInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool VulAffectedRegistryImageInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string VulAffectedRegistryImageInfo::GetImageTag() const
{
    return m_imageTag;
}

void VulAffectedRegistryImageInfo::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool VulAffectedRegistryImageInfo::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

string VulAffectedRegistryImageInfo::GetNamespace() const
{
    return m_namespace;
}

void VulAffectedRegistryImageInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool VulAffectedRegistryImageInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string VulAffectedRegistryImageInfo::GetImageRepoAddress() const
{
    return m_imageRepoAddress;
}

void VulAffectedRegistryImageInfo::SetImageRepoAddress(const string& _imageRepoAddress)
{
    m_imageRepoAddress = _imageRepoAddress;
    m_imageRepoAddressHasBeenSet = true;
}

bool VulAffectedRegistryImageInfo::ImageRepoAddressHasBeenSet() const
{
    return m_imageRepoAddressHasBeenSet;
}

vector<VulAffectedImageComponentInfo> VulAffectedRegistryImageInfo::GetComponentList() const
{
    return m_componentList;
}

void VulAffectedRegistryImageInfo::SetComponentList(const vector<VulAffectedImageComponentInfo>& _componentList)
{
    m_componentList = _componentList;
    m_componentListHasBeenSet = true;
}

bool VulAffectedRegistryImageInfo::ComponentListHasBeenSet() const
{
    return m_componentListHasBeenSet;
}

bool VulAffectedRegistryImageInfo::GetIsLatestImage() const
{
    return m_isLatestImage;
}

void VulAffectedRegistryImageInfo::SetIsLatestImage(const bool& _isLatestImage)
{
    m_isLatestImage = _isLatestImage;
    m_isLatestImageHasBeenSet = true;
}

bool VulAffectedRegistryImageInfo::IsLatestImageHasBeenSet() const
{
    return m_isLatestImageHasBeenSet;
}

int64_t VulAffectedRegistryImageInfo::GetImageAssetId() const
{
    return m_imageAssetId;
}

void VulAffectedRegistryImageInfo::SetImageAssetId(const int64_t& _imageAssetId)
{
    m_imageAssetId = _imageAssetId;
    m_imageAssetIdHasBeenSet = true;
}

bool VulAffectedRegistryImageInfo::ImageAssetIdHasBeenSet() const
{
    return m_imageAssetIdHasBeenSet;
}

