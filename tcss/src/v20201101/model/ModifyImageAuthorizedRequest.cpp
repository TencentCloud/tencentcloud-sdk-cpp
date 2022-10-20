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

#include <tencentcloud/tcss/v20201101/model/ModifyImageAuthorizedRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyImageAuthorizedRequest::ModifyImageAuthorizedRequest() :
    m_allLocalImagesHasBeenSet(false),
    m_allRegistryImagesHasBeenSet(false),
    m_updatedLocalImageCntHasBeenSet(false),
    m_updatedRegistryImageCntHasBeenSet(false),
    m_imageSourceTypeHasBeenSet(false),
    m_localImageFilterHasBeenSet(false),
    m_registryImageFilterHasBeenSet(false),
    m_excludeLocalImageIdsHasBeenSet(false),
    m_excludeRegistryImageIdsHasBeenSet(false),
    m_localImageIdsHasBeenSet(false),
    m_registryImageIdsHasBeenSet(false),
    m_onlyShowLatestHasBeenSet(false)
{
}

string ModifyImageAuthorizedRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allLocalImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllLocalImages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allLocalImages, allocator);
    }

    if (m_allRegistryImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllRegistryImages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allRegistryImages, allocator);
    }

    if (m_updatedLocalImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedLocalImageCnt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updatedLocalImageCnt, allocator);
    }

    if (m_updatedRegistryImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedRegistryImageCnt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updatedRegistryImageCnt, allocator);
    }

    if (m_imageSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_localImageFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalImageFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_localImageFilter.begin(); itr != m_localImageFilter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_registryImageFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryImageFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_registryImageFilter.begin(); itr != m_registryImageFilter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeLocalImageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeLocalImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeLocalImageIds.begin(); itr != m_excludeLocalImageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeRegistryImageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeRegistryImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeRegistryImageIds.begin(); itr != m_excludeRegistryImageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_localImageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_localImageIds.begin(); itr != m_localImageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_registryImageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_registryImageIds.begin(); itr != m_registryImageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_onlyShowLatestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyShowLatest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyShowLatest, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyImageAuthorizedRequest::GetAllLocalImages() const
{
    return m_allLocalImages;
}

void ModifyImageAuthorizedRequest::SetAllLocalImages(const bool& _allLocalImages)
{
    m_allLocalImages = _allLocalImages;
    m_allLocalImagesHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::AllLocalImagesHasBeenSet() const
{
    return m_allLocalImagesHasBeenSet;
}

bool ModifyImageAuthorizedRequest::GetAllRegistryImages() const
{
    return m_allRegistryImages;
}

void ModifyImageAuthorizedRequest::SetAllRegistryImages(const bool& _allRegistryImages)
{
    m_allRegistryImages = _allRegistryImages;
    m_allRegistryImagesHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::AllRegistryImagesHasBeenSet() const
{
    return m_allRegistryImagesHasBeenSet;
}

uint64_t ModifyImageAuthorizedRequest::GetUpdatedLocalImageCnt() const
{
    return m_updatedLocalImageCnt;
}

void ModifyImageAuthorizedRequest::SetUpdatedLocalImageCnt(const uint64_t& _updatedLocalImageCnt)
{
    m_updatedLocalImageCnt = _updatedLocalImageCnt;
    m_updatedLocalImageCntHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::UpdatedLocalImageCntHasBeenSet() const
{
    return m_updatedLocalImageCntHasBeenSet;
}

uint64_t ModifyImageAuthorizedRequest::GetUpdatedRegistryImageCnt() const
{
    return m_updatedRegistryImageCnt;
}

void ModifyImageAuthorizedRequest::SetUpdatedRegistryImageCnt(const uint64_t& _updatedRegistryImageCnt)
{
    m_updatedRegistryImageCnt = _updatedRegistryImageCnt;
    m_updatedRegistryImageCntHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::UpdatedRegistryImageCntHasBeenSet() const
{
    return m_updatedRegistryImageCntHasBeenSet;
}

string ModifyImageAuthorizedRequest::GetImageSourceType() const
{
    return m_imageSourceType;
}

void ModifyImageAuthorizedRequest::SetImageSourceType(const string& _imageSourceType)
{
    m_imageSourceType = _imageSourceType;
    m_imageSourceTypeHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::ImageSourceTypeHasBeenSet() const
{
    return m_imageSourceTypeHasBeenSet;
}

vector<AssetFilters> ModifyImageAuthorizedRequest::GetLocalImageFilter() const
{
    return m_localImageFilter;
}

void ModifyImageAuthorizedRequest::SetLocalImageFilter(const vector<AssetFilters>& _localImageFilter)
{
    m_localImageFilter = _localImageFilter;
    m_localImageFilterHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::LocalImageFilterHasBeenSet() const
{
    return m_localImageFilterHasBeenSet;
}

vector<AssetFilters> ModifyImageAuthorizedRequest::GetRegistryImageFilter() const
{
    return m_registryImageFilter;
}

void ModifyImageAuthorizedRequest::SetRegistryImageFilter(const vector<AssetFilters>& _registryImageFilter)
{
    m_registryImageFilter = _registryImageFilter;
    m_registryImageFilterHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::RegistryImageFilterHasBeenSet() const
{
    return m_registryImageFilterHasBeenSet;
}

vector<string> ModifyImageAuthorizedRequest::GetExcludeLocalImageIds() const
{
    return m_excludeLocalImageIds;
}

void ModifyImageAuthorizedRequest::SetExcludeLocalImageIds(const vector<string>& _excludeLocalImageIds)
{
    m_excludeLocalImageIds = _excludeLocalImageIds;
    m_excludeLocalImageIdsHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::ExcludeLocalImageIdsHasBeenSet() const
{
    return m_excludeLocalImageIdsHasBeenSet;
}

vector<string> ModifyImageAuthorizedRequest::GetExcludeRegistryImageIds() const
{
    return m_excludeRegistryImageIds;
}

void ModifyImageAuthorizedRequest::SetExcludeRegistryImageIds(const vector<string>& _excludeRegistryImageIds)
{
    m_excludeRegistryImageIds = _excludeRegistryImageIds;
    m_excludeRegistryImageIdsHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::ExcludeRegistryImageIdsHasBeenSet() const
{
    return m_excludeRegistryImageIdsHasBeenSet;
}

vector<string> ModifyImageAuthorizedRequest::GetLocalImageIds() const
{
    return m_localImageIds;
}

void ModifyImageAuthorizedRequest::SetLocalImageIds(const vector<string>& _localImageIds)
{
    m_localImageIds = _localImageIds;
    m_localImageIdsHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::LocalImageIdsHasBeenSet() const
{
    return m_localImageIdsHasBeenSet;
}

vector<string> ModifyImageAuthorizedRequest::GetRegistryImageIds() const
{
    return m_registryImageIds;
}

void ModifyImageAuthorizedRequest::SetRegistryImageIds(const vector<string>& _registryImageIds)
{
    m_registryImageIds = _registryImageIds;
    m_registryImageIdsHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::RegistryImageIdsHasBeenSet() const
{
    return m_registryImageIdsHasBeenSet;
}

bool ModifyImageAuthorizedRequest::GetOnlyShowLatest() const
{
    return m_onlyShowLatest;
}

void ModifyImageAuthorizedRequest::SetOnlyShowLatest(const bool& _onlyShowLatest)
{
    m_onlyShowLatest = _onlyShowLatest;
    m_onlyShowLatestHasBeenSet = true;
}

bool ModifyImageAuthorizedRequest::OnlyShowLatestHasBeenSet() const
{
    return m_onlyShowLatestHasBeenSet;
}


