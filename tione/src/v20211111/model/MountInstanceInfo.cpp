/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tione/v20211111/model/MountInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

MountInstanceInfo::MountInstanceInfo() :
    m_typeHasBeenSet(false),
    m_storageIdHasBeenSet(false),
    m_storageNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_extraConfHasBeenSet(false)
{
}

CoreInternalOutcome MountInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInstanceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("StorageId") && !value["StorageId"].IsNull())
    {
        if (!value["StorageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInstanceInfo.StorageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageId = string(value["StorageId"].GetString());
        m_storageIdHasBeenSet = true;
    }

    if (value.HasMember("StorageName") && !value["StorageName"].IsNull())
    {
        if (!value["StorageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInstanceInfo.StorageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageName = string(value["StorageName"].GetString());
        m_storageNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MountInstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExtraConf") && !value["ExtraConf"].IsNull())
    {
        if (!value["ExtraConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MountInstanceInfo.ExtraConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraConf.Deserialize(value["ExtraConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraConfHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MountInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_storageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_extraConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraConf.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MountInstanceInfo::GetType() const
{
    return m_type;
}

void MountInstanceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MountInstanceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MountInstanceInfo::GetStorageId() const
{
    return m_storageId;
}

void MountInstanceInfo::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool MountInstanceInfo::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

string MountInstanceInfo::GetStorageName() const
{
    return m_storageName;
}

void MountInstanceInfo::SetStorageName(const string& _storageName)
{
    m_storageName = _storageName;
    m_storageNameHasBeenSet = true;
}

bool MountInstanceInfo::StorageNameHasBeenSet() const
{
    return m_storageNameHasBeenSet;
}

int64_t MountInstanceInfo::GetStatus() const
{
    return m_status;
}

void MountInstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MountInstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

StorageExtraConf MountInstanceInfo::GetExtraConf() const
{
    return m_extraConf;
}

void MountInstanceInfo::SetExtraConf(const StorageExtraConf& _extraConf)
{
    m_extraConf = _extraConf;
    m_extraConfHasBeenSet = true;
}

bool MountInstanceInfo::ExtraConfHasBeenSet() const
{
    return m_extraConfHasBeenSet;
}

