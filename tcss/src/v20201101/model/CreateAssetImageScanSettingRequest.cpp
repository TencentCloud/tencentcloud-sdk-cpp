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

#include <tencentcloud/tcss/v20201101/model/CreateAssetImageScanSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateAssetImageScanSettingRequest::CreateAssetImageScanSettingRequest() :
    m_enableHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_scanPeriodHasBeenSet(false),
    m_scanVirusHasBeenSet(false),
    m_scanRiskHasBeenSet(false),
    m_scanVulHasBeenSet(false),
    m_allHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_containerRunningHasBeenSet(false),
    m_scanScopeHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_excludeImagesHasBeenSet(false)
{
}

string CreateAssetImageScanSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_scanPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanPeriod, allocator);
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

    if (m_scanVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVul";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanVul, allocator);
    }

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

    if (m_scanEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_excludeImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeImages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeImages.begin(); itr != m_excludeImages.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool CreateAssetImageScanSettingRequest::GetEnable() const
{
    return m_enable;
}

void CreateAssetImageScanSettingRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string CreateAssetImageScanSettingRequest::GetScanTime() const
{
    return m_scanTime;
}

void CreateAssetImageScanSettingRequest::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

uint64_t CreateAssetImageScanSettingRequest::GetScanPeriod() const
{
    return m_scanPeriod;
}

void CreateAssetImageScanSettingRequest::SetScanPeriod(const uint64_t& _scanPeriod)
{
    m_scanPeriod = _scanPeriod;
    m_scanPeriodHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::ScanPeriodHasBeenSet() const
{
    return m_scanPeriodHasBeenSet;
}

bool CreateAssetImageScanSettingRequest::GetScanVirus() const
{
    return m_scanVirus;
}

void CreateAssetImageScanSettingRequest::SetScanVirus(const bool& _scanVirus)
{
    m_scanVirus = _scanVirus;
    m_scanVirusHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::ScanVirusHasBeenSet() const
{
    return m_scanVirusHasBeenSet;
}

bool CreateAssetImageScanSettingRequest::GetScanRisk() const
{
    return m_scanRisk;
}

void CreateAssetImageScanSettingRequest::SetScanRisk(const bool& _scanRisk)
{
    m_scanRisk = _scanRisk;
    m_scanRiskHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::ScanRiskHasBeenSet() const
{
    return m_scanRiskHasBeenSet;
}

bool CreateAssetImageScanSettingRequest::GetScanVul() const
{
    return m_scanVul;
}

void CreateAssetImageScanSettingRequest::SetScanVul(const bool& _scanVul)
{
    m_scanVul = _scanVul;
    m_scanVulHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::ScanVulHasBeenSet() const
{
    return m_scanVulHasBeenSet;
}

bool CreateAssetImageScanSettingRequest::GetAll() const
{
    return m_all;
}

void CreateAssetImageScanSettingRequest::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<string> CreateAssetImageScanSettingRequest::GetImages() const
{
    return m_images;
}

void CreateAssetImageScanSettingRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

bool CreateAssetImageScanSettingRequest::GetContainerRunning() const
{
    return m_containerRunning;
}

void CreateAssetImageScanSettingRequest::SetContainerRunning(const bool& _containerRunning)
{
    m_containerRunning = _containerRunning;
    m_containerRunningHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::ContainerRunningHasBeenSet() const
{
    return m_containerRunningHasBeenSet;
}

uint64_t CreateAssetImageScanSettingRequest::GetScanScope() const
{
    return m_scanScope;
}

void CreateAssetImageScanSettingRequest::SetScanScope(const uint64_t& _scanScope)
{
    m_scanScope = _scanScope;
    m_scanScopeHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::ScanScopeHasBeenSet() const
{
    return m_scanScopeHasBeenSet;
}

string CreateAssetImageScanSettingRequest::GetScanEndTime() const
{
    return m_scanEndTime;
}

void CreateAssetImageScanSettingRequest::SetScanEndTime(const string& _scanEndTime)
{
    m_scanEndTime = _scanEndTime;
    m_scanEndTimeHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::ScanEndTimeHasBeenSet() const
{
    return m_scanEndTimeHasBeenSet;
}

vector<string> CreateAssetImageScanSettingRequest::GetExcludeImages() const
{
    return m_excludeImages;
}

void CreateAssetImageScanSettingRequest::SetExcludeImages(const vector<string>& _excludeImages)
{
    m_excludeImages = _excludeImages;
    m_excludeImagesHasBeenSet = true;
}

bool CreateAssetImageScanSettingRequest::ExcludeImagesHasBeenSet() const
{
    return m_excludeImagesHasBeenSet;
}


