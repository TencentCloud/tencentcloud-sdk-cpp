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
using namespace rapidjson;
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
    m_packageNameHasBeenSet(false)
{
}

CoreInternalOutcome EnvInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Databases") && !value["Databases"].IsNull())
    {
        if (!value["Databases"].IsArray())
            return CoreInternalOutcome(Error("response `EnvInfo.Databases` is not array type"));

        const Value &tmpValue = value["Databases"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `EnvInfo.Storages` is not array type"));

        const Value &tmpValue = value["Storages"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `EnvInfo.Functions` is not array type"));

        const Value &tmpValue = value["Functions"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `EnvInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_envIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_databasesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Databases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databases.begin(); itr != m_databases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storagesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Storages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storages.begin(); itr != m_storages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_functionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Functions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_functions.begin(); itr != m_functions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_packageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_packageName.c_str(), allocator).Move(), allocator);
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

