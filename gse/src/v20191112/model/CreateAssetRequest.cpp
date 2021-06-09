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

#include <tencentcloud/gse/v20191112/model/CreateAssetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

CreateAssetRequest::CreateAssetRequest() :
    m_bucketKeyHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetVersionHasBeenSet(false),
    m_assetRegionHasBeenSet(false),
    m_operateSystemHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateAssetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bucketKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketKey.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_operateSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateSystem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAssetRequest::GetBucketKey() const
{
    return m_bucketKey;
}

void CreateAssetRequest::SetBucketKey(const string& _bucketKey)
{
    m_bucketKey = _bucketKey;
    m_bucketKeyHasBeenSet = true;
}

bool CreateAssetRequest::BucketKeyHasBeenSet() const
{
    return m_bucketKeyHasBeenSet;
}

string CreateAssetRequest::GetAssetName() const
{
    return m_assetName;
}

void CreateAssetRequest::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool CreateAssetRequest::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string CreateAssetRequest::GetAssetVersion() const
{
    return m_assetVersion;
}

void CreateAssetRequest::SetAssetVersion(const string& _assetVersion)
{
    m_assetVersion = _assetVersion;
    m_assetVersionHasBeenSet = true;
}

bool CreateAssetRequest::AssetVersionHasBeenSet() const
{
    return m_assetVersionHasBeenSet;
}

string CreateAssetRequest::GetAssetRegion() const
{
    return m_assetRegion;
}

void CreateAssetRequest::SetAssetRegion(const string& _assetRegion)
{
    m_assetRegion = _assetRegion;
    m_assetRegionHasBeenSet = true;
}

bool CreateAssetRequest::AssetRegionHasBeenSet() const
{
    return m_assetRegionHasBeenSet;
}

string CreateAssetRequest::GetOperateSystem() const
{
    return m_operateSystem;
}

void CreateAssetRequest::SetOperateSystem(const string& _operateSystem)
{
    m_operateSystem = _operateSystem;
    m_operateSystemHasBeenSet = true;
}

bool CreateAssetRequest::OperateSystemHasBeenSet() const
{
    return m_operateSystemHasBeenSet;
}

string CreateAssetRequest::GetImageId() const
{
    return m_imageId;
}

void CreateAssetRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateAssetRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

vector<Tag> CreateAssetRequest::GetTags() const
{
    return m_tags;
}

void CreateAssetRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAssetRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


