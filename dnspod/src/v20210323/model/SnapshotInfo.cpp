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

#include <tencentcloud/dnspod/v20210323/model/SnapshotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

SnapshotInfo::SnapshotInfo() :
    m_cosUrlHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_idHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosUrl") && !value["CosUrl"].IsNull())
    {
        if (!value["CosUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.CosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosUrl = string(value["CosUrl"].GetString());
        m_cosUrlHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RecordCount") && !value["RecordCount"].IsNull())
    {
        if (!value["RecordCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.RecordCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = string(value["RecordCount"].GetString());
        m_recordCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_recordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordCount.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotInfo::GetCosUrl() const
{
    return m_cosUrl;
}

void SnapshotInfo::SetCosUrl(const string& _cosUrl)
{
    m_cosUrl = _cosUrl;
    m_cosUrlHasBeenSet = true;
}

bool SnapshotInfo::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

string SnapshotInfo::GetCreatedOn() const
{
    return m_createdOn;
}

void SnapshotInfo::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool SnapshotInfo::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string SnapshotInfo::GetDomain() const
{
    return m_domain;
}

void SnapshotInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SnapshotInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string SnapshotInfo::GetId() const
{
    return m_id;
}

void SnapshotInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SnapshotInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SnapshotInfo::GetRecordCount() const
{
    return m_recordCount;
}

void SnapshotInfo::SetRecordCount(const string& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool SnapshotInfo::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

string SnapshotInfo::GetStatus() const
{
    return m_status;
}

void SnapshotInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SnapshotInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

