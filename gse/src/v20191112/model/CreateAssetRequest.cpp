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
using namespace rapidjson;
using namespace std;

CreateAssetRequest::CreateAssetRequest() :
    m_bucketKeyHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetVersionHasBeenSet(false),
    m_assetRegionHasBeenSet(false),
    m_operateSystemHasBeenSet(false)
{
}

string CreateAssetRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bucketKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BucketKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bucketKey.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_assetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_assetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_operateSystemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperateSystem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operateSystem.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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

