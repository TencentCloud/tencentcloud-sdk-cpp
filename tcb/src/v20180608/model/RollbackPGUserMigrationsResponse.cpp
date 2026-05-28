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

#include <tencentcloud/tcb/v20180608/model/RollbackPGUserMigrationsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

RollbackPGUserMigrationsResponse::RollbackPGUserMigrationsResponse() :
    m_taskIdHasBeenSet(false),
    m_rolledBackHasBeenSet(false),
    m_skippedRollbackSqlHasBeenSet(false),
    m_failedHasBeenSet(false)
{
}

CoreInternalOutcome RollbackPGUserMigrationsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("RolledBack") && !rsp["RolledBack"].IsNull())
    {
        if (!rsp["RolledBack"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RolledBack` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RolledBack"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MigrationSummary item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rolledBack.push_back(item);
        }
        m_rolledBackHasBeenSet = true;
    }

    if (rsp.HasMember("SkippedRollbackSql") && !rsp["SkippedRollbackSql"].IsNull())
    {
        if (!rsp["SkippedRollbackSql"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkippedRollbackSql` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SkippedRollbackSql"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MigrationSummary item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_skippedRollbackSql.push_back(item);
        }
        m_skippedRollbackSqlHasBeenSet = true;
    }

    if (rsp.HasMember("Failed") && !rsp["Failed"].IsNull())
    {
        if (!rsp["Failed"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Failed` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_failed.Deserialize(rsp["Failed"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_failedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RollbackPGUserMigrationsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_rolledBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolledBack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rolledBack.begin(); itr != m_rolledBack.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_skippedRollbackSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkippedRollbackSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_skippedRollbackSql.begin(); itr != m_skippedRollbackSql.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Failed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_failed.ToJsonObject(value[key.c_str()], allocator);
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


string RollbackPGUserMigrationsResponse::GetTaskId() const
{
    return m_taskId;
}

bool RollbackPGUserMigrationsResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<MigrationSummary> RollbackPGUserMigrationsResponse::GetRolledBack() const
{
    return m_rolledBack;
}

bool RollbackPGUserMigrationsResponse::RolledBackHasBeenSet() const
{
    return m_rolledBackHasBeenSet;
}

vector<MigrationSummary> RollbackPGUserMigrationsResponse::GetSkippedRollbackSql() const
{
    return m_skippedRollbackSql;
}

bool RollbackPGUserMigrationsResponse::SkippedRollbackSqlHasBeenSet() const
{
    return m_skippedRollbackSqlHasBeenSet;
}

MigrationSummary RollbackPGUserMigrationsResponse::GetFailed() const
{
    return m_failed;
}

bool RollbackPGUserMigrationsResponse::FailedHasBeenSet() const
{
    return m_failedHasBeenSet;
}


