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

#include <tencentcloud/emr/v20190103/model/JobFlowResourceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

JobFlowResourceSpec::JobFlowResourceSpec() :
    m_masterCountHasBeenSet(false),
    m_masterResourceSpecHasBeenSet(false),
    m_coreCountHasBeenSet(false),
    m_coreResourceSpecHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_commonCountHasBeenSet(false),
    m_taskResourceSpecHasBeenSet(false),
    m_commonResourceSpecHasBeenSet(false)
{
}

CoreInternalOutcome JobFlowResourceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MasterCount") && !value["MasterCount"].IsNull())
    {
        if (!value["MasterCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobFlowResourceSpec.MasterCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterCount = value["MasterCount"].GetInt64();
        m_masterCountHasBeenSet = true;
    }

    if (value.HasMember("MasterResourceSpec") && !value["MasterResourceSpec"].IsNull())
    {
        if (!value["MasterResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobFlowResourceSpec.MasterResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterResourceSpec.Deserialize(value["MasterResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("CoreCount") && !value["CoreCount"].IsNull())
    {
        if (!value["CoreCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobFlowResourceSpec.CoreCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coreCount = value["CoreCount"].GetInt64();
        m_coreCountHasBeenSet = true;
    }

    if (value.HasMember("CoreResourceSpec") && !value["CoreResourceSpec"].IsNull())
    {
        if (!value["CoreResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobFlowResourceSpec.CoreResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coreResourceSpec.Deserialize(value["CoreResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coreResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("TaskCount") && !value["TaskCount"].IsNull())
    {
        if (!value["TaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobFlowResourceSpec.TaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCount = value["TaskCount"].GetInt64();
        m_taskCountHasBeenSet = true;
    }

    if (value.HasMember("CommonCount") && !value["CommonCount"].IsNull())
    {
        if (!value["CommonCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobFlowResourceSpec.CommonCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commonCount = value["CommonCount"].GetInt64();
        m_commonCountHasBeenSet = true;
    }

    if (value.HasMember("TaskResourceSpec") && !value["TaskResourceSpec"].IsNull())
    {
        if (!value["TaskResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobFlowResourceSpec.TaskResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskResourceSpec.Deserialize(value["TaskResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("CommonResourceSpec") && !value["CommonResourceSpec"].IsNull())
    {
        if (!value["CommonResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobFlowResourceSpec.CommonResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_commonResourceSpec.Deserialize(value["CommonResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_commonResourceSpecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobFlowResourceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_masterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterCount, allocator);
    }

    if (m_masterResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_masterResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coreCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coreCount, allocator);
    }

    if (m_coreResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coreResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_commonCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commonCount, allocator);
    }

    if (m_taskResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_commonResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_commonResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t JobFlowResourceSpec::GetMasterCount() const
{
    return m_masterCount;
}

void JobFlowResourceSpec::SetMasterCount(const int64_t& _masterCount)
{
    m_masterCount = _masterCount;
    m_masterCountHasBeenSet = true;
}

bool JobFlowResourceSpec::MasterCountHasBeenSet() const
{
    return m_masterCountHasBeenSet;
}

JobFlowResource JobFlowResourceSpec::GetMasterResourceSpec() const
{
    return m_masterResourceSpec;
}

void JobFlowResourceSpec::SetMasterResourceSpec(const JobFlowResource& _masterResourceSpec)
{
    m_masterResourceSpec = _masterResourceSpec;
    m_masterResourceSpecHasBeenSet = true;
}

bool JobFlowResourceSpec::MasterResourceSpecHasBeenSet() const
{
    return m_masterResourceSpecHasBeenSet;
}

int64_t JobFlowResourceSpec::GetCoreCount() const
{
    return m_coreCount;
}

void JobFlowResourceSpec::SetCoreCount(const int64_t& _coreCount)
{
    m_coreCount = _coreCount;
    m_coreCountHasBeenSet = true;
}

bool JobFlowResourceSpec::CoreCountHasBeenSet() const
{
    return m_coreCountHasBeenSet;
}

JobFlowResource JobFlowResourceSpec::GetCoreResourceSpec() const
{
    return m_coreResourceSpec;
}

void JobFlowResourceSpec::SetCoreResourceSpec(const JobFlowResource& _coreResourceSpec)
{
    m_coreResourceSpec = _coreResourceSpec;
    m_coreResourceSpecHasBeenSet = true;
}

bool JobFlowResourceSpec::CoreResourceSpecHasBeenSet() const
{
    return m_coreResourceSpecHasBeenSet;
}

int64_t JobFlowResourceSpec::GetTaskCount() const
{
    return m_taskCount;
}

void JobFlowResourceSpec::SetTaskCount(const int64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool JobFlowResourceSpec::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

int64_t JobFlowResourceSpec::GetCommonCount() const
{
    return m_commonCount;
}

void JobFlowResourceSpec::SetCommonCount(const int64_t& _commonCount)
{
    m_commonCount = _commonCount;
    m_commonCountHasBeenSet = true;
}

bool JobFlowResourceSpec::CommonCountHasBeenSet() const
{
    return m_commonCountHasBeenSet;
}

JobFlowResource JobFlowResourceSpec::GetTaskResourceSpec() const
{
    return m_taskResourceSpec;
}

void JobFlowResourceSpec::SetTaskResourceSpec(const JobFlowResource& _taskResourceSpec)
{
    m_taskResourceSpec = _taskResourceSpec;
    m_taskResourceSpecHasBeenSet = true;
}

bool JobFlowResourceSpec::TaskResourceSpecHasBeenSet() const
{
    return m_taskResourceSpecHasBeenSet;
}

JobFlowResource JobFlowResourceSpec::GetCommonResourceSpec() const
{
    return m_commonResourceSpec;
}

void JobFlowResourceSpec::SetCommonResourceSpec(const JobFlowResource& _commonResourceSpec)
{
    m_commonResourceSpec = _commonResourceSpec;
    m_commonResourceSpecHasBeenSet = true;
}

bool JobFlowResourceSpec::CommonResourceSpecHasBeenSet() const
{
    return m_commonResourceSpecHasBeenSet;
}

