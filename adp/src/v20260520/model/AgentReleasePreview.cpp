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

#include <tencentcloud/adp/v20260520/model/AgentReleasePreview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentReleasePreview::AgentReleasePreview() :
    m_agentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_actionDescriptionHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_releaseListHasBeenSet(false)
{
}

CoreInternalOutcome AgentReleasePreview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReleasePreview.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReleasePreview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReleasePreview.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReleasePreview.Action` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetInt64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("ActionDescription") && !value["ActionDescription"].IsNull())
    {
        if (!value["ActionDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReleasePreview.ActionDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionDescription = string(value["ActionDescription"].GetString());
        m_actionDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReleasePreview.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ReleaseList") && !value["ReleaseList"].IsNull())
    {
        if (!value["ReleaseList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentReleasePreview.ReleaseList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReleaseList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentRelease item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_releaseList.push_back(item);
        }
        m_releaseListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentReleasePreview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_actionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_releaseList.begin(); itr != m_releaseList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AgentReleasePreview::GetAgentId() const
{
    return m_agentId;
}

void AgentReleasePreview::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool AgentReleasePreview::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string AgentReleasePreview::GetName() const
{
    return m_name;
}

void AgentReleasePreview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentReleasePreview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentReleasePreview::GetUpdateTime() const
{
    return m_updateTime;
}

void AgentReleasePreview::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AgentReleasePreview::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t AgentReleasePreview::GetAction() const
{
    return m_action;
}

void AgentReleasePreview::SetAction(const int64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AgentReleasePreview::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string AgentReleasePreview::GetActionDescription() const
{
    return m_actionDescription;
}

void AgentReleasePreview::SetActionDescription(const string& _actionDescription)
{
    m_actionDescription = _actionDescription;
    m_actionDescriptionHasBeenSet = true;
}

bool AgentReleasePreview::ActionDescriptionHasBeenSet() const
{
    return m_actionDescriptionHasBeenSet;
}

string AgentReleasePreview::GetMessage() const
{
    return m_message;
}

void AgentReleasePreview::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool AgentReleasePreview::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<AgentRelease> AgentReleasePreview::GetReleaseList() const
{
    return m_releaseList;
}

void AgentReleasePreview::SetReleaseList(const vector<AgentRelease>& _releaseList)
{
    m_releaseList = _releaseList;
    m_releaseListHasBeenSet = true;
}

bool AgentReleasePreview::ReleaseListHasBeenSet() const
{
    return m_releaseListHasBeenSet;
}

