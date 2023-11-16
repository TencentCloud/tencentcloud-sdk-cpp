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

#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeBackupSummaryResponse::DescribeBackupSummaryResponse() :
    m_freeSpaceHasBeenSet(false),
    m_actualUsedSpaceHasBeenSet(false),
    m_backupFilesTotalHasBeenSet(false),
    m_billingSpaceHasBeenSet(false),
    m_dataBackupSpaceHasBeenSet(false),
    m_dataBackupCountHasBeenSet(false),
    m_manualBackupSpaceHasBeenSet(false),
    m_manualBackupCountHasBeenSet(false),
    m_autoBackupSpaceHasBeenSet(false),
    m_autoBackupCountHasBeenSet(false),
    m_logBackupSpaceHasBeenSet(false),
    m_logBackupCountHasBeenSet(false),
    m_estimatedAmountHasBeenSet(false),
    m_localBackupFilesTotalHasBeenSet(false),
    m_crossBackupFilesTotalHasBeenSet(false),
    m_crossBillingSpaceHasBeenSet(false),
    m_crossAutoBackupSpaceHasBeenSet(false),
    m_crossAutoBackupCountHasBeenSet(false),
    m_localLogBackupSpaceHasBeenSet(false),
    m_localLogBackupCountHasBeenSet(false),
    m_crossLogBackupSpaceHasBeenSet(false),
    m_crossLogBackupCountHasBeenSet(false),
    m_crossEstimatedAmountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FreeSpace") && !rsp["FreeSpace"].IsNull())
    {
        if (!rsp["FreeSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FreeSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_freeSpace = rsp["FreeSpace"].GetUint64();
        m_freeSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("ActualUsedSpace") && !rsp["ActualUsedSpace"].IsNull())
    {
        if (!rsp["ActualUsedSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActualUsedSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actualUsedSpace = rsp["ActualUsedSpace"].GetUint64();
        m_actualUsedSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("BackupFilesTotal") && !rsp["BackupFilesTotal"].IsNull())
    {
        if (!rsp["BackupFilesTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFilesTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupFilesTotal = rsp["BackupFilesTotal"].GetUint64();
        m_backupFilesTotalHasBeenSet = true;
    }

    if (rsp.HasMember("BillingSpace") && !rsp["BillingSpace"].IsNull())
    {
        if (!rsp["BillingSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BillingSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_billingSpace = rsp["BillingSpace"].GetUint64();
        m_billingSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("DataBackupSpace") && !rsp["DataBackupSpace"].IsNull())
    {
        if (!rsp["DataBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupSpace = rsp["DataBackupSpace"].GetUint64();
        m_dataBackupSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("DataBackupCount") && !rsp["DataBackupCount"].IsNull())
    {
        if (!rsp["DataBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupCount = rsp["DataBackupCount"].GetUint64();
        m_dataBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("ManualBackupSpace") && !rsp["ManualBackupSpace"].IsNull())
    {
        if (!rsp["ManualBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupSpace = rsp["ManualBackupSpace"].GetUint64();
        m_manualBackupSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("ManualBackupCount") && !rsp["ManualBackupCount"].IsNull())
    {
        if (!rsp["ManualBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupCount = rsp["ManualBackupCount"].GetUint64();
        m_manualBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("AutoBackupSpace") && !rsp["AutoBackupSpace"].IsNull())
    {
        if (!rsp["AutoBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupSpace = rsp["AutoBackupSpace"].GetUint64();
        m_autoBackupSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("AutoBackupCount") && !rsp["AutoBackupCount"].IsNull())
    {
        if (!rsp["AutoBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupCount = rsp["AutoBackupCount"].GetUint64();
        m_autoBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("LogBackupSpace") && !rsp["LogBackupSpace"].IsNull())
    {
        if (!rsp["LogBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupSpace = rsp["LogBackupSpace"].GetUint64();
        m_logBackupSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("LogBackupCount") && !rsp["LogBackupCount"].IsNull())
    {
        if (!rsp["LogBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupCount = rsp["LogBackupCount"].GetUint64();
        m_logBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("EstimatedAmount") && !rsp["EstimatedAmount"].IsNull())
    {
        if (!rsp["EstimatedAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EstimatedAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedAmount = rsp["EstimatedAmount"].GetDouble();
        m_estimatedAmountHasBeenSet = true;
    }

    if (rsp.HasMember("LocalBackupFilesTotal") && !rsp["LocalBackupFilesTotal"].IsNull())
    {
        if (!rsp["LocalBackupFilesTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalBackupFilesTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_localBackupFilesTotal = rsp["LocalBackupFilesTotal"].GetUint64();
        m_localBackupFilesTotalHasBeenSet = true;
    }

    if (rsp.HasMember("CrossBackupFilesTotal") && !rsp["CrossBackupFilesTotal"].IsNull())
    {
        if (!rsp["CrossBackupFilesTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBackupFilesTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crossBackupFilesTotal = rsp["CrossBackupFilesTotal"].GetUint64();
        m_crossBackupFilesTotalHasBeenSet = true;
    }

    if (rsp.HasMember("CrossBillingSpace") && !rsp["CrossBillingSpace"].IsNull())
    {
        if (!rsp["CrossBillingSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBillingSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crossBillingSpace = rsp["CrossBillingSpace"].GetUint64();
        m_crossBillingSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("CrossAutoBackupSpace") && !rsp["CrossAutoBackupSpace"].IsNull())
    {
        if (!rsp["CrossAutoBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossAutoBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crossAutoBackupSpace = rsp["CrossAutoBackupSpace"].GetUint64();
        m_crossAutoBackupSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("CrossAutoBackupCount") && !rsp["CrossAutoBackupCount"].IsNull())
    {
        if (!rsp["CrossAutoBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossAutoBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crossAutoBackupCount = rsp["CrossAutoBackupCount"].GetUint64();
        m_crossAutoBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("LocalLogBackupSpace") && !rsp["LocalLogBackupSpace"].IsNull())
    {
        if (!rsp["LocalLogBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalLogBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_localLogBackupSpace = rsp["LocalLogBackupSpace"].GetUint64();
        m_localLogBackupSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("LocalLogBackupCount") && !rsp["LocalLogBackupCount"].IsNull())
    {
        if (!rsp["LocalLogBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalLogBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_localLogBackupCount = rsp["LocalLogBackupCount"].GetUint64();
        m_localLogBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("CrossLogBackupSpace") && !rsp["CrossLogBackupSpace"].IsNull())
    {
        if (!rsp["CrossLogBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossLogBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crossLogBackupSpace = rsp["CrossLogBackupSpace"].GetUint64();
        m_crossLogBackupSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("CrossLogBackupCount") && !rsp["CrossLogBackupCount"].IsNull())
    {
        if (!rsp["CrossLogBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossLogBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crossLogBackupCount = rsp["CrossLogBackupCount"].GetUint64();
        m_crossLogBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("CrossEstimatedAmount") && !rsp["CrossEstimatedAmount"].IsNull())
    {
        if (!rsp["CrossEstimatedAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CrossEstimatedAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_crossEstimatedAmount = rsp["CrossEstimatedAmount"].GetDouble();
        m_crossEstimatedAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_freeSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeSpace, allocator);
    }

    if (m_actualUsedSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualUsedSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actualUsedSpace, allocator);
    }

    if (m_backupFilesTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFilesTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupFilesTotal, allocator);
    }

    if (m_billingSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingSpace, allocator);
    }

    if (m_dataBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupSpace, allocator);
    }

    if (m_dataBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupCount, allocator);
    }

    if (m_manualBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupSpace, allocator);
    }

    if (m_manualBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupCount, allocator);
    }

    if (m_autoBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupSpace, allocator);
    }

    if (m_autoBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupCount, allocator);
    }

    if (m_logBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBackupSpace, allocator);
    }

    if (m_logBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBackupCount, allocator);
    }

    if (m_estimatedAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_estimatedAmount, allocator);
    }

    if (m_localBackupFilesTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalBackupFilesTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localBackupFilesTotal, allocator);
    }

    if (m_crossBackupFilesTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupFilesTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossBackupFilesTotal, allocator);
    }

    if (m_crossBillingSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBillingSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossBillingSpace, allocator);
    }

    if (m_crossAutoBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossAutoBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossAutoBackupSpace, allocator);
    }

    if (m_crossAutoBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossAutoBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossAutoBackupCount, allocator);
    }

    if (m_localLogBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalLogBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localLogBackupSpace, allocator);
    }

    if (m_localLogBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalLogBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localLogBackupCount, allocator);
    }

    if (m_crossLogBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossLogBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossLogBackupSpace, allocator);
    }

    if (m_crossLogBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossLogBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossLogBackupCount, allocator);
    }

    if (m_crossEstimatedAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossEstimatedAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossEstimatedAmount, allocator);
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


uint64_t DescribeBackupSummaryResponse::GetFreeSpace() const
{
    return m_freeSpace;
}

bool DescribeBackupSummaryResponse::FreeSpaceHasBeenSet() const
{
    return m_freeSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetActualUsedSpace() const
{
    return m_actualUsedSpace;
}

bool DescribeBackupSummaryResponse::ActualUsedSpaceHasBeenSet() const
{
    return m_actualUsedSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetBackupFilesTotal() const
{
    return m_backupFilesTotal;
}

bool DescribeBackupSummaryResponse::BackupFilesTotalHasBeenSet() const
{
    return m_backupFilesTotalHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetBillingSpace() const
{
    return m_billingSpace;
}

bool DescribeBackupSummaryResponse::BillingSpaceHasBeenSet() const
{
    return m_billingSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetDataBackupSpace() const
{
    return m_dataBackupSpace;
}

bool DescribeBackupSummaryResponse::DataBackupSpaceHasBeenSet() const
{
    return m_dataBackupSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetDataBackupCount() const
{
    return m_dataBackupCount;
}

bool DescribeBackupSummaryResponse::DataBackupCountHasBeenSet() const
{
    return m_dataBackupCountHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetManualBackupSpace() const
{
    return m_manualBackupSpace;
}

bool DescribeBackupSummaryResponse::ManualBackupSpaceHasBeenSet() const
{
    return m_manualBackupSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetManualBackupCount() const
{
    return m_manualBackupCount;
}

bool DescribeBackupSummaryResponse::ManualBackupCountHasBeenSet() const
{
    return m_manualBackupCountHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetAutoBackupSpace() const
{
    return m_autoBackupSpace;
}

bool DescribeBackupSummaryResponse::AutoBackupSpaceHasBeenSet() const
{
    return m_autoBackupSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetAutoBackupCount() const
{
    return m_autoBackupCount;
}

bool DescribeBackupSummaryResponse::AutoBackupCountHasBeenSet() const
{
    return m_autoBackupCountHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetLogBackupSpace() const
{
    return m_logBackupSpace;
}

bool DescribeBackupSummaryResponse::LogBackupSpaceHasBeenSet() const
{
    return m_logBackupSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetLogBackupCount() const
{
    return m_logBackupCount;
}

bool DescribeBackupSummaryResponse::LogBackupCountHasBeenSet() const
{
    return m_logBackupCountHasBeenSet;
}

double DescribeBackupSummaryResponse::GetEstimatedAmount() const
{
    return m_estimatedAmount;
}

bool DescribeBackupSummaryResponse::EstimatedAmountHasBeenSet() const
{
    return m_estimatedAmountHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetLocalBackupFilesTotal() const
{
    return m_localBackupFilesTotal;
}

bool DescribeBackupSummaryResponse::LocalBackupFilesTotalHasBeenSet() const
{
    return m_localBackupFilesTotalHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetCrossBackupFilesTotal() const
{
    return m_crossBackupFilesTotal;
}

bool DescribeBackupSummaryResponse::CrossBackupFilesTotalHasBeenSet() const
{
    return m_crossBackupFilesTotalHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetCrossBillingSpace() const
{
    return m_crossBillingSpace;
}

bool DescribeBackupSummaryResponse::CrossBillingSpaceHasBeenSet() const
{
    return m_crossBillingSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetCrossAutoBackupSpace() const
{
    return m_crossAutoBackupSpace;
}

bool DescribeBackupSummaryResponse::CrossAutoBackupSpaceHasBeenSet() const
{
    return m_crossAutoBackupSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetCrossAutoBackupCount() const
{
    return m_crossAutoBackupCount;
}

bool DescribeBackupSummaryResponse::CrossAutoBackupCountHasBeenSet() const
{
    return m_crossAutoBackupCountHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetLocalLogBackupSpace() const
{
    return m_localLogBackupSpace;
}

bool DescribeBackupSummaryResponse::LocalLogBackupSpaceHasBeenSet() const
{
    return m_localLogBackupSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetLocalLogBackupCount() const
{
    return m_localLogBackupCount;
}

bool DescribeBackupSummaryResponse::LocalLogBackupCountHasBeenSet() const
{
    return m_localLogBackupCountHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetCrossLogBackupSpace() const
{
    return m_crossLogBackupSpace;
}

bool DescribeBackupSummaryResponse::CrossLogBackupSpaceHasBeenSet() const
{
    return m_crossLogBackupSpaceHasBeenSet;
}

uint64_t DescribeBackupSummaryResponse::GetCrossLogBackupCount() const
{
    return m_crossLogBackupCount;
}

bool DescribeBackupSummaryResponse::CrossLogBackupCountHasBeenSet() const
{
    return m_crossLogBackupCountHasBeenSet;
}

double DescribeBackupSummaryResponse::GetCrossEstimatedAmount() const
{
    return m_crossEstimatedAmount;
}

bool DescribeBackupSummaryResponse::CrossEstimatedAmountHasBeenSet() const
{
    return m_crossEstimatedAmountHasBeenSet;
}


