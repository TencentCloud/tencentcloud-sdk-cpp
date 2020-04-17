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

#include <tencentcloud/bda/v20200324/model/SegmentPortraitPicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bda::V20200324::Model;
using namespace rapidjson;
using namespace std;

SegmentPortraitPicRequest::SegmentPortraitPicRequest() :
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

string SegmentPortraitPicRequest::ToJsonString() const
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

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SegmentPortraitPicRequest::GetImage() const
{
    return m_image;
}

void SegmentPortraitPicRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SegmentPortraitPicRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SegmentPortraitPicRequest::GetUrl() const
{
    return m_url;
}

void SegmentPortraitPicRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SegmentPortraitPicRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}


