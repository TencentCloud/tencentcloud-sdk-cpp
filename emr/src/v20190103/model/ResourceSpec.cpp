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

#include <tencentcloud/emr/v20190103/model/ResourceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

ResourceSpec::ResourceSpec() :
    m_commonCountHasBeenSet(false),
    m_masterResourceSpecHasBeenSet(false),
    m_coreResourceSpecHasBeenSet(false),
    m_taskResourceSpecHasBeenSet(false),
    m_masterCountHasBeenSet(false),
    m_coreCountHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_commonResourceSpecHasBeenSet(false)
{
}

CoreInternalOutcome ResourceSpec::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CommonCount") && !value["CommonCount"].IsNull())
    {
        if (!value["CommonCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ResourceSpec.CommonCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_commonCount = value["CommonCount"].GetUint64();
        m_commonCountHasBeenSet = true;
    }

    if (value.HasMember("MasterResourceSpec") && !value["MasterResourceSpec"].IsNull())
    {
        if (!value["MasterResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ResourceSpec.MasterResourceSpec` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `ResourceSpec.CoreResourceSpec` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `ResourceSpec.TaskResourceSpec` is not object type").SetRequestId(requestId));
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
        if (!value["MasterCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ResourceSpec.MasterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_masterCount = value["MasterCount"].GetUint64();
        m_masterCountHasBeenSet = true;
    }

    if (value.HasMember("CoreCount") && !value["CoreCount"].IsNull())
    {
        if (!value["CoreCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ResourceSpec.CoreCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coreCount = value["CoreCount"].GetUint64();
        m_coreCountHasBeenSet = true;
    }

    if (value.HasMember("TaskCount") && !value["TaskCount"].IsNull())
    {
        if (!value["TaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ResourceSpec.TaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCount = value["TaskCount"].GetUint64();
        m_taskCountHasBeenSet = true;
    }

    if (value.HasMember("CommonResourceSpec") && !value["CommonResourceSpec"].IsNull())
    {
        if (!value["CommonResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ResourceSpec.CommonResourceSpec` is not object type").SetRequestId(requestId));
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

void ResourceSpec::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_commonCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommonCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commonCount, allocator);
    }

    if (m_masterResourceSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_masterResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coreResourceSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoreResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_coreResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskResourceSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_taskResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_masterCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterCount, allocator);
    }

    if (m_coreCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoreCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coreCount, allocator);
    }

    if (m_taskCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_commonResourceSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommonResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_commonResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t ResourceSpec::GetCommonCount() const
{
    return m_commonCount;
}

void ResourceSpec::SetCommonCount(const uint64_t& _commonCount)
{
    m_commonCount = _commonCount;
    m_commonCountHasBeenSet = true;
}

bool ResourceSpec::CommonCountHasBeenSet() const
{
    return m_commonCountHasBeenSet;
}

NodeSpec ResourceSpec::GetMasterResourceSpec() const
{
    return m_masterResourceSpec;
}

void ResourceSpec::SetMasterResourceSpec(const NodeSpec& _masterResourceSpec)
{
    m_masterResourceSpec = _masterResourceSpec;
    m_masterResourceSpecHasBeenSet = true;
}

bool ResourceSpec::MasterResourceSpecHasBeenSet() const
{
    return m_masterResourceSpecHasBeenSet;
}

NodeSpec ResourceSpec::GetCoreResourceSpec() const
{
    return m_coreResourceSpec;
}

void ResourceSpec::SetCoreResourceSpec(const NodeSpec& _coreResourceSpec)
{
    m_coreResourceSpec = _coreResourceSpec;
    m_coreResourceSpecHasBeenSet = true;
}

bool ResourceSpec::CoreResourceSpecHasBeenSet() const
{
    return m_coreResourceSpecHasBeenSet;
}

NodeSpec ResourceSpec::GetTaskResourceSpec() const
{
    return m_taskResourceSpec;
}

void ResourceSpec::SetTaskResourceSpec(const NodeSpec& _taskResourceSpec)
{
    m_taskResourceSpec = _taskResourceSpec;
    m_taskResourceSpecHasBeenSet = true;
}

bool ResourceSpec::TaskResourceSpecHasBeenSet() const
{
    return m_taskResourceSpecHasBeenSet;
}

uint64_t ResourceSpec::GetMasterCount() const
{
    return m_masterCount;
}

void ResourceSpec::SetMasterCount(const uint64_t& _masterCount)
{
    m_masterCount = _masterCount;
    m_masterCountHasBeenSet = true;
}

bool ResourceSpec::MasterCountHasBeenSet() const
{
    return m_masterCountHasBeenSet;
}

uint64_t ResourceSpec::GetCoreCount() const
{
    return m_coreCount;
}

void ResourceSpec::SetCoreCount(const uint64_t& _coreCount)
{
    m_coreCount = _coreCount;
    m_coreCountHasBeenSet = true;
}

bool ResourceSpec::CoreCountHasBeenSet() const
{
    return m_coreCountHasBeenSet;
}

uint64_t ResourceSpec::GetTaskCount() const
{
    return m_taskCount;
}

void ResourceSpec::SetTaskCount(const uint64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool ResourceSpec::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

NodeSpec ResourceSpec::GetCommonResourceSpec() const
{
    return m_commonResourceSpec;
}

void ResourceSpec::SetCommonResourceSpec(const NodeSpec& _commonResourceSpec)
{
    m_commonResourceSpec = _commonResourceSpec;
    m_commonResourceSpecHasBeenSet = true;
}

bool ResourceSpec::CommonResourceSpecHasBeenSet() const
{
    return m_commonResourceSpecHasBeenSet;
}

