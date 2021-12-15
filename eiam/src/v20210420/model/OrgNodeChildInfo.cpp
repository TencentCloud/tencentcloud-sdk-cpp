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

#include <tencentcloud/eiam/v20210420/model/OrgNodeChildInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

OrgNodeChildInfo::OrgNodeChildInfo() :
    m_displayNameHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_customizedOrgNodeIdHasBeenSet(false),
    m_parentOrgNodeIdHasBeenSet(false),
    m_orgNodeIdHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome OrgNodeChildInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildInfo.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedDate") && !value["LastModifiedDate"].IsNull())
    {
        if (!value["LastModifiedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildInfo.LastModifiedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedDate = string(value["LastModifiedDate"].GetString());
        m_lastModifiedDateHasBeenSet = true;
    }

    if (value.HasMember("CustomizedOrgNodeId") && !value["CustomizedOrgNodeId"].IsNull())
    {
        if (!value["CustomizedOrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildInfo.CustomizedOrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customizedOrgNodeId = string(value["CustomizedOrgNodeId"].GetString());
        m_customizedOrgNodeIdHasBeenSet = true;
    }

    if (value.HasMember("ParentOrgNodeId") && !value["ParentOrgNodeId"].IsNull())
    {
        if (!value["ParentOrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildInfo.ParentOrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentOrgNodeId = string(value["ParentOrgNodeId"].GetString());
        m_parentOrgNodeIdHasBeenSet = true;
    }

    if (value.HasMember("OrgNodeId") && !value["OrgNodeId"].IsNull())
    {
        if (!value["OrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildInfo.OrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeId = string(value["OrgNodeId"].GetString());
        m_orgNodeIdHasBeenSet = true;
    }

    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildInfo.DataSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = string(value["DataSource"].GetString());
        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("CreatedDate") && !value["CreatedDate"].IsNull())
    {
        if (!value["CreatedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildInfo.CreatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = string(value["CreatedDate"].GetString());
        m_createdDateHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgNodeChildInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_customizedOrgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizedOrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customizedOrgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentOrgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentOrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentOrgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSource.c_str(), allocator).Move(), allocator);
    }

    if (m_createdDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdDate.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string OrgNodeChildInfo::GetDisplayName() const
{
    return m_displayName;
}

void OrgNodeChildInfo::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool OrgNodeChildInfo::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string OrgNodeChildInfo::GetLastModifiedDate() const
{
    return m_lastModifiedDate;
}

void OrgNodeChildInfo::SetLastModifiedDate(const string& _lastModifiedDate)
{
    m_lastModifiedDate = _lastModifiedDate;
    m_lastModifiedDateHasBeenSet = true;
}

bool OrgNodeChildInfo::LastModifiedDateHasBeenSet() const
{
    return m_lastModifiedDateHasBeenSet;
}

string OrgNodeChildInfo::GetCustomizedOrgNodeId() const
{
    return m_customizedOrgNodeId;
}

void OrgNodeChildInfo::SetCustomizedOrgNodeId(const string& _customizedOrgNodeId)
{
    m_customizedOrgNodeId = _customizedOrgNodeId;
    m_customizedOrgNodeIdHasBeenSet = true;
}

bool OrgNodeChildInfo::CustomizedOrgNodeIdHasBeenSet() const
{
    return m_customizedOrgNodeIdHasBeenSet;
}

string OrgNodeChildInfo::GetParentOrgNodeId() const
{
    return m_parentOrgNodeId;
}

void OrgNodeChildInfo::SetParentOrgNodeId(const string& _parentOrgNodeId)
{
    m_parentOrgNodeId = _parentOrgNodeId;
    m_parentOrgNodeIdHasBeenSet = true;
}

bool OrgNodeChildInfo::ParentOrgNodeIdHasBeenSet() const
{
    return m_parentOrgNodeIdHasBeenSet;
}

string OrgNodeChildInfo::GetOrgNodeId() const
{
    return m_orgNodeId;
}

void OrgNodeChildInfo::SetOrgNodeId(const string& _orgNodeId)
{
    m_orgNodeId = _orgNodeId;
    m_orgNodeIdHasBeenSet = true;
}

bool OrgNodeChildInfo::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

string OrgNodeChildInfo::GetDataSource() const
{
    return m_dataSource;
}

void OrgNodeChildInfo::SetDataSource(const string& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool OrgNodeChildInfo::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string OrgNodeChildInfo::GetCreatedDate() const
{
    return m_createdDate;
}

void OrgNodeChildInfo::SetCreatedDate(const string& _createdDate)
{
    m_createdDate = _createdDate;
    m_createdDateHasBeenSet = true;
}

bool OrgNodeChildInfo::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

string OrgNodeChildInfo::GetDescription() const
{
    return m_description;
}

void OrgNodeChildInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool OrgNodeChildInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

