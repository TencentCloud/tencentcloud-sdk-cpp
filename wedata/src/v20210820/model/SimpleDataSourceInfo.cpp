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

#include <tencentcloud/wedata/v20210820/model/SimpleDataSourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SimpleDataSourceInfo::SimpleDataSourceInfo() :
    m_databaseNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_displayHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_ownerProjectIdHasBeenSet(false),
    m_ownerProjectNameHasBeenSet(false),
    m_ownerProjectIdentHasBeenSet(false),
    m_editHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_deliverHasBeenSet(false),
    m_dataSourceStatusHasBeenSet(false),
    m_authorityProjectNameHasBeenSet(false),
    m_authorityUserNameHasBeenSet(false)
{
}

CoreInternalOutcome SimpleDataSourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Instance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instance = string(value["Instance"].GetString());
        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Display") && !value["Display"].IsNull())
    {
        if (!value["Display"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Display` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_display = string(value["Display"].GetString());
        m_displayHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccount") && !value["OwnerAccount"].IsNull())
    {
        if (!value["OwnerAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.OwnerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccount = string(value["OwnerAccount"].GetString());
        m_ownerAccountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerProjectId") && !value["OwnerProjectId"].IsNull())
    {
        if (!value["OwnerProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.OwnerProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerProjectId = string(value["OwnerProjectId"].GetString());
        m_ownerProjectIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerProjectName") && !value["OwnerProjectName"].IsNull())
    {
        if (!value["OwnerProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.OwnerProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerProjectName = string(value["OwnerProjectName"].GetString());
        m_ownerProjectNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerProjectIdent") && !value["OwnerProjectIdent"].IsNull())
    {
        if (!value["OwnerProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.OwnerProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerProjectIdent = string(value["OwnerProjectIdent"].GetString());
        m_ownerProjectIdentHasBeenSet = true;
    }

    if (value.HasMember("Edit") && !value["Edit"].IsNull())
    {
        if (!value["Edit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Edit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_edit = value["Edit"].GetBool();
        m_editHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Author` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_author = value["Author"].GetBool();
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("Deliver") && !value["Deliver"].IsNull())
    {
        if (!value["Deliver"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.Deliver` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deliver = value["Deliver"].GetBool();
        m_deliverHasBeenSet = true;
    }

    if (value.HasMember("DataSourceStatus") && !value["DataSourceStatus"].IsNull())
    {
        if (!value["DataSourceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.DataSourceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceStatus = string(value["DataSourceStatus"].GetString());
        m_dataSourceStatusHasBeenSet = true;
    }

    if (value.HasMember("AuthorityProjectName") && !value["AuthorityProjectName"].IsNull())
    {
        if (!value["AuthorityProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.AuthorityProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorityProjectName = string(value["AuthorityProjectName"].GetString());
        m_authorityProjectNameHasBeenSet = true;
    }

    if (value.HasMember("AuthorityUserName") && !value["AuthorityUserName"].IsNull())
    {
        if (!value["AuthorityUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleDataSourceInfo.AuthorityUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorityUserName = string(value["AuthorityUserName"].GetString());
        m_authorityUserNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimpleDataSourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_displayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Display";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_display.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerProjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerProjectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerProjectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_editHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edit, allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_author, allocator);
    }

    if (m_deliverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deliver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliver, allocator);
    }

    if (m_dataSourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorityProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorityProjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorityUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorityUserName.c_str(), allocator).Move(), allocator);
    }

}


string SimpleDataSourceInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void SimpleDataSourceInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool SimpleDataSourceInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string SimpleDataSourceInfo::GetDescription() const
{
    return m_description;
}

void SimpleDataSourceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SimpleDataSourceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t SimpleDataSourceInfo::GetID() const
{
    return m_iD;
}

void SimpleDataSourceInfo::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool SimpleDataSourceInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string SimpleDataSourceInfo::GetInstance() const
{
    return m_instance;
}

void SimpleDataSourceInfo::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool SimpleDataSourceInfo::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string SimpleDataSourceInfo::GetName() const
{
    return m_name;
}

void SimpleDataSourceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SimpleDataSourceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SimpleDataSourceInfo::GetRegion() const
{
    return m_region;
}

void SimpleDataSourceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SimpleDataSourceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SimpleDataSourceInfo::GetType() const
{
    return m_type;
}

void SimpleDataSourceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SimpleDataSourceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SimpleDataSourceInfo::GetClusterId() const
{
    return m_clusterId;
}

void SimpleDataSourceInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool SimpleDataSourceInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t SimpleDataSourceInfo::GetAppId() const
{
    return m_appId;
}

void SimpleDataSourceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool SimpleDataSourceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string SimpleDataSourceInfo::GetCategory() const
{
    return m_category;
}

void SimpleDataSourceInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool SimpleDataSourceInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string SimpleDataSourceInfo::GetDisplay() const
{
    return m_display;
}

void SimpleDataSourceInfo::SetDisplay(const string& _display)
{
    m_display = _display;
    m_displayHasBeenSet = true;
}

bool SimpleDataSourceInfo::DisplayHasBeenSet() const
{
    return m_displayHasBeenSet;
}

string SimpleDataSourceInfo::GetOwnerAccount() const
{
    return m_ownerAccount;
}

void SimpleDataSourceInfo::SetOwnerAccount(const string& _ownerAccount)
{
    m_ownerAccount = _ownerAccount;
    m_ownerAccountHasBeenSet = true;
}

bool SimpleDataSourceInfo::OwnerAccountHasBeenSet() const
{
    return m_ownerAccountHasBeenSet;
}

uint64_t SimpleDataSourceInfo::GetStatus() const
{
    return m_status;
}

void SimpleDataSourceInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SimpleDataSourceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SimpleDataSourceInfo::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void SimpleDataSourceInfo::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool SimpleDataSourceInfo::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

string SimpleDataSourceInfo::GetClusterName() const
{
    return m_clusterName;
}

void SimpleDataSourceInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool SimpleDataSourceInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string SimpleDataSourceInfo::GetOwnerProjectId() const
{
    return m_ownerProjectId;
}

void SimpleDataSourceInfo::SetOwnerProjectId(const string& _ownerProjectId)
{
    m_ownerProjectId = _ownerProjectId;
    m_ownerProjectIdHasBeenSet = true;
}

bool SimpleDataSourceInfo::OwnerProjectIdHasBeenSet() const
{
    return m_ownerProjectIdHasBeenSet;
}

string SimpleDataSourceInfo::GetOwnerProjectName() const
{
    return m_ownerProjectName;
}

void SimpleDataSourceInfo::SetOwnerProjectName(const string& _ownerProjectName)
{
    m_ownerProjectName = _ownerProjectName;
    m_ownerProjectNameHasBeenSet = true;
}

bool SimpleDataSourceInfo::OwnerProjectNameHasBeenSet() const
{
    return m_ownerProjectNameHasBeenSet;
}

string SimpleDataSourceInfo::GetOwnerProjectIdent() const
{
    return m_ownerProjectIdent;
}

void SimpleDataSourceInfo::SetOwnerProjectIdent(const string& _ownerProjectIdent)
{
    m_ownerProjectIdent = _ownerProjectIdent;
    m_ownerProjectIdentHasBeenSet = true;
}

bool SimpleDataSourceInfo::OwnerProjectIdentHasBeenSet() const
{
    return m_ownerProjectIdentHasBeenSet;
}

bool SimpleDataSourceInfo::GetEdit() const
{
    return m_edit;
}

void SimpleDataSourceInfo::SetEdit(const bool& _edit)
{
    m_edit = _edit;
    m_editHasBeenSet = true;
}

bool SimpleDataSourceInfo::EditHasBeenSet() const
{
    return m_editHasBeenSet;
}

bool SimpleDataSourceInfo::GetAuthor() const
{
    return m_author;
}

void SimpleDataSourceInfo::SetAuthor(const bool& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool SimpleDataSourceInfo::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

bool SimpleDataSourceInfo::GetDeliver() const
{
    return m_deliver;
}

void SimpleDataSourceInfo::SetDeliver(const bool& _deliver)
{
    m_deliver = _deliver;
    m_deliverHasBeenSet = true;
}

bool SimpleDataSourceInfo::DeliverHasBeenSet() const
{
    return m_deliverHasBeenSet;
}

string SimpleDataSourceInfo::GetDataSourceStatus() const
{
    return m_dataSourceStatus;
}

void SimpleDataSourceInfo::SetDataSourceStatus(const string& _dataSourceStatus)
{
    m_dataSourceStatus = _dataSourceStatus;
    m_dataSourceStatusHasBeenSet = true;
}

bool SimpleDataSourceInfo::DataSourceStatusHasBeenSet() const
{
    return m_dataSourceStatusHasBeenSet;
}

string SimpleDataSourceInfo::GetAuthorityProjectName() const
{
    return m_authorityProjectName;
}

void SimpleDataSourceInfo::SetAuthorityProjectName(const string& _authorityProjectName)
{
    m_authorityProjectName = _authorityProjectName;
    m_authorityProjectNameHasBeenSet = true;
}

bool SimpleDataSourceInfo::AuthorityProjectNameHasBeenSet() const
{
    return m_authorityProjectNameHasBeenSet;
}

string SimpleDataSourceInfo::GetAuthorityUserName() const
{
    return m_authorityUserName;
}

void SimpleDataSourceInfo::SetAuthorityUserName(const string& _authorityUserName)
{
    m_authorityUserName = _authorityUserName;
    m_authorityUserNameHasBeenSet = true;
}

bool SimpleDataSourceInfo::AuthorityUserNameHasBeenSet() const
{
    return m_authorityUserNameHasBeenSet;
}

