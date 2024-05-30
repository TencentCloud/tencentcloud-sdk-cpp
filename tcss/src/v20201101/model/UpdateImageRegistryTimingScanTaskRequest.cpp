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

#include <tencentcloud/tcss/v20201101/model/UpdateImageRegistryTimingScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

UpdateImageRegistryTimingScanTaskRequest::UpdateImageRegistryTimingScanTaskRequest() :
    m_scanPeriodHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_allHasBeenSet(false),
    m_idHasBeenSet(false),
    m_latestHasBeenSet(false),
    m_containerRunningHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_scanScopeHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_excludeImageAssetIdsHasBeenSet(false)
{
}

string UpdateImageRegistryTimingScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scanPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanPeriod, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
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

    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_all, allocator);
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

    if (m_latestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_latest, allocator);
    }

    if (m_containerRunningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRunning";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_containerRunning, allocator);
    }

    if (m_scanEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanScope, allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_registryType.begin(); itr != m_registryType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespace.begin(); itr != m_namespace.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeImageAssetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeImageAssetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeImageAssetIds.begin(); itr != m_excludeImageAssetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateImageRegistryTimingScanTaskRequest::GetScanPeriod() const
{
    return m_scanPeriod;
}

void UpdateImageRegistryTimingScanTaskRequest::SetScanPeriod(const uint64_t& _scanPeriod)
{
    m_scanPeriod = _scanPeriod;
    m_scanPeriodHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::ScanPeriodHasBeenSet() const
{
    return m_scanPeriodHasBeenSet;
}

bool UpdateImageRegistryTimingScanTaskRequest::GetEnable() const
{
    return m_enable;
}

void UpdateImageRegistryTimingScanTaskRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string UpdateImageRegistryTimingScanTaskRequest::GetScanTime() const
{
    return m_scanTime;
}

void UpdateImageRegistryTimingScanTaskRequest::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

vector<string> UpdateImageRegistryTimingScanTaskRequest::GetScanType() const
{
    return m_scanType;
}

void UpdateImageRegistryTimingScanTaskRequest::SetScanType(const vector<string>& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

vector<ImageInfo> UpdateImageRegistryTimingScanTaskRequest::GetImages() const
{
    return m_images;
}

void UpdateImageRegistryTimingScanTaskRequest::SetImages(const vector<ImageInfo>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

bool UpdateImageRegistryTimingScanTaskRequest::GetAll() const
{
    return m_all;
}

void UpdateImageRegistryTimingScanTaskRequest::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<uint64_t> UpdateImageRegistryTimingScanTaskRequest::GetId() const
{
    return m_id;
}

void UpdateImageRegistryTimingScanTaskRequest::SetId(const vector<uint64_t>& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

bool UpdateImageRegistryTimingScanTaskRequest::GetLatest() const
{
    return m_latest;
}

void UpdateImageRegistryTimingScanTaskRequest::SetLatest(const bool& _latest)
{
    m_latest = _latest;
    m_latestHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::LatestHasBeenSet() const
{
    return m_latestHasBeenSet;
}

bool UpdateImageRegistryTimingScanTaskRequest::GetContainerRunning() const
{
    return m_containerRunning;
}

void UpdateImageRegistryTimingScanTaskRequest::SetContainerRunning(const bool& _containerRunning)
{
    m_containerRunning = _containerRunning;
    m_containerRunningHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::ContainerRunningHasBeenSet() const
{
    return m_containerRunningHasBeenSet;
}

string UpdateImageRegistryTimingScanTaskRequest::GetScanEndTime() const
{
    return m_scanEndTime;
}

void UpdateImageRegistryTimingScanTaskRequest::SetScanEndTime(const string& _scanEndTime)
{
    m_scanEndTime = _scanEndTime;
    m_scanEndTimeHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::ScanEndTimeHasBeenSet() const
{
    return m_scanEndTimeHasBeenSet;
}

uint64_t UpdateImageRegistryTimingScanTaskRequest::GetScanScope() const
{
    return m_scanScope;
}

void UpdateImageRegistryTimingScanTaskRequest::SetScanScope(const uint64_t& _scanScope)
{
    m_scanScope = _scanScope;
    m_scanScopeHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::ScanScopeHasBeenSet() const
{
    return m_scanScopeHasBeenSet;
}

vector<string> UpdateImageRegistryTimingScanTaskRequest::GetRegistryType() const
{
    return m_registryType;
}

void UpdateImageRegistryTimingScanTaskRequest::SetRegistryType(const vector<string>& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

vector<string> UpdateImageRegistryTimingScanTaskRequest::GetNamespace() const
{
    return m_namespace;
}

void UpdateImageRegistryTimingScanTaskRequest::SetNamespace(const vector<string>& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

vector<uint64_t> UpdateImageRegistryTimingScanTaskRequest::GetExcludeImageAssetIds() const
{
    return m_excludeImageAssetIds;
}

void UpdateImageRegistryTimingScanTaskRequest::SetExcludeImageAssetIds(const vector<uint64_t>& _excludeImageAssetIds)
{
    m_excludeImageAssetIds = _excludeImageAssetIds;
    m_excludeImageAssetIdsHasBeenSet = true;
}

bool UpdateImageRegistryTimingScanTaskRequest::ExcludeImageAssetIdsHasBeenSet() const
{
    return m_excludeImageAssetIdsHasBeenSet;
}


