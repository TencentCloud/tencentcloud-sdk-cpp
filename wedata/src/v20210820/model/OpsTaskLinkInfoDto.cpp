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

#include <tencentcloud/wedata/v20210820/model/OpsTaskLinkInfoDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

OpsTaskLinkInfoDto::OpsTaskLinkInfoDto() :
    m_taskToHasBeenSet(false),
    m_taskFromHasBeenSet(false),
    m_linkTypeHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_linkStyleHasBeenSet(false)
{
}

CoreInternalOutcome OpsTaskLinkInfoDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskTo") && !value["TaskTo"].IsNull())
    {
        if (!value["TaskTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskLinkInfoDto.TaskTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTo = string(value["TaskTo"].GetString());
        m_taskToHasBeenSet = true;
    }

    if (value.HasMember("TaskFrom") && !value["TaskFrom"].IsNull())
    {
        if (!value["TaskFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskLinkInfoDto.TaskFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFrom = string(value["TaskFrom"].GetString());
        m_taskFromHasBeenSet = true;
    }

    if (value.HasMember("LinkType") && !value["LinkType"].IsNull())
    {
        if (!value["LinkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskLinkInfoDto.LinkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkType = string(value["LinkType"].GetString());
        m_linkTypeHasBeenSet = true;
    }

    if (value.HasMember("LinkId") && !value["LinkId"].IsNull())
    {
        if (!value["LinkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskLinkInfoDto.LinkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkId = string(value["LinkId"].GetString());
        m_linkIdHasBeenSet = true;
    }

    if (value.HasMember("LinkStyle") && !value["LinkStyle"].IsNull())
    {
        if (!value["LinkStyle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskLinkInfoDto.LinkStyle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkStyle = string(value["LinkStyle"].GetString());
        m_linkStyleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpsTaskLinkInfoDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTo.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_linkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkType.c_str(), allocator).Move(), allocator);
    }

    if (m_linkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkId.c_str(), allocator).Move(), allocator);
    }

    if (m_linkStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkStyle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkStyle.c_str(), allocator).Move(), allocator);
    }

}


string OpsTaskLinkInfoDto::GetTaskTo() const
{
    return m_taskTo;
}

void OpsTaskLinkInfoDto::SetTaskTo(const string& _taskTo)
{
    m_taskTo = _taskTo;
    m_taskToHasBeenSet = true;
}

bool OpsTaskLinkInfoDto::TaskToHasBeenSet() const
{
    return m_taskToHasBeenSet;
}

string OpsTaskLinkInfoDto::GetTaskFrom() const
{
    return m_taskFrom;
}

void OpsTaskLinkInfoDto::SetTaskFrom(const string& _taskFrom)
{
    m_taskFrom = _taskFrom;
    m_taskFromHasBeenSet = true;
}

bool OpsTaskLinkInfoDto::TaskFromHasBeenSet() const
{
    return m_taskFromHasBeenSet;
}

string OpsTaskLinkInfoDto::GetLinkType() const
{
    return m_linkType;
}

void OpsTaskLinkInfoDto::SetLinkType(const string& _linkType)
{
    m_linkType = _linkType;
    m_linkTypeHasBeenSet = true;
}

bool OpsTaskLinkInfoDto::LinkTypeHasBeenSet() const
{
    return m_linkTypeHasBeenSet;
}

string OpsTaskLinkInfoDto::GetLinkId() const
{
    return m_linkId;
}

void OpsTaskLinkInfoDto::SetLinkId(const string& _linkId)
{
    m_linkId = _linkId;
    m_linkIdHasBeenSet = true;
}

bool OpsTaskLinkInfoDto::LinkIdHasBeenSet() const
{
    return m_linkIdHasBeenSet;
}

string OpsTaskLinkInfoDto::GetLinkStyle() const
{
    return m_linkStyle;
}

void OpsTaskLinkInfoDto::SetLinkStyle(const string& _linkStyle)
{
    m_linkStyle = _linkStyle;
    m_linkStyleHasBeenSet = true;
}

bool OpsTaskLinkInfoDto::LinkStyleHasBeenSet() const
{
    return m_linkStyleHasBeenSet;
}

