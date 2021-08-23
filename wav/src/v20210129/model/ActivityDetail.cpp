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

#include <tencentcloud/wav/v20210129/model/ActivityDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ActivityDetail::ActivityDetail() :
    m_activityIdHasBeenSet(false),
    m_activityNameHasBeenSet(false),
    m_activityStateHasBeenSet(false),
    m_activityTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_mainPhotoHasBeenSet(false),
    m_privacyAgreementIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_activityDataListHasBeenSet(false)
{
}

CoreInternalOutcome ActivityDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityDetail.ActivityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = value["ActivityId"].GetInt64();
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("ActivityName") && !value["ActivityName"].IsNull())
    {
        if (!value["ActivityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityDetail.ActivityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityName = string(value["ActivityName"].GetString());
        m_activityNameHasBeenSet = true;
    }

    if (value.HasMember("ActivityState") && !value["ActivityState"].IsNull())
    {
        if (!value["ActivityState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityDetail.ActivityState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activityState = value["ActivityState"].GetInt64();
        m_activityStateHasBeenSet = true;
    }

    if (value.HasMember("ActivityType") && !value["ActivityType"].IsNull())
    {
        if (!value["ActivityType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityDetail.ActivityType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activityType = value["ActivityType"].GetInt64();
        m_activityTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityDetail.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityDetail.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("MainPhoto") && !value["MainPhoto"].IsNull())
    {
        if (!value["MainPhoto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityDetail.MainPhoto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainPhoto = string(value["MainPhoto"].GetString());
        m_mainPhotoHasBeenSet = true;
    }

    if (value.HasMember("PrivacyAgreementId") && !value["PrivacyAgreementId"].IsNull())
    {
        if (!value["PrivacyAgreementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityDetail.PrivacyAgreementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privacyAgreementId = string(value["PrivacyAgreementId"].GetString());
        m_privacyAgreementIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityDetail.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ActivityDataList") && !value["ActivityDataList"].IsNull())
    {
        if (!value["ActivityDataList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityDetail.ActivityDataList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityDataList = string(value["ActivityDataList"].GetString());
        m_activityDataListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivityDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_activityStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activityState, allocator);
    }

    if (m_activityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activityType, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_mainPhotoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainPhoto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainPhoto.c_str(), allocator).Move(), allocator);
    }

    if (m_privacyAgreementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyAgreementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privacyAgreementId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_activityDataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityDataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityDataList.c_str(), allocator).Move(), allocator);
    }

}


int64_t ActivityDetail::GetActivityId() const
{
    return m_activityId;
}

void ActivityDetail::SetActivityId(const int64_t& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool ActivityDetail::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string ActivityDetail::GetActivityName() const
{
    return m_activityName;
}

void ActivityDetail::SetActivityName(const string& _activityName)
{
    m_activityName = _activityName;
    m_activityNameHasBeenSet = true;
}

bool ActivityDetail::ActivityNameHasBeenSet() const
{
    return m_activityNameHasBeenSet;
}

int64_t ActivityDetail::GetActivityState() const
{
    return m_activityState;
}

void ActivityDetail::SetActivityState(const int64_t& _activityState)
{
    m_activityState = _activityState;
    m_activityStateHasBeenSet = true;
}

bool ActivityDetail::ActivityStateHasBeenSet() const
{
    return m_activityStateHasBeenSet;
}

int64_t ActivityDetail::GetActivityType() const
{
    return m_activityType;
}

void ActivityDetail::SetActivityType(const int64_t& _activityType)
{
    m_activityType = _activityType;
    m_activityTypeHasBeenSet = true;
}

bool ActivityDetail::ActivityTypeHasBeenSet() const
{
    return m_activityTypeHasBeenSet;
}

int64_t ActivityDetail::GetStartTime() const
{
    return m_startTime;
}

void ActivityDetail::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ActivityDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t ActivityDetail::GetEndTime() const
{
    return m_endTime;
}

void ActivityDetail::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ActivityDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ActivityDetail::GetMainPhoto() const
{
    return m_mainPhoto;
}

void ActivityDetail::SetMainPhoto(const string& _mainPhoto)
{
    m_mainPhoto = _mainPhoto;
    m_mainPhotoHasBeenSet = true;
}

bool ActivityDetail::MainPhotoHasBeenSet() const
{
    return m_mainPhotoHasBeenSet;
}

string ActivityDetail::GetPrivacyAgreementId() const
{
    return m_privacyAgreementId;
}

void ActivityDetail::SetPrivacyAgreementId(const string& _privacyAgreementId)
{
    m_privacyAgreementId = _privacyAgreementId;
    m_privacyAgreementIdHasBeenSet = true;
}

bool ActivityDetail::PrivacyAgreementIdHasBeenSet() const
{
    return m_privacyAgreementIdHasBeenSet;
}

int64_t ActivityDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void ActivityDetail::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ActivityDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ActivityDetail::GetActivityDataList() const
{
    return m_activityDataList;
}

void ActivityDetail::SetActivityDataList(const string& _activityDataList)
{
    m_activityDataList = _activityDataList;
    m_activityDataListHasBeenSet = true;
}

bool ActivityDetail::ActivityDataListHasBeenSet() const
{
    return m_activityDataListHasBeenSet;
}

