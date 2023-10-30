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

#include <tencentcloud/rce/v20201103/model/OutputManageMarketingRiskValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OutputManageMarketingRiskValue::OutputManageMarketingRiskValue() :
    m_userIdHasBeenSet(false),
    m_postTimeHasBeenSet(false),
    m_associateAccountHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_constIdHasBeenSet(false),
    m_riskInformationHasBeenSet(false)
{
}

CoreInternalOutcome OutputManageMarketingRiskValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRiskValue.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("PostTime") && !value["PostTime"].IsNull())
    {
        if (!value["PostTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRiskValue.PostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = value["PostTime"].GetUint64();
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("AssociateAccount") && !value["AssociateAccount"].IsNull())
    {
        if (!value["AssociateAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRiskValue.AssociateAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associateAccount = string(value["AssociateAccount"].GetString());
        m_associateAccountHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRiskValue.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRiskValue.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRiskValue.RiskType` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskType.push_back((*itr).GetInt64());
        }
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("ConstId") && !value["ConstId"].IsNull())
    {
        if (!value["ConstId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRiskValue.ConstId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_constId = string(value["ConstId"].GetString());
        m_constIdHasBeenSet = true;
    }

    if (value.HasMember("RiskInformation") && !value["RiskInformation"].IsNull())
    {
        if (!value["RiskInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRiskValue.RiskInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskInformation = string(value["RiskInformation"].GetString());
        m_riskInformationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputManageMarketingRiskValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
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

    if (m_constIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConstId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_constId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskInformation.c_str(), allocator).Move(), allocator);
    }

}


string OutputManageMarketingRiskValue::GetUserId() const
{
    return m_userId;
}

void OutputManageMarketingRiskValue::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool OutputManageMarketingRiskValue::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t OutputManageMarketingRiskValue::GetPostTime() const
{
    return m_postTime;
}

void OutputManageMarketingRiskValue::SetPostTime(const uint64_t& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool OutputManageMarketingRiskValue::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string OutputManageMarketingRiskValue::GetAssociateAccount() const
{
    return m_associateAccount;
}

void OutputManageMarketingRiskValue::SetAssociateAccount(const string& _associateAccount)
{
    m_associateAccount = _associateAccount;
    m_associateAccountHasBeenSet = true;
}

bool OutputManageMarketingRiskValue::AssociateAccountHasBeenSet() const
{
    return m_associateAccountHasBeenSet;
}

string OutputManageMarketingRiskValue::GetUserIp() const
{
    return m_userIp;
}

void OutputManageMarketingRiskValue::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool OutputManageMarketingRiskValue::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string OutputManageMarketingRiskValue::GetRiskLevel() const
{
    return m_riskLevel;
}

void OutputManageMarketingRiskValue::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool OutputManageMarketingRiskValue::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<int64_t> OutputManageMarketingRiskValue::GetRiskType() const
{
    return m_riskType;
}

void OutputManageMarketingRiskValue::SetRiskType(const vector<int64_t>& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool OutputManageMarketingRiskValue::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string OutputManageMarketingRiskValue::GetConstId() const
{
    return m_constId;
}

void OutputManageMarketingRiskValue::SetConstId(const string& _constId)
{
    m_constId = _constId;
    m_constIdHasBeenSet = true;
}

bool OutputManageMarketingRiskValue::ConstIdHasBeenSet() const
{
    return m_constIdHasBeenSet;
}

string OutputManageMarketingRiskValue::GetRiskInformation() const
{
    return m_riskInformation;
}

void OutputManageMarketingRiskValue::SetRiskInformation(const string& _riskInformation)
{
    m_riskInformation = _riskInformation;
    m_riskInformationHasBeenSet = true;
}

bool OutputManageMarketingRiskValue::RiskInformationHasBeenSet() const
{
    return m_riskInformationHasBeenSet;
}

