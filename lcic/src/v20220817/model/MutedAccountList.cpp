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

#include <tencentcloud/lcic/v20220817/model/MutedAccountList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

MutedAccountList::MutedAccountList() :
    m_memberAccountHasBeenSet(false),
    m_mutedUntilHasBeenSet(false)
{
}

CoreInternalOutcome MutedAccountList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemberAccount") && !value["MemberAccount"].IsNull())
    {
        if (!value["MemberAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MutedAccountList.MemberAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberAccount = string(value["MemberAccount"].GetString());
        m_memberAccountHasBeenSet = true;
    }

    if (value.HasMember("MutedUntil") && !value["MutedUntil"].IsNull())
    {
        if (!value["MutedUntil"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MutedAccountList.MutedUntil` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mutedUntil = value["MutedUntil"].GetUint64();
        m_mutedUntilHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MutedAccountList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_mutedUntilHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MutedUntil";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mutedUntil, allocator);
    }

}


string MutedAccountList::GetMemberAccount() const
{
    return m_memberAccount;
}

void MutedAccountList::SetMemberAccount(const string& _memberAccount)
{
    m_memberAccount = _memberAccount;
    m_memberAccountHasBeenSet = true;
}

bool MutedAccountList::MemberAccountHasBeenSet() const
{
    return m_memberAccountHasBeenSet;
}

uint64_t MutedAccountList::GetMutedUntil() const
{
    return m_mutedUntil;
}

void MutedAccountList::SetMutedUntil(const uint64_t& _mutedUntil)
{
    m_mutedUntil = _mutedUntil;
    m_mutedUntilHasBeenSet = true;
}

bool MutedAccountList::MutedUntilHasBeenSet() const
{
    return m_mutedUntilHasBeenSet;
}

