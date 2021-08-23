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

#include <tencentcloud/emr/v20190103/model/NewResourceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NewResourceSpec::NewResourceSpec() :
    m_masterResourceSpecHasBeenSet(false),
    m_coreResourceSpecHasBeenSet(false),
    m_taskResourceSpecHasBeenSet(false),
    m_masterCountHasBeenSet(false),
    m_coreCountHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_commonResourceSpecHasBeenSet(false),
    m_commonCountHasBeenSet(false)
{
}

CoreInternalOutcome NewResourceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MasterResourceSpec") && !value["MasterResourceSpec"].IsNull())
    {
        if (!value["MasterResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NewResourceSpec.MasterResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterResourceSpec.Deserialize(value["MasterResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("CoreResourceSpec") && !value["CoreResourceSpec"].IsNull())
    {
        if (!value["CoreResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NewResourceSpec.CoreResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coreResourceSpec.Deserialize(value["CoreResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coreResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("TaskResourceSpec") && !value["TaskResourceSpec"].IsNull())
    {
        if (!value["TaskResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NewResourceSpec.TaskResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskResourceSpec.Deserialize(value["TaskResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("MasterCount") && !value["MasterCount"].IsNull())
    {
        if (!value["MasterCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewResourceSpec.MasterCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterCount = value["MasterCount"].GetInt64();
        m_masterCountHasBeenSet = true;
    }

    if (value.HasMember("CoreCount") && !value["CoreCount"].IsNull())
    {
        if (!value["CoreCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewResourceSpec.CoreCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coreCount = value["CoreCount"].GetInt64();
        m_coreCountHasBeenSet = true;
    }

    if (value.HasMember("TaskCount") && !value["TaskCount"].IsNull())
    {
        if (!value["TaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewResourceSpec.TaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCount = value["TaskCount"].GetInt64();
        m_taskCountHasBeenSet = true;
    }

    if (value.HasMember("CommonResourceSpec") && !value["CommonResourceSpec"].IsNull())
    {
        if (!value["CommonResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NewResourceSpec.CommonResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_commonResourceSpec.Deserialize(value["CommonResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_commonResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("CommonCount") && !value["CommonCount"].IsNull())
    {
        if (!value["CommonCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewResourceSpec.CommonCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commonCount = value["CommonCount"].GetInt64();
        m_commonCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NewResourceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_masterResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_masterResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coreResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coreResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_masterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterCount, allocator);
    }

    if (m_coreCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coreCount, allocator);
    }

    if (m_taskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_commonResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_commonResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_commonCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commonCount, allocator);
    }

}


Resource NewResourceSpec::GetMasterResourceSpec() const
{
    return m_masterResourceSpec;
}

void NewResourceSpec::SetMasterResourceSpec(const Resource& _masterResourceSpec)
{
    m_masterResourceSpec = _masterResourceSpec;
    m_masterResourceSpecHasBeenSet = true;
}

bool NewResourceSpec::MasterResourceSpecHasBeenSet() const
{
    return m_masterResourceSpecHasBeenSet;
}

Resource NewResourceSpec::GetCoreResourceSpec() const
{
    return m_coreResourceSpec;
}

void NewResourceSpec::SetCoreResourceSpec(const Resource& _coreResourceSpec)
{
    m_coreResourceSpec = _coreResourceSpec;
    m_coreResourceSpecHasBeenSet = true;
}

bool NewResourceSpec::CoreResourceSpecHasBeenSet() const
{
    return m_coreResourceSpecHasBeenSet;
}

Resource NewResourceSpec::GetTaskResourceSpec() const
{
    return m_taskResourceSpec;
}

void NewResourceSpec::SetTaskResourceSpec(const Resource& _taskResourceSpec)
{
    m_taskResourceSpec = _taskResourceSpec;
    m_taskResourceSpecHasBeenSet = true;
}

bool NewResourceSpec::TaskResourceSpecHasBeenSet() const
{
    return m_taskResourceSpecHasBeenSet;
}

int64_t NewResourceSpec::GetMasterCount() const
{
    return m_masterCount;
}

void NewResourceSpec::SetMasterCount(const int64_t& _masterCount)
{
    m_masterCount = _masterCount;
    m_masterCountHasBeenSet = true;
}

bool NewResourceSpec::MasterCountHasBeenSet() const
{
    return m_masterCountHasBeenSet;
}

int64_t NewResourceSpec::GetCoreCount() const
{
    return m_coreCount;
}

void NewResourceSpec::SetCoreCount(const int64_t& _coreCount)
{
    m_coreCount = _coreCount;
    m_coreCountHasBeenSet = true;
}

bool NewResourceSpec::CoreCountHasBeenSet() const
{
    return m_coreCountHasBeenSet;
}

int64_t NewResourceSpec::GetTaskCount() const
{
    return m_taskCount;
}

void NewResourceSpec::SetTaskCount(const int64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool NewResourceSpec::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

Resource NewResourceSpec::GetCommonResourceSpec() const
{
    return m_commonResourceSpec;
}

void NewResourceSpec::SetCommonResourceSpec(const Resource& _commonResourceSpec)
{
    m_commonResourceSpec = _commonResourceSpec;
    m_commonResourceSpecHasBeenSet = true;
}

bool NewResourceSpec::CommonResourceSpecHasBeenSet() const
{
    return m_commonResourceSpecHasBeenSet;
}

int64_t NewResourceSpec::GetCommonCount() const
{
    return m_commonCount;
}

void NewResourceSpec::SetCommonCount(const int64_t& _commonCount)
{
    m_commonCount = _commonCount;
    m_commonCountHasBeenSet = true;
}

bool NewResourceSpec::CommonCountHasBeenSet() const
{
    return m_commonCountHasBeenSet;
}

