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

#include <tencentcloud/adp/v20260520/model/SkillVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillVersion::SkillVersion() :
    m_analysisInfoHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_versionStatusHasBeenSet(false),
    m_skillMd5HasBeenSet(false),
    m_skillUrlHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_skillMarkdownUrlHasBeenSet(false),
    m_updateDescHasBeenSet(false)
{
}

CoreInternalOutcome SkillVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AnalysisInfo") && !value["AnalysisInfo"].IsNull())
    {
        if (!value["AnalysisInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersion.AnalysisInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_analysisInfo.Deserialize(value["AnalysisInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_analysisInfoHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersion.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersion.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("VersionStatus") && !value["VersionStatus"].IsNull())
    {
        if (!value["VersionStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersion.VersionStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionStatus = value["VersionStatus"].GetInt64();
        m_versionStatusHasBeenSet = true;
    }

    if (value.HasMember("SkillMd5") && !value["SkillMd5"].IsNull())
    {
        if (!value["SkillMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersion.SkillMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillMd5 = string(value["SkillMd5"].GetString());
        m_skillMd5HasBeenSet = true;
    }

    if (value.HasMember("SkillUrl") && !value["SkillUrl"].IsNull())
    {
        if (!value["SkillUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersion.SkillUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillUrl = string(value["SkillUrl"].GetString());
        m_skillUrlHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersion.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SkillMarkdownUrl") && !value["SkillMarkdownUrl"].IsNull())
    {
        if (!value["SkillMarkdownUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersion.SkillMarkdownUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillMarkdownUrl = string(value["SkillMarkdownUrl"].GetString());
        m_skillMarkdownUrlHasBeenSet = true;
    }

    if (value.HasMember("UpdateDesc") && !value["UpdateDesc"].IsNull())
    {
        if (!value["UpdateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersion.UpdateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateDesc = string(value["UpdateDesc"].GetString());
        m_updateDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_analysisInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_analysisInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionStatus, allocator);
    }

    if (m_skillMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_skillUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_skillMarkdownUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillMarkdownUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillMarkdownUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_updateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateDesc.c_str(), allocator).Move(), allocator);
    }

}


SkillAnalysisInfo SkillVersion::GetAnalysisInfo() const
{
    return m_analysisInfo;
}

void SkillVersion::SetAnalysisInfo(const SkillAnalysisInfo& _analysisInfo)
{
    m_analysisInfo = _analysisInfo;
    m_analysisInfoHasBeenSet = true;
}

bool SkillVersion::AnalysisInfoHasBeenSet() const
{
    return m_analysisInfoHasBeenSet;
}

string SkillVersion::GetVersion() const
{
    return m_version;
}

void SkillVersion::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SkillVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SkillVersion::GetVersionId() const
{
    return m_versionId;
}

void SkillVersion::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool SkillVersion::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

int64_t SkillVersion::GetVersionStatus() const
{
    return m_versionStatus;
}

void SkillVersion::SetVersionStatus(const int64_t& _versionStatus)
{
    m_versionStatus = _versionStatus;
    m_versionStatusHasBeenSet = true;
}

bool SkillVersion::VersionStatusHasBeenSet() const
{
    return m_versionStatusHasBeenSet;
}

string SkillVersion::GetSkillMd5() const
{
    return m_skillMd5;
}

void SkillVersion::SetSkillMd5(const string& _skillMd5)
{
    m_skillMd5 = _skillMd5;
    m_skillMd5HasBeenSet = true;
}

bool SkillVersion::SkillMd5HasBeenSet() const
{
    return m_skillMd5HasBeenSet;
}

string SkillVersion::GetSkillUrl() const
{
    return m_skillUrl;
}

void SkillVersion::SetSkillUrl(const string& _skillUrl)
{
    m_skillUrl = _skillUrl;
    m_skillUrlHasBeenSet = true;
}

bool SkillVersion::SkillUrlHasBeenSet() const
{
    return m_skillUrlHasBeenSet;
}

string SkillVersion::GetCreateTime() const
{
    return m_createTime;
}

void SkillVersion::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SkillVersion::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SkillVersion::GetSkillMarkdownUrl() const
{
    return m_skillMarkdownUrl;
}

void SkillVersion::SetSkillMarkdownUrl(const string& _skillMarkdownUrl)
{
    m_skillMarkdownUrl = _skillMarkdownUrl;
    m_skillMarkdownUrlHasBeenSet = true;
}

bool SkillVersion::SkillMarkdownUrlHasBeenSet() const
{
    return m_skillMarkdownUrlHasBeenSet;
}

string SkillVersion::GetUpdateDesc() const
{
    return m_updateDesc;
}

void SkillVersion::SetUpdateDesc(const string& _updateDesc)
{
    m_updateDesc = _updateDesc;
    m_updateDescHasBeenSet = true;
}

bool SkillVersion::UpdateDescHasBeenSet() const
{
    return m_updateDescHasBeenSet;
}

