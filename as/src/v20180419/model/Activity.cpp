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

#include <tencentcloud/as/v20180419/model/Activity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

Activity::Activity() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_activityTypeHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_causeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_activityRelatedInstanceSetHasBeenSet(false),
    m_statusMessageSimplifiedHasBeenSet(false),
    m_lifecycleActionResultSetHasBeenSet(false),
    m_detailedStatusMessageSetHasBeenSet(false),
    m_invocationResultSetHasBeenSet(false),
    m_relatedInstanceSetHasBeenSet(false)
{
}

CoreInternalOutcome Activity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.ActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = string(value["ActivityId"].GetString());
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("ActivityType") && !value["ActivityType"].IsNull())
    {
        if (!value["ActivityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.ActivityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityType = string(value["ActivityType"].GetString());
        m_activityTypeHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.StatusCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = string(value["StatusCode"].GetString());
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("StatusMessage") && !value["StatusMessage"].IsNull())
    {
        if (!value["StatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.StatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessage = string(value["StatusMessage"].GetString());
        m_statusMessageHasBeenSet = true;
    }

    if (value.HasMember("Cause") && !value["Cause"].IsNull())
    {
        if (!value["Cause"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.Cause` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cause = string(value["Cause"].GetString());
        m_causeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ActivityRelatedInstanceSet") && !value["ActivityRelatedInstanceSet"].IsNull())
    {
        if (!value["ActivityRelatedInstanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Activity.ActivityRelatedInstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ActivityRelatedInstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActivtyRelatedInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_activityRelatedInstanceSet.push_back(item);
        }
        m_activityRelatedInstanceSetHasBeenSet = true;
    }

    if (value.HasMember("StatusMessageSimplified") && !value["StatusMessageSimplified"].IsNull())
    {
        if (!value["StatusMessageSimplified"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.StatusMessageSimplified` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessageSimplified = string(value["StatusMessageSimplified"].GetString());
        m_statusMessageSimplifiedHasBeenSet = true;
    }

    if (value.HasMember("LifecycleActionResultSet") && !value["LifecycleActionResultSet"].IsNull())
    {
        if (!value["LifecycleActionResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Activity.LifecycleActionResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LifecycleActionResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LifecycleActionResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lifecycleActionResultSet.push_back(item);
        }
        m_lifecycleActionResultSetHasBeenSet = true;
    }

    if (value.HasMember("DetailedStatusMessageSet") && !value["DetailedStatusMessageSet"].IsNull())
    {
        if (!value["DetailedStatusMessageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Activity.DetailedStatusMessageSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailedStatusMessageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailedStatusMessage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailedStatusMessageSet.push_back(item);
        }
        m_detailedStatusMessageSetHasBeenSet = true;
    }

    if (value.HasMember("InvocationResultSet") && !value["InvocationResultSet"].IsNull())
    {
        if (!value["InvocationResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Activity.InvocationResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InvocationResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InvocationResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invocationResultSet.push_back(item);
        }
        m_invocationResultSetHasBeenSet = true;
    }

    if (value.HasMember("RelatedInstanceSet") && !value["RelatedInstanceSet"].IsNull())
    {
        if (!value["RelatedInstanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Activity.RelatedInstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedInstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelatedInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedInstanceSet.push_back(item);
        }
        m_relatedInstanceSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Activity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityId.c_str(), allocator).Move(), allocator);
    }

    if (m_activityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_causeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cause";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cause.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_activityRelatedInstanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityRelatedInstanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_activityRelatedInstanceSet.begin(); itr != m_activityRelatedInstanceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusMessageSimplifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMessageSimplified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMessageSimplified.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleActionResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleActionResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lifecycleActionResultSet.begin(); itr != m_lifecycleActionResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_detailedStatusMessageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailedStatusMessageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailedStatusMessageSet.begin(); itr != m_detailedStatusMessageSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_invocationResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invocationResultSet.begin(); itr != m_invocationResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relatedInstanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedInstanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedInstanceSet.begin(); itr != m_relatedInstanceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Activity::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void Activity::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool Activity::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string Activity::GetActivityId() const
{
    return m_activityId;
}

void Activity::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool Activity::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string Activity::GetActivityType() const
{
    return m_activityType;
}

void Activity::SetActivityType(const string& _activityType)
{
    m_activityType = _activityType;
    m_activityTypeHasBeenSet = true;
}

bool Activity::ActivityTypeHasBeenSet() const
{
    return m_activityTypeHasBeenSet;
}

string Activity::GetStatusCode() const
{
    return m_statusCode;
}

void Activity::SetStatusCode(const string& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool Activity::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string Activity::GetStatusMessage() const
{
    return m_statusMessage;
}

void Activity::SetStatusMessage(const string& _statusMessage)
{
    m_statusMessage = _statusMessage;
    m_statusMessageHasBeenSet = true;
}

bool Activity::StatusMessageHasBeenSet() const
{
    return m_statusMessageHasBeenSet;
}

string Activity::GetCause() const
{
    return m_cause;
}

void Activity::SetCause(const string& _cause)
{
    m_cause = _cause;
    m_causeHasBeenSet = true;
}

bool Activity::CauseHasBeenSet() const
{
    return m_causeHasBeenSet;
}

string Activity::GetDescription() const
{
    return m_description;
}

void Activity::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Activity::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Activity::GetStartTime() const
{
    return m_startTime;
}

void Activity::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Activity::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Activity::GetEndTime() const
{
    return m_endTime;
}

void Activity::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Activity::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Activity::GetCreatedTime() const
{
    return m_createdTime;
}

void Activity::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Activity::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<ActivtyRelatedInstance> Activity::GetActivityRelatedInstanceSet() const
{
    return m_activityRelatedInstanceSet;
}

void Activity::SetActivityRelatedInstanceSet(const vector<ActivtyRelatedInstance>& _activityRelatedInstanceSet)
{
    m_activityRelatedInstanceSet = _activityRelatedInstanceSet;
    m_activityRelatedInstanceSetHasBeenSet = true;
}

bool Activity::ActivityRelatedInstanceSetHasBeenSet() const
{
    return m_activityRelatedInstanceSetHasBeenSet;
}

string Activity::GetStatusMessageSimplified() const
{
    return m_statusMessageSimplified;
}

void Activity::SetStatusMessageSimplified(const string& _statusMessageSimplified)
{
    m_statusMessageSimplified = _statusMessageSimplified;
    m_statusMessageSimplifiedHasBeenSet = true;
}

bool Activity::StatusMessageSimplifiedHasBeenSet() const
{
    return m_statusMessageSimplifiedHasBeenSet;
}

vector<LifecycleActionResultInfo> Activity::GetLifecycleActionResultSet() const
{
    return m_lifecycleActionResultSet;
}

void Activity::SetLifecycleActionResultSet(const vector<LifecycleActionResultInfo>& _lifecycleActionResultSet)
{
    m_lifecycleActionResultSet = _lifecycleActionResultSet;
    m_lifecycleActionResultSetHasBeenSet = true;
}

bool Activity::LifecycleActionResultSetHasBeenSet() const
{
    return m_lifecycleActionResultSetHasBeenSet;
}

vector<DetailedStatusMessage> Activity::GetDetailedStatusMessageSet() const
{
    return m_detailedStatusMessageSet;
}

void Activity::SetDetailedStatusMessageSet(const vector<DetailedStatusMessage>& _detailedStatusMessageSet)
{
    m_detailedStatusMessageSet = _detailedStatusMessageSet;
    m_detailedStatusMessageSetHasBeenSet = true;
}

bool Activity::DetailedStatusMessageSetHasBeenSet() const
{
    return m_detailedStatusMessageSetHasBeenSet;
}

vector<InvocationResult> Activity::GetInvocationResultSet() const
{
    return m_invocationResultSet;
}

void Activity::SetInvocationResultSet(const vector<InvocationResult>& _invocationResultSet)
{
    m_invocationResultSet = _invocationResultSet;
    m_invocationResultSetHasBeenSet = true;
}

bool Activity::InvocationResultSetHasBeenSet() const
{
    return m_invocationResultSetHasBeenSet;
}

vector<RelatedInstance> Activity::GetRelatedInstanceSet() const
{
    return m_relatedInstanceSet;
}

void Activity::SetRelatedInstanceSet(const vector<RelatedInstance>& _relatedInstanceSet)
{
    m_relatedInstanceSet = _relatedInstanceSet;
    m_relatedInstanceSetHasBeenSet = true;
}

bool Activity::RelatedInstanceSetHasBeenSet() const
{
    return m_relatedInstanceSetHasBeenSet;
}

