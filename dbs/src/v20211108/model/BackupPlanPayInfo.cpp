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

#include <tencentcloud/dbs/v20211108/model/BackupPlanPayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

BackupPlanPayInfo::BackupPlanPayInfo() :
    m_instanceClassHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_freeSpaceHasBeenSet(false),
    m_totalChargeSpaceHasBeenSet(false),
    m_fullChargeSpaceHasBeenSet(false),
    m_incrementChargeSpaceHasBeenSet(false),
    m_fullBackupSetSizeHasBeenSet(false),
    m_incrementBackupSetSizeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_timeRangeHasBeenSet(false)
{
}

CoreInternalOutcome BackupPlanPayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceClass") && !value["InstanceClass"].IsNull())
    {
        if (!value["InstanceClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanPayInfo.InstanceClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceClass = string(value["InstanceClass"].GetString());
        m_instanceClassHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanPayInfo.PayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payType = string(value["PayType"].GetString());
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("FreeSpace") && !value["FreeSpace"].IsNull())
    {
        if (!value["FreeSpace"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanPayInfo.FreeSpace` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeSpace = value["FreeSpace"].GetInt64();
        m_freeSpaceHasBeenSet = true;
    }

    if (value.HasMember("TotalChargeSpace") && !value["TotalChargeSpace"].IsNull())
    {
        if (!value["TotalChargeSpace"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanPayInfo.TotalChargeSpace` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalChargeSpace = value["TotalChargeSpace"].GetInt64();
        m_totalChargeSpaceHasBeenSet = true;
    }

    if (value.HasMember("FullChargeSpace") && !value["FullChargeSpace"].IsNull())
    {
        if (!value["FullChargeSpace"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanPayInfo.FullChargeSpace` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fullChargeSpace = value["FullChargeSpace"].GetInt64();
        m_fullChargeSpaceHasBeenSet = true;
    }

    if (value.HasMember("IncrementChargeSpace") && !value["IncrementChargeSpace"].IsNull())
    {
        if (!value["IncrementChargeSpace"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanPayInfo.IncrementChargeSpace` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_incrementChargeSpace = value["IncrementChargeSpace"].GetInt64();
        m_incrementChargeSpaceHasBeenSet = true;
    }

    if (value.HasMember("FullBackupSetSize") && !value["FullBackupSetSize"].IsNull())
    {
        if (!value["FullBackupSetSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanPayInfo.FullBackupSetSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fullBackupSetSize = value["FullBackupSetSize"].GetInt64();
        m_fullBackupSetSizeHasBeenSet = true;
    }

    if (value.HasMember("IncrementBackupSetSize") && !value["IncrementBackupSetSize"].IsNull())
    {
        if (!value["IncrementBackupSetSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanPayInfo.IncrementBackupSetSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_incrementBackupSetSize = value["IncrementBackupSetSize"].GetInt64();
        m_incrementBackupSetSizeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanPayInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TimeRange") && !value["TimeRange"].IsNull())
    {
        if (!value["TimeRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanPayInfo.TimeRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRange = string(value["TimeRange"].GetString());
        m_timeRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupPlanPayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payType.c_str(), allocator).Move(), allocator);
    }

    if (m_freeSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeSpace, allocator);
    }

    if (m_totalChargeSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalChargeSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalChargeSpace, allocator);
    }

    if (m_fullChargeSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullChargeSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fullChargeSpace, allocator);
    }

    if (m_incrementChargeSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncrementChargeSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_incrementChargeSpace, allocator);
    }

    if (m_fullBackupSetSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullBackupSetSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fullBackupSetSize, allocator);
    }

    if (m_incrementBackupSetSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncrementBackupSetSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_incrementBackupSetSize, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeRange.c_str(), allocator).Move(), allocator);
    }

}


string BackupPlanPayInfo::GetInstanceClass() const
{
    return m_instanceClass;
}

void BackupPlanPayInfo::SetInstanceClass(const string& _instanceClass)
{
    m_instanceClass = _instanceClass;
    m_instanceClassHasBeenSet = true;
}

bool BackupPlanPayInfo::InstanceClassHasBeenSet() const
{
    return m_instanceClassHasBeenSet;
}

string BackupPlanPayInfo::GetPayType() const
{
    return m_payType;
}

void BackupPlanPayInfo::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool BackupPlanPayInfo::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

int64_t BackupPlanPayInfo::GetFreeSpace() const
{
    return m_freeSpace;
}

void BackupPlanPayInfo::SetFreeSpace(const int64_t& _freeSpace)
{
    m_freeSpace = _freeSpace;
    m_freeSpaceHasBeenSet = true;
}

bool BackupPlanPayInfo::FreeSpaceHasBeenSet() const
{
    return m_freeSpaceHasBeenSet;
}

int64_t BackupPlanPayInfo::GetTotalChargeSpace() const
{
    return m_totalChargeSpace;
}

void BackupPlanPayInfo::SetTotalChargeSpace(const int64_t& _totalChargeSpace)
{
    m_totalChargeSpace = _totalChargeSpace;
    m_totalChargeSpaceHasBeenSet = true;
}

bool BackupPlanPayInfo::TotalChargeSpaceHasBeenSet() const
{
    return m_totalChargeSpaceHasBeenSet;
}

int64_t BackupPlanPayInfo::GetFullChargeSpace() const
{
    return m_fullChargeSpace;
}

void BackupPlanPayInfo::SetFullChargeSpace(const int64_t& _fullChargeSpace)
{
    m_fullChargeSpace = _fullChargeSpace;
    m_fullChargeSpaceHasBeenSet = true;
}

bool BackupPlanPayInfo::FullChargeSpaceHasBeenSet() const
{
    return m_fullChargeSpaceHasBeenSet;
}

int64_t BackupPlanPayInfo::GetIncrementChargeSpace() const
{
    return m_incrementChargeSpace;
}

void BackupPlanPayInfo::SetIncrementChargeSpace(const int64_t& _incrementChargeSpace)
{
    m_incrementChargeSpace = _incrementChargeSpace;
    m_incrementChargeSpaceHasBeenSet = true;
}

bool BackupPlanPayInfo::IncrementChargeSpaceHasBeenSet() const
{
    return m_incrementChargeSpaceHasBeenSet;
}

int64_t BackupPlanPayInfo::GetFullBackupSetSize() const
{
    return m_fullBackupSetSize;
}

void BackupPlanPayInfo::SetFullBackupSetSize(const int64_t& _fullBackupSetSize)
{
    m_fullBackupSetSize = _fullBackupSetSize;
    m_fullBackupSetSizeHasBeenSet = true;
}

bool BackupPlanPayInfo::FullBackupSetSizeHasBeenSet() const
{
    return m_fullBackupSetSizeHasBeenSet;
}

int64_t BackupPlanPayInfo::GetIncrementBackupSetSize() const
{
    return m_incrementBackupSetSize;
}

void BackupPlanPayInfo::SetIncrementBackupSetSize(const int64_t& _incrementBackupSetSize)
{
    m_incrementBackupSetSize = _incrementBackupSetSize;
    m_incrementBackupSetSizeHasBeenSet = true;
}

bool BackupPlanPayInfo::IncrementBackupSetSizeHasBeenSet() const
{
    return m_incrementBackupSetSizeHasBeenSet;
}

string BackupPlanPayInfo::GetCreateTime() const
{
    return m_createTime;
}

void BackupPlanPayInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BackupPlanPayInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BackupPlanPayInfo::GetTimeRange() const
{
    return m_timeRange;
}

void BackupPlanPayInfo::SetTimeRange(const string& _timeRange)
{
    m_timeRange = _timeRange;
    m_timeRangeHasBeenSet = true;
}

bool BackupPlanPayInfo::TimeRangeHasBeenSet() const
{
    return m_timeRangeHasBeenSet;
}

