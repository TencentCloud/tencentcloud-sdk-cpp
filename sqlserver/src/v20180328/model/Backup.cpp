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

#include <tencentcloud/sqlserver/v20180328/model/Backup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

Backup::Backup() :
    m_fileNameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_internalAddrHasBeenSet(false),
    m_externalAddrHasBeenSet(false),
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dBsHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_backupWayHasBeenSet(false)
{
}

CoreInternalOutcome Backup::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Backup.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Backup.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Backup.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Backup.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("InternalAddr") && !value["InternalAddr"].IsNull())
    {
        if (!value["InternalAddr"].IsString())
        {
            return CoreInternalOutcome(Error("response `Backup.InternalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalAddr = string(value["InternalAddr"].GetString());
        m_internalAddrHasBeenSet = true;
    }

    if (value.HasMember("ExternalAddr") && !value["ExternalAddr"].IsNull())
    {
        if (!value["ExternalAddr"].IsString())
        {
            return CoreInternalOutcome(Error("response `Backup.ExternalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalAddr = string(value["ExternalAddr"].GetString());
        m_externalAddrHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Backup.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Backup.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DBs") && !value["DBs"].IsNull())
    {
        if (!value["DBs"].IsArray())
            return CoreInternalOutcome(Error("response `Backup.DBs` is not array type"));

        const Value &tmpValue = value["DBs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBs.push_back((*itr).GetString());
        }
        m_dBsHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Backup.Strategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = value["Strategy"].GetInt64();
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("BackupWay") && !value["BackupWay"].IsNull())
    {
        if (!value["BackupWay"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Backup.BackupWay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupWay = value["BackupWay"].GetInt64();
        m_backupWayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Backup::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_internalAddrHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_internalAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_externalAddrHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExternalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_externalAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_dBsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dBs.begin(); itr != m_dBs.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_strategyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategy, allocator);
    }

    if (m_backupWayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupWay, allocator);
    }

}


string Backup::GetFileName() const
{
    return m_fileName;
}

void Backup::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool Backup::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t Backup::GetSize() const
{
    return m_size;
}

void Backup::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool Backup::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string Backup::GetStartTime() const
{
    return m_startTime;
}

void Backup::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Backup::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Backup::GetEndTime() const
{
    return m_endTime;
}

void Backup::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Backup::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Backup::GetInternalAddr() const
{
    return m_internalAddr;
}

void Backup::SetInternalAddr(const string& _internalAddr)
{
    m_internalAddr = _internalAddr;
    m_internalAddrHasBeenSet = true;
}

bool Backup::InternalAddrHasBeenSet() const
{
    return m_internalAddrHasBeenSet;
}

string Backup::GetExternalAddr() const
{
    return m_externalAddr;
}

void Backup::SetExternalAddr(const string& _externalAddr)
{
    m_externalAddr = _externalAddr;
    m_externalAddrHasBeenSet = true;
}

bool Backup::ExternalAddrHasBeenSet() const
{
    return m_externalAddrHasBeenSet;
}

uint64_t Backup::GetId() const
{
    return m_id;
}

void Backup::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Backup::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t Backup::GetStatus() const
{
    return m_status;
}

void Backup::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Backup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> Backup::GetDBs() const
{
    return m_dBs;
}

void Backup::SetDBs(const vector<string>& _dBs)
{
    m_dBs = _dBs;
    m_dBsHasBeenSet = true;
}

bool Backup::DBsHasBeenSet() const
{
    return m_dBsHasBeenSet;
}

int64_t Backup::GetStrategy() const
{
    return m_strategy;
}

void Backup::SetStrategy(const int64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool Backup::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

int64_t Backup::GetBackupWay() const
{
    return m_backupWay;
}

void Backup::SetBackupWay(const int64_t& _backupWay)
{
    m_backupWay = _backupWay;
    m_backupWayHasBeenSet = true;
}

bool Backup::BackupWayHasBeenSet() const
{
    return m_backupWayHasBeenSet;
}

