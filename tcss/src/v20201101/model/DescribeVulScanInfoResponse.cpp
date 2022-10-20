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

#include <tencentcloud/tcss/v20201101/model/DescribeVulScanInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVulScanInfoResponse::DescribeVulScanInfoResponse() :
    m_localImageScanCountHasBeenSet(false),
    m_ignoreVulCountHasBeenSet(false),
    m_scanStartTimeHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_foundRiskImageCountHasBeenSet(false),
    m_foundVulCountHasBeenSet(false),
    m_scanProgressHasBeenSet(false),
    m_registryImageScanCountHasBeenSet(false),
    m_localTaskIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remainingTimeHasBeenSet(false),
    m_registryTaskIDHasBeenSet(false),
    m_registryFoundVulCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulScanInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LocalImageScanCount") && !rsp["LocalImageScanCount"].IsNull())
    {
        if (!rsp["LocalImageScanCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalImageScanCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localImageScanCount = rsp["LocalImageScanCount"].GetInt64();
        m_localImageScanCountHasBeenSet = true;
    }

    if (rsp.HasMember("IgnoreVulCount") && !rsp["IgnoreVulCount"].IsNull())
    {
        if (!rsp["IgnoreVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IgnoreVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreVulCount = rsp["IgnoreVulCount"].GetInt64();
        m_ignoreVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("ScanStartTime") && !rsp["ScanStartTime"].IsNull())
    {
        if (!rsp["ScanStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStartTime = string(rsp["ScanStartTime"].GetString());
        m_scanStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanEndTime") && !rsp["ScanEndTime"].IsNull())
    {
        if (!rsp["ScanEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanEndTime = string(rsp["ScanEndTime"].GetString());
        m_scanEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FoundRiskImageCount") && !rsp["FoundRiskImageCount"].IsNull())
    {
        if (!rsp["FoundRiskImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FoundRiskImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_foundRiskImageCount = rsp["FoundRiskImageCount"].GetInt64();
        m_foundRiskImageCountHasBeenSet = true;
    }

    if (rsp.HasMember("FoundVulCount") && !rsp["FoundVulCount"].IsNull())
    {
        if (!rsp["FoundVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FoundVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_foundVulCount = rsp["FoundVulCount"].GetInt64();
        m_foundVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("ScanProgress") && !rsp["ScanProgress"].IsNull())
    {
        if (!rsp["ScanProgress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScanProgress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_scanProgress = rsp["ScanProgress"].GetDouble();
        m_scanProgressHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryImageScanCount") && !rsp["RegistryImageScanCount"].IsNull())
    {
        if (!rsp["RegistryImageScanCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryImageScanCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryImageScanCount = rsp["RegistryImageScanCount"].GetInt64();
        m_registryImageScanCountHasBeenSet = true;
    }

    if (rsp.HasMember("LocalTaskID") && !rsp["LocalTaskID"].IsNull())
    {
        if (!rsp["LocalTaskID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalTaskID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localTaskID = rsp["LocalTaskID"].GetInt64();
        m_localTaskIDHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("RemainingTime") && !rsp["RemainingTime"].IsNull())
    {
        if (!rsp["RemainingTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RemainingTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingTime = rsp["RemainingTime"].GetDouble();
        m_remainingTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryTaskID") && !rsp["RegistryTaskID"].IsNull())
    {
        if (!rsp["RegistryTaskID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryTaskID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryTaskID = rsp["RegistryTaskID"].GetInt64();
        m_registryTaskIDHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryFoundVulCount") && !rsp["RegistryFoundVulCount"].IsNull())
    {
        if (!rsp["RegistryFoundVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryFoundVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryFoundVulCount = rsp["RegistryFoundVulCount"].GetInt64();
        m_registryFoundVulCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulScanInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_localImageScanCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalImageScanCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localImageScanCount, allocator);
    }

    if (m_ignoreVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreVulCount, allocator);
    }

    if (m_scanStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_foundRiskImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FoundRiskImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_foundRiskImageCount, allocator);
    }

    if (m_foundVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FoundVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_foundVulCount, allocator);
    }

    if (m_scanProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanProgress, allocator);
    }

    if (m_registryImageScanCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryImageScanCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryImageScanCount, allocator);
    }

    if (m_localTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalTaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localTaskID, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_remainingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingTime, allocator);
    }

    if (m_registryTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryTaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryTaskID, allocator);
    }

    if (m_registryFoundVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryFoundVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryFoundVulCount, allocator);
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


int64_t DescribeVulScanInfoResponse::GetLocalImageScanCount() const
{
    return m_localImageScanCount;
}

bool DescribeVulScanInfoResponse::LocalImageScanCountHasBeenSet() const
{
    return m_localImageScanCountHasBeenSet;
}

int64_t DescribeVulScanInfoResponse::GetIgnoreVulCount() const
{
    return m_ignoreVulCount;
}

bool DescribeVulScanInfoResponse::IgnoreVulCountHasBeenSet() const
{
    return m_ignoreVulCountHasBeenSet;
}

string DescribeVulScanInfoResponse::GetScanStartTime() const
{
    return m_scanStartTime;
}

bool DescribeVulScanInfoResponse::ScanStartTimeHasBeenSet() const
{
    return m_scanStartTimeHasBeenSet;
}

string DescribeVulScanInfoResponse::GetScanEndTime() const
{
    return m_scanEndTime;
}

bool DescribeVulScanInfoResponse::ScanEndTimeHasBeenSet() const
{
    return m_scanEndTimeHasBeenSet;
}

int64_t DescribeVulScanInfoResponse::GetFoundRiskImageCount() const
{
    return m_foundRiskImageCount;
}

bool DescribeVulScanInfoResponse::FoundRiskImageCountHasBeenSet() const
{
    return m_foundRiskImageCountHasBeenSet;
}

int64_t DescribeVulScanInfoResponse::GetFoundVulCount() const
{
    return m_foundVulCount;
}

bool DescribeVulScanInfoResponse::FoundVulCountHasBeenSet() const
{
    return m_foundVulCountHasBeenSet;
}

double DescribeVulScanInfoResponse::GetScanProgress() const
{
    return m_scanProgress;
}

bool DescribeVulScanInfoResponse::ScanProgressHasBeenSet() const
{
    return m_scanProgressHasBeenSet;
}

int64_t DescribeVulScanInfoResponse::GetRegistryImageScanCount() const
{
    return m_registryImageScanCount;
}

bool DescribeVulScanInfoResponse::RegistryImageScanCountHasBeenSet() const
{
    return m_registryImageScanCountHasBeenSet;
}

int64_t DescribeVulScanInfoResponse::GetLocalTaskID() const
{
    return m_localTaskID;
}

bool DescribeVulScanInfoResponse::LocalTaskIDHasBeenSet() const
{
    return m_localTaskIDHasBeenSet;
}

string DescribeVulScanInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeVulScanInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double DescribeVulScanInfoResponse::GetRemainingTime() const
{
    return m_remainingTime;
}

bool DescribeVulScanInfoResponse::RemainingTimeHasBeenSet() const
{
    return m_remainingTimeHasBeenSet;
}

int64_t DescribeVulScanInfoResponse::GetRegistryTaskID() const
{
    return m_registryTaskID;
}

bool DescribeVulScanInfoResponse::RegistryTaskIDHasBeenSet() const
{
    return m_registryTaskIDHasBeenSet;
}

int64_t DescribeVulScanInfoResponse::GetRegistryFoundVulCount() const
{
    return m_registryFoundVulCount;
}

bool DescribeVulScanInfoResponse::RegistryFoundVulCountHasBeenSet() const
{
    return m_registryFoundVulCountHasBeenSet;
}


