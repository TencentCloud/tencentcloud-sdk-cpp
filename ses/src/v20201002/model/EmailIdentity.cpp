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

#include <tencentcloud/ses/v20201002/model/EmailIdentity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

EmailIdentity::EmailIdentity() :
    m_identityNameHasBeenSet(false),
    m_identityTypeHasBeenSet(false),
    m_sendingEnabledHasBeenSet(false),
    m_currentReputationLevelHasBeenSet(false),
    m_dailyQuotaHasBeenSet(false),
    m_sendIpHasBeenSet(false)
{
}

CoreInternalOutcome EmailIdentity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdentityName") && !value["IdentityName"].IsNull())
    {
        if (!value["IdentityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmailIdentity.IdentityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityName = string(value["IdentityName"].GetString());
        m_identityNameHasBeenSet = true;
    }

    if (value.HasMember("IdentityType") && !value["IdentityType"].IsNull())
    {
        if (!value["IdentityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmailIdentity.IdentityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityType = string(value["IdentityType"].GetString());
        m_identityTypeHasBeenSet = true;
    }

    if (value.HasMember("SendingEnabled") && !value["SendingEnabled"].IsNull())
    {
        if (!value["SendingEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmailIdentity.SendingEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sendingEnabled = value["SendingEnabled"].GetBool();
        m_sendingEnabledHasBeenSet = true;
    }

    if (value.HasMember("CurrentReputationLevel") && !value["CurrentReputationLevel"].IsNull())
    {
        if (!value["CurrentReputationLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmailIdentity.CurrentReputationLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentReputationLevel = value["CurrentReputationLevel"].GetUint64();
        m_currentReputationLevelHasBeenSet = true;
    }

    if (value.HasMember("DailyQuota") && !value["DailyQuota"].IsNull())
    {
        if (!value["DailyQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmailIdentity.DailyQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dailyQuota = value["DailyQuota"].GetUint64();
        m_dailyQuotaHasBeenSet = true;
    }

    if (value.HasMember("SendIp") && !value["SendIp"].IsNull())
    {
        if (!value["SendIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmailIdentity.SendIp` is not array type"));

        const rapidjson::Value &tmpValue = value["SendIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sendIp.push_back((*itr).GetString());
        }
        m_sendIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmailIdentity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityName.c_str(), allocator).Move(), allocator);
    }

    if (m_identityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityType.c_str(), allocator).Move(), allocator);
    }

    if (m_sendingEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendingEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendingEnabled, allocator);
    }

    if (m_currentReputationLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentReputationLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentReputationLevel, allocator);
    }

    if (m_dailyQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dailyQuota, allocator);
    }

    if (m_sendIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sendIp.begin(); itr != m_sendIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string EmailIdentity::GetIdentityName() const
{
    return m_identityName;
}

void EmailIdentity::SetIdentityName(const string& _identityName)
{
    m_identityName = _identityName;
    m_identityNameHasBeenSet = true;
}

bool EmailIdentity::IdentityNameHasBeenSet() const
{
    return m_identityNameHasBeenSet;
}

string EmailIdentity::GetIdentityType() const
{
    return m_identityType;
}

void EmailIdentity::SetIdentityType(const string& _identityType)
{
    m_identityType = _identityType;
    m_identityTypeHasBeenSet = true;
}

bool EmailIdentity::IdentityTypeHasBeenSet() const
{
    return m_identityTypeHasBeenSet;
}

bool EmailIdentity::GetSendingEnabled() const
{
    return m_sendingEnabled;
}

void EmailIdentity::SetSendingEnabled(const bool& _sendingEnabled)
{
    m_sendingEnabled = _sendingEnabled;
    m_sendingEnabledHasBeenSet = true;
}

bool EmailIdentity::SendingEnabledHasBeenSet() const
{
    return m_sendingEnabledHasBeenSet;
}

uint64_t EmailIdentity::GetCurrentReputationLevel() const
{
    return m_currentReputationLevel;
}

void EmailIdentity::SetCurrentReputationLevel(const uint64_t& _currentReputationLevel)
{
    m_currentReputationLevel = _currentReputationLevel;
    m_currentReputationLevelHasBeenSet = true;
}

bool EmailIdentity::CurrentReputationLevelHasBeenSet() const
{
    return m_currentReputationLevelHasBeenSet;
}

uint64_t EmailIdentity::GetDailyQuota() const
{
    return m_dailyQuota;
}

void EmailIdentity::SetDailyQuota(const uint64_t& _dailyQuota)
{
    m_dailyQuota = _dailyQuota;
    m_dailyQuotaHasBeenSet = true;
}

bool EmailIdentity::DailyQuotaHasBeenSet() const
{
    return m_dailyQuotaHasBeenSet;
}

vector<string> EmailIdentity::GetSendIp() const
{
    return m_sendIp;
}

void EmailIdentity::SetSendIp(const vector<string>& _sendIp)
{
    m_sendIp = _sendIp;
    m_sendIpHasBeenSet = true;
}

bool EmailIdentity::SendIpHasBeenSet() const
{
    return m_sendIpHasBeenSet;
}

