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

#include <tencentcloud/cfw/v20190904/model/ModifyAssetScanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyAssetScanRequest::ModifyAssetScanRequest() :
    m_scanRangeHasBeenSet(false),
    m_scanDeepHasBeenSet(false),
    m_rangeTypeHasBeenSet(false),
    m_scanPeriodHasBeenSet(false),
    m_scanFilterIpHasBeenSet(false),
    m_scanTypeHasBeenSet(false)
{
}

string ModifyAssetScanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scanRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanRange, allocator);
    }

    if (m_scanDeepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanDeep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanDeep.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rangeType, allocator);
    }

    if (m_scanPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_scanFilterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanFilterIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanFilterIp.begin(); itr != m_scanFilterIp.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyAssetScanRequest::GetScanRange() const
{
    return m_scanRange;
}

void ModifyAssetScanRequest::SetScanRange(const int64_t& _scanRange)
{
    m_scanRange = _scanRange;
    m_scanRangeHasBeenSet = true;
}

bool ModifyAssetScanRequest::ScanRangeHasBeenSet() const
{
    return m_scanRangeHasBeenSet;
}

string ModifyAssetScanRequest::GetScanDeep() const
{
    return m_scanDeep;
}

void ModifyAssetScanRequest::SetScanDeep(const string& _scanDeep)
{
    m_scanDeep = _scanDeep;
    m_scanDeepHasBeenSet = true;
}

bool ModifyAssetScanRequest::ScanDeepHasBeenSet() const
{
    return m_scanDeepHasBeenSet;
}

int64_t ModifyAssetScanRequest::GetRangeType() const
{
    return m_rangeType;
}

void ModifyAssetScanRequest::SetRangeType(const int64_t& _rangeType)
{
    m_rangeType = _rangeType;
    m_rangeTypeHasBeenSet = true;
}

bool ModifyAssetScanRequest::RangeTypeHasBeenSet() const
{
    return m_rangeTypeHasBeenSet;
}

string ModifyAssetScanRequest::GetScanPeriod() const
{
    return m_scanPeriod;
}

void ModifyAssetScanRequest::SetScanPeriod(const string& _scanPeriod)
{
    m_scanPeriod = _scanPeriod;
    m_scanPeriodHasBeenSet = true;
}

bool ModifyAssetScanRequest::ScanPeriodHasBeenSet() const
{
    return m_scanPeriodHasBeenSet;
}

vector<string> ModifyAssetScanRequest::GetScanFilterIp() const
{
    return m_scanFilterIp;
}

void ModifyAssetScanRequest::SetScanFilterIp(const vector<string>& _scanFilterIp)
{
    m_scanFilterIp = _scanFilterIp;
    m_scanFilterIpHasBeenSet = true;
}

bool ModifyAssetScanRequest::ScanFilterIpHasBeenSet() const
{
    return m_scanFilterIpHasBeenSet;
}

int64_t ModifyAssetScanRequest::GetScanType() const
{
    return m_scanType;
}

void ModifyAssetScanRequest::SetScanType(const int64_t& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool ModifyAssetScanRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}


