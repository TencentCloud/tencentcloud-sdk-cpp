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

#include <tencentcloud/dcdb/v20180411/model/DescribeBackupConfigsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeBackupConfigsResponse::DescribeBackupConfigsResponse() :
    m_instanceIdHasBeenSet(false),
    m_daysHasBeenSet(false),
    m_startBackupTimeHasBeenSet(false),
    m_endBackupTimeHasBeenSet(false),
    m_weekDaysHasBeenSet(false),
    m_archiveDaysHasBeenSet(false),
    m_backupConfigSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupConfigsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Days") && !rsp["Days"].IsNull())
    {
        if (!rsp["Days"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Days` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_days = rsp["Days"].GetUint64();
        m_daysHasBeenSet = true;
    }

    if (rsp.HasMember("StartBackupTime") && !rsp["StartBackupTime"].IsNull())
    {
        if (!rsp["StartBackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartBackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startBackupTime = string(rsp["StartBackupTime"].GetString());
        m_startBackupTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndBackupTime") && !rsp["EndBackupTime"].IsNull())
    {
        if (!rsp["EndBackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndBackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endBackupTime = string(rsp["EndBackupTime"].GetString());
        m_endBackupTimeHasBeenSet = true;
    }

    if (rsp.HasMember("WeekDays") && !rsp["WeekDays"].IsNull())
    {
        if (!rsp["WeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WeekDays` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WeekDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekDays.push_back((*itr).GetString());
        }
        m_weekDaysHasBeenSet = true;
    }

    if (rsp.HasMember("ArchiveDays") && !rsp["ArchiveDays"].IsNull())
    {
        if (!rsp["ArchiveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_archiveDays = rsp["ArchiveDays"].GetInt64();
        m_archiveDaysHasBeenSet = true;
    }

    if (rsp.HasMember("BackupConfigSet") && !rsp["BackupConfigSet"].IsNull())
    {
        if (!rsp["BackupConfigSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupConfigSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BackupConfigSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupConfigSet.push_back(item);
        }
        m_backupConfigSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupConfigsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_daysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_days, allocator);
    }

    if (m_startBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartBackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startBackupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndBackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endBackupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_weekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekDays.begin(); itr != m_weekDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_archiveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archiveDays, allocator);
    }

    if (m_backupConfigSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupConfigSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupConfigSet.begin(); itr != m_backupConfigSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeBackupConfigsResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeBackupConfigsResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeBackupConfigsResponse::GetDays() const
{
    return m_days;
}

bool DescribeBackupConfigsResponse::DaysHasBeenSet() const
{
    return m_daysHasBeenSet;
}

string DescribeBackupConfigsResponse::GetStartBackupTime() const
{
    return m_startBackupTime;
}

bool DescribeBackupConfigsResponse::StartBackupTimeHasBeenSet() const
{
    return m_startBackupTimeHasBeenSet;
}

string DescribeBackupConfigsResponse::GetEndBackupTime() const
{
    return m_endBackupTime;
}

bool DescribeBackupConfigsResponse::EndBackupTimeHasBeenSet() const
{
    return m_endBackupTimeHasBeenSet;
}

vector<string> DescribeBackupConfigsResponse::GetWeekDays() const
{
    return m_weekDays;
}

bool DescribeBackupConfigsResponse::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

int64_t DescribeBackupConfigsResponse::GetArchiveDays() const
{
    return m_archiveDays;
}

bool DescribeBackupConfigsResponse::ArchiveDaysHasBeenSet() const
{
    return m_archiveDaysHasBeenSet;
}

vector<BackupConfig> DescribeBackupConfigsResponse::GetBackupConfigSet() const
{
    return m_backupConfigSet;
}

bool DescribeBackupConfigsResponse::BackupConfigSetHasBeenSet() const
{
    return m_backupConfigSetHasBeenSet;
}


