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

#include <tencentcloud/tke/v20180525/model/UpdateImageCacheRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpdateImageCacheRequest::UpdateImageCacheRequest() :
    m_imageCacheIdHasBeenSet(false),
    m_imageCacheNameHasBeenSet(false)
{
}

string UpdateImageCacheRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageCacheIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCacheId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageCacheId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCacheNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCacheName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageCacheName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateImageCacheRequest::GetImageCacheId() const
{
    return m_imageCacheId;
}

void UpdateImageCacheRequest::SetImageCacheId(const string& _imageCacheId)
{
    m_imageCacheId = _imageCacheId;
    m_imageCacheIdHasBeenSet = true;
}

bool UpdateImageCacheRequest::ImageCacheIdHasBeenSet() const
{
    return m_imageCacheIdHasBeenSet;
}

string UpdateImageCacheRequest::GetImageCacheName() const
{
    return m_imageCacheName;
}

void UpdateImageCacheRequest::SetImageCacheName(const string& _imageCacheName)
{
    m_imageCacheName = _imageCacheName;
    m_imageCacheNameHasBeenSet = true;
}

bool UpdateImageCacheRequest::ImageCacheNameHasBeenSet() const
{
    return m_imageCacheNameHasBeenSet;
}


