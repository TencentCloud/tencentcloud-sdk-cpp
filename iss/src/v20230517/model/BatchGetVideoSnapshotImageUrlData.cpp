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

#include <tencentcloud/iss/v20230517/model/BatchGetVideoSnapshotImageUrlData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

BatchGetVideoSnapshotImageUrlData::BatchGetVideoSnapshotImageUrlData() :
    m_imagesHasBeenSet(false),
    m_imageUrlExpiresHasBeenSet(false)
{
}

CoreInternalOutcome BatchGetVideoSnapshotImageUrlData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Images") && !value["Images"].IsNull())
    {
        if (!value["Images"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchGetVideoSnapshotImageUrlData.Images` is not array type"));

        const rapidjson::Value &tmpValue = value["Images"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageUrlInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_images.push_back(item);
        }
        m_imagesHasBeenSet = true;
    }

    if (value.HasMember("ImageUrlExpires") && !value["ImageUrlExpires"].IsNull())
    {
        if (!value["ImageUrlExpires"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchGetVideoSnapshotImageUrlData.ImageUrlExpires` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrlExpires = value["ImageUrlExpires"].GetInt64();
        m_imageUrlExpiresHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchGetVideoSnapshotImageUrlData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageUrlExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlExpires";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageUrlExpires, allocator);
    }

}


vector<ImageUrlInfo> BatchGetVideoSnapshotImageUrlData::GetImages() const
{
    return m_images;
}

void BatchGetVideoSnapshotImageUrlData::SetImages(const vector<ImageUrlInfo>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool BatchGetVideoSnapshotImageUrlData::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

int64_t BatchGetVideoSnapshotImageUrlData::GetImageUrlExpires() const
{
    return m_imageUrlExpires;
}

void BatchGetVideoSnapshotImageUrlData::SetImageUrlExpires(const int64_t& _imageUrlExpires)
{
    m_imageUrlExpires = _imageUrlExpires;
    m_imageUrlExpiresHasBeenSet = true;
}

bool BatchGetVideoSnapshotImageUrlData::ImageUrlExpiresHasBeenSet() const
{
    return m_imageUrlExpiresHasBeenSet;
}

