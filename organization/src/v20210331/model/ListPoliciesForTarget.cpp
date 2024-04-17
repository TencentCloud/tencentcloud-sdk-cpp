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

#include <tencentcloud/organization/v20210331/model/ListPoliciesForTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListPoliciesForTarget::ListPoliciesForTarget() :
    m_strategyIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_attachTimeHasBeenSet(false)
{
}

CoreInternalOutcome ListPoliciesForTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListPoliciesForTarget.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListPoliciesForTarget.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListPoliciesForTarget.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListPoliciesForTarget.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListPoliciesForTarget.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListPoliciesForTarget.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListPoliciesForTarget.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListPoliciesForTarget.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AttachTime") && !value["AttachTime"].IsNull())
    {
        if (!value["AttachTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListPoliciesForTarget.AttachTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachTime = string(value["AttachTime"].GetString());
        m_attachTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListPoliciesForTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_attachTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ListPoliciesForTarget::GetStrategyId() const
{
    return m_strategyId;
}

void ListPoliciesForTarget::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool ListPoliciesForTarget::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string ListPoliciesForTarget::GetStrategyName() const
{
    return m_strategyName;
}

void ListPoliciesForTarget::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool ListPoliciesForTarget::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string ListPoliciesForTarget::GetRemark() const
{
    return m_remark;
}

void ListPoliciesForTarget::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ListPoliciesForTarget::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t ListPoliciesForTarget::GetUin() const
{
    return m_uin;
}

void ListPoliciesForTarget::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ListPoliciesForTarget::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t ListPoliciesForTarget::GetType() const
{
    return m_type;
}

void ListPoliciesForTarget::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ListPoliciesForTarget::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ListPoliciesForTarget::GetAddTime() const
{
    return m_addTime;
}

void ListPoliciesForTarget::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool ListPoliciesForTarget::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string ListPoliciesForTarget::GetUpdateTime() const
{
    return m_updateTime;
}

void ListPoliciesForTarget::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ListPoliciesForTarget::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ListPoliciesForTarget::GetName() const
{
    return m_name;
}

void ListPoliciesForTarget::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ListPoliciesForTarget::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ListPoliciesForTarget::GetAttachTime() const
{
    return m_attachTime;
}

void ListPoliciesForTarget::SetAttachTime(const string& _attachTime)
{
    m_attachTime = _attachTime;
    m_attachTimeHasBeenSet = true;
}

bool ListPoliciesForTarget::AttachTimeHasBeenSet() const
{
    return m_attachTimeHasBeenSet;
}

