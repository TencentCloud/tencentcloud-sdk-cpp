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

#include <tencentcloud/cdb/v20170320/model/DescribeBackupConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeBackupConfigResponse::DescribeBackupConfigResponse() :
    m_startTimeMinHasBeenSet(false),
    m_startTimeMaxHasBeenSet(false),
    m_backupExpireDaysHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_binlogExpireDaysHasBeenSet(false),
    m_backupTimeWindowHasBeenSet(false),
    m_enableBackupPeriodSaveHasBeenSet(false),
    m_backupPeriodSaveDaysHasBeenSet(false),
    m_backupPeriodSaveIntervalHasBeenSet(false),
    m_backupPeriodSaveCountHasBeenSet(false),
    m_startBackupPeriodSaveDateHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StartTimeMin") && !rsp["StartTimeMin"].IsNull())
    {
        if (!rsp["StartTimeMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTimeMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeMin = rsp["StartTimeMin"].GetInt64();
        m_startTimeMinHasBeenSet = true;
    }

    if (rsp.HasMember("StartTimeMax") && !rsp["StartTimeMax"].IsNull())
    {
        if (!rsp["StartTimeMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTimeMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeMax = rsp["StartTimeMax"].GetInt64();
        m_startTimeMaxHasBeenSet = true;
    }

    if (rsp.HasMember("BackupExpireDays") && !rsp["BackupExpireDays"].IsNull())
    {
        if (!rsp["BackupExpireDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupExpireDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupExpireDays = rsp["BackupExpireDays"].GetInt64();
        m_backupExpireDaysHasBeenSet = true;
    }

    if (rsp.HasMember("BackupMethod") && !rsp["BackupMethod"].IsNull())
    {
        if (!rsp["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(rsp["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (rsp.HasMember("BinlogExpireDays") && !rsp["BinlogExpireDays"].IsNull())
    {
        if (!rsp["BinlogExpireDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogExpireDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogExpireDays = rsp["BinlogExpireDays"].GetInt64();
        m_binlogExpireDaysHasBeenSet = true;
    }

    if (rsp.HasMember("BackupTimeWindow") && !rsp["BackupTimeWindow"].IsNull())
    {
        if (!rsp["BackupTimeWindow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTimeWindow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupTimeWindow.Deserialize(rsp["BackupTimeWindow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupTimeWindowHasBeenSet = true;
    }

    if (rsp.HasMember("EnableBackupPeriodSave") && !rsp["EnableBackupPeriodSave"].IsNull())
    {
        if (!rsp["EnableBackupPeriodSave"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnableBackupPeriodSave` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableBackupPeriodSave = string(rsp["EnableBackupPeriodSave"].GetString());
        m_enableBackupPeriodSaveHasBeenSet = true;
    }

    if (rsp.HasMember("BackupPeriodSaveDays") && !rsp["BackupPeriodSaveDays"].IsNull())
    {
        if (!rsp["BackupPeriodSaveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPeriodSaveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupPeriodSaveDays = rsp["BackupPeriodSaveDays"].GetInt64();
        m_backupPeriodSaveDaysHasBeenSet = true;
    }

    if (rsp.HasMember("BackupPeriodSaveInterval") && !rsp["BackupPeriodSaveInterval"].IsNull())
    {
        if (!rsp["BackupPeriodSaveInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPeriodSaveInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPeriodSaveInterval = string(rsp["BackupPeriodSaveInterval"].GetString());
        m_backupPeriodSaveIntervalHasBeenSet = true;
    }

    if (rsp.HasMember("BackupPeriodSaveCount") && !rsp["BackupPeriodSaveCount"].IsNull())
    {
        if (!rsp["BackupPeriodSaveCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPeriodSaveCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupPeriodSaveCount = rsp["BackupPeriodSaveCount"].GetInt64();
        m_backupPeriodSaveCountHasBeenSet = true;
    }

    if (rsp.HasMember("StartBackupPeriodSaveDate") && !rsp["StartBackupPeriodSaveDate"].IsNull())
    {
        if (!rsp["StartBackupPeriodSaveDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartBackupPeriodSaveDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startBackupPeriodSaveDate = string(rsp["StartBackupPeriodSaveDate"].GetString());
        m_startBackupPeriodSaveDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_startTimeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeMin, allocator);
    }

    if (m_startTimeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeMax, allocator);
    }

    if (m_backupExpireDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupExpireDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupExpireDays, allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogExpireDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogExpireDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogExpireDays, allocator);
    }

    if (m_backupTimeWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTimeWindow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupTimeWindow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableBackupPeriodSaveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBackupPeriodSave";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableBackupPeriodSave.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPeriodSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupPeriodSaveDays, allocator);
    }

    if (m_backupPeriodSaveIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodSaveInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPeriodSaveInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPeriodSaveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodSaveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupPeriodSaveCount, allocator);
    }

    if (m_startBackupPeriodSaveDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartBackupPeriodSaveDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startBackupPeriodSaveDate.c_str(), allocator).Move(), allocator);
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


int64_t DescribeBackupConfigResponse::GetStartTimeMin() const
{
    return m_startTimeMin;
}

bool DescribeBackupConfigResponse::StartTimeMinHasBeenSet() const
{
    return m_startTimeMinHasBeenSet;
}

int64_t DescribeBackupConfigResponse::GetStartTimeMax() const
{
    return m_startTimeMax;
}

bool DescribeBackupConfigResponse::StartTimeMaxHasBeenSet() const
{
    return m_startTimeMaxHasBeenSet;
}

int64_t DescribeBackupConfigResponse::GetBackupExpireDays() const
{
    return m_backupExpireDays;
}

bool DescribeBackupConfigResponse::BackupExpireDaysHasBeenSet() const
{
    return m_backupExpireDaysHasBeenSet;
}

string DescribeBackupConfigResponse::GetBackupMethod() const
{
    return m_backupMethod;
}

bool DescribeBackupConfigResponse::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

int64_t DescribeBackupConfigResponse::GetBinlogExpireDays() const
{
    return m_binlogExpireDays;
}

bool DescribeBackupConfigResponse::BinlogExpireDaysHasBeenSet() const
{
    return m_binlogExpireDaysHasBeenSet;
}

CommonTimeWindow DescribeBackupConfigResponse::GetBackupTimeWindow() const
{
    return m_backupTimeWindow;
}

bool DescribeBackupConfigResponse::BackupTimeWindowHasBeenSet() const
{
    return m_backupTimeWindowHasBeenSet;
}

string DescribeBackupConfigResponse::GetEnableBackupPeriodSave() const
{
    return m_enableBackupPeriodSave;
}

bool DescribeBackupConfigResponse::EnableBackupPeriodSaveHasBeenSet() const
{
    return m_enableBackupPeriodSaveHasBeenSet;
}

int64_t DescribeBackupConfigResponse::GetBackupPeriodSaveDays() const
{
    return m_backupPeriodSaveDays;
}

bool DescribeBackupConfigResponse::BackupPeriodSaveDaysHasBeenSet() const
{
    return m_backupPeriodSaveDaysHasBeenSet;
}

string DescribeBackupConfigResponse::GetBackupPeriodSaveInterval() const
{
    return m_backupPeriodSaveInterval;
}

bool DescribeBackupConfigResponse::BackupPeriodSaveIntervalHasBeenSet() const
{
    return m_backupPeriodSaveIntervalHasBeenSet;
}

int64_t DescribeBackupConfigResponse::GetBackupPeriodSaveCount() const
{
    return m_backupPeriodSaveCount;
}

bool DescribeBackupConfigResponse::BackupPeriodSaveCountHasBeenSet() const
{
    return m_backupPeriodSaveCountHasBeenSet;
}

string DescribeBackupConfigResponse::GetStartBackupPeriodSaveDate() const
{
    return m_startBackupPeriodSaveDate;
}

bool DescribeBackupConfigResponse::StartBackupPeriodSaveDateHasBeenSet() const
{
    return m_startBackupPeriodSaveDateHasBeenSet;
}


