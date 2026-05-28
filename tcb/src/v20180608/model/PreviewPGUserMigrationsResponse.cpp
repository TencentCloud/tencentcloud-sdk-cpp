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

#include <tencentcloud/tcb/v20180608/model/PreviewPGUserMigrationsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PreviewPGUserMigrationsResponse::PreviewPGUserMigrationsResponse() :
    m_pendingHasBeenSet(false),
    m_appliedHasBeenSet(false),
    m_conflictsHasBeenSet(false),
    m_executableHasBeenSet(false)
{
}

CoreInternalOutcome PreviewPGUserMigrationsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Pending") && !rsp["Pending"].IsNull())
    {
        if (!rsp["Pending"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Pending` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Pending"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MigrationPlanItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pending.push_back(item);
        }
        m_pendingHasBeenSet = true;
    }

    if (rsp.HasMember("Applied") && !rsp["Applied"].IsNull())
    {
        if (!rsp["Applied"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Applied` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Applied"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MigrationPlanItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_applied.push_back(item);
        }
        m_appliedHasBeenSet = true;
    }

    if (rsp.HasMember("Conflicts") && !rsp["Conflicts"].IsNull())
    {
        if (!rsp["Conflicts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conflicts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Conflicts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MigrationConflict item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conflicts.push_back(item);
        }
        m_conflictsHasBeenSet = true;
    }

    if (rsp.HasMember("Executable") && !rsp["Executable"].IsNull())
    {
        if (!rsp["Executable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Executable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_executable = rsp["Executable"].GetBool();
        m_executableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string PreviewPGUserMigrationsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_pendingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pending";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pending.begin(); itr != m_pending.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appliedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Applied";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applied.begin(); itr != m_applied.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_conflictsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conflicts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conflicts.begin(); itr != m_conflicts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_executableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Executable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executable, allocator);
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


vector<MigrationPlanItem> PreviewPGUserMigrationsResponse::GetPending() const
{
    return m_pending;
}

bool PreviewPGUserMigrationsResponse::PendingHasBeenSet() const
{
    return m_pendingHasBeenSet;
}

vector<MigrationPlanItem> PreviewPGUserMigrationsResponse::GetApplied() const
{
    return m_applied;
}

bool PreviewPGUserMigrationsResponse::AppliedHasBeenSet() const
{
    return m_appliedHasBeenSet;
}

vector<MigrationConflict> PreviewPGUserMigrationsResponse::GetConflicts() const
{
    return m_conflicts;
}

bool PreviewPGUserMigrationsResponse::ConflictsHasBeenSet() const
{
    return m_conflictsHasBeenSet;
}

bool PreviewPGUserMigrationsResponse::GetExecutable() const
{
    return m_executable;
}

bool PreviewPGUserMigrationsResponse::ExecutableHasBeenSet() const
{
    return m_executableHasBeenSet;
}


