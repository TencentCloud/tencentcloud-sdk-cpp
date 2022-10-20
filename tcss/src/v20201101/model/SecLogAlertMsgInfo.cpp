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

#include <tencentcloud/tcss/v20201101/model/SecLogAlertMsgInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SecLogAlertMsgInfo::SecLogAlertMsgInfo() :
    m_msgTypeHasBeenSet(false),
    m_msgValueHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome SecLogAlertMsgInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgType") && !value["MsgType"].IsNull())
    {
        if (!value["MsgType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogAlertMsgInfo.MsgType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgType = string(value["MsgType"].GetString());
        m_msgTypeHasBeenSet = true;
    }

    if (value.HasMember("MsgValue") && !value["MsgValue"].IsNull())
    {
        if (!value["MsgValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogAlertMsgInfo.MsgValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgValue = string(value["MsgValue"].GetString());
        m_msgValueHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogAlertMsgInfo.State` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetBool();
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecLogAlertMsgInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgType.c_str(), allocator).Move(), allocator);
    }

    if (m_msgValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgValue.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

}


string SecLogAlertMsgInfo::GetMsgType() const
{
    return m_msgType;
}

void SecLogAlertMsgInfo::SetMsgType(const string& _msgType)
{
    m_msgType = _msgType;
    m_msgTypeHasBeenSet = true;
}

bool SecLogAlertMsgInfo::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

string SecLogAlertMsgInfo::GetMsgValue() const
{
    return m_msgValue;
}

void SecLogAlertMsgInfo::SetMsgValue(const string& _msgValue)
{
    m_msgValue = _msgValue;
    m_msgValueHasBeenSet = true;
}

bool SecLogAlertMsgInfo::MsgValueHasBeenSet() const
{
    return m_msgValueHasBeenSet;
}

bool SecLogAlertMsgInfo::GetState() const
{
    return m_state;
}

void SecLogAlertMsgInfo::SetState(const bool& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SecLogAlertMsgInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

