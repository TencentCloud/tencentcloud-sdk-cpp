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
    m_versionIdHasBeenSet(false)
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

