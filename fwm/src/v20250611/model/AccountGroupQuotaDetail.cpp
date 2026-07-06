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

#include <tencentcloud/fwm/v20250611/model/AccountGroupQuotaDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

AccountGroupQuotaDetail::AccountGroupQuotaDetail() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_memberCountHasBeenSet(false),
    m_remainQuotaHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_dispatchRuleNumHasBeenSet(false),
    m_originRuleNumHasBeenSet(false),
    m_bottleneckUinHasBeenSet(false),
    m_membersHasBeenSet(false)
{
}

CoreInternalOutcome AccountGroupQuotaDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupQuotaDetail.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupQuotaDetail.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("MemberCount") && !value["MemberCount"].IsNull())
    {
        if (!value["MemberCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupQuotaDetail.MemberCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberCount = value["MemberCount"].GetInt64();
        m_memberCountHasBeenSet = true;
    }

    if (value.HasMember("RemainQuota") && !value["RemainQuota"].IsNull())
    {
        if (!value["RemainQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupQuotaDetail.RemainQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainQuota = value["RemainQuota"].GetInt64();
        m_remainQuotaHasBeenSet = true;
    }

    if (value.HasMember("TotalQuota") && !value["TotalQuota"].IsNull())
    {
        if (!value["TotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupQuotaDetail.TotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = value["TotalQuota"].GetInt64();
        m_totalQuotaHasBeenSet = true;
    }

    if (value.HasMember("DispatchRuleNum") && !value["DispatchRuleNum"].IsNull())
    {
        if (!value["DispatchRuleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupQuotaDetail.DispatchRuleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dispatchRuleNum = value["DispatchRuleNum"].GetInt64();
        m_dispatchRuleNumHasBeenSet = true;
    }

    if (value.HasMember("OriginRuleNum") && !value["OriginRuleNum"].IsNull())
    {
        if (!value["OriginRuleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupQuotaDetail.OriginRuleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originRuleNum = value["OriginRuleNum"].GetInt64();
        m_originRuleNumHasBeenSet = true;
    }

    if (value.HasMember("BottleneckUin") && !value["BottleneckUin"].IsNull())
    {
        if (!value["BottleneckUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupQuotaDetail.BottleneckUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bottleneckUin = string(value["BottleneckUin"].GetString());
        m_bottleneckUinHasBeenSet = true;
    }

    if (value.HasMember("Members") && !value["Members"].IsNull())
    {
        if (!value["Members"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountGroupQuotaDetail.Members` is not array type"));

        const rapidjson::Value &tmpValue = value["Members"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Account item;
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

void AccountGroupQuotaDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_memberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberCount, allocator);
    }

    if (m_remainQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainQuota, allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_dispatchRuleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispatchRuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dispatchRuleNum, allocator);
    }

    if (m_originRuleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginRuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originRuleNum, allocator);
    }

    if (m_bottleneckUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BottleneckUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bottleneckUin.c_str(), allocator).Move(), allocator);
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


string AccountGroupQuotaDetail::GetGroupId() const
{
    return m_groupId;
}

void AccountGroupQuotaDetail::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool AccountGroupQuotaDetail::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string AccountGroupQuotaDetail::GetGroupName() const
{
    return m_groupName;
}

void AccountGroupQuotaDetail::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AccountGroupQuotaDetail::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t AccountGroupQuotaDetail::GetMemberCount() const
{
    return m_memberCount;
}

void AccountGroupQuotaDetail::SetMemberCount(const int64_t& _memberCount)
{
    m_memberCount = _memberCount;
    m_memberCountHasBeenSet = true;
}

bool AccountGroupQuotaDetail::MemberCountHasBeenSet() const
{
    return m_memberCountHasBeenSet;
}

int64_t AccountGroupQuotaDetail::GetRemainQuota() const
{
    return m_remainQuota;
}

void AccountGroupQuotaDetail::SetRemainQuota(const int64_t& _remainQuota)
{
    m_remainQuota = _remainQuota;
    m_remainQuotaHasBeenSet = true;
}

bool AccountGroupQuotaDetail::RemainQuotaHasBeenSet() const
{
    return m_remainQuotaHasBeenSet;
}

int64_t AccountGroupQuotaDetail::GetTotalQuota() const
{
    return m_totalQuota;
}

void AccountGroupQuotaDetail::SetTotalQuota(const int64_t& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool AccountGroupQuotaDetail::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

int64_t AccountGroupQuotaDetail::GetDispatchRuleNum() const
{
    return m_dispatchRuleNum;
}

void AccountGroupQuotaDetail::SetDispatchRuleNum(const int64_t& _dispatchRuleNum)
{
    m_dispatchRuleNum = _dispatchRuleNum;
    m_dispatchRuleNumHasBeenSet = true;
}

bool AccountGroupQuotaDetail::DispatchRuleNumHasBeenSet() const
{
    return m_dispatchRuleNumHasBeenSet;
}

int64_t AccountGroupQuotaDetail::GetOriginRuleNum() const
{
    return m_originRuleNum;
}

void AccountGroupQuotaDetail::SetOriginRuleNum(const int64_t& _originRuleNum)
{
    m_originRuleNum = _originRuleNum;
    m_originRuleNumHasBeenSet = true;
}

bool AccountGroupQuotaDetail::OriginRuleNumHasBeenSet() const
{
    return m_originRuleNumHasBeenSet;
}

string AccountGroupQuotaDetail::GetBottleneckUin() const
{
    return m_bottleneckUin;
}

void AccountGroupQuotaDetail::SetBottleneckUin(const string& _bottleneckUin)
{
    m_bottleneckUin = _bottleneckUin;
    m_bottleneckUinHasBeenSet = true;
}

bool AccountGroupQuotaDetail::BottleneckUinHasBeenSet() const
{
    return m_bottleneckUinHasBeenSet;
}

vector<Account> AccountGroupQuotaDetail::GetMembers() const
{
    return m_members;
}

void AccountGroupQuotaDetail::SetMembers(const vector<Account>& _members)
{
    m_members = _members;
    m_membersHasBeenSet = true;
}

bool AccountGroupQuotaDetail::MembersHasBeenSet() const
{
    return m_membersHasBeenSet;
}

