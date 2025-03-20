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

#include <tencentcloud/tcss/v20201101/model/CreateAssetImageScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateAssetImageScanTaskRequest::CreateAssetImageScanTaskRequest() :
    m_allHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_scanVulHasBeenSet(false),
    m_scanVirusHasBeenSet(false),
    m_scanRiskHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_excludeImageIdsHasBeenSet(false),
    m_containerRunningHasBeenSet(false),
    m_scanScopeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_isOneClickScanningTaskHasBeenSet(false)
{
}

string CreateAssetImageScanTaskRequest::ToJsonString() const
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

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scanVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVul";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanVul, allocator);
    }

    if (m_scanVirusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVirus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanVirus, allocator);
    }

    if (m_scanRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanRisk, allocator);
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

    if (m_excludeImageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeImageIds.begin(); itr != m_excludeImageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_containerRunningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRunning";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_containerRunning, allocator);
    }

    if (m_scanScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanScope, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_isOneClickScanningTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOneClickScanningTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOneClickScanningTask, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool CreateAssetImageScanTaskRequest::GetAll() const
{
    return m_all;
}

void CreateAssetImageScanTaskRequest::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<string> CreateAssetImageScanTaskRequest::GetImages() const
{
    return m_images;
}

void CreateAssetImageScanTaskRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

bool CreateAssetImageScanTaskRequest::GetScanVul() const
{
    return m_scanVul;
}

void CreateAssetImageScanTaskRequest::SetScanVul(const bool& _scanVul)
{
    m_scanVul = _scanVul;
    m_scanVulHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::ScanVulHasBeenSet() const
{
    return m_scanVulHasBeenSet;
}

bool CreateAssetImageScanTaskRequest::GetScanVirus() const
{
    return m_scanVirus;
}

void CreateAssetImageScanTaskRequest::SetScanVirus(const bool& _scanVirus)
{
    m_scanVirus = _scanVirus;
    m_scanVirusHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::ScanVirusHasBeenSet() const
{
    return m_scanVirusHasBeenSet;
}

bool CreateAssetImageScanTaskRequest::GetScanRisk() const
{
    return m_scanRisk;
}

void CreateAssetImageScanTaskRequest::SetScanRisk(const bool& _scanRisk)
{
    m_scanRisk = _scanRisk;
    m_scanRiskHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::ScanRiskHasBeenSet() const
{
    return m_scanRiskHasBeenSet;
}

vector<AssetFilters> CreateAssetImageScanTaskRequest::GetFilters() const
{
    return m_filters;
}

void CreateAssetImageScanTaskRequest::SetFilters(const vector<AssetFilters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> CreateAssetImageScanTaskRequest::GetExcludeImageIds() const
{
    return m_excludeImageIds;
}

void CreateAssetImageScanTaskRequest::SetExcludeImageIds(const vector<string>& _excludeImageIds)
{
    m_excludeImageIds = _excludeImageIds;
    m_excludeImageIdsHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::ExcludeImageIdsHasBeenSet() const
{
    return m_excludeImageIdsHasBeenSet;
}

bool CreateAssetImageScanTaskRequest::GetContainerRunning() const
{
    return m_containerRunning;
}

void CreateAssetImageScanTaskRequest::SetContainerRunning(const bool& _containerRunning)
{
    m_containerRunning = _containerRunning;
    m_containerRunningHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::ContainerRunningHasBeenSet() const
{
    return m_containerRunningHasBeenSet;
}

uint64_t CreateAssetImageScanTaskRequest::GetScanScope() const
{
    return m_scanScope;
}

void CreateAssetImageScanTaskRequest::SetScanScope(const uint64_t& _scanScope)
{
    m_scanScope = _scanScope;
    m_scanScopeHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::ScanScopeHasBeenSet() const
{
    return m_scanScopeHasBeenSet;
}

uint64_t CreateAssetImageScanTaskRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateAssetImageScanTaskRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

bool CreateAssetImageScanTaskRequest::GetIsOneClickScanningTask() const
{
    return m_isOneClickScanningTask;
}

void CreateAssetImageScanTaskRequest::SetIsOneClickScanningTask(const bool& _isOneClickScanningTask)
{
    m_isOneClickScanningTask = _isOneClickScanningTask;
    m_isOneClickScanningTaskHasBeenSet = true;
}

bool CreateAssetImageScanTaskRequest::IsOneClickScanningTaskHasBeenSet() const
{
    return m_isOneClickScanningTaskHasBeenSet;
}


