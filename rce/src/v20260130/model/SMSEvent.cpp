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

#include <tencentcloud/rce/v20260130/model/SMSEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

SMSEvent::SMSEvent() :
    m_userInfoHasBeenSet(false),
    m_sMSIdHasBeenSet(false),
    m_receivedTimeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_sMSResultHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome SMSEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SMSEvent.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("SMSId") && !value["SMSId"].IsNull())
    {
        if (!value["SMSId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMSEvent.SMSId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sMSId = string(value["SMSId"].GetString());
        m_sMSIdHasBeenSet = true;
    }

    if (value.HasMember("ReceivedTime") && !value["ReceivedTime"].IsNull())
    {
        if (!value["ReceivedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMSEvent.ReceivedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receivedTime = string(value["ReceivedTime"].GetString());
        m_receivedTimeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMSEvent.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("SMSResult") && !value["SMSResult"].IsNull())
    {
        if (!value["SMSResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SMSEvent.SMSResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sMSResult.Deserialize(value["SMSResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sMSResultHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SMSEvent.Cust` is not array type"));

        const rapidjson::Value &tmpValue = value["Cust"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cust item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cust.push_back(item);
        }
        m_custHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SMSEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sMSIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SMSId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sMSId.c_str(), allocator).Move(), allocator);
    }

    if (m_receivedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceivedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receivedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_sMSResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SMSResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sMSResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_custHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cust.begin(); itr != m_cust.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


User SMSEvent::GetUserInfo() const
{
    return m_userInfo;
}

void SMSEvent::SetUserInfo(const User& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool SMSEvent::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

string SMSEvent::GetSMSId() const
{
    return m_sMSId;
}

void SMSEvent::SetSMSId(const string& _sMSId)
{
    m_sMSId = _sMSId;
    m_sMSIdHasBeenSet = true;
}

bool SMSEvent::SMSIdHasBeenSet() const
{
    return m_sMSIdHasBeenSet;
}

string SMSEvent::GetReceivedTime() const
{
    return m_receivedTime;
}

void SMSEvent::SetReceivedTime(const string& _receivedTime)
{
    m_receivedTime = _receivedTime;
    m_receivedTimeHasBeenSet = true;
}

bool SMSEvent::ReceivedTimeHasBeenSet() const
{
    return m_receivedTimeHasBeenSet;
}

string SMSEvent::GetAction() const
{
    return m_action;
}

void SMSEvent::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SMSEvent::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

Result SMSEvent::GetSMSResult() const
{
    return m_sMSResult;
}

void SMSEvent::SetSMSResult(const Result& _sMSResult)
{
    m_sMSResult = _sMSResult;
    m_sMSResultHasBeenSet = true;
}

bool SMSEvent::SMSResultHasBeenSet() const
{
    return m_sMSResultHasBeenSet;
}

vector<Cust> SMSEvent::GetCust() const
{
    return m_cust;
}

void SMSEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool SMSEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

