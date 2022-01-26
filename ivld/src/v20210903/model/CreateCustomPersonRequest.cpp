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

#include <tencentcloud/ivld/v20210903/model/CreateCustomPersonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

CreateCustomPersonRequest::CreateCustomPersonRequest() :
    m_nameHasBeenSet(false),
    m_basicInfoHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_imageURLHasBeenSet(false),
    m_imageHasBeenSet(false)
{
}

string CreateCustomPersonRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basicInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageURL.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCustomPersonRequest::GetName() const
{
    return m_name;
}

void CreateCustomPersonRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCustomPersonRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCustomPersonRequest::GetBasicInfo() const
{
    return m_basicInfo;
}

void CreateCustomPersonRequest::SetBasicInfo(const string& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool CreateCustomPersonRequest::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

string CreateCustomPersonRequest::GetCategoryId() const
{
    return m_categoryId;
}

void CreateCustomPersonRequest::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CreateCustomPersonRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string CreateCustomPersonRequest::GetImageURL() const
{
    return m_imageURL;
}

void CreateCustomPersonRequest::SetImageURL(const string& _imageURL)
{
    m_imageURL = _imageURL;
    m_imageURLHasBeenSet = true;
}

bool CreateCustomPersonRequest::ImageURLHasBeenSet() const
{
    return m_imageURLHasBeenSet;
}

string CreateCustomPersonRequest::GetImage() const
{
    return m_image;
}

void CreateCustomPersonRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreateCustomPersonRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}


