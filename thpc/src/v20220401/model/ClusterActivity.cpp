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

#include <tencentcloud/thpc/v20220401/model/ClusterActivity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20220401::Model;
using namespace std;

ClusterActivity::ClusterActivity() :
    m_clusterIdHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_activityTypeHasBeenSet(false),
    m_activityStatusHasBeenSet(false),
    m_activityStatusCodeHasBeenSet(false),
    m_resultDetailHasBeenSet(false),
    m_causeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_relatedNodeActivitySetHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterActivity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.ActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = string(value["ActivityId"].GetString());
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("ActivityType") && !value["ActivityType"].IsNull())
    {
        if (!value["ActivityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.ActivityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityType = string(value["ActivityType"].GetString());
        m_activityTypeHasBeenSet = true;
    }

    if (value.HasMember("ActivityStatus") && !value["ActivityStatus"].IsNull())
    {
        if (!value["ActivityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.ActivityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityStatus = string(value["ActivityStatus"].GetString());
        m_activityStatusHasBeenSet = true;
    }

    if (value.HasMember("ActivityStatusCode") && !value["ActivityStatusCode"].IsNull())
    {
        if (!value["ActivityStatusCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.ActivityStatusCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityStatusCode = string(value["ActivityStatusCode"].GetString());
        m_activityStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("ResultDetail") && !value["ResultDetail"].IsNull())
    {
        if (!value["ResultDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.ResultDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultDetail = string(value["ResultDetail"].GetString());
        m_resultDetailHasBeenSet = true;
    }

    if (value.HasMember("Cause") && !value["Cause"].IsNull())
    {
        if (!value["Cause"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.Cause` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cause = string(value["Cause"].GetString());
        m_causeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RelatedNodeActivitySet") && !value["RelatedNodeActivitySet"].IsNull())
    {
        if (!value["RelatedNodeActivitySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.RelatedNodeActivitySet` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedNodeActivitySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeActivity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedNodeActivitySet.push_back(item);
        }
        m_relatedNodeActivitySetHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterActivity.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterActivity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

    if (m_activityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_activityStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityStatusCode.c_str(), allocator).Move(), allocator);
    }

    if (m_resultDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultDetail.c_str(), allocator).Move(), allocator);
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

    if (m_relatedNodeActivitySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedNodeActivitySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedNodeActivitySet.begin(); itr != m_relatedNodeActivitySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string ClusterActivity::GetClusterId() const
{
    return m_clusterId;
}

void ClusterActivity::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterActivity::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterActivity::GetActivityId() const
{
    return m_activityId;
}

void ClusterActivity::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool ClusterActivity::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string ClusterActivity::GetActivityType() const
{
    return m_activityType;
}

void ClusterActivity::SetActivityType(const string& _activityType)
{
    m_activityType = _activityType;
    m_activityTypeHasBeenSet = true;
}

bool ClusterActivity::ActivityTypeHasBeenSet() const
{
    return m_activityTypeHasBeenSet;
}

string ClusterActivity::GetActivityStatus() const
{
    return m_activityStatus;
}

void ClusterActivity::SetActivityStatus(const string& _activityStatus)
{
    m_activityStatus = _activityStatus;
    m_activityStatusHasBeenSet = true;
}

bool ClusterActivity::ActivityStatusHasBeenSet() const
{
    return m_activityStatusHasBeenSet;
}

string ClusterActivity::GetActivityStatusCode() const
{
    return m_activityStatusCode;
}

void ClusterActivity::SetActivityStatusCode(const string& _activityStatusCode)
{
    m_activityStatusCode = _activityStatusCode;
    m_activityStatusCodeHasBeenSet = true;
}

bool ClusterActivity::ActivityStatusCodeHasBeenSet() const
{
    return m_activityStatusCodeHasBeenSet;
}

string ClusterActivity::GetResultDetail() const
{
    return m_resultDetail;
}

void ClusterActivity::SetResultDetail(const string& _resultDetail)
{
    m_resultDetail = _resultDetail;
    m_resultDetailHasBeenSet = true;
}

bool ClusterActivity::ResultDetailHasBeenSet() const
{
    return m_resultDetailHasBeenSet;
}

string ClusterActivity::GetCause() const
{
    return m_cause;
}

void ClusterActivity::SetCause(const string& _cause)
{
    m_cause = _cause;
    m_causeHasBeenSet = true;
}

bool ClusterActivity::CauseHasBeenSet() const
{
    return m_causeHasBeenSet;
}

string ClusterActivity::GetDescription() const
{
    return m_description;
}

void ClusterActivity::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ClusterActivity::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<NodeActivity> ClusterActivity::GetRelatedNodeActivitySet() const
{
    return m_relatedNodeActivitySet;
}

void ClusterActivity::SetRelatedNodeActivitySet(const vector<NodeActivity>& _relatedNodeActivitySet)
{
    m_relatedNodeActivitySet = _relatedNodeActivitySet;
    m_relatedNodeActivitySetHasBeenSet = true;
}

bool ClusterActivity::RelatedNodeActivitySetHasBeenSet() const
{
    return m_relatedNodeActivitySetHasBeenSet;
}

string ClusterActivity::GetStartTime() const
{
    return m_startTime;
}

void ClusterActivity::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ClusterActivity::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ClusterActivity::GetEndTime() const
{
    return m_endTime;
}

void ClusterActivity::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ClusterActivity::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

