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

#include <tencentcloud/tione/v20211111/model/DataSourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DataSourceInfo::DataSourceInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_creatorNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_storageIdHasBeenSet(false),
    m_storageNameHasBeenSet(false),
    m_mountConfigureHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_limitMountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_extraConfHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatorName") && !value["CreatorName"].IsNull())
    {
        if (!value["CreatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.CreatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorName = string(value["CreatorName"].GetString());
        m_creatorNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("StorageId") && !value["StorageId"].IsNull())
    {
        if (!value["StorageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.StorageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageId = string(value["StorageId"].GetString());
        m_storageIdHasBeenSet = true;
    }

    if (value.HasMember("StorageName") && !value["StorageName"].IsNull())
    {
        if (!value["StorageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.StorageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageName = string(value["StorageName"].GetString());
        m_storageNameHasBeenSet = true;
    }

    if (value.HasMember("MountConfigure") && !value["MountConfigure"].IsNull())
    {
        if (!value["MountConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.MountConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mountConfigure.Deserialize(value["MountConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mountConfigureHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LimitMount") && !value["LimitMount"].IsNull())
    {
        if (!value["LimitMount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.LimitMount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_limitMount = value["LimitMount"].GetBool();
        m_limitMountHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ExtraConf") && !value["ExtraConf"].IsNull())
    {
        if (!value["ExtraConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.ExtraConf` is not object type").SetRequestId(requestId));
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

void DataSourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
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

    if (m_mountConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mountConfigure.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_limitMountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitMount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitMount, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DataSourceInfo::GetId() const
{
    return m_id;
}

void DataSourceInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DataSourceInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DataSourceInfo::GetName() const
{
    return m_name;
}

void DataSourceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DataSourceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DataSourceInfo::GetCreator() const
{
    return m_creator;
}

void DataSourceInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool DataSourceInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string DataSourceInfo::GetCreatorName() const
{
    return m_creatorName;
}

void DataSourceInfo::SetCreatorName(const string& _creatorName)
{
    m_creatorName = _creatorName;
    m_creatorNameHasBeenSet = true;
}

bool DataSourceInfo::CreatorNameHasBeenSet() const
{
    return m_creatorNameHasBeenSet;
}

string DataSourceInfo::GetType() const
{
    return m_type;
}

void DataSourceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DataSourceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DataSourceInfo::GetPermission() const
{
    return m_permission;
}

void DataSourceInfo::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool DataSourceInfo::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string DataSourceInfo::GetStorageId() const
{
    return m_storageId;
}

void DataSourceInfo::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool DataSourceInfo::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

string DataSourceInfo::GetStorageName() const
{
    return m_storageName;
}

void DataSourceInfo::SetStorageName(const string& _storageName)
{
    m_storageName = _storageName;
    m_storageNameHasBeenSet = true;
}

bool DataSourceInfo::StorageNameHasBeenSet() const
{
    return m_storageNameHasBeenSet;
}

MountConfigureInfo DataSourceInfo::GetMountConfigure() const
{
    return m_mountConfigure;
}

void DataSourceInfo::SetMountConfigure(const MountConfigureInfo& _mountConfigure)
{
    m_mountConfigure = _mountConfigure;
    m_mountConfigureHasBeenSet = true;
}

bool DataSourceInfo::MountConfigureHasBeenSet() const
{
    return m_mountConfigureHasBeenSet;
}

string DataSourceInfo::GetCreateTime() const
{
    return m_createTime;
}

void DataSourceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataSourceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DataSourceInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DataSourceInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DataSourceInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool DataSourceInfo::GetLimitMount() const
{
    return m_limitMount;
}

void DataSourceInfo::SetLimitMount(const bool& _limitMount)
{
    m_limitMount = _limitMount;
    m_limitMountHasBeenSet = true;
}

bool DataSourceInfo::LimitMountHasBeenSet() const
{
    return m_limitMountHasBeenSet;
}

vector<Tag> DataSourceInfo::GetTags() const
{
    return m_tags;
}

void DataSourceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DataSourceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

StorageExtraConf DataSourceInfo::GetExtraConf() const
{
    return m_extraConf;
}

void DataSourceInfo::SetExtraConf(const StorageExtraConf& _extraConf)
{
    m_extraConf = _extraConf;
    m_extraConfHasBeenSet = true;
}

bool DataSourceInfo::ExtraConfHasBeenSet() const
{
    return m_extraConfHasBeenSet;
}

