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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBackupConfigResponse::DescribeBackupConfigResponse() :
    m_backupTimeBegHasBeenSet(false),
    m_backupTimeEndHasBeenSet(false),
    m_reserveDurationHasBeenSet(false),
    m_backupFreqHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_logicCrossRegionsConfigUpdateTimeHasBeenSet(false),
    m_logicBackupConfigHasBeenSet(false)
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


    if (rsp.HasMember("BackupTimeBeg") && !rsp["BackupTimeBeg"].IsNull())
    {
        if (!rsp["BackupTimeBeg"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTimeBeg` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTimeBeg = rsp["BackupTimeBeg"].GetUint64();
        m_backupTimeBegHasBeenSet = true;
    }

    if (rsp.HasMember("BackupTimeEnd") && !rsp["BackupTimeEnd"].IsNull())
    {
        if (!rsp["BackupTimeEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTimeEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTimeEnd = rsp["BackupTimeEnd"].GetUint64();
        m_backupTimeEndHasBeenSet = true;
    }

    if (rsp.HasMember("ReserveDuration") && !rsp["ReserveDuration"].IsNull())
    {
        if (!rsp["ReserveDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reserveDuration = rsp["ReserveDuration"].GetUint64();
        m_reserveDurationHasBeenSet = true;
    }

    if (rsp.HasMember("BackupFreq") && !rsp["BackupFreq"].IsNull())
    {
        if (!rsp["BackupFreq"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupFreq` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BackupFreq"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupFreq.push_back((*itr).GetString());
        }
        m_backupFreqHasBeenSet = true;
    }

    if (rsp.HasMember("BackupType") && !rsp["BackupType"].IsNull())
    {
        if (!rsp["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(rsp["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (rsp.HasMember("LogicCrossRegionsConfigUpdateTime") && !rsp["LogicCrossRegionsConfigUpdateTime"].IsNull())
    {
        if (!rsp["LogicCrossRegionsConfigUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogicCrossRegionsConfigUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicCrossRegionsConfigUpdateTime = string(rsp["LogicCrossRegionsConfigUpdateTime"].GetString());
        m_logicCrossRegionsConfigUpdateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LogicBackupConfig") && !rsp["LogicBackupConfig"].IsNull())
    {
        if (!rsp["LogicBackupConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogicBackupConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logicBackupConfig.Deserialize(rsp["LogicBackupConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logicBackupConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backupTimeBegHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTimeBeg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupTimeBeg, allocator);
    }

    if (m_backupTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupTimeEnd, allocator);
    }

    if (m_reserveDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reserveDuration, allocator);
    }

    if (m_backupFreqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFreq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupFreq.begin(); itr != m_backupFreq.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_logicCrossRegionsConfigUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicCrossRegionsConfigUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicCrossRegionsConfigUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_logicBackupConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicBackupConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logicBackupConfig.ToJsonObject(value[key.c_str()], allocator);
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


uint64_t DescribeBackupConfigResponse::GetBackupTimeBeg() const
{
    return m_backupTimeBeg;
}

bool DescribeBackupConfigResponse::BackupTimeBegHasBeenSet() const
{
    return m_backupTimeBegHasBeenSet;
}

uint64_t DescribeBackupConfigResponse::GetBackupTimeEnd() const
{
    return m_backupTimeEnd;
}

bool DescribeBackupConfigResponse::BackupTimeEndHasBeenSet() const
{
    return m_backupTimeEndHasBeenSet;
}

uint64_t DescribeBackupConfigResponse::GetReserveDuration() const
{
    return m_reserveDuration;
}

bool DescribeBackupConfigResponse::ReserveDurationHasBeenSet() const
{
    return m_reserveDurationHasBeenSet;
}

vector<string> DescribeBackupConfigResponse::GetBackupFreq() const
{
    return m_backupFreq;
}

bool DescribeBackupConfigResponse::BackupFreqHasBeenSet() const
{
    return m_backupFreqHasBeenSet;
}

string DescribeBackupConfigResponse::GetBackupType() const
{
    return m_backupType;
}

bool DescribeBackupConfigResponse::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string DescribeBackupConfigResponse::GetLogicCrossRegionsConfigUpdateTime() const
{
    return m_logicCrossRegionsConfigUpdateTime;
}

bool DescribeBackupConfigResponse::LogicCrossRegionsConfigUpdateTimeHasBeenSet() const
{
    return m_logicCrossRegionsConfigUpdateTimeHasBeenSet;
}

LogicBackupConfigInfo DescribeBackupConfigResponse::GetLogicBackupConfig() const
{
    return m_logicBackupConfig;
}

bool DescribeBackupConfigResponse::LogicBackupConfigHasBeenSet() const
{
    return m_logicBackupConfigHasBeenSet;
}


