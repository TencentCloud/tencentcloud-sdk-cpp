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

#include <tencentcloud/tione/v20211111/model/MetricData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

MetricData::MetricData() :
    m_taskIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_epochHasBeenSet(false),
    m_stepHasBeenSet(false),
    m_totalStepsHasBeenSet(false),
    m_pointsHasBeenSet(false)
{
}

CoreInternalOutcome MetricData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricData.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricData.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricData.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Epoch") && !value["Epoch"].IsNull())
    {
        if (!value["Epoch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricData.Epoch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_epoch = value["Epoch"].GetInt64();
        m_epochHasBeenSet = true;
    }

    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricData.Step` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_step = value["Step"].GetInt64();
        m_stepHasBeenSet = true;
    }

    if (value.HasMember("TotalSteps") && !value["TotalSteps"].IsNull())
    {
        if (!value["TotalSteps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricData.TotalSteps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSteps = value["TotalSteps"].GetInt64();
        m_totalStepsHasBeenSet = true;
    }

    if (value.HasMember("Points") && !value["Points"].IsNull())
    {
        if (!value["Points"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricData.Points` is not array type"));

        const rapidjson::Value &tmpValue = value["Points"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_points.push_back(item);
        }
        m_pointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_epochHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Epoch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_epoch, allocator);
    }

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_step, allocator);
    }

    if (m_totalStepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSteps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSteps, allocator);
    }

    if (m_pointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Points";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_points.begin(); itr != m_points.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MetricData::GetTaskId() const
{
    return m_taskId;
}

void MetricData::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool MetricData::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t MetricData::GetTimestamp() const
{
    return m_timestamp;
}

void MetricData::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool MetricData::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string MetricData::GetUin() const
{
    return m_uin;
}

void MetricData::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool MetricData::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t MetricData::GetEpoch() const
{
    return m_epoch;
}

void MetricData::SetEpoch(const int64_t& _epoch)
{
    m_epoch = _epoch;
    m_epochHasBeenSet = true;
}

bool MetricData::EpochHasBeenSet() const
{
    return m_epochHasBeenSet;
}

int64_t MetricData::GetStep() const
{
    return m_step;
}

void MetricData::SetStep(const int64_t& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool MetricData::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

int64_t MetricData::GetTotalSteps() const
{
    return m_totalSteps;
}

void MetricData::SetTotalSteps(const int64_t& _totalSteps)
{
    m_totalSteps = _totalSteps;
    m_totalStepsHasBeenSet = true;
}

bool MetricData::TotalStepsHasBeenSet() const
{
    return m_totalStepsHasBeenSet;
}

vector<DataPoint> MetricData::GetPoints() const
{
    return m_points;
}

void MetricData::SetPoints(const vector<DataPoint>& _points)
{
    m_points = _points;
    m_pointsHasBeenSet = true;
}

bool MetricData::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}

