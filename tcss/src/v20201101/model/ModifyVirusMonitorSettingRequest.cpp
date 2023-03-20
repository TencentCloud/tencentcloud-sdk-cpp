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

#include <tencentcloud/tcss/v20201101/model/ModifyVirusMonitorSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyVirusMonitorSettingRequest::ModifyVirusMonitorSettingRequest() :
    m_enableScanHasBeenSet(false),
    m_scanPathAllHasBeenSet(false),
    m_scanPathTypeHasBeenSet(false),
    m_scanPathHasBeenSet(false),
    m_scanPathModeHasBeenSet(false)
{
}

string ModifyVirusMonitorSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_enableScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableScan, allocator);
    }

    if (m_scanPathAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPathAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanPathAll, allocator);
    }

    if (m_scanPathTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPathType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanPathType, allocator);
    }

    if (m_scanPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanPath.begin(); itr != m_scanPath.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scanPathModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPathMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanPathMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyVirusMonitorSettingRequest::GetEnableScan() const
{
    return m_enableScan;
}

void ModifyVirusMonitorSettingRequest::SetEnableScan(const bool& _enableScan)
{
    m_enableScan = _enableScan;
    m_enableScanHasBeenSet = true;
}

bool ModifyVirusMonitorSettingRequest::EnableScanHasBeenSet() const
{
    return m_enableScanHasBeenSet;
}

bool ModifyVirusMonitorSettingRequest::GetScanPathAll() const
{
    return m_scanPathAll;
}

void ModifyVirusMonitorSettingRequest::SetScanPathAll(const bool& _scanPathAll)
{
    m_scanPathAll = _scanPathAll;
    m_scanPathAllHasBeenSet = true;
}

bool ModifyVirusMonitorSettingRequest::ScanPathAllHasBeenSet() const
{
    return m_scanPathAllHasBeenSet;
}

uint64_t ModifyVirusMonitorSettingRequest::GetScanPathType() const
{
    return m_scanPathType;
}

void ModifyVirusMonitorSettingRequest::SetScanPathType(const uint64_t& _scanPathType)
{
    m_scanPathType = _scanPathType;
    m_scanPathTypeHasBeenSet = true;
}

bool ModifyVirusMonitorSettingRequest::ScanPathTypeHasBeenSet() const
{
    return m_scanPathTypeHasBeenSet;
}

vector<string> ModifyVirusMonitorSettingRequest::GetScanPath() const
{
    return m_scanPath;
}

void ModifyVirusMonitorSettingRequest::SetScanPath(const vector<string>& _scanPath)
{
    m_scanPath = _scanPath;
    m_scanPathHasBeenSet = true;
}

bool ModifyVirusMonitorSettingRequest::ScanPathHasBeenSet() const
{
    return m_scanPathHasBeenSet;
}

string ModifyVirusMonitorSettingRequest::GetScanPathMode() const
{
    return m_scanPathMode;
}

void ModifyVirusMonitorSettingRequest::SetScanPathMode(const string& _scanPathMode)
{
    m_scanPathMode = _scanPathMode;
    m_scanPathModeHasBeenSet = true;
}

bool ModifyVirusMonitorSettingRequest::ScanPathModeHasBeenSet() const
{
    return m_scanPathModeHasBeenSet;
}


