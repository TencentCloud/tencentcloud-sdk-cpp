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

#include <tencentcloud/tcss/v20201101/model/DescribeVirusManualScanEstimateTimeoutRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVirusManualScanEstimateTimeoutRequest::DescribeVirusManualScanEstimateTimeoutRequest() :
    m_scanRangeTypeHasBeenSet(false),
    m_scanRangeAllHasBeenSet(false),
    m_scanIdsHasBeenSet(false)
{
}

string DescribeVirusManualScanEstimateTimeoutRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeVirusManualScanEstimateTimeoutRequest::GetScanRangeType() const
{
    return m_scanRangeType;
}

void DescribeVirusManualScanEstimateTimeoutRequest::SetScanRangeType(const uint64_t& _scanRangeType)
{
    m_scanRangeType = _scanRangeType;
    m_scanRangeTypeHasBeenSet = true;
}

bool DescribeVirusManualScanEstimateTimeoutRequest::ScanRangeTypeHasBeenSet() const
{
    return m_scanRangeTypeHasBeenSet;
}

bool DescribeVirusManualScanEstimateTimeoutRequest::GetScanRangeAll() const
{
    return m_scanRangeAll;
}

void DescribeVirusManualScanEstimateTimeoutRequest::SetScanRangeAll(const bool& _scanRangeAll)
{
    m_scanRangeAll = _scanRangeAll;
    m_scanRangeAllHasBeenSet = true;
}

bool DescribeVirusManualScanEstimateTimeoutRequest::ScanRangeAllHasBeenSet() const
{
    return m_scanRangeAllHasBeenSet;
}

vector<string> DescribeVirusManualScanEstimateTimeoutRequest::GetScanIds() const
{
    return m_scanIds;
}

void DescribeVirusManualScanEstimateTimeoutRequest::SetScanIds(const vector<string>& _scanIds)
{
    m_scanIds = _scanIds;
    m_scanIdsHasBeenSet = true;
}

bool DescribeVirusManualScanEstimateTimeoutRequest::ScanIdsHasBeenSet() const
{
    return m_scanIdsHasBeenSet;
}


