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

#include <tencentcloud/redis/v20180412/model/ModifyAutoBackupConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

ModifyAutoBackupConfigResponse::ModifyAutoBackupConfigResponse() :
    m_autoBackupTypeHasBeenSet(false),
    m_weekDaysHasBeenSet(false),
    m_timePeriodHasBeenSet(false),
    m_backupStorageDaysHasBeenSet(false)
{
}

CoreInternalOutcome ModifyAutoBackupConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AutoBackupType") && !rsp["AutoBackupType"].IsNull())
    {
        if (!rsp["AutoBackupType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupType = rsp["AutoBackupType"].GetInt64();
        m_autoBackupTypeHasBeenSet = true;
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

    if (rsp.HasMember("TimePeriod") && !rsp["TimePeriod"].IsNull())
    {
        if (!rsp["TimePeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimePeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timePeriod = string(rsp["TimePeriod"].GetString());
        m_timePeriodHasBeenSet = true;
    }

    if (rsp.HasMember("BackupStorageDays") && !rsp["BackupStorageDays"].IsNull())
    {
        if (!rsp["BackupStorageDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStorageDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupStorageDays = rsp["BackupStorageDays"].GetInt64();
        m_backupStorageDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyAutoBackupConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_autoBackupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupType, allocator);
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

    if (m_timePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timePeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_backupStorageDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStorageDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupStorageDays, allocator);
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


int64_t ModifyAutoBackupConfigResponse::GetAutoBackupType() const
{
    return m_autoBackupType;
}

bool ModifyAutoBackupConfigResponse::AutoBackupTypeHasBeenSet() const
{
    return m_autoBackupTypeHasBeenSet;
}

vector<string> ModifyAutoBackupConfigResponse::GetWeekDays() const
{
    return m_weekDays;
}

bool ModifyAutoBackupConfigResponse::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

string ModifyAutoBackupConfigResponse::GetTimePeriod() const
{
    return m_timePeriod;
}

bool ModifyAutoBackupConfigResponse::TimePeriodHasBeenSet() const
{
    return m_timePeriodHasBeenSet;
}

int64_t ModifyAutoBackupConfigResponse::GetBackupStorageDays() const
{
    return m_backupStorageDays;
}

bool ModifyAutoBackupConfigResponse::BackupStorageDaysHasBeenSet() const
{
    return m_backupStorageDaysHasBeenSet;
}


