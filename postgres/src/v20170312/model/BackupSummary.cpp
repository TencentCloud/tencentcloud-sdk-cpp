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

#include <tencentcloud/postgres/v20170312/model/BackupSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

BackupSummary::BackupSummary() :
    m_dBInstanceIdHasBeenSet(false),
    m_logBackupCountHasBeenSet(false),
    m_logBackupSizeHasBeenSet(false),
    m_manualBaseBackupCountHasBeenSet(false),
    m_manualBaseBackupSizeHasBeenSet(false),
    m_autoBaseBackupCountHasBeenSet(false),
    m_autoBaseBackupSizeHasBeenSet(false),
    m_totalBackupCountHasBeenSet(false),
    m_totalBackupSizeHasBeenSet(false)
{
}

CoreInternalOutcome BackupSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBInstanceId") && !value["DBInstanceId"].IsNull())
    {
        if (!value["DBInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummary.DBInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceId = string(value["DBInstanceId"].GetString());
        m_dBInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("LogBackupCount") && !value["LogBackupCount"].IsNull())
    {
        if (!value["LogBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummary.LogBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupCount = value["LogBackupCount"].GetUint64();
        m_logBackupCountHasBeenSet = true;
    }

    if (value.HasMember("LogBackupSize") && !value["LogBackupSize"].IsNull())
    {
        if (!value["LogBackupSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummary.LogBackupSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupSize = value["LogBackupSize"].GetUint64();
        m_logBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("ManualBaseBackupCount") && !value["ManualBaseBackupCount"].IsNull())
    {
        if (!value["ManualBaseBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummary.ManualBaseBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBaseBackupCount = value["ManualBaseBackupCount"].GetUint64();
        m_manualBaseBackupCountHasBeenSet = true;
    }

    if (value.HasMember("ManualBaseBackupSize") && !value["ManualBaseBackupSize"].IsNull())
    {
        if (!value["ManualBaseBackupSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummary.ManualBaseBackupSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBaseBackupSize = value["ManualBaseBackupSize"].GetUint64();
        m_manualBaseBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("AutoBaseBackupCount") && !value["AutoBaseBackupCount"].IsNull())
    {
        if (!value["AutoBaseBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummary.AutoBaseBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBaseBackupCount = value["AutoBaseBackupCount"].GetUint64();
        m_autoBaseBackupCountHasBeenSet = true;
    }

    if (value.HasMember("AutoBaseBackupSize") && !value["AutoBaseBackupSize"].IsNull())
    {
        if (!value["AutoBaseBackupSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummary.AutoBaseBackupSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBaseBackupSize = value["AutoBaseBackupSize"].GetUint64();
        m_autoBaseBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalBackupCount") && !value["TotalBackupCount"].IsNull())
    {
        if (!value["TotalBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummary.TotalBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBackupCount = value["TotalBackupCount"].GetUint64();
        m_totalBackupCountHasBeenSet = true;
    }

    if (value.HasMember("TotalBackupSize") && !value["TotalBackupSize"].IsNull())
    {
        if (!value["TotalBackupSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummary.TotalBackupSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBackupSize = value["TotalBackupSize"].GetUint64();
        m_totalBackupSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_logBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBackupCount, allocator);
    }

    if (m_logBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBackupSize, allocator);
    }

    if (m_manualBaseBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBaseBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBaseBackupCount, allocator);
    }

    if (m_manualBaseBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBaseBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBaseBackupSize, allocator);
    }

    if (m_autoBaseBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBaseBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBaseBackupCount, allocator);
    }

    if (m_autoBaseBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBaseBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBaseBackupSize, allocator);
    }

    if (m_totalBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBackupCount, allocator);
    }

    if (m_totalBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBackupSize, allocator);
    }

}


string BackupSummary::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void BackupSummary::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool BackupSummary::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

uint64_t BackupSummary::GetLogBackupCount() const
{
    return m_logBackupCount;
}

void BackupSummary::SetLogBackupCount(const uint64_t& _logBackupCount)
{
    m_logBackupCount = _logBackupCount;
    m_logBackupCountHasBeenSet = true;
}

bool BackupSummary::LogBackupCountHasBeenSet() const
{
    return m_logBackupCountHasBeenSet;
}

uint64_t BackupSummary::GetLogBackupSize() const
{
    return m_logBackupSize;
}

void BackupSummary::SetLogBackupSize(const uint64_t& _logBackupSize)
{
    m_logBackupSize = _logBackupSize;
    m_logBackupSizeHasBeenSet = true;
}

bool BackupSummary::LogBackupSizeHasBeenSet() const
{
    return m_logBackupSizeHasBeenSet;
}

uint64_t BackupSummary::GetManualBaseBackupCount() const
{
    return m_manualBaseBackupCount;
}

void BackupSummary::SetManualBaseBackupCount(const uint64_t& _manualBaseBackupCount)
{
    m_manualBaseBackupCount = _manualBaseBackupCount;
    m_manualBaseBackupCountHasBeenSet = true;
}

bool BackupSummary::ManualBaseBackupCountHasBeenSet() const
{
    return m_manualBaseBackupCountHasBeenSet;
}

uint64_t BackupSummary::GetManualBaseBackupSize() const
{
    return m_manualBaseBackupSize;
}

void BackupSummary::SetManualBaseBackupSize(const uint64_t& _manualBaseBackupSize)
{
    m_manualBaseBackupSize = _manualBaseBackupSize;
    m_manualBaseBackupSizeHasBeenSet = true;
}

bool BackupSummary::ManualBaseBackupSizeHasBeenSet() const
{
    return m_manualBaseBackupSizeHasBeenSet;
}

uint64_t BackupSummary::GetAutoBaseBackupCount() const
{
    return m_autoBaseBackupCount;
}

void BackupSummary::SetAutoBaseBackupCount(const uint64_t& _autoBaseBackupCount)
{
    m_autoBaseBackupCount = _autoBaseBackupCount;
    m_autoBaseBackupCountHasBeenSet = true;
}

bool BackupSummary::AutoBaseBackupCountHasBeenSet() const
{
    return m_autoBaseBackupCountHasBeenSet;
}

uint64_t BackupSummary::GetAutoBaseBackupSize() const
{
    return m_autoBaseBackupSize;
}

void BackupSummary::SetAutoBaseBackupSize(const uint64_t& _autoBaseBackupSize)
{
    m_autoBaseBackupSize = _autoBaseBackupSize;
    m_autoBaseBackupSizeHasBeenSet = true;
}

bool BackupSummary::AutoBaseBackupSizeHasBeenSet() const
{
    return m_autoBaseBackupSizeHasBeenSet;
}

uint64_t BackupSummary::GetTotalBackupCount() const
{
    return m_totalBackupCount;
}

void BackupSummary::SetTotalBackupCount(const uint64_t& _totalBackupCount)
{
    m_totalBackupCount = _totalBackupCount;
    m_totalBackupCountHasBeenSet = true;
}

bool BackupSummary::TotalBackupCountHasBeenSet() const
{
    return m_totalBackupCountHasBeenSet;
}

uint64_t BackupSummary::GetTotalBackupSize() const
{
    return m_totalBackupSize;
}

void BackupSummary::SetTotalBackupSize(const uint64_t& _totalBackupSize)
{
    m_totalBackupSize = _totalBackupSize;
    m_totalBackupSizeHasBeenSet = true;
}

bool BackupSummary::TotalBackupSizeHasBeenSet() const
{
    return m_totalBackupSizeHasBeenSet;
}

