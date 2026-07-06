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

#include <tencentcloud/fwm/v20250611/model/Account.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

Account::Account() :
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_remainQuotaHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_dispatchRuleNumHasBeenSet(false),
    m_originRuleNumHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

CoreInternalOutcome Account::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("RemainQuota") && !value["RemainQuota"].IsNull())
    {
        if (!value["RemainQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Account.RemainQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainQuota = value["RemainQuota"].GetInt64();
        m_remainQuotaHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("DispatchRuleNum") && !value["DispatchRuleNum"].IsNull())
    {
        if (!value["DispatchRuleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Account.DispatchRuleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dispatchRuleNum = value["DispatchRuleNum"].GetInt64();
        m_dispatchRuleNumHasBeenSet = true;
    }

    if (value.HasMember("OriginRuleNum") && !value["OriginRuleNum"].IsNull())
    {
        if (!value["OriginRuleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Account.OriginRuleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originRuleNum = value["OriginRuleNum"].GetInt64();
        m_originRuleNumHasBeenSet = true;
    }

    if (value.HasMember("TotalQuota") && !value["TotalQuota"].IsNull())
    {
        if (!value["TotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Account.TotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = value["TotalQuota"].GetInt64();
        m_totalQuotaHasBeenSet = true;
    }

    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.MemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberId = string(value["MemberId"].GetString());
        m_memberIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Account::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_remainQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainQuota, allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
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

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberId.c_str(), allocator).Move(), allocator);
    }

}


string Account::GetAppId() const
{
    return m_appId;
}

void Account::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Account::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Account::GetUin() const
{
    return m_uin;
}

void Account::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool Account::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t Account::GetRemainQuota() const
{
    return m_remainQuota;
}

void Account::SetRemainQuota(const int64_t& _remainQuota)
{
    m_remainQuota = _remainQuota;
    m_remainQuotaHasBeenSet = true;
}

bool Account::RemainQuotaHasBeenSet() const
{
    return m_remainQuotaHasBeenSet;
}

string Account::GetNickname() const
{
    return m_nickname;
}

void Account::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool Account::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

int64_t Account::GetDispatchRuleNum() const
{
    return m_dispatchRuleNum;
}

void Account::SetDispatchRuleNum(const int64_t& _dispatchRuleNum)
{
    m_dispatchRuleNum = _dispatchRuleNum;
    m_dispatchRuleNumHasBeenSet = true;
}

bool Account::DispatchRuleNumHasBeenSet() const
{
    return m_dispatchRuleNumHasBeenSet;
}

int64_t Account::GetOriginRuleNum() const
{
    return m_originRuleNum;
}

void Account::SetOriginRuleNum(const int64_t& _originRuleNum)
{
    m_originRuleNum = _originRuleNum;
    m_originRuleNumHasBeenSet = true;
}

bool Account::OriginRuleNumHasBeenSet() const
{
    return m_originRuleNumHasBeenSet;
}

int64_t Account::GetTotalQuota() const
{
    return m_totalQuota;
}

void Account::SetTotalQuota(const int64_t& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool Account::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

string Account::GetMemberId() const
{
    return m_memberId;
}

void Account::SetMemberId(const string& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool Account::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

