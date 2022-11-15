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

#include <tencentcloud/eis/v20210601/model/RuntimeExtensionMC.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

RuntimeExtensionMC::RuntimeExtensionMC() :
    m_typeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_replicaHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome RuntimeExtensionMC::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeExtensionMC.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeExtensionMC.Size` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetDouble();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Replica") && !value["Replica"].IsNull())
    {
        if (!value["Replica"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeExtensionMC.Replica` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replica = value["Replica"].GetInt64();
        m_replicaHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeExtensionMC.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeExtensionMC.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeExtensionMC.CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeExtensionMC.UpdatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = value["UpdatedAt"].GetInt64();
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuntimeExtensionMC::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_replicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replica, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedAt, allocator);
    }

}


int64_t RuntimeExtensionMC::GetType() const
{
    return m_type;
}

void RuntimeExtensionMC::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RuntimeExtensionMC::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double RuntimeExtensionMC::GetSize() const
{
    return m_size;
}

void RuntimeExtensionMC::SetSize(const double& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool RuntimeExtensionMC::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t RuntimeExtensionMC::GetReplica() const
{
    return m_replica;
}

void RuntimeExtensionMC::SetReplica(const int64_t& _replica)
{
    m_replica = _replica;
    m_replicaHasBeenSet = true;
}

bool RuntimeExtensionMC::ReplicaHasBeenSet() const
{
    return m_replicaHasBeenSet;
}

string RuntimeExtensionMC::GetName() const
{
    return m_name;
}

void RuntimeExtensionMC::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuntimeExtensionMC::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t RuntimeExtensionMC::GetStatus() const
{
    return m_status;
}

void RuntimeExtensionMC::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RuntimeExtensionMC::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RuntimeExtensionMC::GetCreatedAt() const
{
    return m_createdAt;
}

void RuntimeExtensionMC::SetCreatedAt(const int64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool RuntimeExtensionMC::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t RuntimeExtensionMC::GetUpdatedAt() const
{
    return m_updatedAt;
}

void RuntimeExtensionMC::SetUpdatedAt(const int64_t& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool RuntimeExtensionMC::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

