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

#include <tencentcloud/cfg/v20210820/model/TaskReportInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskReportInfo::TaskReportInfo() :
    m_stageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_expiredHasBeenSet(false),
    m_cosUrlHasBeenSet(false),
    m_logHasBeenSet(false),
    m_archiveStageHasBeenSet(false),
    m_archiveTimeHasBeenSet(false),
    m_archiveUuidHasBeenSet(false)
{
}

CoreInternalOutcome TaskReportInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Stage") && !value["Stage"].IsNull())
    {
        if (!value["Stage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportInfo.Stage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stage = value["Stage"].GetInt64();
        m_stageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpirationTime") && !value["ExpirationTime"].IsNull())
    {
        if (!value["ExpirationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportInfo.ExpirationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationTime = string(value["ExpirationTime"].GetString());
        m_expirationTimeHasBeenSet = true;
    }

    if (value.HasMember("Expired") && !value["Expired"].IsNull())
    {
        if (!value["Expired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportInfo.Expired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expired = value["Expired"].GetBool();
        m_expiredHasBeenSet = true;
    }

    if (value.HasMember("CosUrl") && !value["CosUrl"].IsNull())
    {
        if (!value["CosUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportInfo.CosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosUrl = string(value["CosUrl"].GetString());
        m_cosUrlHasBeenSet = true;
    }

    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportInfo.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }

    if (value.HasMember("ArchiveStage") && !value["ArchiveStage"].IsNull())
    {
        if (!value["ArchiveStage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportInfo.ArchiveStage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_archiveStage = value["ArchiveStage"].GetInt64();
        m_archiveStageHasBeenSet = true;
    }

    if (value.HasMember("ArchiveTime") && !value["ArchiveTime"].IsNull())
    {
        if (!value["ArchiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportInfo.ArchiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_archiveTime = string(value["ArchiveTime"].GetString());
        m_archiveTimeHasBeenSet = true;
    }

    if (value.HasMember("ArchiveUuid") && !value["ArchiveUuid"].IsNull())
    {
        if (!value["ArchiveUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportInfo.ArchiveUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_archiveUuid = string(value["ArchiveUuid"].GetString());
        m_archiveUuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskReportInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stage, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expired, allocator);
    }

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

    if (m_archiveStageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveStage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archiveStage, allocator);
    }

    if (m_archiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_archiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_archiveUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_archiveUuid.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskReportInfo::GetStage() const
{
    return m_stage;
}

void TaskReportInfo::SetStage(const int64_t& _stage)
{
    m_stage = _stage;
    m_stageHasBeenSet = true;
}

bool TaskReportInfo::StageHasBeenSet() const
{
    return m_stageHasBeenSet;
}

string TaskReportInfo::GetCreateTime() const
{
    return m_createTime;
}

void TaskReportInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskReportInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskReportInfo::GetExpirationTime() const
{
    return m_expirationTime;
}

void TaskReportInfo::SetExpirationTime(const string& _expirationTime)
{
    m_expirationTime = _expirationTime;
    m_expirationTimeHasBeenSet = true;
}

bool TaskReportInfo::ExpirationTimeHasBeenSet() const
{
    return m_expirationTimeHasBeenSet;
}

bool TaskReportInfo::GetExpired() const
{
    return m_expired;
}

void TaskReportInfo::SetExpired(const bool& _expired)
{
    m_expired = _expired;
    m_expiredHasBeenSet = true;
}

bool TaskReportInfo::ExpiredHasBeenSet() const
{
    return m_expiredHasBeenSet;
}

string TaskReportInfo::GetCosUrl() const
{
    return m_cosUrl;
}

void TaskReportInfo::SetCosUrl(const string& _cosUrl)
{
    m_cosUrl = _cosUrl;
    m_cosUrlHasBeenSet = true;
}

bool TaskReportInfo::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

string TaskReportInfo::GetLog() const
{
    return m_log;
}

void TaskReportInfo::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool TaskReportInfo::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

int64_t TaskReportInfo::GetArchiveStage() const
{
    return m_archiveStage;
}

void TaskReportInfo::SetArchiveStage(const int64_t& _archiveStage)
{
    m_archiveStage = _archiveStage;
    m_archiveStageHasBeenSet = true;
}

bool TaskReportInfo::ArchiveStageHasBeenSet() const
{
    return m_archiveStageHasBeenSet;
}

string TaskReportInfo::GetArchiveTime() const
{
    return m_archiveTime;
}

void TaskReportInfo::SetArchiveTime(const string& _archiveTime)
{
    m_archiveTime = _archiveTime;
    m_archiveTimeHasBeenSet = true;
}

bool TaskReportInfo::ArchiveTimeHasBeenSet() const
{
    return m_archiveTimeHasBeenSet;
}

string TaskReportInfo::GetArchiveUuid() const
{
    return m_archiveUuid;
}

void TaskReportInfo::SetArchiveUuid(const string& _archiveUuid)
{
    m_archiveUuid = _archiveUuid;
    m_archiveUuidHasBeenSet = true;
}

bool TaskReportInfo::ArchiveUuidHasBeenSet() const
{
    return m_archiveUuidHasBeenSet;
}

