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

#include <tencentcloud/iss/v20230517/model/BatchGetVideoSnapshotImageUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

BatchGetVideoSnapshotImageUrlRequest::BatchGetVideoSnapshotImageUrlRequest() :
    m_imageIdsHasBeenSet(false),
    m_imageUrlExpiresHasBeenSet(false)
{
}

string BatchGetVideoSnapshotImageUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageUrlExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlExpires";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_imageUrlExpires, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchGetVideoSnapshotImageUrlRequest::GetImageIds() const
{
    return m_imageIds;
}

void BatchGetVideoSnapshotImageUrlRequest::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool BatchGetVideoSnapshotImageUrlRequest::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

int64_t BatchGetVideoSnapshotImageUrlRequest::GetImageUrlExpires() const
{
    return m_imageUrlExpires;
}

void BatchGetVideoSnapshotImageUrlRequest::SetImageUrlExpires(const int64_t& _imageUrlExpires)
{
    m_imageUrlExpires = _imageUrlExpires;
    m_imageUrlExpiresHasBeenSet = true;
}

bool BatchGetVideoSnapshotImageUrlRequest::ImageUrlExpiresHasBeenSet() const
{
    return m_imageUrlExpiresHasBeenSet;
}


