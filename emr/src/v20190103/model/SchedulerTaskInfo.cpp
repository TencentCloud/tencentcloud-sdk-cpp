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

#include <tencentcloud/emr/v20190103/model/SchedulerTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

SchedulerTaskInfo::SchedulerTaskInfo() :
    m_schedulerNameHasBeenSet(false),
    m_operatorNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

CoreInternalOutcome SchedulerTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SchedulerName") && !value["SchedulerName"].IsNull())
    {
        if (!value["SchedulerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskInfo.SchedulerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerName = string(value["SchedulerName"].GetString());
        m_schedulerNameHasBeenSet = true;
    }

    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskInfo.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskInfo.Details` is not array type"));

        const rapidjson::Value &tmpValue = value["Details"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SchedulerTaskDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulerTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_schedulerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SchedulerTaskInfo::GetSchedulerName() const
{
    return m_schedulerName;
}

void SchedulerTaskInfo::SetSchedulerName(const string& _schedulerName)
{
    m_schedulerName = _schedulerName;
    m_schedulerNameHasBeenSet = true;
}

bool SchedulerTaskInfo::SchedulerNameHasBeenSet() const
{
    return m_schedulerNameHasBeenSet;
}

string SchedulerTaskInfo::GetOperatorName() const
{
    return m_operatorName;
}

void SchedulerTaskInfo::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool SchedulerTaskInfo::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string SchedulerTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void SchedulerTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SchedulerTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SchedulerTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void SchedulerTaskInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SchedulerTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t SchedulerTaskInfo::GetState() const
{
    return m_state;
}

void SchedulerTaskInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SchedulerTaskInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<SchedulerTaskDetail> SchedulerTaskInfo::GetDetails() const
{
    return m_details;
}

void SchedulerTaskInfo::SetDetails(const vector<SchedulerTaskDetail>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool SchedulerTaskInfo::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

