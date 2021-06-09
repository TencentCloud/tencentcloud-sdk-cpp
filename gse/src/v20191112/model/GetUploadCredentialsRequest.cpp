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

#include <tencentcloud/gse/v20191112/model/GetUploadCredentialsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

GetUploadCredentialsRequest::GetUploadCredentialsRequest() :
    m_assetRegionHasBeenSet(false),
    m_bucketKeyHasBeenSet(false)
{
}

string GetUploadCredentialsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetUploadCredentialsRequest::GetAssetRegion() const
{
    return m_assetRegion;
}

void GetUploadCredentialsRequest::SetAssetRegion(const string& _assetRegion)
{
    m_assetRegion = _assetRegion;
    m_assetRegionHasBeenSet = true;
}

bool GetUploadCredentialsRequest::AssetRegionHasBeenSet() const
{
    return m_assetRegionHasBeenSet;
}

string GetUploadCredentialsRequest::GetBucketKey() const
{
    return m_bucketKey;
}

void GetUploadCredentialsRequest::SetBucketKey(const string& _bucketKey)
{
    m_bucketKey = _bucketKey;
    m_bucketKeyHasBeenSet = true;
}

bool GetUploadCredentialsRequest::BucketKeyHasBeenSet() const
{
    return m_bucketKeyHasBeenSet;
}


