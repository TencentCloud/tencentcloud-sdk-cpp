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

#include <tencentcloud/tcss/v20201101/model/CreateAssetImageRegistryScanTaskOneKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateAssetImageRegistryScanTaskOneKeyRequest::CreateAssetImageRegistryScanTaskOneKeyRequest() :
    m_allHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

string CreateAssetImageRegistryScanTaskOneKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_all, allocator);
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanType.begin(); itr != m_scanType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_id.begin(); itr != m_id.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool CreateAssetImageRegistryScanTaskOneKeyRequest::GetAll() const
{
    return m_all;
}

void CreateAssetImageRegistryScanTaskOneKeyRequest::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskOneKeyRequest::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<ImageInfo> CreateAssetImageRegistryScanTaskOneKeyRequest::GetImages() const
{
    return m_images;
}

void CreateAssetImageRegistryScanTaskOneKeyRequest::SetImages(const vector<ImageInfo>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskOneKeyRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

vector<string> CreateAssetImageRegistryScanTaskOneKeyRequest::GetScanType() const
{
    return m_scanType;
}

void CreateAssetImageRegistryScanTaskOneKeyRequest::SetScanType(const vector<string>& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskOneKeyRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

vector<uint64_t> CreateAssetImageRegistryScanTaskOneKeyRequest::GetId() const
{
    return m_id;
}

void CreateAssetImageRegistryScanTaskOneKeyRequest::SetId(const vector<uint64_t>& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskOneKeyRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


