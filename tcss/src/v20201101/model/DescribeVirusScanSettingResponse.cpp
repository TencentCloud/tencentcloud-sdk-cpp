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

#include <tencentcloud/tcss/v20201101/model/DescribeVirusScanSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVirusScanSettingResponse::DescribeVirusScanSettingResponse() :
    m_enableScanHasBeenSet(false),
    m_cycleHasBeenSet(false),
    m_beginScanAtHasBeenSet(false),
    m_scanPathAllHasBeenSet(false),
    m_scanPathTypeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_scanRangeTypeHasBeenSet(false),
    m_scanRangeAllHasBeenSet(false),
    m_scanIdsHasBeenSet(false),
    m_scanPathHasBeenSet(false),
    m_clickTimeoutHasBeenSet(false),
    m_scanPathModeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVirusScanSettingResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("EnableScan") && !rsp["EnableScan"].IsNull())
    {
        if (!rsp["EnableScan"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableScan` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableScan = rsp["EnableScan"].GetBool();
        m_enableScanHasBeenSet = true;
    }

    if (rsp.HasMember("Cycle") && !rsp["Cycle"].IsNull())
    {
        if (!rsp["Cycle"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cycle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cycle = rsp["Cycle"].GetUint64();
        m_cycleHasBeenSet = true;
    }

    if (rsp.HasMember("BeginScanAt") && !rsp["BeginScanAt"].IsNull())
    {
        if (!rsp["BeginScanAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginScanAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginScanAt = string(rsp["BeginScanAt"].GetString());
        m_beginScanAtHasBeenSet = true;
    }

    if (rsp.HasMember("ScanPathAll") && !rsp["ScanPathAll"].IsNull())
    {
        if (!rsp["ScanPathAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanPathAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanPathAll = rsp["ScanPathAll"].GetBool();
        m_scanPathAllHasBeenSet = true;
    }

    if (rsp.HasMember("ScanPathType") && !rsp["ScanPathType"].IsNull())
    {
        if (!rsp["ScanPathType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanPathType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanPathType = rsp["ScanPathType"].GetUint64();
        m_scanPathTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Timeout") && !rsp["Timeout"].IsNull())
    {
        if (!rsp["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = rsp["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (rsp.HasMember("ScanRangeType") && !rsp["ScanRangeType"].IsNull())
    {
        if (!rsp["ScanRangeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanRangeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanRangeType = rsp["ScanRangeType"].GetUint64();
        m_scanRangeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanRangeAll") && !rsp["ScanRangeAll"].IsNull())
    {
        if (!rsp["ScanRangeAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanRangeAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanRangeAll = rsp["ScanRangeAll"].GetBool();
        m_scanRangeAllHasBeenSet = true;
    }

    if (rsp.HasMember("ScanIds") && !rsp["ScanIds"].IsNull())
    {
        if (!rsp["ScanIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ScanIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scanIds.push_back((*itr).GetString());
        }
        m_scanIdsHasBeenSet = true;
    }

    if (rsp.HasMember("ScanPath") && !rsp["ScanPath"].IsNull())
    {
        if (!rsp["ScanPath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanPath` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ScanPath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scanPath.push_back((*itr).GetString());
        }
        m_scanPathHasBeenSet = true;
    }

    if (rsp.HasMember("ClickTimeout") && !rsp["ClickTimeout"].IsNull())
    {
        if (!rsp["ClickTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClickTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clickTimeout = rsp["ClickTimeout"].GetUint64();
        m_clickTimeoutHasBeenSet = true;
    }

    if (rsp.HasMember("ScanPathMode") && !rsp["ScanPathMode"].IsNull())
    {
        if (!rsp["ScanPathMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanPathMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanPathMode = string(rsp["ScanPathMode"].GetString());
        m_scanPathModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVirusScanSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enableScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableScan, allocator);
    }

    if (m_cycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycle, allocator);
    }

    if (m_beginScanAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginScanAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginScanAt.c_str(), allocator).Move(), allocator);
    }

    if (m_scanPathAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPathAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanPathAll, allocator);
    }

    if (m_scanPathTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPathType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanPathType, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_scanRangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanRangeType, allocator);
    }

    if (m_scanRangeAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRangeAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanRangeAll, allocator);
    }

    if (m_scanIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanIds.begin(); itr != m_scanIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scanPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanPath.begin(); itr != m_scanPath.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clickTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClickTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clickTimeout, allocator);
    }

    if (m_scanPathModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPathMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanPathMode.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


bool DescribeVirusScanSettingResponse::GetEnableScan() const
{
    return m_enableScan;
}

bool DescribeVirusScanSettingResponse::EnableScanHasBeenSet() const
{
    return m_enableScanHasBeenSet;
}

uint64_t DescribeVirusScanSettingResponse::GetCycle() const
{
    return m_cycle;
}

bool DescribeVirusScanSettingResponse::CycleHasBeenSet() const
{
    return m_cycleHasBeenSet;
}

string DescribeVirusScanSettingResponse::GetBeginScanAt() const
{
    return m_beginScanAt;
}

bool DescribeVirusScanSettingResponse::BeginScanAtHasBeenSet() const
{
    return m_beginScanAtHasBeenSet;
}

bool DescribeVirusScanSettingResponse::GetScanPathAll() const
{
    return m_scanPathAll;
}

bool DescribeVirusScanSettingResponse::ScanPathAllHasBeenSet() const
{
    return m_scanPathAllHasBeenSet;
}

uint64_t DescribeVirusScanSettingResponse::GetScanPathType() const
{
    return m_scanPathType;
}

bool DescribeVirusScanSettingResponse::ScanPathTypeHasBeenSet() const
{
    return m_scanPathTypeHasBeenSet;
}

uint64_t DescribeVirusScanSettingResponse::GetTimeout() const
{
    return m_timeout;
}

bool DescribeVirusScanSettingResponse::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t DescribeVirusScanSettingResponse::GetScanRangeType() const
{
    return m_scanRangeType;
}

bool DescribeVirusScanSettingResponse::ScanRangeTypeHasBeenSet() const
{
    return m_scanRangeTypeHasBeenSet;
}

bool DescribeVirusScanSettingResponse::GetScanRangeAll() const
{
    return m_scanRangeAll;
}

bool DescribeVirusScanSettingResponse::ScanRangeAllHasBeenSet() const
{
    return m_scanRangeAllHasBeenSet;
}

vector<string> DescribeVirusScanSettingResponse::GetScanIds() const
{
    return m_scanIds;
}

bool DescribeVirusScanSettingResponse::ScanIdsHasBeenSet() const
{
    return m_scanIdsHasBeenSet;
}

vector<string> DescribeVirusScanSettingResponse::GetScanPath() const
{
    return m_scanPath;
}

bool DescribeVirusScanSettingResponse::ScanPathHasBeenSet() const
{
    return m_scanPathHasBeenSet;
}

uint64_t DescribeVirusScanSettingResponse::GetClickTimeout() const
{
    return m_clickTimeout;
}

bool DescribeVirusScanSettingResponse::ClickTimeoutHasBeenSet() const
{
    return m_clickTimeoutHasBeenSet;
}

string DescribeVirusScanSettingResponse::GetScanPathMode() const
{
    return m_scanPathMode;
}

bool DescribeVirusScanSettingResponse::ScanPathModeHasBeenSet() const
{
    return m_scanPathModeHasBeenSet;
}


