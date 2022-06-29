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

#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanReportListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

DescribeFlySecMiniAppScanReportListRequest::DescribeFlySecMiniAppScanReportListRequest() :
    m_miniAppIDHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_miniAppVersionHasBeenSet(false)
{
}

string DescribeFlySecMiniAppScanReportListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_miniAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_miniAppVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniAppVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFlySecMiniAppScanReportListRequest::GetMiniAppID() const
{
    return m_miniAppID;
}

void DescribeFlySecMiniAppScanReportListRequest::SetMiniAppID(const string& _miniAppID)
{
    m_miniAppID = _miniAppID;
    m_miniAppIDHasBeenSet = true;
}

bool DescribeFlySecMiniAppScanReportListRequest::MiniAppIDHasBeenSet() const
{
    return m_miniAppIDHasBeenSet;
}

int64_t DescribeFlySecMiniAppScanReportListRequest::GetMode() const
{
    return m_mode;
}

void DescribeFlySecMiniAppScanReportListRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribeFlySecMiniAppScanReportListRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t DescribeFlySecMiniAppScanReportListRequest::GetStatus() const
{
    return m_status;
}

void DescribeFlySecMiniAppScanReportListRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeFlySecMiniAppScanReportListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeFlySecMiniAppScanReportListRequest::GetSize() const
{
    return m_size;
}

void DescribeFlySecMiniAppScanReportListRequest::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DescribeFlySecMiniAppScanReportListRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string DescribeFlySecMiniAppScanReportListRequest::GetMiniAppVersion() const
{
    return m_miniAppVersion;
}

void DescribeFlySecMiniAppScanReportListRequest::SetMiniAppVersion(const string& _miniAppVersion)
{
    m_miniAppVersion = _miniAppVersion;
    m_miniAppVersionHasBeenSet = true;
}

bool DescribeFlySecMiniAppScanReportListRequest::MiniAppVersionHasBeenSet() const
{
    return m_miniAppVersionHasBeenSet;
}


