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

#include <tencentcloud/weilingwith/v20230427/model/ActionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ActionDetail::ActionDetail() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_actionDescHasBeenSet(false),
    m_msgTypeHasBeenSet(false),
    m_msgContentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_wIDHasBeenSet(false),
    m_linkRuleSetHasBeenSet(false),
    m_sinkConfigHasBeenSet(false)
{
}

CoreInternalOutcome ActionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDetail.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionDesc") && !value["ActionDesc"].IsNull())
    {
        if (!value["ActionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDetail.ActionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionDesc = string(value["ActionDesc"].GetString());
        m_actionDescHasBeenSet = true;
    }

    if (value.HasMember("MsgType") && !value["MsgType"].IsNull())
    {
        if (!value["MsgType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDetail.MsgType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgType = string(value["MsgType"].GetString());
        m_msgTypeHasBeenSet = true;
    }

    if (value.HasMember("MsgContent") && !value["MsgContent"].IsNull())
    {
        if (!value["MsgContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDetail.MsgContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgContent = string(value["MsgContent"].GetString());
        m_msgContentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("WID") && !value["WID"].IsNull())
    {
        if (!value["WID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDetail.WID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wID = string(value["WID"].GetString());
        m_wIDHasBeenSet = true;
    }

    if (value.HasMember("LinkRuleSet") && !value["LinkRuleSet"].IsNull())
    {
        if (!value["LinkRuleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ActionDetail.LinkRuleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LinkRuleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LinkRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_linkRuleSet.push_back(item);
        }
        m_linkRuleSetHasBeenSet = true;
    }

    if (value.HasMember("SinkConfig") && !value["SinkConfig"].IsNull())
    {
        if (!value["SinkConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDetail.SinkConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sinkConfig = string(value["SinkConfig"].GetString());
        m_sinkConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgType.c_str(), allocator).Move(), allocator);
    }

    if (m_msgContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgContent.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_linkRuleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkRuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_linkRuleSet.begin(); itr != m_linkRuleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sinkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sinkConfig.c_str(), allocator).Move(), allocator);
    }

}


int64_t ActionDetail::GetId() const
{
    return m_id;
}

void ActionDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ActionDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ActionDetail::GetName() const
{
    return m_name;
}

void ActionDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ActionDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ActionDetail::GetActionType() const
{
    return m_actionType;
}

void ActionDetail::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ActionDetail::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string ActionDetail::GetActionDesc() const
{
    return m_actionDesc;
}

void ActionDetail::SetActionDesc(const string& _actionDesc)
{
    m_actionDesc = _actionDesc;
    m_actionDescHasBeenSet = true;
}

bool ActionDetail::ActionDescHasBeenSet() const
{
    return m_actionDescHasBeenSet;
}

string ActionDetail::GetMsgType() const
{
    return m_msgType;
}

void ActionDetail::SetMsgType(const string& _msgType)
{
    m_msgType = _msgType;
    m_msgTypeHasBeenSet = true;
}

bool ActionDetail::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

string ActionDetail::GetMsgContent() const
{
    return m_msgContent;
}

void ActionDetail::SetMsgContent(const string& _msgContent)
{
    m_msgContent = _msgContent;
    m_msgContentHasBeenSet = true;
}

bool ActionDetail::MsgContentHasBeenSet() const
{
    return m_msgContentHasBeenSet;
}

string ActionDetail::GetCreateTime() const
{
    return m_createTime;
}

void ActionDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ActionDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ActionDetail::GetWID() const
{
    return m_wID;
}

void ActionDetail::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool ActionDetail::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

vector<LinkRule> ActionDetail::GetLinkRuleSet() const
{
    return m_linkRuleSet;
}

void ActionDetail::SetLinkRuleSet(const vector<LinkRule>& _linkRuleSet)
{
    m_linkRuleSet = _linkRuleSet;
    m_linkRuleSetHasBeenSet = true;
}

bool ActionDetail::LinkRuleSetHasBeenSet() const
{
    return m_linkRuleSetHasBeenSet;
}

string ActionDetail::GetSinkConfig() const
{
    return m_sinkConfig;
}

void ActionDetail::SetSinkConfig(const string& _sinkConfig)
{
    m_sinkConfig = _sinkConfig;
    m_sinkConfigHasBeenSet = true;
}

bool ActionDetail::SinkConfigHasBeenSet() const
{
    return m_sinkConfigHasBeenSet;
}

