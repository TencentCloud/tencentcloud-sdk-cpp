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

#include <tencentcloud/tcss/v20201101/model/CreateVirusScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateVirusScanTaskRequest::CreateVirusScanTaskRequest() :
    m_scanPathAllHasBeenSet(false),
    m_scanRangeTypeHasBeenSet(false),
    m_scanRangeAllHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_scanPathTypeHasBeenSet(false),
    m_scanIdsHasBeenSet(false),
    m_scanPathHasBeenSet(false),
    m_scanPathModeHasBeenSet(false)
{
}

string CreateVirusScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scanPathAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPathAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanPathAll, allocator);
    }

    if (m_scanRangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRangeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanRangeType, allocator);
    }

    if (m_scanRangeAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRangeAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanRangeAll, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_scanPathTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPathType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanPathType, allocator);
    }

    if (m_scanIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanIds.begin(); itr != m_scanIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


bool CreateVirusScanTaskRequest::GetScanPathAll() const
{
    return m_scanPathAll;
}

void CreateVirusScanTaskRequest::SetScanPathAll(const bool& _scanPathAll)
{
    m_scanPathAll = _scanPathAll;
    m_scanPathAllHasBeenSet = true;
}

bool CreateVirusScanTaskRequest::ScanPathAllHasBeenSet() const
{
    return m_scanPathAllHasBeenSet;
}

uint64_t CreateVirusScanTaskRequest::GetScanRangeType() const
{
    return m_scanRangeType;
}

void CreateVirusScanTaskRequest::SetScanRangeType(const uint64_t& _scanRangeType)
{
    m_scanRangeType = _scanRangeType;
    m_scanRangeTypeHasBeenSet = true;
}

bool CreateVirusScanTaskRequest::ScanRangeTypeHasBeenSet() const
{
    return m_scanRangeTypeHasBeenSet;
}

bool CreateVirusScanTaskRequest::GetScanRangeAll() const
{
    return m_scanRangeAll;
}

void CreateVirusScanTaskRequest::SetScanRangeAll(const bool& _scanRangeAll)
{
    m_scanRangeAll = _scanRangeAll;
    m_scanRangeAllHasBeenSet = true;
}

bool CreateVirusScanTaskRequest::ScanRangeAllHasBeenSet() const
{
    return m_scanRangeAllHasBeenSet;
}

uint64_t CreateVirusScanTaskRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateVirusScanTaskRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateVirusScanTaskRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t CreateVirusScanTaskRequest::GetScanPathType() const
{
    return m_scanPathType;
}

void CreateVirusScanTaskRequest::SetScanPathType(const uint64_t& _scanPathType)
{
    m_scanPathType = _scanPathType;
    m_scanPathTypeHasBeenSet = true;
}

bool CreateVirusScanTaskRequest::ScanPathTypeHasBeenSet() const
{
    return m_scanPathTypeHasBeenSet;
}

vector<string> CreateVirusScanTaskRequest::GetScanIds() const
{
    return m_scanIds;
}

void CreateVirusScanTaskRequest::SetScanIds(const vector<string>& _scanIds)
{
    m_scanIds = _scanIds;
    m_scanIdsHasBeenSet = true;
}

bool CreateVirusScanTaskRequest::ScanIdsHasBeenSet() const
{
    return m_scanIdsHasBeenSet;
}

vector<string> CreateVirusScanTaskRequest::GetScanPath() const
{
    return m_scanPath;
}

void CreateVirusScanTaskRequest::SetScanPath(const vector<string>& _scanPath)
{
    m_scanPath = _scanPath;
    m_scanPathHasBeenSet = true;
}

bool CreateVirusScanTaskRequest::ScanPathHasBeenSet() const
{
    return m_scanPathHasBeenSet;
}

string CreateVirusScanTaskRequest::GetScanPathMode() const
{
    return m_scanPathMode;
}

void CreateVirusScanTaskRequest::SetScanPathMode(const string& _scanPathMode)
{
    m_scanPathMode = _scanPathMode;
    m_scanPathModeHasBeenSet = true;
}

bool CreateVirusScanTaskRequest::ScanPathModeHasBeenSet() const
{
    return m_scanPathModeHasBeenSet;
}


