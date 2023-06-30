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

#include <tencentcloud/tcb/v20180608/model/EnvInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

EnvInfo::EnvInfo() :
    m_envIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_databasesHasBeenSet(false),
    m_storagesHasBeenSet(false),
    m_functionsHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_logServicesHasBeenSet(false),
    m_staticStoragesHasBeenSet(false),
    m_isAutoDegradeHasBeenSet(false),
    m_envChannelHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_customLogServicesHasBeenSet(false),
    m_envTypeHasBeenSet(false),
    m_isDauPackageHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_architectureTypeHasBeenSet(false),
    m_recycleHasBeenSet(false)
{
}

CoreInternalOutcome EnvInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Databases") && !value["Databases"].IsNull())
    {
        if (!value["Databases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnvInfo.Databases` is not array type"));

        const rapidjson::Value &tmpValue = value["Databases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatabasesInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_databases.push_back(item);
        }
        m_databasesHasBeenSet = true;
    }

    if (value.HasMember("Storages") && !value["Storages"].IsNull())
    {
        if (!value["Storages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnvInfo.Storages` is not array type"));

        const rapidjson::Value &tmpValue = value["Storages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storages.push_back(item);
        }
        m_storagesHasBeenSet = true;
    }

    if (value.HasMember("Functions") && !value["Functions"].IsNull())
    {
        if (!value["Functions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnvInfo.Functions` is not array type"));

        const rapidjson::Value &tmpValue = value["Functions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FunctionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_functions.push_back(item);
        }
        m_functionsHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("LogServices") && !value["LogServices"].IsNull())
    {
        if (!value["LogServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnvInfo.LogServices` is not array type"));

        const rapidjson::Value &tmpValue = value["LogServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogServiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logServices.push_back(item);
        }
        m_logServicesHasBeenSet = true;
    }

    if (value.HasMember("StaticStorages") && !value["StaticStorages"].IsNull())
    {
        if (!value["StaticStorages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnvInfo.StaticStorages` is not array type"));

        const rapidjson::Value &tmpValue = value["StaticStorages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StaticStorageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_staticStorages.push_back(item);
        }
        m_staticStoragesHasBeenSet = true;
    }

    if (value.HasMember("IsAutoDegrade") && !value["IsAutoDegrade"].IsNull())
    {
        if (!value["IsAutoDegrade"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.IsAutoDegrade` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoDegrade = value["IsAutoDegrade"].GetBool();
        m_isAutoDegradeHasBeenSet = true;
    }

    if (value.HasMember("EnvChannel") && !value["EnvChannel"].IsNull())
    {
        if (!value["EnvChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.EnvChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envChannel = string(value["EnvChannel"].GetString());
        m_envChannelHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnvInfo.Tags` is not array type"));

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

    if (value.HasMember("CustomLogServices") && !value["CustomLogServices"].IsNull())
    {
        if (!value["CustomLogServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnvInfo.CustomLogServices` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomLogServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customLogServices.push_back(item);
        }
        m_customLogServicesHasBeenSet = true;
    }

    if (value.HasMember("EnvType") && !value["EnvType"].IsNull())
    {
        if (!value["EnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(value["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (value.HasMember("IsDauPackage") && !value["IsDauPackage"].IsNull())
    {
        if (!value["IsDauPackage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.IsDauPackage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDauPackage = value["IsDauPackage"].GetBool();
        m_isDauPackageHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("ArchitectureType") && !value["ArchitectureType"].IsNull())
    {
        if (!value["ArchitectureType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.ArchitectureType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architectureType = string(value["ArchitectureType"].GetString());
        m_architectureTypeHasBeenSet = true;
    }

    if (value.HasMember("Recycle") && !value["Recycle"].IsNull())
    {
        if (!value["Recycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.Recycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recycle = string(value["Recycle"].GetString());
        m_recycleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_databasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Databases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databases.begin(); itr != m_databases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storages.begin(); itr != m_storages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_functionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Functions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_functions.begin(); itr != m_functions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_logServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logServices.begin(); itr != m_logServices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_staticStoragesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticStorages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_staticStorages.begin(); itr != m_staticStorages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isAutoDegradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoDegrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoDegrade, allocator);
    }

    if (m_envChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_customLogServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomLogServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customLogServices.begin(); itr != m_customLogServices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_isDauPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDauPackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDauPackage, allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_architectureTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchitectureType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architectureType.c_str(), allocator).Move(), allocator);
    }

    if (m_recycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recycle.c_str(), allocator).Move(), allocator);
    }

}


string EnvInfo::GetEnvId() const
{
    return m_envId;
}

void EnvInfo::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool EnvInfo::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string EnvInfo::GetSource() const
{
    return m_source;
}

void EnvInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool EnvInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string EnvInfo::GetAlias() const
{
    return m_alias;
}

void EnvInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool EnvInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string EnvInfo::GetCreateTime() const
{
    return m_createTime;
}

void EnvInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EnvInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string EnvInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void EnvInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool EnvInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string EnvInfo::GetStatus() const
{
    return m_status;
}

void EnvInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EnvInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<DatabasesInfo> EnvInfo::GetDatabases() const
{
    return m_databases;
}

void EnvInfo::SetDatabases(const vector<DatabasesInfo>& _databases)
{
    m_databases = _databases;
    m_databasesHasBeenSet = true;
}

bool EnvInfo::DatabasesHasBeenSet() const
{
    return m_databasesHasBeenSet;
}

vector<StorageInfo> EnvInfo::GetStorages() const
{
    return m_storages;
}

void EnvInfo::SetStorages(const vector<StorageInfo>& _storages)
{
    m_storages = _storages;
    m_storagesHasBeenSet = true;
}

bool EnvInfo::StoragesHasBeenSet() const
{
    return m_storagesHasBeenSet;
}

vector<FunctionInfo> EnvInfo::GetFunctions() const
{
    return m_functions;
}

void EnvInfo::SetFunctions(const vector<FunctionInfo>& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool EnvInfo::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

string EnvInfo::GetPackageId() const
{
    return m_packageId;
}

void EnvInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool EnvInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string EnvInfo::GetPackageName() const
{
    return m_packageName;
}

void EnvInfo::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool EnvInfo::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

vector<LogServiceInfo> EnvInfo::GetLogServices() const
{
    return m_logServices;
}

void EnvInfo::SetLogServices(const vector<LogServiceInfo>& _logServices)
{
    m_logServices = _logServices;
    m_logServicesHasBeenSet = true;
}

bool EnvInfo::LogServicesHasBeenSet() const
{
    return m_logServicesHasBeenSet;
}

vector<StaticStorageInfo> EnvInfo::GetStaticStorages() const
{
    return m_staticStorages;
}

void EnvInfo::SetStaticStorages(const vector<StaticStorageInfo>& _staticStorages)
{
    m_staticStorages = _staticStorages;
    m_staticStoragesHasBeenSet = true;
}

bool EnvInfo::StaticStoragesHasBeenSet() const
{
    return m_staticStoragesHasBeenSet;
}

bool EnvInfo::GetIsAutoDegrade() const
{
    return m_isAutoDegrade;
}

void EnvInfo::SetIsAutoDegrade(const bool& _isAutoDegrade)
{
    m_isAutoDegrade = _isAutoDegrade;
    m_isAutoDegradeHasBeenSet = true;
}

bool EnvInfo::IsAutoDegradeHasBeenSet() const
{
    return m_isAutoDegradeHasBeenSet;
}

string EnvInfo::GetEnvChannel() const
{
    return m_envChannel;
}

void EnvInfo::SetEnvChannel(const string& _envChannel)
{
    m_envChannel = _envChannel;
    m_envChannelHasBeenSet = true;
}

bool EnvInfo::EnvChannelHasBeenSet() const
{
    return m_envChannelHasBeenSet;
}

string EnvInfo::GetPayMode() const
{
    return m_payMode;
}

void EnvInfo::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool EnvInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

bool EnvInfo::GetIsDefault() const
{
    return m_isDefault;
}

void EnvInfo::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool EnvInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string EnvInfo::GetRegion() const
{
    return m_region;
}

void EnvInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool EnvInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<Tag> EnvInfo::GetTags() const
{
    return m_tags;
}

void EnvInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool EnvInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<ClsInfo> EnvInfo::GetCustomLogServices() const
{
    return m_customLogServices;
}

void EnvInfo::SetCustomLogServices(const vector<ClsInfo>& _customLogServices)
{
    m_customLogServices = _customLogServices;
    m_customLogServicesHasBeenSet = true;
}

bool EnvInfo::CustomLogServicesHasBeenSet() const
{
    return m_customLogServicesHasBeenSet;
}

string EnvInfo::GetEnvType() const
{
    return m_envType;
}

void EnvInfo::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool EnvInfo::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

bool EnvInfo::GetIsDauPackage() const
{
    return m_isDauPackage;
}

void EnvInfo::SetIsDauPackage(const bool& _isDauPackage)
{
    m_isDauPackage = _isDauPackage;
    m_isDauPackageHasBeenSet = true;
}

bool EnvInfo::IsDauPackageHasBeenSet() const
{
    return m_isDauPackageHasBeenSet;
}

string EnvInfo::GetPackageType() const
{
    return m_packageType;
}

void EnvInfo::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool EnvInfo::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string EnvInfo::GetArchitectureType() const
{
    return m_architectureType;
}

void EnvInfo::SetArchitectureType(const string& _architectureType)
{
    m_architectureType = _architectureType;
    m_architectureTypeHasBeenSet = true;
}

bool EnvInfo::ArchitectureTypeHasBeenSet() const
{
    return m_architectureTypeHasBeenSet;
}

string EnvInfo::GetRecycle() const
{
    return m_recycle;
}

void EnvInfo::SetRecycle(const string& _recycle)
{
    m_recycle = _recycle;
    m_recycleHasBeenSet = true;
}

bool EnvInfo::RecycleHasBeenSet() const
{
    return m_recycleHasBeenSet;
}

