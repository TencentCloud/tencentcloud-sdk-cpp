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

#include <tencentcloud/tcb/v20180608/model/DescribePGUserMigrationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribePGUserMigrationResponse::DescribePGUserMigrationResponse() :
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_rollbackHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_appliedAtHasBeenSet(false),
    m_durationMsHasBeenSet(false)
{
}

CoreInternalOutcome DescribePGUserMigrationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(rsp["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Query") && !rsp["Query"].IsNull())
    {
        if (!rsp["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(rsp["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (rsp.HasMember("Rollback") && !rsp["Rollback"].IsNull())
    {
        if (!rsp["Rollback"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rollback` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rollback = string(rsp["Rollback"].GetString());
        m_rollbackHasBeenSet = true;
    }

    if (rsp.HasMember("Checksum") && !rsp["Checksum"].IsNull())
    {
        if (!rsp["Checksum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Checksum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checksum = string(rsp["Checksum"].GetString());
        m_checksumHasBeenSet = true;
    }

    if (rsp.HasMember("Source") && !rsp["Source"].IsNull())
    {
        if (!rsp["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(rsp["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedBy") && !rsp["CreatedBy"].IsNull())
    {
        if (!rsp["CreatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdBy = string(rsp["CreatedBy"].GetString());
        m_createdByHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("AppliedAt") && !rsp["AppliedAt"].IsNull())
    {
        if (!rsp["AppliedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppliedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appliedAt = string(rsp["AppliedAt"].GetString());
        m_appliedAtHasBeenSet = true;
    }

    if (rsp.HasMember("DurationMs") && !rsp["DurationMs"].IsNull())
    {
        if (!rsp["DurationMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMs = rsp["DurationMs"].GetInt64();
        m_durationMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePGUserMigrationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rollback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rollback.c_str(), allocator).Move(), allocator);
    }

    if (m_checksumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Checksum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checksum.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_createdByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdBy.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_appliedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppliedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appliedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMs, allocator);
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


string DescribePGUserMigrationResponse::GetVersion() const
{
    return m_version;
}

bool DescribePGUserMigrationResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DescribePGUserMigrationResponse::GetName() const
{
    return m_name;
}

bool DescribePGUserMigrationResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribePGUserMigrationResponse::GetQuery() const
{
    return m_query;
}

bool DescribePGUserMigrationResponse::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string DescribePGUserMigrationResponse::GetRollback() const
{
    return m_rollback;
}

bool DescribePGUserMigrationResponse::RollbackHasBeenSet() const
{
    return m_rollbackHasBeenSet;
}

string DescribePGUserMigrationResponse::GetChecksum() const
{
    return m_checksum;
}

bool DescribePGUserMigrationResponse::ChecksumHasBeenSet() const
{
    return m_checksumHasBeenSet;
}

string DescribePGUserMigrationResponse::GetSource() const
{
    return m_source;
}

bool DescribePGUserMigrationResponse::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DescribePGUserMigrationResponse::GetCreatedBy() const
{
    return m_createdBy;
}

bool DescribePGUserMigrationResponse::CreatedByHasBeenSet() const
{
    return m_createdByHasBeenSet;
}

string DescribePGUserMigrationResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribePGUserMigrationResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DescribePGUserMigrationResponse::GetAppliedAt() const
{
    return m_appliedAt;
}

bool DescribePGUserMigrationResponse::AppliedAtHasBeenSet() const
{
    return m_appliedAtHasBeenSet;
}

int64_t DescribePGUserMigrationResponse::GetDurationMs() const
{
    return m_durationMs;
}

bool DescribePGUserMigrationResponse::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}


