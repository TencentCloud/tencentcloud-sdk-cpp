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

#include <tencentcloud/csip/v20221121/model/AIAgentCredentialLocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AIAgentCredentialLocation::AIAgentCredentialLocation() :
    m_instanceIDHasBeenSet(false),
    m_containerIDHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_lineHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_delegateIDHasBeenSet(false)
{
}

CoreInternalOutcome AIAgentCredentialLocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredentialLocation.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("ContainerID") && !value["ContainerID"].IsNull())
    {
        if (!value["ContainerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredentialLocation.ContainerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerID = string(value["ContainerID"].GetString());
        m_containerIDHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredentialLocation.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Line") && !value["Line"].IsNull())
    {
        if (!value["Line"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredentialLocation.Line` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_line = value["Line"].GetInt64();
        m_lineHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredentialLocation.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredentialLocation.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DelegateID") && !value["DelegateID"].IsNull())
    {
        if (!value["DelegateID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredentialLocation.DelegateID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delegateID = value["DelegateID"].GetInt64();
        m_delegateIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIAgentCredentialLocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerID.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_lineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Line";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_line, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_delegateIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelegateID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delegateID, allocator);
    }

}


string AIAgentCredentialLocation::GetInstanceID() const
{
    return m_instanceID;
}

void AIAgentCredentialLocation::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool AIAgentCredentialLocation::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string AIAgentCredentialLocation::GetContainerID() const
{
    return m_containerID;
}

void AIAgentCredentialLocation::SetContainerID(const string& _containerID)
{
    m_containerID = _containerID;
    m_containerIDHasBeenSet = true;
}

bool AIAgentCredentialLocation::ContainerIDHasBeenSet() const
{
    return m_containerIDHasBeenSet;
}

string AIAgentCredentialLocation::GetPath() const
{
    return m_path;
}

void AIAgentCredentialLocation::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool AIAgentCredentialLocation::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

int64_t AIAgentCredentialLocation::GetLine() const
{
    return m_line;
}

void AIAgentCredentialLocation::SetLine(const int64_t& _line)
{
    m_line = _line;
    m_lineHasBeenSet = true;
}

bool AIAgentCredentialLocation::LineHasBeenSet() const
{
    return m_lineHasBeenSet;
}

string AIAgentCredentialLocation::GetContent() const
{
    return m_content;
}

void AIAgentCredentialLocation::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AIAgentCredentialLocation::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t AIAgentCredentialLocation::GetStatus() const
{
    return m_status;
}

void AIAgentCredentialLocation::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AIAgentCredentialLocation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AIAgentCredentialLocation::GetDelegateID() const
{
    return m_delegateID;
}

void AIAgentCredentialLocation::SetDelegateID(const int64_t& _delegateID)
{
    m_delegateID = _delegateID;
    m_delegateIDHasBeenSet = true;
}

bool AIAgentCredentialLocation::DelegateIDHasBeenSet() const
{
    return m_delegateIDHasBeenSet;
}

