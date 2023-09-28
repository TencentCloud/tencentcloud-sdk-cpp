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

#include <tencentcloud/as/v20180419/model/RefreshActivity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

RefreshActivity::RefreshActivity() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_refreshActivityIdHasBeenSet(false),
    m_originRefreshActivityIdHasBeenSet(false),
    m_refreshBatchSetHasBeenSet(false),
    m_refreshModeHasBeenSet(false),
    m_refreshSettingsHasBeenSet(false),
    m_activityTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_currentRefreshBatchNumHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome RefreshActivity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RefreshActivityId") && !value["RefreshActivityId"].IsNull())
    {
        if (!value["RefreshActivityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.RefreshActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refreshActivityId = string(value["RefreshActivityId"].GetString());
        m_refreshActivityIdHasBeenSet = true;
    }

    if (value.HasMember("OriginRefreshActivityId") && !value["OriginRefreshActivityId"].IsNull())
    {
        if (!value["OriginRefreshActivityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.OriginRefreshActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originRefreshActivityId = string(value["OriginRefreshActivityId"].GetString());
        m_originRefreshActivityIdHasBeenSet = true;
    }

    if (value.HasMember("RefreshBatchSet") && !value["RefreshBatchSet"].IsNull())
    {
        if (!value["RefreshBatchSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.RefreshBatchSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RefreshBatchSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RefreshBatch item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_refreshBatchSet.push_back(item);
        }
        m_refreshBatchSetHasBeenSet = true;
    }

    if (value.HasMember("RefreshMode") && !value["RefreshMode"].IsNull())
    {
        if (!value["RefreshMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.RefreshMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refreshMode = string(value["RefreshMode"].GetString());
        m_refreshModeHasBeenSet = true;
    }

    if (value.HasMember("RefreshSettings") && !value["RefreshSettings"].IsNull())
    {
        if (!value["RefreshSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.RefreshSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_refreshSettings.Deserialize(value["RefreshSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_refreshSettingsHasBeenSet = true;
    }

    if (value.HasMember("ActivityType") && !value["ActivityType"].IsNull())
    {
        if (!value["ActivityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.ActivityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityType = string(value["ActivityType"].GetString());
        m_activityTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CurrentRefreshBatchNum") && !value["CurrentRefreshBatchNum"].IsNull())
    {
        if (!value["CurrentRefreshBatchNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.CurrentRefreshBatchNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentRefreshBatchNum = value["CurrentRefreshBatchNum"].GetUint64();
        m_currentRefreshBatchNumHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshActivity.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RefreshActivity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshActivityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refreshActivityId.c_str(), allocator).Move(), allocator);
    }

    if (m_originRefreshActivityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginRefreshActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originRefreshActivityId.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshBatchSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshBatchSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_refreshBatchSet.begin(); itr != m_refreshBatchSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_refreshModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refreshMode.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_refreshSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_activityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_currentRefreshBatchNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentRefreshBatchNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentRefreshBatchNum, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string RefreshActivity::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void RefreshActivity::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool RefreshActivity::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string RefreshActivity::GetRefreshActivityId() const
{
    return m_refreshActivityId;
}

void RefreshActivity::SetRefreshActivityId(const string& _refreshActivityId)
{
    m_refreshActivityId = _refreshActivityId;
    m_refreshActivityIdHasBeenSet = true;
}

bool RefreshActivity::RefreshActivityIdHasBeenSet() const
{
    return m_refreshActivityIdHasBeenSet;
}

string RefreshActivity::GetOriginRefreshActivityId() const
{
    return m_originRefreshActivityId;
}

void RefreshActivity::SetOriginRefreshActivityId(const string& _originRefreshActivityId)
{
    m_originRefreshActivityId = _originRefreshActivityId;
    m_originRefreshActivityIdHasBeenSet = true;
}

bool RefreshActivity::OriginRefreshActivityIdHasBeenSet() const
{
    return m_originRefreshActivityIdHasBeenSet;
}

vector<RefreshBatch> RefreshActivity::GetRefreshBatchSet() const
{
    return m_refreshBatchSet;
}

void RefreshActivity::SetRefreshBatchSet(const vector<RefreshBatch>& _refreshBatchSet)
{
    m_refreshBatchSet = _refreshBatchSet;
    m_refreshBatchSetHasBeenSet = true;
}

bool RefreshActivity::RefreshBatchSetHasBeenSet() const
{
    return m_refreshBatchSetHasBeenSet;
}

string RefreshActivity::GetRefreshMode() const
{
    return m_refreshMode;
}

void RefreshActivity::SetRefreshMode(const string& _refreshMode)
{
    m_refreshMode = _refreshMode;
    m_refreshModeHasBeenSet = true;
}

bool RefreshActivity::RefreshModeHasBeenSet() const
{
    return m_refreshModeHasBeenSet;
}

RefreshSettings RefreshActivity::GetRefreshSettings() const
{
    return m_refreshSettings;
}

void RefreshActivity::SetRefreshSettings(const RefreshSettings& _refreshSettings)
{
    m_refreshSettings = _refreshSettings;
    m_refreshSettingsHasBeenSet = true;
}

bool RefreshActivity::RefreshSettingsHasBeenSet() const
{
    return m_refreshSettingsHasBeenSet;
}

string RefreshActivity::GetActivityType() const
{
    return m_activityType;
}

void RefreshActivity::SetActivityType(const string& _activityType)
{
    m_activityType = _activityType;
    m_activityTypeHasBeenSet = true;
}

bool RefreshActivity::ActivityTypeHasBeenSet() const
{
    return m_activityTypeHasBeenSet;
}

string RefreshActivity::GetStatus() const
{
    return m_status;
}

void RefreshActivity::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RefreshActivity::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t RefreshActivity::GetCurrentRefreshBatchNum() const
{
    return m_currentRefreshBatchNum;
}

void RefreshActivity::SetCurrentRefreshBatchNum(const uint64_t& _currentRefreshBatchNum)
{
    m_currentRefreshBatchNum = _currentRefreshBatchNum;
    m_currentRefreshBatchNumHasBeenSet = true;
}

bool RefreshActivity::CurrentRefreshBatchNumHasBeenSet() const
{
    return m_currentRefreshBatchNumHasBeenSet;
}

string RefreshActivity::GetStartTime() const
{
    return m_startTime;
}

void RefreshActivity::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RefreshActivity::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RefreshActivity::GetEndTime() const
{
    return m_endTime;
}

void RefreshActivity::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RefreshActivity::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RefreshActivity::GetCreatedTime() const
{
    return m_createdTime;
}

void RefreshActivity::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool RefreshActivity::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

