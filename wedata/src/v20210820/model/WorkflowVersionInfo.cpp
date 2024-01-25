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

#include <tencentcloud/wedata/v20210820/model/WorkflowVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

WorkflowVersionInfo::WorkflowVersionInfo() :
    m_versionNumHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_committerHasBeenSet(false),
    m_commitTimeHasBeenSet(false),
    m_commitDescHasBeenSet(false),
    m_cosUrlHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionNum") && !value["VersionNum"].IsNull())
    {
        if (!value["VersionNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowVersionInfo.VersionNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionNum = string(value["VersionNum"].GetString());
        m_versionNumHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowVersionInfo.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("Committer") && !value["Committer"].IsNull())
    {
        if (!value["Committer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowVersionInfo.Committer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_committer = string(value["Committer"].GetString());
        m_committerHasBeenSet = true;
    }

    if (value.HasMember("CommitTime") && !value["CommitTime"].IsNull())
    {
        if (!value["CommitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowVersionInfo.CommitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commitTime = string(value["CommitTime"].GetString());
        m_commitTimeHasBeenSet = true;
    }

    if (value.HasMember("CommitDesc") && !value["CommitDesc"].IsNull())
    {
        if (!value["CommitDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowVersionInfo.CommitDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commitDesc = string(value["CommitDesc"].GetString());
        m_commitDescHasBeenSet = true;
    }

    if (value.HasMember("CosUrl") && !value["CosUrl"].IsNull())
    {
        if (!value["CosUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowVersionInfo.CosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosUrl = string(value["CosUrl"].GetString());
        m_cosUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionNum.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_committerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Committer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_committer.c_str(), allocator).Move(), allocator);
    }

    if (m_commitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_commitDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommitDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commitDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowVersionInfo::GetVersionNum() const
{
    return m_versionNum;
}

void WorkflowVersionInfo::SetVersionNum(const string& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool WorkflowVersionInfo::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string WorkflowVersionInfo::GetVersionId() const
{
    return m_versionId;
}

void WorkflowVersionInfo::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool WorkflowVersionInfo::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string WorkflowVersionInfo::GetCommitter() const
{
    return m_committer;
}

void WorkflowVersionInfo::SetCommitter(const string& _committer)
{
    m_committer = _committer;
    m_committerHasBeenSet = true;
}

bool WorkflowVersionInfo::CommitterHasBeenSet() const
{
    return m_committerHasBeenSet;
}

string WorkflowVersionInfo::GetCommitTime() const
{
    return m_commitTime;
}

void WorkflowVersionInfo::SetCommitTime(const string& _commitTime)
{
    m_commitTime = _commitTime;
    m_commitTimeHasBeenSet = true;
}

bool WorkflowVersionInfo::CommitTimeHasBeenSet() const
{
    return m_commitTimeHasBeenSet;
}

string WorkflowVersionInfo::GetCommitDesc() const
{
    return m_commitDesc;
}

void WorkflowVersionInfo::SetCommitDesc(const string& _commitDesc)
{
    m_commitDesc = _commitDesc;
    m_commitDescHasBeenSet = true;
}

bool WorkflowVersionInfo::CommitDescHasBeenSet() const
{
    return m_commitDescHasBeenSet;
}

string WorkflowVersionInfo::GetCosUrl() const
{
    return m_cosUrl;
}

void WorkflowVersionInfo::SetCosUrl(const string& _cosUrl)
{
    m_cosUrl = _cosUrl;
    m_cosUrlHasBeenSet = true;
}

bool WorkflowVersionInfo::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

