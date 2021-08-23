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

#include <tencentcloud/tiems/v20190416/model/RsgAsGroupActivity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

RsgAsGroupActivity::RsgAsGroupActivity() :
    m_idHasBeenSet(false),
    m_rsgAsGroupIdHasBeenSet(false),
    m_activityTypeHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_causeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_rsgAsActivityRelatedInstanceHasBeenSet(false),
    m_statusMessageSimplifiedHasBeenSet(false)
{
}

CoreInternalOutcome RsgAsGroupActivity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RsgAsGroupId") && !value["RsgAsGroupId"].IsNull())
    {
        if (!value["RsgAsGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.RsgAsGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rsgAsGroupId = string(value["RsgAsGroupId"].GetString());
        m_rsgAsGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ActivityType") && !value["ActivityType"].IsNull())
    {
        if (!value["ActivityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.ActivityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityType = string(value["ActivityType"].GetString());
        m_activityTypeHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.StatusCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = string(value["StatusCode"].GetString());
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("StatusMessage") && !value["StatusMessage"].IsNull())
    {
        if (!value["StatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.StatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessage = string(value["StatusMessage"].GetString());
        m_statusMessageHasBeenSet = true;
    }

    if (value.HasMember("Cause") && !value["Cause"].IsNull())
    {
        if (!value["Cause"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.Cause` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cause = string(value["Cause"].GetString());
        m_causeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RsgAsActivityRelatedInstance") && !value["RsgAsActivityRelatedInstance"].IsNull())
    {
        if (!value["RsgAsActivityRelatedInstance"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.RsgAsActivityRelatedInstance` is not array type"));

        const rapidjson::Value &tmpValue = value["RsgAsActivityRelatedInstance"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RsgAsActivityRelatedInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rsgAsActivityRelatedInstance.push_back(item);
        }
        m_rsgAsActivityRelatedInstanceHasBeenSet = true;
    }

    if (value.HasMember("StatusMessageSimplified") && !value["StatusMessageSimplified"].IsNull())
    {
        if (!value["StatusMessageSimplified"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroupActivity.StatusMessageSimplified` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessageSimplified = string(value["StatusMessageSimplified"].GetString());
        m_statusMessageSimplifiedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RsgAsGroupActivity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_rsgAsGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RsgAsGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rsgAsGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_rsgAsActivityRelatedInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RsgAsActivityRelatedInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rsgAsActivityRelatedInstance.begin(); itr != m_rsgAsActivityRelatedInstance.end(); ++itr, ++i)
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

}


string RsgAsGroupActivity::GetId() const
{
    return m_id;
}

void RsgAsGroupActivity::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RsgAsGroupActivity::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RsgAsGroupActivity::GetRsgAsGroupId() const
{
    return m_rsgAsGroupId;
}

void RsgAsGroupActivity::SetRsgAsGroupId(const string& _rsgAsGroupId)
{
    m_rsgAsGroupId = _rsgAsGroupId;
    m_rsgAsGroupIdHasBeenSet = true;
}

bool RsgAsGroupActivity::RsgAsGroupIdHasBeenSet() const
{
    return m_rsgAsGroupIdHasBeenSet;
}

string RsgAsGroupActivity::GetActivityType() const
{
    return m_activityType;
}

void RsgAsGroupActivity::SetActivityType(const string& _activityType)
{
    m_activityType = _activityType;
    m_activityTypeHasBeenSet = true;
}

bool RsgAsGroupActivity::ActivityTypeHasBeenSet() const
{
    return m_activityTypeHasBeenSet;
}

string RsgAsGroupActivity::GetStatusCode() const
{
    return m_statusCode;
}

void RsgAsGroupActivity::SetStatusCode(const string& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool RsgAsGroupActivity::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string RsgAsGroupActivity::GetStatusMessage() const
{
    return m_statusMessage;
}

void RsgAsGroupActivity::SetStatusMessage(const string& _statusMessage)
{
    m_statusMessage = _statusMessage;
    m_statusMessageHasBeenSet = true;
}

bool RsgAsGroupActivity::StatusMessageHasBeenSet() const
{
    return m_statusMessageHasBeenSet;
}

string RsgAsGroupActivity::GetCause() const
{
    return m_cause;
}

void RsgAsGroupActivity::SetCause(const string& _cause)
{
    m_cause = _cause;
    m_causeHasBeenSet = true;
}

bool RsgAsGroupActivity::CauseHasBeenSet() const
{
    return m_causeHasBeenSet;
}

string RsgAsGroupActivity::GetDescription() const
{
    return m_description;
}

void RsgAsGroupActivity::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RsgAsGroupActivity::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RsgAsGroupActivity::GetStartTime() const
{
    return m_startTime;
}

void RsgAsGroupActivity::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RsgAsGroupActivity::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RsgAsGroupActivity::GetEndTime() const
{
    return m_endTime;
}

void RsgAsGroupActivity::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RsgAsGroupActivity::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RsgAsGroupActivity::GetCreateTime() const
{
    return m_createTime;
}

void RsgAsGroupActivity::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RsgAsGroupActivity::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<RsgAsActivityRelatedInstance> RsgAsGroupActivity::GetRsgAsActivityRelatedInstance() const
{
    return m_rsgAsActivityRelatedInstance;
}

void RsgAsGroupActivity::SetRsgAsActivityRelatedInstance(const vector<RsgAsActivityRelatedInstance>& _rsgAsActivityRelatedInstance)
{
    m_rsgAsActivityRelatedInstance = _rsgAsActivityRelatedInstance;
    m_rsgAsActivityRelatedInstanceHasBeenSet = true;
}

bool RsgAsGroupActivity::RsgAsActivityRelatedInstanceHasBeenSet() const
{
    return m_rsgAsActivityRelatedInstanceHasBeenSet;
}

string RsgAsGroupActivity::GetStatusMessageSimplified() const
{
    return m_statusMessageSimplified;
}

void RsgAsGroupActivity::SetStatusMessageSimplified(const string& _statusMessageSimplified)
{
    m_statusMessageSimplified = _statusMessageSimplified;
    m_statusMessageSimplifiedHasBeenSet = true;
}

bool RsgAsGroupActivity::StatusMessageSimplifiedHasBeenSet() const
{
    return m_statusMessageSimplifiedHasBeenSet;
}

