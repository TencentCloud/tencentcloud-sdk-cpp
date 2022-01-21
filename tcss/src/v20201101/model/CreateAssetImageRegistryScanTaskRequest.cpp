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

#include <tencentcloud/tcss/v20201101/model/CreateAssetImageRegistryScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateAssetImageRegistryScanTaskRequest::CreateAssetImageRegistryScanTaskRequest() :
    m_allHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_excludeImageListHasBeenSet(false),
    m_onlyScanLatestHasBeenSet(false)
{
}

string CreateAssetImageRegistryScanTaskRequest::ToJsonString() const
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

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeImageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeImageList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeImageList.begin(); itr != m_excludeImageList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_onlyScanLatestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyScanLatest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyScanLatest, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool CreateAssetImageRegistryScanTaskRequest::GetAll() const
{
    return m_all;
}

void CreateAssetImageRegistryScanTaskRequest::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskRequest::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<ImageInfo> CreateAssetImageRegistryScanTaskRequest::GetImages() const
{
    return m_images;
}

void CreateAssetImageRegistryScanTaskRequest::SetImages(const vector<ImageInfo>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

vector<string> CreateAssetImageRegistryScanTaskRequest::GetScanType() const
{
    return m_scanType;
}

void CreateAssetImageRegistryScanTaskRequest::SetScanType(const vector<string>& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

vector<uint64_t> CreateAssetImageRegistryScanTaskRequest::GetId() const
{
    return m_id;
}

void CreateAssetImageRegistryScanTaskRequest::SetId(const vector<uint64_t>& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<AssetFilters> CreateAssetImageRegistryScanTaskRequest::GetFilters() const
{
    return m_filters;
}

void CreateAssetImageRegistryScanTaskRequest::SetFilters(const vector<AssetFilters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<uint64_t> CreateAssetImageRegistryScanTaskRequest::GetExcludeImageList() const
{
    return m_excludeImageList;
}

void CreateAssetImageRegistryScanTaskRequest::SetExcludeImageList(const vector<uint64_t>& _excludeImageList)
{
    m_excludeImageList = _excludeImageList;
    m_excludeImageListHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskRequest::ExcludeImageListHasBeenSet() const
{
    return m_excludeImageListHasBeenSet;
}

bool CreateAssetImageRegistryScanTaskRequest::GetOnlyScanLatest() const
{
    return m_onlyScanLatest;
}

void CreateAssetImageRegistryScanTaskRequest::SetOnlyScanLatest(const bool& _onlyScanLatest)
{
    m_onlyScanLatest = _onlyScanLatest;
    m_onlyScanLatestHasBeenSet = true;
}

bool CreateAssetImageRegistryScanTaskRequest::OnlyScanLatestHasBeenSet() const
{
    return m_onlyScanLatestHasBeenSet;
}


