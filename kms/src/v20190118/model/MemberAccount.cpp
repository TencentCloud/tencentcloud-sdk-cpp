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

#include <tencentcloud/kms/v20190118/model/MemberAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

MemberAccount::MemberAccount() :
    m_memberAppIdHasBeenSet(false),
    m_memberUinHasBeenSet(false)
{
}

CoreInternalOutcome MemberAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemberAppId") && !value["MemberAppId"].IsNull())
    {
        if (!value["MemberAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberAccount.MemberAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memberAppId = value["MemberAppId"].GetUint64();
        m_memberAppIdHasBeenSet = true;
    }

    if (value.HasMember("MemberUin") && !value["MemberUin"].IsNull())
    {
        if (!value["MemberUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberAccount.MemberUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memberUin = value["MemberUin"].GetUint64();
        m_memberUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemberAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberAppId, allocator);
    }

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberUin, allocator);
    }

}


uint64_t MemberAccount::GetMemberAppId() const
{
    return m_memberAppId;
}

void MemberAccount::SetMemberAppId(const uint64_t& _memberAppId)
{
    m_memberAppId = _memberAppId;
    m_memberAppIdHasBeenSet = true;
}

bool MemberAccount::MemberAppIdHasBeenSet() const
{
    return m_memberAppIdHasBeenSet;
}

uint64_t MemberAccount::GetMemberUin() const
{
    return m_memberUin;
}

void MemberAccount::SetMemberUin(const uint64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool MemberAccount::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

