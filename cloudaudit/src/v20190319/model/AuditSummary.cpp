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

#include <tencentcloud/cloudaudit/v20190319/model/AuditSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

AuditSummary::AuditSummary() :
    m_auditStatusHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_auditNameHasBeenSet(false),
    m_logFilePrefixHasBeenSet(false)
{
}

CoreInternalOutcome AuditSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditSummary.AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditSummary.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("AuditName") && !value["AuditName"].IsNull())
    {
        if (!value["AuditName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditSummary.AuditName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditName = string(value["AuditName"].GetString());
        m_auditNameHasBeenSet = true;
    }

    if (value.HasMember("LogFilePrefix") && !value["LogFilePrefix"].IsNull())
    {
        if (!value["LogFilePrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditSummary.LogFilePrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFilePrefix = string(value["LogFilePrefix"].GetString());
        m_logFilePrefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_auditNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditName.c_str(), allocator).Move(), allocator);
    }

    if (m_logFilePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFilePrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logFilePrefix.c_str(), allocator).Move(), allocator);
    }

}


int64_t AuditSummary::GetAuditStatus() const
{
    return m_auditStatus;
}

void AuditSummary::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool AuditSummary::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string AuditSummary::GetCosBucketName() const
{
    return m_cosBucketName;
}

void AuditSummary::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool AuditSummary::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string AuditSummary::GetAuditName() const
{
    return m_auditName;
}

void AuditSummary::SetAuditName(const string& _auditName)
{
    m_auditName = _auditName;
    m_auditNameHasBeenSet = true;
}

bool AuditSummary::AuditNameHasBeenSet() const
{
    return m_auditNameHasBeenSet;
}

string AuditSummary::GetLogFilePrefix() const
{
    return m_logFilePrefix;
}

void AuditSummary::SetLogFilePrefix(const string& _logFilePrefix)
{
    m_logFilePrefix = _logFilePrefix;
    m_logFilePrefixHasBeenSet = true;
}

bool AuditSummary::LogFilePrefixHasBeenSet() const
{
    return m_logFilePrefixHasBeenSet;
}

