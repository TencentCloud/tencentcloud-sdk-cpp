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

#include <tencentcloud/partners/v20180321/model/UnbindClientElem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace rapidjson;
using namespace std;

UnbindClientElem::UnbindClientElem() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_actionTimeHasBeenSet(false)
{
}

CoreInternalOutcome UnbindClientElem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnbindClientElem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnbindClientElem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `UnbindClientElem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnbindClientElem.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("ActionTime") && !value["ActionTime"].IsNull())
    {
        if (!value["ActionTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnbindClientElem.ActionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTime = string(value["ActionTime"].GetString());
        m_actionTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnbindClientElem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_actionTime.c_str(), allocator).Move(), allocator);
    }

}


string UnbindClientElem::GetUin() const
{
    return m_uin;
}

void UnbindClientElem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool UnbindClientElem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string UnbindClientElem::GetName() const
{
    return m_name;
}

void UnbindClientElem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UnbindClientElem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t UnbindClientElem::GetStatus() const
{
    return m_status;
}

void UnbindClientElem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UnbindClientElem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UnbindClientElem::GetApplyTime() const
{
    return m_applyTime;
}

void UnbindClientElem::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool UnbindClientElem::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string UnbindClientElem::GetActionTime() const
{
    return m_actionTime;
}

void UnbindClientElem::SetActionTime(const string& _actionTime)
{
    m_actionTime = _actionTime;
    m_actionTimeHasBeenSet = true;
}

bool UnbindClientElem::ActionTimeHasBeenSet() const
{
    return m_actionTimeHasBeenSet;
}

