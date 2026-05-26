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

#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DescribeDBSBackupStatisticsResponse::DescribeDBSBackupStatisticsResponse() :
    m_backupMethodStatisticsHasBeenSet(false),
    m_backupStatisticsHasBeenSet(false),
    m_dataBackupStatisticsHasBeenSet(false),
    m_logBackupStatisticsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBSBackupStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BackupMethodStatistics") && !rsp["BackupMethodStatistics"].IsNull())
    {
        if (!rsp["BackupMethodStatistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupMethodStatistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupMethodStatistics.Deserialize(rsp["BackupMethodStatistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupMethodStatisticsHasBeenSet = true;
    }

    if (rsp.HasMember("BackupStatistics") && !rsp["BackupStatistics"].IsNull())
    {
        if (!rsp["BackupStatistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupStatistics.Deserialize(rsp["BackupStatistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupStatisticsHasBeenSet = true;
    }

    if (rsp.HasMember("DataBackupStatistics") && !rsp["DataBackupStatistics"].IsNull())
    {
        if (!rsp["DataBackupStatistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStatistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataBackupStatistics.Deserialize(rsp["DataBackupStatistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataBackupStatisticsHasBeenSet = true;
    }

    if (rsp.HasMember("LogBackupStatistics") && !rsp["LogBackupStatistics"].IsNull())
    {
        if (!rsp["LogBackupStatistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackupStatistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logBackupStatistics.Deserialize(rsp["LogBackupStatistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logBackupStatisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBSBackupStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backupMethodStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethodStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupMethodStatistics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupStatistics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataBackupStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataBackupStatistics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logBackupStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logBackupStatistics.ToJsonObject(value[key.c_str()], allocator);
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


BackupMethodStatisticsModel DescribeDBSBackupStatisticsResponse::GetBackupMethodStatistics() const
{
    return m_backupMethodStatistics;
}

bool DescribeDBSBackupStatisticsResponse::BackupMethodStatisticsHasBeenSet() const
{
    return m_backupMethodStatisticsHasBeenSet;
}

BackupStatisticsModel DescribeDBSBackupStatisticsResponse::GetBackupStatistics() const
{
    return m_backupStatistics;
}

bool DescribeDBSBackupStatisticsResponse::BackupStatisticsHasBeenSet() const
{
    return m_backupStatisticsHasBeenSet;
}

DataBackupStatisticsModel DescribeDBSBackupStatisticsResponse::GetDataBackupStatistics() const
{
    return m_dataBackupStatistics;
}

bool DescribeDBSBackupStatisticsResponse::DataBackupStatisticsHasBeenSet() const
{
    return m_dataBackupStatisticsHasBeenSet;
}

LogBackupStatisticsModel DescribeDBSBackupStatisticsResponse::GetLogBackupStatistics() const
{
    return m_logBackupStatistics;
}

bool DescribeDBSBackupStatisticsResponse::LogBackupStatisticsHasBeenSet() const
{
    return m_logBackupStatisticsHasBeenSet;
}


