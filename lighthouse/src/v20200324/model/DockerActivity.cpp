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

#include <tencentcloud/lighthouse/v20200324/model/DockerActivity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DockerActivity::DockerActivity() :
    m_activityIdHasBeenSet(false),
    m_activityNameHasBeenSet(false),
    m_activityStateHasBeenSet(false),
    m_activityCommandOutputHasBeenSet(false),
    m_containerIdsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome DockerActivity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerActivity.ActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = string(value["ActivityId"].GetString());
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("ActivityName") && !value["ActivityName"].IsNull())
    {
        if (!value["ActivityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerActivity.ActivityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityName = string(value["ActivityName"].GetString());
        m_activityNameHasBeenSet = true;
    }

    if (value.HasMember("ActivityState") && !value["ActivityState"].IsNull())
    {
        if (!value["ActivityState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerActivity.ActivityState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityState = string(value["ActivityState"].GetString());
        m_activityStateHasBeenSet = true;
    }

    if (value.HasMember("ActivityCommandOutput") && !value["ActivityCommandOutput"].IsNull())
    {
        if (!value["ActivityCommandOutput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerActivity.ActivityCommandOutput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityCommandOutput = string(value["ActivityCommandOutput"].GetString());
        m_activityCommandOutputHasBeenSet = true;
    }

    if (value.HasMember("ContainerIds") && !value["ContainerIds"].IsNull())
    {
        if (!value["ContainerIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DockerActivity.ContainerIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ContainerIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_containerIds.push_back((*itr).GetString());
        }
        m_containerIdsHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerActivity.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerActivity.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DockerActivity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityId.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_activityState.c_str(), allocator).Move(), allocator);
    }

    if (m_activityCommandOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityCommandOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityCommandOutput.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_containerIds.begin(); itr != m_containerIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string DockerActivity::GetActivityId() const
{
    return m_activityId;
}

void DockerActivity::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool DockerActivity::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string DockerActivity::GetActivityName() const
{
    return m_activityName;
}

void DockerActivity::SetActivityName(const string& _activityName)
{
    m_activityName = _activityName;
    m_activityNameHasBeenSet = true;
}

bool DockerActivity::ActivityNameHasBeenSet() const
{
    return m_activityNameHasBeenSet;
}

string DockerActivity::GetActivityState() const
{
    return m_activityState;
}

void DockerActivity::SetActivityState(const string& _activityState)
{
    m_activityState = _activityState;
    m_activityStateHasBeenSet = true;
}

bool DockerActivity::ActivityStateHasBeenSet() const
{
    return m_activityStateHasBeenSet;
}

string DockerActivity::GetActivityCommandOutput() const
{
    return m_activityCommandOutput;
}

void DockerActivity::SetActivityCommandOutput(const string& _activityCommandOutput)
{
    m_activityCommandOutput = _activityCommandOutput;
    m_activityCommandOutputHasBeenSet = true;
}

bool DockerActivity::ActivityCommandOutputHasBeenSet() const
{
    return m_activityCommandOutputHasBeenSet;
}

vector<string> DockerActivity::GetContainerIds() const
{
    return m_containerIds;
}

void DockerActivity::SetContainerIds(const vector<string>& _containerIds)
{
    m_containerIds = _containerIds;
    m_containerIdsHasBeenSet = true;
}

bool DockerActivity::ContainerIdsHasBeenSet() const
{
    return m_containerIdsHasBeenSet;
}

string DockerActivity::GetCreatedTime() const
{
    return m_createdTime;
}

void DockerActivity::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool DockerActivity::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DockerActivity::GetEndTime() const
{
    return m_endTime;
}

void DockerActivity::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DockerActivity::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

