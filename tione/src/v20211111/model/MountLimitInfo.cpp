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

#include <tencentcloud/tione/v20211111/model/MountLimitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

MountLimitInfo::MountLimitInfo() :
    m_typeHasBeenSet(false),
    m_storageIdHasBeenSet(false),
    m_storageNameHasBeenSet(false),
    m_limitMountHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_creatorNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_extraConfHasBeenSet(false)
{
}

CoreInternalOutcome MountLimitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountLimitInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("StorageId") && !value["StorageId"].IsNull())
    {
        if (!value["StorageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountLimitInfo.StorageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageId = string(value["StorageId"].GetString());
        m_storageIdHasBeenSet = true;
    }

    if (value.HasMember("StorageName") && !value["StorageName"].IsNull())
    {
        if (!value["StorageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountLimitInfo.StorageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageName = string(value["StorageName"].GetString());
        m_storageNameHasBeenSet = true;
    }

    if (value.HasMember("LimitMount") && !value["LimitMount"].IsNull())
    {
        if (!value["LimitMount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MountLimitInfo.LimitMount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_limitMount = value["LimitMount"].GetBool();
        m_limitMountHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountLimitInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatorName") && !value["CreatorName"].IsNull())
    {
        if (!value["CreatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountLimitInfo.CreatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorName = string(value["CreatorName"].GetString());
        m_creatorNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountLimitInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountLimitInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExtraConf") && !value["ExtraConf"].IsNull())
    {
        if (!value["ExtraConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MountLimitInfo.ExtraConf` is not object type").SetRequestId(requestId));
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

void MountLimitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_limitMountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitMount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitMount, allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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


string MountLimitInfo::GetType() const
{
    return m_type;
}

void MountLimitInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MountLimitInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MountLimitInfo::GetStorageId() const
{
    return m_storageId;
}

void MountLimitInfo::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool MountLimitInfo::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

string MountLimitInfo::GetStorageName() const
{
    return m_storageName;
}

void MountLimitInfo::SetStorageName(const string& _storageName)
{
    m_storageName = _storageName;
    m_storageNameHasBeenSet = true;
}

bool MountLimitInfo::StorageNameHasBeenSet() const
{
    return m_storageNameHasBeenSet;
}

bool MountLimitInfo::GetLimitMount() const
{
    return m_limitMount;
}

void MountLimitInfo::SetLimitMount(const bool& _limitMount)
{
    m_limitMount = _limitMount;
    m_limitMountHasBeenSet = true;
}

bool MountLimitInfo::LimitMountHasBeenSet() const
{
    return m_limitMountHasBeenSet;
}

string MountLimitInfo::GetCreator() const
{
    return m_creator;
}

void MountLimitInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool MountLimitInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string MountLimitInfo::GetCreatorName() const
{
    return m_creatorName;
}

void MountLimitInfo::SetCreatorName(const string& _creatorName)
{
    m_creatorName = _creatorName;
    m_creatorNameHasBeenSet = true;
}

bool MountLimitInfo::CreatorNameHasBeenSet() const
{
    return m_creatorNameHasBeenSet;
}

string MountLimitInfo::GetCreateTime() const
{
    return m_createTime;
}

void MountLimitInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MountLimitInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MountLimitInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void MountLimitInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MountLimitInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

StorageExtraConf MountLimitInfo::GetExtraConf() const
{
    return m_extraConf;
}

void MountLimitInfo::SetExtraConf(const StorageExtraConf& _extraConf)
{
    m_extraConf = _extraConf;
    m_extraConfHasBeenSet = true;
}

bool MountLimitInfo::ExtraConfHasBeenSet() const
{
    return m_extraConfHasBeenSet;
}

