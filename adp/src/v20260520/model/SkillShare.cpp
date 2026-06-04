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

#include <tencentcloud/adp/v20260520/model/SkillShare.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillShare::SkillShare() :
    m_approvalIdHasBeenSet(false),
    m_shareSkillIdHasBeenSet(false),
    m_shareVersionHasBeenSet(false),
    m_shareVersionIdHasBeenSet(false),
    m_skillIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome SkillShare::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApprovalId") && !value["ApprovalId"].IsNull())
    {
        if (!value["ApprovalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillShare.ApprovalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalId = string(value["ApprovalId"].GetString());
        m_approvalIdHasBeenSet = true;
    }

    if (value.HasMember("ShareSkillId") && !value["ShareSkillId"].IsNull())
    {
        if (!value["ShareSkillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillShare.ShareSkillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareSkillId = string(value["ShareSkillId"].GetString());
        m_shareSkillIdHasBeenSet = true;
    }

    if (value.HasMember("ShareVersion") && !value["ShareVersion"].IsNull())
    {
        if (!value["ShareVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillShare.ShareVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareVersion = string(value["ShareVersion"].GetString());
        m_shareVersionHasBeenSet = true;
    }

    if (value.HasMember("ShareVersionId") && !value["ShareVersionId"].IsNull())
    {
        if (!value["ShareVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillShare.ShareVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareVersionId = string(value["ShareVersionId"].GetString());
        m_shareVersionIdHasBeenSet = true;
    }

    if (value.HasMember("SkillId") && !value["SkillId"].IsNull())
    {
        if (!value["SkillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillShare.SkillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillId = string(value["SkillId"].GetString());
        m_skillIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillShare.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillShare::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approvalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalId.c_str(), allocator).Move(), allocator);
    }

    if (m_shareSkillIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareSkillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareSkillId.c_str(), allocator).Move(), allocator);
    }

    if (m_shareVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_shareVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_skillIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string SkillShare::GetApprovalId() const
{
    return m_approvalId;
}

void SkillShare::SetApprovalId(const string& _approvalId)
{
    m_approvalId = _approvalId;
    m_approvalIdHasBeenSet = true;
}

bool SkillShare::ApprovalIdHasBeenSet() const
{
    return m_approvalIdHasBeenSet;
}

string SkillShare::GetShareSkillId() const
{
    return m_shareSkillId;
}

void SkillShare::SetShareSkillId(const string& _shareSkillId)
{
    m_shareSkillId = _shareSkillId;
    m_shareSkillIdHasBeenSet = true;
}

bool SkillShare::ShareSkillIdHasBeenSet() const
{
    return m_shareSkillIdHasBeenSet;
}

string SkillShare::GetShareVersion() const
{
    return m_shareVersion;
}

void SkillShare::SetShareVersion(const string& _shareVersion)
{
    m_shareVersion = _shareVersion;
    m_shareVersionHasBeenSet = true;
}

bool SkillShare::ShareVersionHasBeenSet() const
{
    return m_shareVersionHasBeenSet;
}

string SkillShare::GetShareVersionId() const
{
    return m_shareVersionId;
}

void SkillShare::SetShareVersionId(const string& _shareVersionId)
{
    m_shareVersionId = _shareVersionId;
    m_shareVersionIdHasBeenSet = true;
}

bool SkillShare::ShareVersionIdHasBeenSet() const
{
    return m_shareVersionIdHasBeenSet;
}

string SkillShare::GetSkillId() const
{
    return m_skillId;
}

void SkillShare::SetSkillId(const string& _skillId)
{
    m_skillId = _skillId;
    m_skillIdHasBeenSet = true;
}

bool SkillShare::SkillIdHasBeenSet() const
{
    return m_skillIdHasBeenSet;
}

int64_t SkillShare::GetStatus() const
{
    return m_status;
}

void SkillShare::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SkillShare::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

