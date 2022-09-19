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

#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceShareInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

WorkspaceShareInfo::WorkspaceShareInfo() :
    m_statusHasBeenSet(false),
    m_withMeHasBeenSet(false),
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_usersHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceShareInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceShareInfo.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("WithMe") && !value["WithMe"].IsNull())
    {
        if (!value["WithMe"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceShareInfo.WithMe` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_withMe = value["WithMe"].GetBool();
        m_withMeHasBeenSet = true;
    }

    if (value.HasMember("BeginDate") && !value["BeginDate"].IsNull())
    {
        if (!value["BeginDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceShareInfo.BeginDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginDate = string(value["BeginDate"].GetString());
        m_beginDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceShareInfo.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (value.HasMember("Users") && !value["Users"].IsNull())
    {
        if (!value["Users"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkspaceShareInfo.Users` is not array type"));

        const rapidjson::Value &tmpValue = value["Users"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserInfoRsp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_users.push_back(item);
        }
        m_usersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceShareInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_withMeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithMe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_withMe, allocator);
    }

    if (m_beginDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool WorkspaceShareInfo::GetStatus() const
{
    return m_status;
}

void WorkspaceShareInfo::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkspaceShareInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool WorkspaceShareInfo::GetWithMe() const
{
    return m_withMe;
}

void WorkspaceShareInfo::SetWithMe(const bool& _withMe)
{
    m_withMe = _withMe;
    m_withMeHasBeenSet = true;
}

bool WorkspaceShareInfo::WithMeHasBeenSet() const
{
    return m_withMeHasBeenSet;
}

string WorkspaceShareInfo::GetBeginDate() const
{
    return m_beginDate;
}

void WorkspaceShareInfo::SetBeginDate(const string& _beginDate)
{
    m_beginDate = _beginDate;
    m_beginDateHasBeenSet = true;
}

bool WorkspaceShareInfo::BeginDateHasBeenSet() const
{
    return m_beginDateHasBeenSet;
}

string WorkspaceShareInfo::GetEndDate() const
{
    return m_endDate;
}

void WorkspaceShareInfo::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool WorkspaceShareInfo::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

vector<UserInfoRsp> WorkspaceShareInfo::GetUsers() const
{
    return m_users;
}

void WorkspaceShareInfo::SetUsers(const vector<UserInfoRsp>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool WorkspaceShareInfo::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

