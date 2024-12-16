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

#include <tencentcloud/tsf/v20180326/model/ApplicationAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ApplicationAttribute::ApplicationAttribute() :
    m_instanceCountHasBeenSet(false),
    m_runInstanceCountHasBeenSet(false),
    m_groupCountHasBeenSet(false),
    m_runningGroupCountHasBeenSet(false),
    m_abnormalCountHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationAttribute.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("RunInstanceCount") && !value["RunInstanceCount"].IsNull())
    {
        if (!value["RunInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationAttribute.RunInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runInstanceCount = value["RunInstanceCount"].GetInt64();
        m_runInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("GroupCount") && !value["GroupCount"].IsNull())
    {
        if (!value["GroupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationAttribute.GroupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupCount = value["GroupCount"].GetInt64();
        m_groupCountHasBeenSet = true;
    }

    if (value.HasMember("RunningGroupCount") && !value["RunningGroupCount"].IsNull())
    {
        if (!value["RunningGroupCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationAttribute.RunningGroupCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runningGroupCount = string(value["RunningGroupCount"].GetString());
        m_runningGroupCountHasBeenSet = true;
    }

    if (value.HasMember("AbnormalCount") && !value["AbnormalCount"].IsNull())
    {
        if (!value["AbnormalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationAttribute.AbnormalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalCount = string(value["AbnormalCount"].GetString());
        m_abnormalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_runInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runInstanceCount, allocator);
    }

    if (m_groupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupCount, allocator);
    }

    if (m_runningGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runningGroupCount.c_str(), allocator).Move(), allocator);
    }

    if (m_abnormalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abnormalCount.c_str(), allocator).Move(), allocator);
    }

}


int64_t ApplicationAttribute::GetInstanceCount() const
{
    return m_instanceCount;
}

void ApplicationAttribute::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool ApplicationAttribute::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t ApplicationAttribute::GetRunInstanceCount() const
{
    return m_runInstanceCount;
}

void ApplicationAttribute::SetRunInstanceCount(const int64_t& _runInstanceCount)
{
    m_runInstanceCount = _runInstanceCount;
    m_runInstanceCountHasBeenSet = true;
}

bool ApplicationAttribute::RunInstanceCountHasBeenSet() const
{
    return m_runInstanceCountHasBeenSet;
}

int64_t ApplicationAttribute::GetGroupCount() const
{
    return m_groupCount;
}

void ApplicationAttribute::SetGroupCount(const int64_t& _groupCount)
{
    m_groupCount = _groupCount;
    m_groupCountHasBeenSet = true;
}

bool ApplicationAttribute::GroupCountHasBeenSet() const
{
    return m_groupCountHasBeenSet;
}

string ApplicationAttribute::GetRunningGroupCount() const
{
    return m_runningGroupCount;
}

void ApplicationAttribute::SetRunningGroupCount(const string& _runningGroupCount)
{
    m_runningGroupCount = _runningGroupCount;
    m_runningGroupCountHasBeenSet = true;
}

bool ApplicationAttribute::RunningGroupCountHasBeenSet() const
{
    return m_runningGroupCountHasBeenSet;
}

string ApplicationAttribute::GetAbnormalCount() const
{
    return m_abnormalCount;
}

void ApplicationAttribute::SetAbnormalCount(const string& _abnormalCount)
{
    m_abnormalCount = _abnormalCount;
    m_abnormalCountHasBeenSet = true;
}

bool ApplicationAttribute::AbnormalCountHasBeenSet() const
{
    return m_abnormalCountHasBeenSet;
}

