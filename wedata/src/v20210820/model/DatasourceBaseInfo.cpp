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

#include <tencentcloud/wedata/v20210820/model/DatasourceBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DatasourceBaseInfo::DatasourceBaseInfo() :
    m_databaseNamesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_paramsStringHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
}

CoreInternalOutcome DatasourceBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseNames") && !value["DatabaseNames"].IsNull())
    {
        if (!value["DatabaseNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.DatabaseNames` is not array type"));

        const rapidjson::Value &tmpValue = value["DatabaseNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_databaseNames.push_back((*itr).GetString());
        }
        m_databaseNamesHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.Instance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instance = string(value["Instance"].GetString());
        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ParamsString") && !value["ParamsString"].IsNull())
    {
        if (!value["ParamsString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.ParamsString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramsString = string(value["ParamsString"].GetString());
        m_paramsStringHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceBaseInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatasourceBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_databaseNames.begin(); itr != m_databaseNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instance.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamsString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramsString.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

}


vector<string> DatasourceBaseInfo::GetDatabaseNames() const
{
    return m_databaseNames;
}

void DatasourceBaseInfo::SetDatabaseNames(const vector<string>& _databaseNames)
{
    m_databaseNames = _databaseNames;
    m_databaseNamesHasBeenSet = true;
}

bool DatasourceBaseInfo::DatabaseNamesHasBeenSet() const
{
    return m_databaseNamesHasBeenSet;
}

string DatasourceBaseInfo::GetDescription() const
{
    return m_description;
}

void DatasourceBaseInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DatasourceBaseInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DatasourceBaseInfo::GetID() const
{
    return m_iD;
}

void DatasourceBaseInfo::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DatasourceBaseInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DatasourceBaseInfo::GetInstance() const
{
    return m_instance;
}

void DatasourceBaseInfo::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool DatasourceBaseInfo::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string DatasourceBaseInfo::GetName() const
{
    return m_name;
}

void DatasourceBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DatasourceBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DatasourceBaseInfo::GetRegion() const
{
    return m_region;
}

void DatasourceBaseInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DatasourceBaseInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DatasourceBaseInfo::GetType() const
{
    return m_type;
}

void DatasourceBaseInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DatasourceBaseInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DatasourceBaseInfo::GetClusterId() const
{
    return m_clusterId;
}

void DatasourceBaseInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DatasourceBaseInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DatasourceBaseInfo::GetVersion() const
{
    return m_version;
}

void DatasourceBaseInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DatasourceBaseInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DatasourceBaseInfo::GetParamsString() const
{
    return m_paramsString;
}

void DatasourceBaseInfo::SetParamsString(const string& _paramsString)
{
    m_paramsString = _paramsString;
    m_paramsStringHasBeenSet = true;
}

bool DatasourceBaseInfo::ParamsStringHasBeenSet() const
{
    return m_paramsStringHasBeenSet;
}

string DatasourceBaseInfo::GetCategory() const
{
    return m_category;
}

void DatasourceBaseInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DatasourceBaseInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

