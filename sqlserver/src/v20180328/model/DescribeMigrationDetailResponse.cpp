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

#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeMigrationDetailResponse::DescribeMigrationDetailResponse() :
    m_migrateIdHasBeenSet(false),
    m_migrateNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_migrateTypeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_migrateDBSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMigrationDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MigrateId") && !rsp["MigrateId"].IsNull())
    {
        if (!rsp["MigrateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_migrateId = rsp["MigrateId"].GetUint64();
        m_migrateIdHasBeenSet = true;
    }

    if (rsp.HasMember("MigrateName") && !rsp["MigrateName"].IsNull())
    {
        if (!rsp["MigrateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrateName = string(rsp["MigrateName"].GetString());
        m_migrateNameHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("SourceType") && !rsp["SourceType"].IsNull())
    {
        if (!rsp["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = rsp["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
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

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("MigrateType") && !rsp["MigrateType"].IsNull())
    {
        if (!rsp["MigrateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_migrateType = rsp["MigrateType"].GetInt64();
        m_migrateTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Source") && !rsp["Source"].IsNull())
    {
        if (!rsp["Source"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Source` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_source.Deserialize(rsp["Source"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceHasBeenSet = true;
    }

    if (rsp.HasMember("Target") && !rsp["Target"].IsNull())
    {
        if (!rsp["Target"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Target` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_target.Deserialize(rsp["Target"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetHasBeenSet = true;
    }

    if (rsp.HasMember("MigrateDBSet") && !rsp["MigrateDBSet"].IsNull())
    {
        if (!rsp["MigrateDBSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrateDBSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MigrateDBSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MigrateDB item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_migrateDBSet.push_back(item);
        }
        m_migrateDBSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMigrationDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_migrateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrateId, allocator);
    }

    if (m_migrateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_migrateName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_migrateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrateType, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_source.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_target.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_migrateDBSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateDBSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_migrateDBSet.begin(); itr != m_migrateDBSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


uint64_t DescribeMigrationDetailResponse::GetMigrateId() const
{
    return m_migrateId;
}

bool DescribeMigrationDetailResponse::MigrateIdHasBeenSet() const
{
    return m_migrateIdHasBeenSet;
}

string DescribeMigrationDetailResponse::GetMigrateName() const
{
    return m_migrateName;
}

bool DescribeMigrationDetailResponse::MigrateNameHasBeenSet() const
{
    return m_migrateNameHasBeenSet;
}

uint64_t DescribeMigrationDetailResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeMigrationDetailResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeMigrationDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeMigrationDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t DescribeMigrationDetailResponse::GetSourceType() const
{
    return m_sourceType;
}

bool DescribeMigrationDetailResponse::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string DescribeMigrationDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeMigrationDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeMigrationDetailResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeMigrationDetailResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeMigrationDetailResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeMigrationDetailResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeMigrationDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeMigrationDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeMigrationDetailResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeMigrationDetailResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t DescribeMigrationDetailResponse::GetMigrateType() const
{
    return m_migrateType;
}

bool DescribeMigrationDetailResponse::MigrateTypeHasBeenSet() const
{
    return m_migrateTypeHasBeenSet;
}

MigrateSource DescribeMigrationDetailResponse::GetSource() const
{
    return m_source;
}

bool DescribeMigrationDetailResponse::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

MigrateTarget DescribeMigrationDetailResponse::GetTarget() const
{
    return m_target;
}

bool DescribeMigrationDetailResponse::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

vector<MigrateDB> DescribeMigrationDetailResponse::GetMigrateDBSet() const
{
    return m_migrateDBSet;
}

bool DescribeMigrationDetailResponse::MigrateDBSetHasBeenSet() const
{
    return m_migrateDBSetHasBeenSet;
}


