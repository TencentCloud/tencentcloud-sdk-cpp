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

#include <tencentcloud/iot/v20180123/model/Rule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

Rule::Rule() :
    m_ruleIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_activeHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_msgOrderHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

CoreInternalOutcome Rule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Query` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_query.Deserialize(value["Query"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_queryHasBeenSet = true;
    }

    if (value.HasMember("Actions") && !value["Actions"].IsNull())
    {
        if (!value["Actions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rule.Actions` is not array type"));

        const rapidjson::Value &tmpValue = value["Actions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Action item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actions.push_back(item);
        }
        m_actionsHasBeenSet = true;
    }

    if (value.HasMember("Active") && !value["Active"].IsNull())
    {
        if (!value["Active"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Active` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_active = value["Active"].GetUint64();
        m_activeHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Deleted` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetUint64();
        m_deletedHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MsgOrder") && !value["MsgOrder"].IsNull())
    {
        if (!value["MsgOrder"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.MsgOrder` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgOrder = value["MsgOrder"].GetUint64();
        m_msgOrderHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.DataType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = value["DataType"].GetUint64();
        m_dataTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Rule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_query.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actions.begin(); itr != m_actions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_activeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Active";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_active, allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_msgOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgOrder, allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataType, allocator);
    }

}


string Rule::GetRuleId() const
{
    return m_ruleId;
}

void Rule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool Rule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t Rule::GetAppId() const
{
    return m_appId;
}

void Rule::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Rule::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Rule::GetName() const
{
    return m_name;
}

void Rule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Rule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Rule::GetDescription() const
{
    return m_description;
}

void Rule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Rule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

RuleQuery Rule::GetQuery() const
{
    return m_query;
}

void Rule::SetQuery(const RuleQuery& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool Rule::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<Action> Rule::GetActions() const
{
    return m_actions;
}

void Rule::SetActions(const vector<Action>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool Rule::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

uint64_t Rule::GetActive() const
{
    return m_active;
}

void Rule::SetActive(const uint64_t& _active)
{
    m_active = _active;
    m_activeHasBeenSet = true;
}

bool Rule::ActiveHasBeenSet() const
{
    return m_activeHasBeenSet;
}

uint64_t Rule::GetDeleted() const
{
    return m_deleted;
}

void Rule::SetDeleted(const uint64_t& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool Rule::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

string Rule::GetCreateTime() const
{
    return m_createTime;
}

void Rule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Rule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Rule::GetUpdateTime() const
{
    return m_updateTime;
}

void Rule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Rule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t Rule::GetMsgOrder() const
{
    return m_msgOrder;
}

void Rule::SetMsgOrder(const uint64_t& _msgOrder)
{
    m_msgOrder = _msgOrder;
    m_msgOrderHasBeenSet = true;
}

bool Rule::MsgOrderHasBeenSet() const
{
    return m_msgOrderHasBeenSet;
}

uint64_t Rule::GetDataType() const
{
    return m_dataType;
}

void Rule::SetDataType(const uint64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool Rule::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

