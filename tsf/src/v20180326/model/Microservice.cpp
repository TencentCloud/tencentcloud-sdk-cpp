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

#include <tencentcloud/tsf/v20180326/model/Microservice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

Microservice::Microservice() :
    m_microserviceIdHasBeenSet(false),
    m_microserviceNameHasBeenSet(false),
    m_microserviceDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_runInstanceCountHasBeenSet(false)
{
}

CoreInternalOutcome Microservice::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MicroserviceId") && !value["MicroserviceId"].IsNull())
    {
        if (!value["MicroserviceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Microservice.MicroserviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceId = string(value["MicroserviceId"].GetString());
        m_microserviceIdHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceName") && !value["MicroserviceName"].IsNull())
    {
        if (!value["MicroserviceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Microservice.MicroserviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceName = string(value["MicroserviceName"].GetString());
        m_microserviceNameHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceDesc") && !value["MicroserviceDesc"].IsNull())
    {
        if (!value["MicroserviceDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `Microservice.MicroserviceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceDesc = string(value["MicroserviceDesc"].GetString());
        m_microserviceDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Microservice.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Microservice.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Microservice.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("RunInstanceCount") && !value["RunInstanceCount"].IsNull())
    {
        if (!value["RunInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Microservice.RunInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runInstanceCount = value["RunInstanceCount"].GetInt64();
        m_runInstanceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Microservice::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_microserviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MicroserviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_microserviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MicroserviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_microserviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MicroserviceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_microserviceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_runInstanceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RunInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runInstanceCount, allocator);
    }

}


string Microservice::GetMicroserviceId() const
{
    return m_microserviceId;
}

void Microservice::SetMicroserviceId(const string& _microserviceId)
{
    m_microserviceId = _microserviceId;
    m_microserviceIdHasBeenSet = true;
}

bool Microservice::MicroserviceIdHasBeenSet() const
{
    return m_microserviceIdHasBeenSet;
}

string Microservice::GetMicroserviceName() const
{
    return m_microserviceName;
}

void Microservice::SetMicroserviceName(const string& _microserviceName)
{
    m_microserviceName = _microserviceName;
    m_microserviceNameHasBeenSet = true;
}

bool Microservice::MicroserviceNameHasBeenSet() const
{
    return m_microserviceNameHasBeenSet;
}

string Microservice::GetMicroserviceDesc() const
{
    return m_microserviceDesc;
}

void Microservice::SetMicroserviceDesc(const string& _microserviceDesc)
{
    m_microserviceDesc = _microserviceDesc;
    m_microserviceDescHasBeenSet = true;
}

bool Microservice::MicroserviceDescHasBeenSet() const
{
    return m_microserviceDescHasBeenSet;
}

int64_t Microservice::GetCreateTime() const
{
    return m_createTime;
}

void Microservice::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Microservice::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Microservice::GetUpdateTime() const
{
    return m_updateTime;
}

void Microservice::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Microservice::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Microservice::GetNamespaceId() const
{
    return m_namespaceId;
}

void Microservice::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool Microservice::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

int64_t Microservice::GetRunInstanceCount() const
{
    return m_runInstanceCount;
}

void Microservice::SetRunInstanceCount(const int64_t& _runInstanceCount)
{
    m_runInstanceCount = _runInstanceCount;
    m_runInstanceCountHasBeenSet = true;
}

bool Microservice::RunInstanceCountHasBeenSet() const
{
    return m_runInstanceCountHasBeenSet;
}

