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

#include <tencentcloud/ape/v20200513/model/ImageItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ape::V20200513::Model;
using namespace rapidjson;
using namespace std;

ImageItem::ImageItem() :
    m_imageIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_previewUrlHasBeenSet(false),
    m_thumbUrlHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_keywordsHasBeenSet(false)
{
}

CoreInternalOutcome ImageItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageItem.ImageId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = value["ImageId"].GetUint64();
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PreviewUrl") && !value["PreviewUrl"].IsNull())
    {
        if (!value["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageItem.PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(value["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }

    if (value.HasMember("ThumbUrl") && !value["ThumbUrl"].IsNull())
    {
        if (!value["ThumbUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageItem.ThumbUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbUrl = string(value["ThumbUrl"].GetString());
        m_thumbUrlHasBeenSet = true;
    }

    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageItem.Vendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = string(value["Vendor"].GetString());
        m_vendorHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageItem.Keywords` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywords = string(value["Keywords"].GetString());
        m_keywordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageId, allocator);
    }

    if (m_titleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_previewUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_previewUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_thumbUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ThumbUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_thumbUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vendor.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_keywords.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ImageItem::GetImageId() const
{
    return m_imageId;
}

void ImageItem::SetImageId(const uint64_t& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ImageItem::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ImageItem::GetTitle() const
{
    return m_title;
}

void ImageItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ImageItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string ImageItem::GetDescription() const
{
    return m_description;
}

void ImageItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ImageItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ImageItem::GetPreviewUrl() const
{
    return m_previewUrl;
}

void ImageItem::SetPreviewUrl(const string& _previewUrl)
{
    m_previewUrl = _previewUrl;
    m_previewUrlHasBeenSet = true;
}

bool ImageItem::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}

string ImageItem::GetThumbUrl() const
{
    return m_thumbUrl;
}

void ImageItem::SetThumbUrl(const string& _thumbUrl)
{
    m_thumbUrl = _thumbUrl;
    m_thumbUrlHasBeenSet = true;
}

bool ImageItem::ThumbUrlHasBeenSet() const
{
    return m_thumbUrlHasBeenSet;
}

string ImageItem::GetVendor() const
{
    return m_vendor;
}

void ImageItem::SetVendor(const string& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool ImageItem::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

string ImageItem::GetKeywords() const
{
    return m_keywords;
}

void ImageItem::SetKeywords(const string& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool ImageItem::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

