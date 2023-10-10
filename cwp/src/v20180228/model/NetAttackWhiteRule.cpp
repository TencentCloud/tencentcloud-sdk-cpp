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

#include <tencentcloud/cwp/v20180228/model/NetAttackWhiteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

NetAttackWhiteRule::NetAttackWhiteRule() :
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_dealOldEventsHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_srcIPHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome NetAttackWhiteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackWhiteRule.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackWhiteRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackWhiteRule.Scope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetUint64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("DealOldEvents") && !value["DealOldEvents"].IsNull())
    {
        if (!value["DealOldEvents"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackWhiteRule.DealOldEvents` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dealOldEvents = value["DealOldEvents"].GetUint64();
        m_dealOldEventsHasBeenSet = true;
    }

    if (value.HasMember("Quuids") && !value["Quuids"].IsNull())
    {
        if (!value["Quuids"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackWhiteRule.Quuids` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuids = string(value["Quuids"].GetString());
        m_quuidsHasBeenSet = true;
    }

    if (value.HasMember("SrcIP") && !value["SrcIP"].IsNull())
    {
        if (!value["SrcIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackWhiteRule.SrcIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIP = string(value["SrcIP"].GetString());
        m_srcIPHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackWhiteRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackWhiteRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetAttackWhiteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_dealOldEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealOldEvents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dealOldEvents, allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuids.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIP.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t NetAttackWhiteRule::GetId() const
{
    return m_id;
}

void NetAttackWhiteRule::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NetAttackWhiteRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NetAttackWhiteRule::GetDescription() const
{
    return m_description;
}

void NetAttackWhiteRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NetAttackWhiteRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t NetAttackWhiteRule::GetScope() const
{
    return m_scope;
}

void NetAttackWhiteRule::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool NetAttackWhiteRule::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

uint64_t NetAttackWhiteRule::GetDealOldEvents() const
{
    return m_dealOldEvents;
}

void NetAttackWhiteRule::SetDealOldEvents(const uint64_t& _dealOldEvents)
{
    m_dealOldEvents = _dealOldEvents;
    m_dealOldEventsHasBeenSet = true;
}

bool NetAttackWhiteRule::DealOldEventsHasBeenSet() const
{
    return m_dealOldEventsHasBeenSet;
}

string NetAttackWhiteRule::GetQuuids() const
{
    return m_quuids;
}

void NetAttackWhiteRule::SetQuuids(const string& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool NetAttackWhiteRule::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

string NetAttackWhiteRule::GetSrcIP() const
{
    return m_srcIP;
}

void NetAttackWhiteRule::SetSrcIP(const string& _srcIP)
{
    m_srcIP = _srcIP;
    m_srcIPHasBeenSet = true;
}

bool NetAttackWhiteRule::SrcIPHasBeenSet() const
{
    return m_srcIPHasBeenSet;
}

string NetAttackWhiteRule::GetCreateTime() const
{
    return m_createTime;
}

void NetAttackWhiteRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NetAttackWhiteRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string NetAttackWhiteRule::GetModifyTime() const
{
    return m_modifyTime;
}

void NetAttackWhiteRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool NetAttackWhiteRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

