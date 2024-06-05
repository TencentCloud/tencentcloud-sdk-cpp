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

#include <tencentcloud/wedata/v20210820/model/DimensionScoreInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DimensionScoreInfo::DimensionScoreInfo() :
    m_nameHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_joinTableNumberHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_userIdStrHasBeenSet(false)
{
}

CoreInternalOutcome DimensionScoreInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionScoreInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionScoreInfo.Weight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetDouble();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionScoreInfo.UserId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userId = value["UserId"].GetInt64();
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionScoreInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionScoreInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("JoinTableNumber") && !value["JoinTableNumber"].IsNull())
    {
        if (!value["JoinTableNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionScoreInfo.JoinTableNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_joinTableNumber = value["JoinTableNumber"].GetInt64();
        m_joinTableNumberHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionScoreInfo.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("UserIdStr") && !value["UserIdStr"].IsNull())
    {
        if (!value["UserIdStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionScoreInfo.UserIdStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIdStr = string(value["UserIdStr"].GetString());
        m_userIdStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DimensionScoreInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userId, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_joinTableNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinTableNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joinTableNumber, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_userIdStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIdStr.c_str(), allocator).Move(), allocator);
    }

}


string DimensionScoreInfo::GetName() const
{
    return m_name;
}

void DimensionScoreInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DimensionScoreInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double DimensionScoreInfo::GetWeight() const
{
    return m_weight;
}

void DimensionScoreInfo::SetWeight(const double& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool DimensionScoreInfo::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

int64_t DimensionScoreInfo::GetUserId() const
{
    return m_userId;
}

void DimensionScoreInfo::SetUserId(const int64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DimensionScoreInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DimensionScoreInfo::GetUserName() const
{
    return m_userName;
}

void DimensionScoreInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DimensionScoreInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t DimensionScoreInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DimensionScoreInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DimensionScoreInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DimensionScoreInfo::GetJoinTableNumber() const
{
    return m_joinTableNumber;
}

void DimensionScoreInfo::SetJoinTableNumber(const int64_t& _joinTableNumber)
{
    m_joinTableNumber = _joinTableNumber;
    m_joinTableNumberHasBeenSet = true;
}

bool DimensionScoreInfo::JoinTableNumberHasBeenSet() const
{
    return m_joinTableNumberHasBeenSet;
}

double DimensionScoreInfo::GetScore() const
{
    return m_score;
}

void DimensionScoreInfo::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool DimensionScoreInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string DimensionScoreInfo::GetUserIdStr() const
{
    return m_userIdStr;
}

void DimensionScoreInfo::SetUserIdStr(const string& _userIdStr)
{
    m_userIdStr = _userIdStr;
    m_userIdStrHasBeenSet = true;
}

bool DimensionScoreInfo::UserIdStrHasBeenSet() const
{
    return m_userIdStrHasBeenSet;
}

