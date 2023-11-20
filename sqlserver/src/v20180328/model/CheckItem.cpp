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

#include <tencentcloud/sqlserver/v20180328/model/CheckItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

CheckItem::CheckItem() :
    m_checkNameHasBeenSet(false),
    m_currentValueHasBeenSet(false),
    m_passedHasBeenSet(false),
    m_isAffectHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_msgCodeHasBeenSet(false)
{
}

CoreInternalOutcome CheckItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckName") && !value["CheckName"].IsNull())
    {
        if (!value["CheckName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckItem.CheckName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkName = string(value["CheckName"].GetString());
        m_checkNameHasBeenSet = true;
    }

    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckItem.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("Passed") && !value["Passed"].IsNull())
    {
        if (!value["Passed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckItem.Passed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passed = value["Passed"].GetInt64();
        m_passedHasBeenSet = true;
    }

    if (value.HasMember("IsAffect") && !value["IsAffect"].IsNull())
    {
        if (!value["IsAffect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckItem.IsAffect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAffect = value["IsAffect"].GetInt64();
        m_isAffectHasBeenSet = true;
    }

    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckItem.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("MsgCode") && !value["MsgCode"].IsNull())
    {
        if (!value["MsgCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckItem.MsgCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_msgCode = value["MsgCode"].GetInt64();
        m_msgCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkName.c_str(), allocator).Move(), allocator);
    }

    if (m_currentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_passedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Passed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passed, allocator);
    }

    if (m_isAffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAffect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAffect, allocator);
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_msgCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgCode, allocator);
    }

}


string CheckItem::GetCheckName() const
{
    return m_checkName;
}

void CheckItem::SetCheckName(const string& _checkName)
{
    m_checkName = _checkName;
    m_checkNameHasBeenSet = true;
}

bool CheckItem::CheckNameHasBeenSet() const
{
    return m_checkNameHasBeenSet;
}

string CheckItem::GetCurrentValue() const
{
    return m_currentValue;
}

void CheckItem::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool CheckItem::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

int64_t CheckItem::GetPassed() const
{
    return m_passed;
}

void CheckItem::SetPassed(const int64_t& _passed)
{
    m_passed = _passed;
    m_passedHasBeenSet = true;
}

bool CheckItem::PassedHasBeenSet() const
{
    return m_passedHasBeenSet;
}

int64_t CheckItem::GetIsAffect() const
{
    return m_isAffect;
}

void CheckItem::SetIsAffect(const int64_t& _isAffect)
{
    m_isAffect = _isAffect;
    m_isAffectHasBeenSet = true;
}

bool CheckItem::IsAffectHasBeenSet() const
{
    return m_isAffectHasBeenSet;
}

string CheckItem::GetMsg() const
{
    return m_msg;
}

void CheckItem::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool CheckItem::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

int64_t CheckItem::GetMsgCode() const
{
    return m_msgCode;
}

void CheckItem::SetMsgCode(const int64_t& _msgCode)
{
    m_msgCode = _msgCode;
    m_msgCodeHasBeenSet = true;
}

bool CheckItem::MsgCodeHasBeenSet() const
{
    return m_msgCodeHasBeenSet;
}

