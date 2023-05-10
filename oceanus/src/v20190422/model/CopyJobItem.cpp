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

#include <tencentcloud/oceanus/v20190422/model/CopyJobItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CopyJobItem::CopyJobItem() :
    m_sourceIdHasBeenSet(false),
    m_targetClusterIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_targetFolderIdHasBeenSet(false),
    m_jobTypeHasBeenSet(false)
{
}

CoreInternalOutcome CopyJobItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobItem.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetClusterId") && !value["TargetClusterId"].IsNull())
    {
        if (!value["TargetClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobItem.TargetClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetClusterId = string(value["TargetClusterId"].GetString());
        m_targetClusterIdHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobItem.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobItem.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("TargetFolderId") && !value["TargetFolderId"].IsNull())
    {
        if (!value["TargetFolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobItem.TargetFolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetFolderId = string(value["TargetFolderId"].GetString());
        m_targetFolderIdHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobItem.JobType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = value["JobType"].GetInt64();
        m_jobTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CopyJobItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetFolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobType, allocator);
    }

}


string CopyJobItem::GetSourceId() const
{
    return m_sourceId;
}

void CopyJobItem::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool CopyJobItem::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string CopyJobItem::GetTargetClusterId() const
{
    return m_targetClusterId;
}

void CopyJobItem::SetTargetClusterId(const string& _targetClusterId)
{
    m_targetClusterId = _targetClusterId;
    m_targetClusterIdHasBeenSet = true;
}

bool CopyJobItem::TargetClusterIdHasBeenSet() const
{
    return m_targetClusterIdHasBeenSet;
}

string CopyJobItem::GetSourceName() const
{
    return m_sourceName;
}

void CopyJobItem::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool CopyJobItem::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string CopyJobItem::GetTargetName() const
{
    return m_targetName;
}

void CopyJobItem::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool CopyJobItem::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string CopyJobItem::GetTargetFolderId() const
{
    return m_targetFolderId;
}

void CopyJobItem::SetTargetFolderId(const string& _targetFolderId)
{
    m_targetFolderId = _targetFolderId;
    m_targetFolderIdHasBeenSet = true;
}

bool CopyJobItem::TargetFolderIdHasBeenSet() const
{
    return m_targetFolderIdHasBeenSet;
}

int64_t CopyJobItem::GetJobType() const
{
    return m_jobType;
}

void CopyJobItem::SetJobType(const int64_t& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool CopyJobItem::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

