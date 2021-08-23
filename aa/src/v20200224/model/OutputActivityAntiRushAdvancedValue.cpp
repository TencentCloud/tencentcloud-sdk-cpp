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

#include <tencentcloud/aa/v20200224/model/OutputActivityAntiRushAdvancedValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aa::V20200224::Model;
using namespace std;

OutputActivityAntiRushAdvancedValue::OutputActivityAntiRushAdvancedValue() :
    m_userIdHasBeenSet(false),
    m_postTimeHasBeenSet(false),
    m_associateAccountHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_riskTypeHasBeenSet(false)
{
}

CoreInternalOutcome OutputActivityAntiRushAdvancedValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputActivityAntiRushAdvancedValue.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("PostTime") && !value["PostTime"].IsNull())
    {
        if (!value["PostTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputActivityAntiRushAdvancedValue.PostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = value["PostTime"].GetUint64();
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("AssociateAccount") && !value["AssociateAccount"].IsNull())
    {
        if (!value["AssociateAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputActivityAntiRushAdvancedValue.AssociateAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associateAccount = string(value["AssociateAccount"].GetString());
        m_associateAccountHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputActivityAntiRushAdvancedValue.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputActivityAntiRushAdvancedValue.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputActivityAntiRushAdvancedValue.RiskType` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskType.push_back((*itr).GetInt64());
        }
        m_riskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputActivityAntiRushAdvancedValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_postTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postTime, allocator);
    }

    if (m_associateAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociateAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associateAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskType.begin(); itr != m_riskType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string OutputActivityAntiRushAdvancedValue::GetUserId() const
{
    return m_userId;
}

void OutputActivityAntiRushAdvancedValue::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool OutputActivityAntiRushAdvancedValue::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t OutputActivityAntiRushAdvancedValue::GetPostTime() const
{
    return m_postTime;
}

void OutputActivityAntiRushAdvancedValue::SetPostTime(const uint64_t& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool OutputActivityAntiRushAdvancedValue::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string OutputActivityAntiRushAdvancedValue::GetAssociateAccount() const
{
    return m_associateAccount;
}

void OutputActivityAntiRushAdvancedValue::SetAssociateAccount(const string& _associateAccount)
{
    m_associateAccount = _associateAccount;
    m_associateAccountHasBeenSet = true;
}

bool OutputActivityAntiRushAdvancedValue::AssociateAccountHasBeenSet() const
{
    return m_associateAccountHasBeenSet;
}

string OutputActivityAntiRushAdvancedValue::GetUserIp() const
{
    return m_userIp;
}

void OutputActivityAntiRushAdvancedValue::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool OutputActivityAntiRushAdvancedValue::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

int64_t OutputActivityAntiRushAdvancedValue::GetLevel() const
{
    return m_level;
}

void OutputActivityAntiRushAdvancedValue::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool OutputActivityAntiRushAdvancedValue::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<int64_t> OutputActivityAntiRushAdvancedValue::GetRiskType() const
{
    return m_riskType;
}

void OutputActivityAntiRushAdvancedValue::SetRiskType(const vector<int64_t>& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool OutputActivityAntiRushAdvancedValue::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

