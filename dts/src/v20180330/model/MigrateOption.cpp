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

#include <tencentcloud/dts/v20180330/model/MigrateOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

MigrateOption::MigrateOption() :
    m_runModeHasBeenSet(false),
    m_expectTimeHasBeenSet(false),
    m_migrateTypeHasBeenSet(false),
    m_migrateObjectHasBeenSet(false),
    m_consistencyTypeHasBeenSet(false),
    m_isOverrideRootHasBeenSet(false),
    m_externParamsHasBeenSet(false),
    m_consistencyParamsHasBeenSet(false)
{
}

CoreInternalOutcome MigrateOption::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RunMode") && !value["RunMode"].IsNull())
    {
        if (!value["RunMode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MigrateOption.RunMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runMode = value["RunMode"].GetInt64();
        m_runModeHasBeenSet = true;
    }

    if (value.HasMember("ExpectTime") && !value["ExpectTime"].IsNull())
    {
        if (!value["ExpectTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MigrateOption.ExpectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectTime = string(value["ExpectTime"].GetString());
        m_expectTimeHasBeenSet = true;
    }

    if (value.HasMember("MigrateType") && !value["MigrateType"].IsNull())
    {
        if (!value["MigrateType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MigrateOption.MigrateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_migrateType = value["MigrateType"].GetInt64();
        m_migrateTypeHasBeenSet = true;
    }

    if (value.HasMember("MigrateObject") && !value["MigrateObject"].IsNull())
    {
        if (!value["MigrateObject"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MigrateOption.MigrateObject` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_migrateObject = value["MigrateObject"].GetInt64();
        m_migrateObjectHasBeenSet = true;
    }

    if (value.HasMember("ConsistencyType") && !value["ConsistencyType"].IsNull())
    {
        if (!value["ConsistencyType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MigrateOption.ConsistencyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consistencyType = value["ConsistencyType"].GetInt64();
        m_consistencyTypeHasBeenSet = true;
    }

    if (value.HasMember("IsOverrideRoot") && !value["IsOverrideRoot"].IsNull())
    {
        if (!value["IsOverrideRoot"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MigrateOption.IsOverrideRoot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isOverrideRoot = value["IsOverrideRoot"].GetInt64();
        m_isOverrideRootHasBeenSet = true;
    }

    if (value.HasMember("ExternParams") && !value["ExternParams"].IsNull())
    {
        if (!value["ExternParams"].IsString())
        {
            return CoreInternalOutcome(Error("response `MigrateOption.ExternParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externParams = string(value["ExternParams"].GetString());
        m_externParamsHasBeenSet = true;
    }

    if (value.HasMember("ConsistencyParams") && !value["ConsistencyParams"].IsNull())
    {
        if (!value["ConsistencyParams"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MigrateOption.ConsistencyParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_consistencyParams.Deserialize(value["ConsistencyParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_consistencyParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateOption::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_runModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runMode, allocator);
    }

    if (m_expectTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MigrateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrateType, allocator);
    }

    if (m_migrateObjectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MigrateObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrateObject, allocator);
    }

    if (m_consistencyTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConsistencyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consistencyType, allocator);
    }

    if (m_isOverrideRootHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsOverrideRoot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOverrideRoot, allocator);
    }

    if (m_externParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExternParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_externParams.c_str(), allocator).Move(), allocator);
    }

    if (m_consistencyParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConsistencyParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_consistencyParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t MigrateOption::GetRunMode() const
{
    return m_runMode;
}

void MigrateOption::SetRunMode(const int64_t& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool MigrateOption::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string MigrateOption::GetExpectTime() const
{
    return m_expectTime;
}

void MigrateOption::SetExpectTime(const string& _expectTime)
{
    m_expectTime = _expectTime;
    m_expectTimeHasBeenSet = true;
}

bool MigrateOption::ExpectTimeHasBeenSet() const
{
    return m_expectTimeHasBeenSet;
}

int64_t MigrateOption::GetMigrateType() const
{
    return m_migrateType;
}

void MigrateOption::SetMigrateType(const int64_t& _migrateType)
{
    m_migrateType = _migrateType;
    m_migrateTypeHasBeenSet = true;
}

bool MigrateOption::MigrateTypeHasBeenSet() const
{
    return m_migrateTypeHasBeenSet;
}

int64_t MigrateOption::GetMigrateObject() const
{
    return m_migrateObject;
}

void MigrateOption::SetMigrateObject(const int64_t& _migrateObject)
{
    m_migrateObject = _migrateObject;
    m_migrateObjectHasBeenSet = true;
}

bool MigrateOption::MigrateObjectHasBeenSet() const
{
    return m_migrateObjectHasBeenSet;
}

int64_t MigrateOption::GetConsistencyType() const
{
    return m_consistencyType;
}

void MigrateOption::SetConsistencyType(const int64_t& _consistencyType)
{
    m_consistencyType = _consistencyType;
    m_consistencyTypeHasBeenSet = true;
}

bool MigrateOption::ConsistencyTypeHasBeenSet() const
{
    return m_consistencyTypeHasBeenSet;
}

int64_t MigrateOption::GetIsOverrideRoot() const
{
    return m_isOverrideRoot;
}

void MigrateOption::SetIsOverrideRoot(const int64_t& _isOverrideRoot)
{
    m_isOverrideRoot = _isOverrideRoot;
    m_isOverrideRootHasBeenSet = true;
}

bool MigrateOption::IsOverrideRootHasBeenSet() const
{
    return m_isOverrideRootHasBeenSet;
}

string MigrateOption::GetExternParams() const
{
    return m_externParams;
}

void MigrateOption::SetExternParams(const string& _externParams)
{
    m_externParams = _externParams;
    m_externParamsHasBeenSet = true;
}

bool MigrateOption::ExternParamsHasBeenSet() const
{
    return m_externParamsHasBeenSet;
}

ConsistencyParams MigrateOption::GetConsistencyParams() const
{
    return m_consistencyParams;
}

void MigrateOption::SetConsistencyParams(const ConsistencyParams& _consistencyParams)
{
    m_consistencyParams = _consistencyParams;
    m_consistencyParamsHasBeenSet = true;
}

bool MigrateOption::ConsistencyParamsHasBeenSet() const
{
    return m_consistencyParamsHasBeenSet;
}

