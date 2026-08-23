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

#include <tencentcloud/csip/v20221121/model/ImageComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageComponent::ImageComponent() :
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_imageIDHasBeenSet(false),
    m_vulCountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_componentIdHasBeenSet(false)
{
}

CoreInternalOutcome ImageComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComponent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComponent.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComponent.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComponent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComponent.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("VulCount") && !value["VulCount"].IsNull())
    {
        if (!value["VulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComponent.VulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCount = value["VulCount"].GetUint64();
        m_vulCountHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComponent.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ComponentId") && !value["ComponentId"].IsNull())
    {
        if (!value["ComponentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComponent.ComponentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_componentId = value["ComponentId"].GetUint64();
        m_componentIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCount, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_componentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentId, allocator);
    }

}


string ImageComponent::GetName() const
{
    return m_name;
}

void ImageComponent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageComponent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImageComponent::GetVersion() const
{
    return m_version;
}

void ImageComponent::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ImageComponent::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ImageComponent::GetPath() const
{
    return m_path;
}

void ImageComponent::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ImageComponent::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ImageComponent::GetType() const
{
    return m_type;
}

void ImageComponent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageComponent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ImageComponent::GetImageID() const
{
    return m_imageID;
}

void ImageComponent::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool ImageComponent::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

uint64_t ImageComponent::GetVulCount() const
{
    return m_vulCount;
}

void ImageComponent::SetVulCount(const uint64_t& _vulCount)
{
    m_vulCount = _vulCount;
    m_vulCountHasBeenSet = true;
}

bool ImageComponent::VulCountHasBeenSet() const
{
    return m_vulCountHasBeenSet;
}

string ImageComponent::GetId() const
{
    return m_id;
}

void ImageComponent::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImageComponent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ImageComponent::GetComponentId() const
{
    return m_componentId;
}

void ImageComponent::SetComponentId(const uint64_t& _componentId)
{
    m_componentId = _componentId;
    m_componentIdHasBeenSet = true;
}

bool ImageComponent::ComponentIdHasBeenSet() const
{
    return m_componentIdHasBeenSet;
}

