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

#include <tencentcloud/tcss/v20201101/model/VulIgnoreRegistryImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulIgnoreRegistryImage::VulIgnoreRegistryImage() :
    m_iDHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_registryPathHasBeenSet(false),
    m_imageIDHasBeenSet(false),
    m_pocIDHasBeenSet(false)
{
}

CoreInternalOutcome VulIgnoreRegistryImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRegistryImage.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("RegistryName") && !value["RegistryName"].IsNull())
    {
        if (!value["RegistryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRegistryImage.RegistryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryName = string(value["RegistryName"].GetString());
        m_registryNameHasBeenSet = true;
    }

    if (value.HasMember("ImageVersion") && !value["ImageVersion"].IsNull())
    {
        if (!value["ImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRegistryImage.ImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersion = string(value["ImageVersion"].GetString());
        m_imageVersionHasBeenSet = true;
    }

    if (value.HasMember("RegistryPath") && !value["RegistryPath"].IsNull())
    {
        if (!value["RegistryPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRegistryImage.RegistryPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryPath = string(value["RegistryPath"].GetString());
        m_registryPathHasBeenSet = true;
    }

    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRegistryImage.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("PocID") && !value["PocID"].IsNull())
    {
        if (!value["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRegistryImage.PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(value["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulIgnoreRegistryImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_registryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_registryPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryPath.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_pocIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocID.c_str(), allocator).Move(), allocator);
    }

}


int64_t VulIgnoreRegistryImage::GetID() const
{
    return m_iD;
}

void VulIgnoreRegistryImage::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool VulIgnoreRegistryImage::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string VulIgnoreRegistryImage::GetRegistryName() const
{
    return m_registryName;
}

void VulIgnoreRegistryImage::SetRegistryName(const string& _registryName)
{
    m_registryName = _registryName;
    m_registryNameHasBeenSet = true;
}

bool VulIgnoreRegistryImage::RegistryNameHasBeenSet() const
{
    return m_registryNameHasBeenSet;
}

string VulIgnoreRegistryImage::GetImageVersion() const
{
    return m_imageVersion;
}

void VulIgnoreRegistryImage::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool VulIgnoreRegistryImage::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

string VulIgnoreRegistryImage::GetRegistryPath() const
{
    return m_registryPath;
}

void VulIgnoreRegistryImage::SetRegistryPath(const string& _registryPath)
{
    m_registryPath = _registryPath;
    m_registryPathHasBeenSet = true;
}

bool VulIgnoreRegistryImage::RegistryPathHasBeenSet() const
{
    return m_registryPathHasBeenSet;
}

string VulIgnoreRegistryImage::GetImageID() const
{
    return m_imageID;
}

void VulIgnoreRegistryImage::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool VulIgnoreRegistryImage::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string VulIgnoreRegistryImage::GetPocID() const
{
    return m_pocID;
}

void VulIgnoreRegistryImage::SetPocID(const string& _pocID)
{
    m_pocID = _pocID;
    m_pocIDHasBeenSet = true;
}

bool VulIgnoreRegistryImage::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

