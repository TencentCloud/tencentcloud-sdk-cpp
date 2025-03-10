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

#include <tencentcloud/partners/v20180321/model/ClientIncreaseInfoList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

ClientIncreaseInfoList::ClientIncreaseInfoList() :
    m_clientUinHasBeenSet(false),
    m_isJoinIncreaseHasBeenSet(false),
    m_increaseUseAssociateDateHasBeenSet(false),
    m_tLevelHasBeenSet(false),
    m_increaseGoalHasBeenSet(false),
    m_totalBaseAmtHasBeenSet(false)
{
}

CoreInternalOutcome ClientIncreaseInfoList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientUin") && !value["ClientUin"].IsNull())
    {
        if (!value["ClientUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIncreaseInfoList.ClientUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = string(value["ClientUin"].GetString());
        m_clientUinHasBeenSet = true;
    }

    if (value.HasMember("IsJoinIncrease") && !value["IsJoinIncrease"].IsNull())
    {
        if (!value["IsJoinIncrease"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIncreaseInfoList.IsJoinIncrease` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isJoinIncrease = string(value["IsJoinIncrease"].GetString());
        m_isJoinIncreaseHasBeenSet = true;
    }

    if (value.HasMember("IncreaseUseAssociateDate") && !value["IncreaseUseAssociateDate"].IsNull())
    {
        if (!value["IncreaseUseAssociateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIncreaseInfoList.IncreaseUseAssociateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_increaseUseAssociateDate = string(value["IncreaseUseAssociateDate"].GetString());
        m_increaseUseAssociateDateHasBeenSet = true;
    }

    if (value.HasMember("TLevel") && !value["TLevel"].IsNull())
    {
        if (!value["TLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIncreaseInfoList.TLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tLevel = string(value["TLevel"].GetString());
        m_tLevelHasBeenSet = true;
    }

    if (value.HasMember("IncreaseGoal") && !value["IncreaseGoal"].IsNull())
    {
        if (!value["IncreaseGoal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIncreaseInfoList.IncreaseGoal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_increaseGoal = string(value["IncreaseGoal"].GetString());
        m_increaseGoalHasBeenSet = true;
    }

    if (value.HasMember("TotalBaseAmt") && !value["TotalBaseAmt"].IsNull())
    {
        if (!value["TotalBaseAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIncreaseInfoList.TotalBaseAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalBaseAmt = string(value["TotalBaseAmt"].GetString());
        m_totalBaseAmtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientIncreaseInfoList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientUin.c_str(), allocator).Move(), allocator);
    }

    if (m_isJoinIncreaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsJoinIncrease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isJoinIncrease.c_str(), allocator).Move(), allocator);
    }

    if (m_increaseUseAssociateDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncreaseUseAssociateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_increaseUseAssociateDate.c_str(), allocator).Move(), allocator);
    }

    if (m_tLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_increaseGoalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncreaseGoal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_increaseGoal.c_str(), allocator).Move(), allocator);
    }

    if (m_totalBaseAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBaseAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalBaseAmt.c_str(), allocator).Move(), allocator);
    }

}


string ClientIncreaseInfoList::GetClientUin() const
{
    return m_clientUin;
}

void ClientIncreaseInfoList::SetClientUin(const string& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool ClientIncreaseInfoList::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

string ClientIncreaseInfoList::GetIsJoinIncrease() const
{
    return m_isJoinIncrease;
}

void ClientIncreaseInfoList::SetIsJoinIncrease(const string& _isJoinIncrease)
{
    m_isJoinIncrease = _isJoinIncrease;
    m_isJoinIncreaseHasBeenSet = true;
}

bool ClientIncreaseInfoList::IsJoinIncreaseHasBeenSet() const
{
    return m_isJoinIncreaseHasBeenSet;
}

string ClientIncreaseInfoList::GetIncreaseUseAssociateDate() const
{
    return m_increaseUseAssociateDate;
}

void ClientIncreaseInfoList::SetIncreaseUseAssociateDate(const string& _increaseUseAssociateDate)
{
    m_increaseUseAssociateDate = _increaseUseAssociateDate;
    m_increaseUseAssociateDateHasBeenSet = true;
}

bool ClientIncreaseInfoList::IncreaseUseAssociateDateHasBeenSet() const
{
    return m_increaseUseAssociateDateHasBeenSet;
}

string ClientIncreaseInfoList::GetTLevel() const
{
    return m_tLevel;
}

void ClientIncreaseInfoList::SetTLevel(const string& _tLevel)
{
    m_tLevel = _tLevel;
    m_tLevelHasBeenSet = true;
}

bool ClientIncreaseInfoList::TLevelHasBeenSet() const
{
    return m_tLevelHasBeenSet;
}

string ClientIncreaseInfoList::GetIncreaseGoal() const
{
    return m_increaseGoal;
}

void ClientIncreaseInfoList::SetIncreaseGoal(const string& _increaseGoal)
{
    m_increaseGoal = _increaseGoal;
    m_increaseGoalHasBeenSet = true;
}

bool ClientIncreaseInfoList::IncreaseGoalHasBeenSet() const
{
    return m_increaseGoalHasBeenSet;
}

string ClientIncreaseInfoList::GetTotalBaseAmt() const
{
    return m_totalBaseAmt;
}

void ClientIncreaseInfoList::SetTotalBaseAmt(const string& _totalBaseAmt)
{
    m_totalBaseAmt = _totalBaseAmt;
    m_totalBaseAmtHasBeenSet = true;
}

bool ClientIncreaseInfoList::TotalBaseAmtHasBeenSet() const
{
    return m_totalBaseAmtHasBeenSet;
}

