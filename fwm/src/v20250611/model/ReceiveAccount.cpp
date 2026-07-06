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

#include <tencentcloud/fwm/v20250611/model/ReceiveAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

ReceiveAccount::ReceiveAccount() :
    m_uinHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_receiverTypeHasBeenSet(false),
    m_membersHasBeenSet(false)
{
}

CoreInternalOutcome ReceiveAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiveAccount.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiveAccount.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("ReceiverType") && !value["ReceiverType"].IsNull())
    {
        if (!value["ReceiverType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiveAccount.ReceiverType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_receiverType = value["ReceiverType"].GetInt64();
        m_receiverTypeHasBeenSet = true;
    }

    if (value.HasMember("Members") && !value["Members"].IsNull())
    {
        if (!value["Members"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiveAccount.Members` is not array type"));

        const rapidjson::Value &tmpValue = value["Members"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MemberInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_members.push_back(item);
        }
        m_membersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReceiveAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiverType, allocator);
    }

    if (m_membersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Members";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_members.begin(); itr != m_members.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ReceiveAccount::GetUin() const
{
    return m_uin;
}

void ReceiveAccount::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ReceiveAccount::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string ReceiveAccount::GetNickname() const
{
    return m_nickname;
}

void ReceiveAccount::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool ReceiveAccount::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

int64_t ReceiveAccount::GetReceiverType() const
{
    return m_receiverType;
}

void ReceiveAccount::SetReceiverType(const int64_t& _receiverType)
{
    m_receiverType = _receiverType;
    m_receiverTypeHasBeenSet = true;
}

bool ReceiveAccount::ReceiverTypeHasBeenSet() const
{
    return m_receiverTypeHasBeenSet;
}

vector<MemberInfo> ReceiveAccount::GetMembers() const
{
    return m_members;
}

void ReceiveAccount::SetMembers(const vector<MemberInfo>& _members)
{
    m_members = _members;
    m_membersHasBeenSet = true;
}

bool ReceiveAccount::MembersHasBeenSet() const
{
    return m_membersHasBeenSet;
}

