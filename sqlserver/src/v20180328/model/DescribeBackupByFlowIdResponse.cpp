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

#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupByFlowIdResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeBackupByFlowIdResponse::DescribeBackupByFlowIdResponse() :
    m_idHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_backupWayHasBeenSet(false),
    m_dBsHasBeenSet(false),
    m_internalAddrHasBeenSet(false),
    m_externalAddrHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupByFlowIdResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("FileName") && !rsp["FileName"].IsNull())
    {
        if (!rsp["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(rsp["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (rsp.HasMember("BackupName") && !rsp["BackupName"].IsNull())
    {
        if (!rsp["BackupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupName = string(rsp["BackupName"].GetString());
        m_backupNameHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Size") && !rsp["Size"].IsNull())
    {
        if (!rsp["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = rsp["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (rsp.HasMember("Strategy") && !rsp["Strategy"].IsNull())
    {
        if (!rsp["Strategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = rsp["Strategy"].GetInt64();
        m_strategyHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("BackupWay") && !rsp["BackupWay"].IsNull())
    {
        if (!rsp["BackupWay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupWay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupWay = rsp["BackupWay"].GetInt64();
        m_backupWayHasBeenSet = true;
    }

    if (rsp.HasMember("DBs") && !rsp["DBs"].IsNull())
    {
        if (!rsp["DBs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DBs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBs.push_back((*itr).GetString());
        }
        m_dBsHasBeenSet = true;
    }

    if (rsp.HasMember("InternalAddr") && !rsp["InternalAddr"].IsNull())
    {
        if (!rsp["InternalAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalAddr = string(rsp["InternalAddr"].GetString());
        m_internalAddrHasBeenSet = true;
    }

    if (rsp.HasMember("ExternalAddr") && !rsp["ExternalAddr"].IsNull())
    {
        if (!rsp["ExternalAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalAddr = string(rsp["ExternalAddr"].GetString());
        m_externalAddrHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupByFlowIdResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategy, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_backupWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupWay, allocator);
    }

    if (m_dBsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBs.begin(); itr != m_dBs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_internalAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_externalAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeBackupByFlowIdResponse::GetId() const
{
    return m_id;
}

bool DescribeBackupByFlowIdResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeBackupByFlowIdResponse::GetFileName() const
{
    return m_fileName;
}

bool DescribeBackupByFlowIdResponse::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DescribeBackupByFlowIdResponse::GetBackupName() const
{
    return m_backupName;
}

bool DescribeBackupByFlowIdResponse::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

string DescribeBackupByFlowIdResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeBackupByFlowIdResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBackupByFlowIdResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeBackupByFlowIdResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeBackupByFlowIdResponse::GetSize() const
{
    return m_size;
}

bool DescribeBackupByFlowIdResponse::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t DescribeBackupByFlowIdResponse::GetStrategy() const
{
    return m_strategy;
}

bool DescribeBackupByFlowIdResponse::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

int64_t DescribeBackupByFlowIdResponse::GetStatus() const
{
    return m_status;
}

bool DescribeBackupByFlowIdResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeBackupByFlowIdResponse::GetBackupWay() const
{
    return m_backupWay;
}

bool DescribeBackupByFlowIdResponse::BackupWayHasBeenSet() const
{
    return m_backupWayHasBeenSet;
}

vector<string> DescribeBackupByFlowIdResponse::GetDBs() const
{
    return m_dBs;
}

bool DescribeBackupByFlowIdResponse::DBsHasBeenSet() const
{
    return m_dBsHasBeenSet;
}

string DescribeBackupByFlowIdResponse::GetInternalAddr() const
{
    return m_internalAddr;
}

bool DescribeBackupByFlowIdResponse::InternalAddrHasBeenSet() const
{
    return m_internalAddrHasBeenSet;
}

string DescribeBackupByFlowIdResponse::GetExternalAddr() const
{
    return m_externalAddr;
}

bool DescribeBackupByFlowIdResponse::ExternalAddrHasBeenSet() const
{
    return m_externalAddrHasBeenSet;
}

string DescribeBackupByFlowIdResponse::GetGroupId() const
{
    return m_groupId;
}

bool DescribeBackupByFlowIdResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


