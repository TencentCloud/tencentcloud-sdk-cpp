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

#include <tencentcloud/mongodb/v20190725/model/DescribeBackupRulesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

DescribeBackupRulesResponse::DescribeBackupRulesResponse() :
    m_backupSaveTimeHasBeenSet(false),
    m_backupFrequencyHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_activeWeekdaysHasBeenSet(false),
    m_longTermIntervalHasBeenSet(false),
    m_longTermActiveDaysHasBeenSet(false),
    m_longTermExpiredDaysHasBeenSet(false),
    m_oplogExpiredDaysHasBeenSet(false),
    m_backupVersionHasBeenSet(false),
    m_backupTotalSizeHasBeenSet(false),
    m_alertThresholdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupRulesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BackupSaveTime") && !rsp["BackupSaveTime"].IsNull())
    {
        if (!rsp["BackupSaveTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSaveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSaveTime = rsp["BackupSaveTime"].GetUint64();
        m_backupSaveTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupFrequency") && !rsp["BackupFrequency"].IsNull())
    {
        if (!rsp["BackupFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupFrequency = rsp["BackupFrequency"].GetInt64();
        m_backupFrequencyHasBeenSet = true;
    }

    if (rsp.HasMember("BackupTime") && !rsp["BackupTime"].IsNull())
    {
        if (!rsp["BackupTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = rsp["BackupTime"].GetUint64();
        m_backupTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupMethod") && !rsp["BackupMethod"].IsNull())
    {
        if (!rsp["BackupMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = rsp["BackupMethod"].GetUint64();
        m_backupMethodHasBeenSet = true;
    }

    if (rsp.HasMember("ActiveWeekdays") && !rsp["ActiveWeekdays"].IsNull())
    {
        if (!rsp["ActiveWeekdays"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveWeekdays` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeWeekdays = string(rsp["ActiveWeekdays"].GetString());
        m_activeWeekdaysHasBeenSet = true;
    }

    if (rsp.HasMember("LongTermInterval") && !rsp["LongTermInterval"].IsNull())
    {
        if (!rsp["LongTermInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LongTermInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longTermInterval = string(rsp["LongTermInterval"].GetString());
        m_longTermIntervalHasBeenSet = true;
    }

    if (rsp.HasMember("LongTermActiveDays") && !rsp["LongTermActiveDays"].IsNull())
    {
        if (!rsp["LongTermActiveDays"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LongTermActiveDays` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longTermActiveDays = string(rsp["LongTermActiveDays"].GetString());
        m_longTermActiveDaysHasBeenSet = true;
    }

    if (rsp.HasMember("LongTermExpiredDays") && !rsp["LongTermExpiredDays"].IsNull())
    {
        if (!rsp["LongTermExpiredDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LongTermExpiredDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_longTermExpiredDays = rsp["LongTermExpiredDays"].GetInt64();
        m_longTermExpiredDaysHasBeenSet = true;
    }

    if (rsp.HasMember("OplogExpiredDays") && !rsp["OplogExpiredDays"].IsNull())
    {
        if (!rsp["OplogExpiredDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OplogExpiredDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oplogExpiredDays = rsp["OplogExpiredDays"].GetInt64();
        m_oplogExpiredDaysHasBeenSet = true;
    }

    if (rsp.HasMember("BackupVersion") && !rsp["BackupVersion"].IsNull())
    {
        if (!rsp["BackupVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupVersion = rsp["BackupVersion"].GetInt64();
        m_backupVersionHasBeenSet = true;
    }

    if (rsp.HasMember("BackupTotalSize") && !rsp["BackupTotalSize"].IsNull())
    {
        if (!rsp["BackupTotalSize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTotalSize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupTotalSize.Deserialize(rsp["BackupTotalSize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupTotalSizeHasBeenSet = true;
    }

    if (rsp.HasMember("AlertThreshold") && !rsp["AlertThreshold"].IsNull())
    {
        if (!rsp["AlertThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alertThreshold = rsp["AlertThreshold"].GetInt64();
        m_alertThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupRulesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backupSaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSaveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSaveTime, allocator);
    }

    if (m_backupFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupFrequency, allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupTime, allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupMethod, allocator);
    }

    if (m_activeWeekdaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveWeekdays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeWeekdays.c_str(), allocator).Move(), allocator);
    }

    if (m_longTermIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongTermInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longTermInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_longTermActiveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongTermActiveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longTermActiveDays.c_str(), allocator).Move(), allocator);
    }

    if (m_longTermExpiredDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongTermExpiredDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longTermExpiredDays, allocator);
    }

    if (m_oplogExpiredDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OplogExpiredDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oplogExpiredDays, allocator);
    }

    if (m_backupVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupVersion, allocator);
    }

    if (m_backupTotalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupTotalSize.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_alertThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alertThreshold, allocator);
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


uint64_t DescribeBackupRulesResponse::GetBackupSaveTime() const
{
    return m_backupSaveTime;
}

bool DescribeBackupRulesResponse::BackupSaveTimeHasBeenSet() const
{
    return m_backupSaveTimeHasBeenSet;
}

int64_t DescribeBackupRulesResponse::GetBackupFrequency() const
{
    return m_backupFrequency;
}

bool DescribeBackupRulesResponse::BackupFrequencyHasBeenSet() const
{
    return m_backupFrequencyHasBeenSet;
}

uint64_t DescribeBackupRulesResponse::GetBackupTime() const
{
    return m_backupTime;
}

bool DescribeBackupRulesResponse::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

uint64_t DescribeBackupRulesResponse::GetBackupMethod() const
{
    return m_backupMethod;
}

bool DescribeBackupRulesResponse::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string DescribeBackupRulesResponse::GetActiveWeekdays() const
{
    return m_activeWeekdays;
}

bool DescribeBackupRulesResponse::ActiveWeekdaysHasBeenSet() const
{
    return m_activeWeekdaysHasBeenSet;
}

string DescribeBackupRulesResponse::GetLongTermInterval() const
{
    return m_longTermInterval;
}

bool DescribeBackupRulesResponse::LongTermIntervalHasBeenSet() const
{
    return m_longTermIntervalHasBeenSet;
}

string DescribeBackupRulesResponse::GetLongTermActiveDays() const
{
    return m_longTermActiveDays;
}

bool DescribeBackupRulesResponse::LongTermActiveDaysHasBeenSet() const
{
    return m_longTermActiveDaysHasBeenSet;
}

int64_t DescribeBackupRulesResponse::GetLongTermExpiredDays() const
{
    return m_longTermExpiredDays;
}

bool DescribeBackupRulesResponse::LongTermExpiredDaysHasBeenSet() const
{
    return m_longTermExpiredDaysHasBeenSet;
}

int64_t DescribeBackupRulesResponse::GetOplogExpiredDays() const
{
    return m_oplogExpiredDays;
}

bool DescribeBackupRulesResponse::OplogExpiredDaysHasBeenSet() const
{
    return m_oplogExpiredDaysHasBeenSet;
}

int64_t DescribeBackupRulesResponse::GetBackupVersion() const
{
    return m_backupVersion;
}

bool DescribeBackupRulesResponse::BackupVersionHasBeenSet() const
{
    return m_backupVersionHasBeenSet;
}

BackupTotalSize DescribeBackupRulesResponse::GetBackupTotalSize() const
{
    return m_backupTotalSize;
}

bool DescribeBackupRulesResponse::BackupTotalSizeHasBeenSet() const
{
    return m_backupTotalSizeHasBeenSet;
}

int64_t DescribeBackupRulesResponse::GetAlertThreshold() const
{
    return m_alertThreshold;
}

bool DescribeBackupRulesResponse::AlertThresholdHasBeenSet() const
{
    return m_alertThresholdHasBeenSet;
}


