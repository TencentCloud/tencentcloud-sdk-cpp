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

#include <tencentcloud/monitor/v20230616/model/TeamsWorkflowRobotNoticeTmpl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

TeamsWorkflowRobotNoticeTmpl::TeamsWorkflowRobotNoticeTmpl() :
    m_contentTmplHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_titleTmplHasBeenSet(false)
{
}

CoreInternalOutcome TeamsWorkflowRobotNoticeTmpl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentTmpl") && !value["ContentTmpl"].IsNull())
    {
        if (!value["ContentTmpl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeamsWorkflowRobotNoticeTmpl.ContentTmpl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentTmpl = string(value["ContentTmpl"].GetString());
        m_contentTmplHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeamsWorkflowRobotNoticeTmpl.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("TitleTmpl") && !value["TitleTmpl"].IsNull())
    {
        if (!value["TitleTmpl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeamsWorkflowRobotNoticeTmpl.TitleTmpl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_titleTmpl = string(value["TitleTmpl"].GetString());
        m_titleTmplHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TeamsWorkflowRobotNoticeTmpl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentTmplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentTmpl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentTmpl.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_titleTmplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TitleTmpl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_titleTmpl.c_str(), allocator).Move(), allocator);
    }

}


string TeamsWorkflowRobotNoticeTmpl::GetContentTmpl() const
{
    return m_contentTmpl;
}

void TeamsWorkflowRobotNoticeTmpl::SetContentTmpl(const string& _contentTmpl)
{
    m_contentTmpl = _contentTmpl;
    m_contentTmplHasBeenSet = true;
}

bool TeamsWorkflowRobotNoticeTmpl::ContentTmplHasBeenSet() const
{
    return m_contentTmplHasBeenSet;
}

string TeamsWorkflowRobotNoticeTmpl::GetVersion() const
{
    return m_version;
}

void TeamsWorkflowRobotNoticeTmpl::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool TeamsWorkflowRobotNoticeTmpl::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string TeamsWorkflowRobotNoticeTmpl::GetTitleTmpl() const
{
    return m_titleTmpl;
}

void TeamsWorkflowRobotNoticeTmpl::SetTitleTmpl(const string& _titleTmpl)
{
    m_titleTmpl = _titleTmpl;
    m_titleTmplHasBeenSet = true;
}

bool TeamsWorkflowRobotNoticeTmpl::TitleTmplHasBeenSet() const
{
    return m_titleTmplHasBeenSet;
}

