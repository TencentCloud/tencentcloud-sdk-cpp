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

#include <tencentcloud/cme/v20191029/model/ImageMaterial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

ImageMaterial::ImageMaterial() :
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_materialUrlHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_originalUrlHasBeenSet(false),
    m_vodFileIdHasBeenSet(false)
{
}

CoreInternalOutcome ImageMaterial::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMaterial.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMaterial.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("MaterialUrl") && !value["MaterialUrl"].IsNull())
    {
        if (!value["MaterialUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMaterial.MaterialUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialUrl = string(value["MaterialUrl"].GetString());
        m_materialUrlHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMaterial.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("OriginalUrl") && !value["OriginalUrl"].IsNull())
    {
        if (!value["OriginalUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMaterial.OriginalUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalUrl = string(value["OriginalUrl"].GetString());
        m_originalUrlHasBeenSet = true;
    }

    if (value.HasMember("VodFileId") && !value["VodFileId"].IsNull())
    {
        if (!value["VodFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMaterial.VodFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodFileId = string(value["VodFileId"].GetString());
        m_vodFileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageMaterial::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_materialUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_originalUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_vodFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodFileId.c_str(), allocator).Move(), allocator);
    }

}


int64_t ImageMaterial::GetHeight() const
{
    return m_height;
}

void ImageMaterial::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ImageMaterial::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t ImageMaterial::GetWidth() const
{
    return m_width;
}

void ImageMaterial::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ImageMaterial::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string ImageMaterial::GetMaterialUrl() const
{
    return m_materialUrl;
}

void ImageMaterial::SetMaterialUrl(const string& _materialUrl)
{
    m_materialUrl = _materialUrl;
    m_materialUrlHasBeenSet = true;
}

bool ImageMaterial::MaterialUrlHasBeenSet() const
{
    return m_materialUrlHasBeenSet;
}

int64_t ImageMaterial::GetSize() const
{
    return m_size;
}

void ImageMaterial::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ImageMaterial::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ImageMaterial::GetOriginalUrl() const
{
    return m_originalUrl;
}

void ImageMaterial::SetOriginalUrl(const string& _originalUrl)
{
    m_originalUrl = _originalUrl;
    m_originalUrlHasBeenSet = true;
}

bool ImageMaterial::OriginalUrlHasBeenSet() const
{
    return m_originalUrlHasBeenSet;
}

string ImageMaterial::GetVodFileId() const
{
    return m_vodFileId;
}

void ImageMaterial::SetVodFileId(const string& _vodFileId)
{
    m_vodFileId = _vodFileId;
    m_vodFileIdHasBeenSet = true;
}

bool ImageMaterial::VodFileIdHasBeenSet() const
{
    return m_vodFileIdHasBeenSet;
}

