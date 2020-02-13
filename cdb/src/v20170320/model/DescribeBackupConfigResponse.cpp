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
using namespace rapidjson;
using namespace std;

DescribeBackupConfigResponse::DescribeBackupConfigResponse() :
    m_startTimeMinHasBeenSet(false),
    m_startTimeMaxHasBeenSet(false),
    m_backupExpireDaysHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_binlogExpireDaysHasBeenSet(false),
    m_backupTimeWindowHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupConfigResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("StartTimeMin") && !rsp["StartTimeMin"].IsNull())
    {
        if (!rsp["StartTimeMin"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `StartTimeMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeMin = rsp["StartTimeMin"].GetInt64();
        m_startTimeMinHasBeenSet = true;
    }

    if (rsp.HasMember("StartTimeMax") && !rsp["StartTimeMax"].IsNull())
    {
        if (!rsp["StartTimeMax"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `StartTimeMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeMax = rsp["StartTimeMax"].GetInt64();
        m_startTimeMaxHasBeenSet = true;
    }

    if (rsp.HasMember("BackupExpireDays") && !rsp["BackupExpireDays"].IsNull())
    {
        if (!rsp["BackupExpireDays"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BackupExpireDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupExpireDays = rsp["BackupExpireDays"].GetInt64();
        m_backupExpireDaysHasBeenSet = true;
    }

    if (rsp.HasMember("BackupMethod") && !rsp["BackupMethod"].IsNull())
    {
        if (!rsp["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(rsp["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (rsp.HasMember("BinlogExpireDays") && !rsp["BinlogExpireDays"].IsNull())
    {
        if (!rsp["BinlogExpireDays"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BinlogExpireDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogExpireDays = rsp["BinlogExpireDays"].GetInt64();
        m_binlogExpireDaysHasBeenSet = true;
    }

    if (rsp.HasMember("BackupTimeWindow") && !rsp["BackupTimeWindow"].IsNull())
    {
        if (!rsp["BackupTimeWindow"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BackupTimeWindow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupTimeWindow.Deserialize(rsp["BackupTimeWindow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupTimeWindowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


