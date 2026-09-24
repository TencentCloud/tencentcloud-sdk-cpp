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

#include <tencentcloud/ags/v20250920/model/SyncRegistryRecordResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

SyncRegistryRecordResponse::SyncRegistryRecordResponse() :
    m_syncStatusHasBeenSet(false),
    m_resolvedVersionIdHasBeenSet(false),
    m_createdVersionHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_lastSyncTimeHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome SyncRegistryRecordResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SyncStatus") && !rsp["SyncStatus"].IsNull())
    {
        if (!rsp["SyncStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = string(rsp["SyncStatus"].GetString());
        m_syncStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ResolvedVersionId") && !rsp["ResolvedVersionId"].IsNull())
    {
        if (!rsp["ResolvedVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResolvedVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolvedVersionId = string(rsp["ResolvedVersionId"].GetString());
        m_resolvedVersionIdHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedVersion") && !rsp["CreatedVersion"].IsNull())
    {
        if (!rsp["CreatedVersion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedVersion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_createdVersion.Deserialize(rsp["CreatedVersion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_createdVersionHasBeenSet = true;
    }

    if (rsp.HasMember("Record") && !rsp["Record"].IsNull())
    {
        if (!rsp["Record"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Record` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_record.Deserialize(rsp["Record"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_recordHasBeenSet = true;
    }

    if (rsp.HasMember("LastSyncTime") && !rsp["LastSyncTime"].IsNull())
    {
        if (!rsp["LastSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSyncTime = string(rsp["LastSyncTime"].GetString());
        m_lastSyncTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(rsp["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SyncRegistryRecordResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_syncStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_resolvedVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolvedVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolvedVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_createdVersion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_record.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lastSyncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastSyncTime.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
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


string SyncRegistryRecordResponse::GetSyncStatus() const
{
    return m_syncStatus;
}

bool SyncRegistryRecordResponse::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

string SyncRegistryRecordResponse::GetResolvedVersionId() const
{
    return m_resolvedVersionId;
}

bool SyncRegistryRecordResponse::ResolvedVersionIdHasBeenSet() const
{
    return m_resolvedVersionIdHasBeenSet;
}

CloudRecordVersion SyncRegistryRecordResponse::GetCreatedVersion() const
{
    return m_createdVersion;
}

bool SyncRegistryRecordResponse::CreatedVersionHasBeenSet() const
{
    return m_createdVersionHasBeenSet;
}

CloudRecord SyncRegistryRecordResponse::GetRecord() const
{
    return m_record;
}

bool SyncRegistryRecordResponse::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

string SyncRegistryRecordResponse::GetLastSyncTime() const
{
    return m_lastSyncTime;
}

bool SyncRegistryRecordResponse::LastSyncTimeHasBeenSet() const
{
    return m_lastSyncTimeHasBeenSet;
}

string SyncRegistryRecordResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool SyncRegistryRecordResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string SyncRegistryRecordResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool SyncRegistryRecordResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}


