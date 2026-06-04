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

#include <tencentcloud/adp/v20260520/model/AgentRelease.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentRelease::AgentRelease() :
    m_itemNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_actionDescriptionHasBeenSet(false),
    m_releaseMessageHasBeenSet(false)
{
}

CoreInternalOutcome AgentRelease::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRelease.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRelease.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ActionDescription") && !value["ActionDescription"].IsNull())
    {
        if (!value["ActionDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRelease.ActionDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionDescription = string(value["ActionDescription"].GetString());
        m_actionDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ReleaseMessage") && !value["ReleaseMessage"].IsNull())
    {
        if (!value["ReleaseMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRelease.ReleaseMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseMessage = string(value["ReleaseMessage"].GetString());
        m_releaseMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentRelease::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseMessage.c_str(), allocator).Move(), allocator);
    }

}


string AgentRelease::GetItemName() const
{
    return m_itemName;
}

void AgentRelease::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool AgentRelease::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

string AgentRelease::GetUpdateTime() const
{
    return m_updateTime;
}

void AgentRelease::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AgentRelease::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AgentRelease::GetActionDescription() const
{
    return m_actionDescription;
}

void AgentRelease::SetActionDescription(const string& _actionDescription)
{
    m_actionDescription = _actionDescription;
    m_actionDescriptionHasBeenSet = true;
}

bool AgentRelease::ActionDescriptionHasBeenSet() const
{
    return m_actionDescriptionHasBeenSet;
}

string AgentRelease::GetReleaseMessage() const
{
    return m_releaseMessage;
}

void AgentRelease::SetReleaseMessage(const string& _releaseMessage)
{
    m_releaseMessage = _releaseMessage;
    m_releaseMessageHasBeenSet = true;
}

bool AgentRelease::ReleaseMessageHasBeenSet() const
{
    return m_releaseMessageHasBeenSet;
}

