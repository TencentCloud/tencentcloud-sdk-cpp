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

#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupStatisticsDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DescribeDBSBackupStatisticsDetailResponse::DescribeDBSBackupStatisticsDetailResponse() :
    m_backupMethodStatisticsHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_backupTypeStatisticsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBSBackupStatisticsDetailResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("BackupTime") && !rsp["BackupTime"].IsNull())
    {
        if (!rsp["BackupTime"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupTime` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BackupTime"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupTime.push_back((*itr).GetString());
        }
        m_backupTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupTypeStatistics") && !rsp["BackupTypeStatistics"].IsNull())
    {
        if (!rsp["BackupTypeStatistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTypeStatistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupTypeStatistics.Deserialize(rsp["BackupTypeStatistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupTypeStatisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBSBackupStatisticsDetailResponse::ToJsonString() const
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

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupTime.begin(); itr != m_backupTime.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupTypeStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTypeStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupTypeStatistics.ToJsonObject(value[key.c_str()], allocator);
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


BackupMethodStatisticsOutPut DescribeDBSBackupStatisticsDetailResponse::GetBackupMethodStatistics() const
{
    return m_backupMethodStatistics;
}

bool DescribeDBSBackupStatisticsDetailResponse::BackupMethodStatisticsHasBeenSet() const
{
    return m_backupMethodStatisticsHasBeenSet;
}

vector<string> DescribeDBSBackupStatisticsDetailResponse::GetBackupTime() const
{
    return m_backupTime;
}

bool DescribeDBSBackupStatisticsDetailResponse::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

BackupTypeStatisticsModel DescribeDBSBackupStatisticsDetailResponse::GetBackupTypeStatistics() const
{
    return m_backupTypeStatistics;
}

bool DescribeDBSBackupStatisticsDetailResponse::BackupTypeStatisticsHasBeenSet() const
{
    return m_backupTypeStatisticsHasBeenSet;
}


