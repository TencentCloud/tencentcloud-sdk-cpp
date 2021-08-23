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

#include <tencentcloud/wav/v20210129/model/ActivityJoinDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ActivityJoinDetail::ActivityJoinDetail() :
    m_activityIdHasBeenSet(false),
    m_activityNameHasBeenSet(false),
    m_salesNameHasBeenSet(false),
    m_salesPhoneHasBeenSet(false),
    m_joinIdHasBeenSet(false),
    m_liveCodeIdHasBeenSet(false),
    m_userPhoneHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_activityDataHasBeenSet(false),
    m_leadIdHasBeenSet(false),
    m_joinTimeHasBeenSet(false),
    m_duplicateHasBeenSet(false),
    m_duplicateLeadIdHasBeenSet(false),
    m_joinStateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ActivityJoinDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.ActivityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = value["ActivityId"].GetInt64();
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("ActivityName") && !value["ActivityName"].IsNull())
    {
        if (!value["ActivityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.ActivityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityName = string(value["ActivityName"].GetString());
        m_activityNameHasBeenSet = true;
    }

    if (value.HasMember("SalesName") && !value["SalesName"].IsNull())
    {
        if (!value["SalesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.SalesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesName = string(value["SalesName"].GetString());
        m_salesNameHasBeenSet = true;
    }

    if (value.HasMember("SalesPhone") && !value["SalesPhone"].IsNull())
    {
        if (!value["SalesPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.SalesPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesPhone = string(value["SalesPhone"].GetString());
        m_salesPhoneHasBeenSet = true;
    }

    if (value.HasMember("JoinId") && !value["JoinId"].IsNull())
    {
        if (!value["JoinId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.JoinId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_joinId = value["JoinId"].GetInt64();
        m_joinIdHasBeenSet = true;
    }

    if (value.HasMember("LiveCodeId") && !value["LiveCodeId"].IsNull())
    {
        if (!value["LiveCodeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.LiveCodeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_liveCodeId = value["LiveCodeId"].GetInt64();
        m_liveCodeIdHasBeenSet = true;
    }

    if (value.HasMember("UserPhone") && !value["UserPhone"].IsNull())
    {
        if (!value["UserPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.UserPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userPhone = string(value["UserPhone"].GetString());
        m_userPhoneHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("ActivityData") && !value["ActivityData"].IsNull())
    {
        if (!value["ActivityData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.ActivityData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityData = string(value["ActivityData"].GetString());
        m_activityDataHasBeenSet = true;
    }

    if (value.HasMember("LeadId") && !value["LeadId"].IsNull())
    {
        if (!value["LeadId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.LeadId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leadId = value["LeadId"].GetInt64();
        m_leadIdHasBeenSet = true;
    }

    if (value.HasMember("JoinTime") && !value["JoinTime"].IsNull())
    {
        if (!value["JoinTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.JoinTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_joinTime = value["JoinTime"].GetInt64();
        m_joinTimeHasBeenSet = true;
    }

    if (value.HasMember("Duplicate") && !value["Duplicate"].IsNull())
    {
        if (!value["Duplicate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.Duplicate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duplicate = value["Duplicate"].GetInt64();
        m_duplicateHasBeenSet = true;
    }

    if (value.HasMember("DuplicateLeadId") && !value["DuplicateLeadId"].IsNull())
    {
        if (!value["DuplicateLeadId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.DuplicateLeadId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duplicateLeadId = value["DuplicateLeadId"].GetInt64();
        m_duplicateLeadIdHasBeenSet = true;
    }

    if (value.HasMember("JoinState") && !value["JoinState"].IsNull())
    {
        if (!value["JoinState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.JoinState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_joinState = value["JoinState"].GetInt64();
        m_joinStateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityJoinDetail.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivityJoinDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activityId, allocator);
    }

    if (m_activityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityName.c_str(), allocator).Move(), allocator);
    }

    if (m_salesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesName.c_str(), allocator).Move(), allocator);
    }

    if (m_salesPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_joinIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joinId, allocator);
    }

    if (m_liveCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveCodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveCodeId, allocator);
    }

    if (m_userPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_activityDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityData.c_str(), allocator).Move(), allocator);
    }

    if (m_leadIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeadId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leadId, allocator);
    }

    if (m_joinTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joinTime, allocator);
    }

    if (m_duplicateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duplicate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duplicate, allocator);
    }

    if (m_duplicateLeadIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DuplicateLeadId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duplicateLeadId, allocator);
    }

    if (m_joinStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joinState, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


int64_t ActivityJoinDetail::GetActivityId() const
{
    return m_activityId;
}

void ActivityJoinDetail::SetActivityId(const int64_t& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool ActivityJoinDetail::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string ActivityJoinDetail::GetActivityName() const
{
    return m_activityName;
}

void ActivityJoinDetail::SetActivityName(const string& _activityName)
{
    m_activityName = _activityName;
    m_activityNameHasBeenSet = true;
}

bool ActivityJoinDetail::ActivityNameHasBeenSet() const
{
    return m_activityNameHasBeenSet;
}

string ActivityJoinDetail::GetSalesName() const
{
    return m_salesName;
}

void ActivityJoinDetail::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool ActivityJoinDetail::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}

string ActivityJoinDetail::GetSalesPhone() const
{
    return m_salesPhone;
}

void ActivityJoinDetail::SetSalesPhone(const string& _salesPhone)
{
    m_salesPhone = _salesPhone;
    m_salesPhoneHasBeenSet = true;
}

bool ActivityJoinDetail::SalesPhoneHasBeenSet() const
{
    return m_salesPhoneHasBeenSet;
}

int64_t ActivityJoinDetail::GetJoinId() const
{
    return m_joinId;
}

void ActivityJoinDetail::SetJoinId(const int64_t& _joinId)
{
    m_joinId = _joinId;
    m_joinIdHasBeenSet = true;
}

bool ActivityJoinDetail::JoinIdHasBeenSet() const
{
    return m_joinIdHasBeenSet;
}

int64_t ActivityJoinDetail::GetLiveCodeId() const
{
    return m_liveCodeId;
}

void ActivityJoinDetail::SetLiveCodeId(const int64_t& _liveCodeId)
{
    m_liveCodeId = _liveCodeId;
    m_liveCodeIdHasBeenSet = true;
}

bool ActivityJoinDetail::LiveCodeIdHasBeenSet() const
{
    return m_liveCodeIdHasBeenSet;
}

string ActivityJoinDetail::GetUserPhone() const
{
    return m_userPhone;
}

void ActivityJoinDetail::SetUserPhone(const string& _userPhone)
{
    m_userPhone = _userPhone;
    m_userPhoneHasBeenSet = true;
}

bool ActivityJoinDetail::UserPhoneHasBeenSet() const
{
    return m_userPhoneHasBeenSet;
}

string ActivityJoinDetail::GetUserName() const
{
    return m_userName;
}

void ActivityJoinDetail::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ActivityJoinDetail::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ActivityJoinDetail::GetActivityData() const
{
    return m_activityData;
}

void ActivityJoinDetail::SetActivityData(const string& _activityData)
{
    m_activityData = _activityData;
    m_activityDataHasBeenSet = true;
}

bool ActivityJoinDetail::ActivityDataHasBeenSet() const
{
    return m_activityDataHasBeenSet;
}

int64_t ActivityJoinDetail::GetLeadId() const
{
    return m_leadId;
}

void ActivityJoinDetail::SetLeadId(const int64_t& _leadId)
{
    m_leadId = _leadId;
    m_leadIdHasBeenSet = true;
}

bool ActivityJoinDetail::LeadIdHasBeenSet() const
{
    return m_leadIdHasBeenSet;
}

int64_t ActivityJoinDetail::GetJoinTime() const
{
    return m_joinTime;
}

void ActivityJoinDetail::SetJoinTime(const int64_t& _joinTime)
{
    m_joinTime = _joinTime;
    m_joinTimeHasBeenSet = true;
}

bool ActivityJoinDetail::JoinTimeHasBeenSet() const
{
    return m_joinTimeHasBeenSet;
}

int64_t ActivityJoinDetail::GetDuplicate() const
{
    return m_duplicate;
}

void ActivityJoinDetail::SetDuplicate(const int64_t& _duplicate)
{
    m_duplicate = _duplicate;
    m_duplicateHasBeenSet = true;
}

bool ActivityJoinDetail::DuplicateHasBeenSet() const
{
    return m_duplicateHasBeenSet;
}

int64_t ActivityJoinDetail::GetDuplicateLeadId() const
{
    return m_duplicateLeadId;
}

void ActivityJoinDetail::SetDuplicateLeadId(const int64_t& _duplicateLeadId)
{
    m_duplicateLeadId = _duplicateLeadId;
    m_duplicateLeadIdHasBeenSet = true;
}

bool ActivityJoinDetail::DuplicateLeadIdHasBeenSet() const
{
    return m_duplicateLeadIdHasBeenSet;
}

int64_t ActivityJoinDetail::GetJoinState() const
{
    return m_joinState;
}

void ActivityJoinDetail::SetJoinState(const int64_t& _joinState)
{
    m_joinState = _joinState;
    m_joinStateHasBeenSet = true;
}

bool ActivityJoinDetail::JoinStateHasBeenSet() const
{
    return m_joinStateHasBeenSet;
}

int64_t ActivityJoinDetail::GetCreateTime() const
{
    return m_createTime;
}

void ActivityJoinDetail::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ActivityJoinDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ActivityJoinDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void ActivityJoinDetail::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ActivityJoinDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

