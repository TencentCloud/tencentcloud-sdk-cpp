/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcss/v20201101/model/DescribeVirusScanConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVirusScanConfigResponse::DescribeVirusScanConfigResponse() :
    m_enableScanHasBeenSet(false),
    m_cycleHasBeenSet(false),
    m_beginScanAtHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_scanRangeTypeHasBeenSet(false),
    m_scanIDsHasBeenSet(false),
    m_scanPathHasBeenSet(false),
    m_scanPathModeHasBeenSet(false),
    m_isIncludePathHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVirusScanConfigResponse::Deserialize(const string &payload)
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
        if (!rsp["ScanRangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanRangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanRangeType = string(rsp["ScanRangeType"].GetString());
        m_scanRangeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanIDs") && !rsp["ScanIDs"].IsNull())
    {
        if (!rsp["ScanIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ScanIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScanRangeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scanIDs.push_back(item);
        }
        m_scanIDsHasBeenSet = true;
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

    if (rsp.HasMember("ScanPathMode") && !rsp["ScanPathMode"].IsNull())
    {
        if (!rsp["ScanPathMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanPathMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanPathMode = string(rsp["ScanPathMode"].GetString());
        m_scanPathModeHasBeenSet = true;
    }

    if (rsp.HasMember("IsIncludePath") && !rsp["IsIncludePath"].IsNull())
    {
        if (!rsp["IsIncludePath"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsIncludePath` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isIncludePath = rsp["IsIncludePath"].GetBool();
        m_isIncludePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVirusScanConfigResponse::ToJsonString() const
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
        value.AddMember(iKey, rapidjson::Value(m_scanRangeType.c_str(), allocator).Move(), allocator);
    }

    if (m_scanIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scanIDs.begin(); itr != m_scanIDs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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

    if (m_scanPathModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPathMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanPathMode.c_str(), allocator).Move(), allocator);
    }

    if (m_isIncludePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIncludePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIncludePath, allocator);
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


bool DescribeVirusScanConfigResponse::GetEnableScan() const
{
    return m_enableScan;
}

bool DescribeVirusScanConfigResponse::EnableScanHasBeenSet() const
{
    return m_enableScanHasBeenSet;
}

uint64_t DescribeVirusScanConfigResponse::GetCycle() const
{
    return m_cycle;
}

bool DescribeVirusScanConfigResponse::CycleHasBeenSet() const
{
    return m_cycleHasBeenSet;
}

string DescribeVirusScanConfigResponse::GetBeginScanAt() const
{
    return m_beginScanAt;
}

bool DescribeVirusScanConfigResponse::BeginScanAtHasBeenSet() const
{
    return m_beginScanAtHasBeenSet;
}

uint64_t DescribeVirusScanConfigResponse::GetTimeout() const
{
    return m_timeout;
}

bool DescribeVirusScanConfigResponse::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string DescribeVirusScanConfigResponse::GetScanRangeType() const
{
    return m_scanRangeType;
}

bool DescribeVirusScanConfigResponse::ScanRangeTypeHasBeenSet() const
{
    return m_scanRangeTypeHasBeenSet;
}

vector<ScanRangeInfo> DescribeVirusScanConfigResponse::GetScanIDs() const
{
    return m_scanIDs;
}

bool DescribeVirusScanConfigResponse::ScanIDsHasBeenSet() const
{
    return m_scanIDsHasBeenSet;
}

vector<string> DescribeVirusScanConfigResponse::GetScanPath() const
{
    return m_scanPath;
}

bool DescribeVirusScanConfigResponse::ScanPathHasBeenSet() const
{
    return m_scanPathHasBeenSet;
}

string DescribeVirusScanConfigResponse::GetScanPathMode() const
{
    return m_scanPathMode;
}

bool DescribeVirusScanConfigResponse::ScanPathModeHasBeenSet() const
{
    return m_scanPathModeHasBeenSet;
}

bool DescribeVirusScanConfigResponse::GetIsIncludePath() const
{
    return m_isIncludePath;
}

bool DescribeVirusScanConfigResponse::IsIncludePathHasBeenSet() const
{
    return m_isIncludePathHasBeenSet;
}


