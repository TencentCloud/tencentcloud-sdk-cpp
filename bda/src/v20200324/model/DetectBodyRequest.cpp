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

#include <tencentcloud/bda/v20200324/model/DetectBodyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bda::V20200324::Model;
using namespace rapidjson;
using namespace std;

DetectBodyRequest::DetectBodyRequest() :
    m_imageHasBeenSet(false),
    m_maxBodyNumHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_attributesOptionsHasBeenSet(false)
{
}

string DetectBodyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBodyNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxBodyNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxBodyNum, allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_attributesOptionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttributesOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_attributesOptions.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectBodyRequest::GetImage() const
{
    return m_image;
}

void DetectBodyRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool DetectBodyRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

uint64_t DetectBodyRequest::GetMaxBodyNum() const
{
    return m_maxBodyNum;
}

void DetectBodyRequest::SetMaxBodyNum(const uint64_t& _maxBodyNum)
{
    m_maxBodyNum = _maxBodyNum;
    m_maxBodyNumHasBeenSet = true;
}

bool DetectBodyRequest::MaxBodyNumHasBeenSet() const
{
    return m_maxBodyNumHasBeenSet;
}

string DetectBodyRequest::GetUrl() const
{
    return m_url;
}

void DetectBodyRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DetectBodyRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

AttributesOptions DetectBodyRequest::GetAttributesOptions() const
{
    return m_attributesOptions;
}

void DetectBodyRequest::SetAttributesOptions(const AttributesOptions& _attributesOptions)
{
    m_attributesOptions = _attributesOptions;
    m_attributesOptionsHasBeenSet = true;
}

bool DetectBodyRequest::AttributesOptionsHasBeenSet() const
{
    return m_attributesOptionsHasBeenSet;
}


