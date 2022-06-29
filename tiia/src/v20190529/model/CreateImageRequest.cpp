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

#include <tencentcloud/tiia/v20190529/model/CreateImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

CreateImageRequest::CreateImageRequest() :
    m_groupIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_picNameHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_customContentHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_enableDetectHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_imageRectHasBeenSet(false)
{
}

string CreateImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_picNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_picName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_customContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customContent.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDetect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDetect, allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_imageRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageRect.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateImageRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateImageRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateImageRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CreateImageRequest::GetEntityId() const
{
    return m_entityId;
}

void CreateImageRequest::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool CreateImageRequest::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string CreateImageRequest::GetPicName() const
{
    return m_picName;
}

void CreateImageRequest::SetPicName(const string& _picName)
{
    m_picName = _picName;
    m_picNameHasBeenSet = true;
}

bool CreateImageRequest::PicNameHasBeenSet() const
{
    return m_picNameHasBeenSet;
}

string CreateImageRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void CreateImageRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool CreateImageRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string CreateImageRequest::GetCustomContent() const
{
    return m_customContent;
}

void CreateImageRequest::SetCustomContent(const string& _customContent)
{
    m_customContent = _customContent;
    m_customContentHasBeenSet = true;
}

bool CreateImageRequest::CustomContentHasBeenSet() const
{
    return m_customContentHasBeenSet;
}

string CreateImageRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void CreateImageRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool CreateImageRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string CreateImageRequest::GetTags() const
{
    return m_tags;
}

void CreateImageRequest::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateImageRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateImageRequest::GetEnableDetect() const
{
    return m_enableDetect;
}

void CreateImageRequest::SetEnableDetect(const bool& _enableDetect)
{
    m_enableDetect = _enableDetect;
    m_enableDetectHasBeenSet = true;
}

bool CreateImageRequest::EnableDetectHasBeenSet() const
{
    return m_enableDetectHasBeenSet;
}

int64_t CreateImageRequest::GetCategoryId() const
{
    return m_categoryId;
}

void CreateImageRequest::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CreateImageRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

Rect CreateImageRequest::GetImageRect() const
{
    return m_imageRect;
}

void CreateImageRequest::SetImageRect(const Rect& _imageRect)
{
    m_imageRect = _imageRect;
    m_imageRectHasBeenSet = true;
}

bool CreateImageRequest::ImageRectHasBeenSet() const
{
    return m_imageRectHasBeenSet;
}


