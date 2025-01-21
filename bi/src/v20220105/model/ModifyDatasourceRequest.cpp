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

#include <tencentcloud/bi/v20220105/model/ModifyDatasourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ModifyDatasourceRequest::ModifyDatasourceRequest() :
    m_dbHostHasBeenSet(false),
    m_dbPortHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_dbPwdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_dataOriginHasBeenSet(false),
    m_dataOriginProjectIdHasBeenSet(false),
    m_dataOriginDatasourceIdHasBeenSet(false),
    m_extraParamHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_useVPCHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

string ModifyDatasourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dbHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbHost.c_str(), allocator).Move(), allocator);
    }

    if (m_dbPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dbPort, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_charsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Charset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_charset.c_str(), allocator).Move(), allocator);
    }

    if (m_dbUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbUser.c_str(), allocator).Move(), allocator);
    }

    if (m_dbPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbPwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbPwd.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_dataOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataOrigin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataOrigin.c_str(), allocator).Move(), allocator);
    }

    if (m_dataOriginProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataOriginProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataOriginProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataOriginDatasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataOriginDatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataOriginDatasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraParam.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vport.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_useVPCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseVPC";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useVPC, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDatasourceRequest::GetDbHost() const
{
    return m_dbHost;
}

void ModifyDatasourceRequest::SetDbHost(const string& _dbHost)
{
    m_dbHost = _dbHost;
    m_dbHostHasBeenSet = true;
}

bool ModifyDatasourceRequest::DbHostHasBeenSet() const
{
    return m_dbHostHasBeenSet;
}

uint64_t ModifyDatasourceRequest::GetDbPort() const
{
    return m_dbPort;
}

void ModifyDatasourceRequest::SetDbPort(const uint64_t& _dbPort)
{
    m_dbPort = _dbPort;
    m_dbPortHasBeenSet = true;
}

bool ModifyDatasourceRequest::DbPortHasBeenSet() const
{
    return m_dbPortHasBeenSet;
}

string ModifyDatasourceRequest::GetServiceType() const
{
    return m_serviceType;
}

void ModifyDatasourceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ModifyDatasourceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string ModifyDatasourceRequest::GetDbType() const
{
    return m_dbType;
}

void ModifyDatasourceRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool ModifyDatasourceRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string ModifyDatasourceRequest::GetCharset() const
{
    return m_charset;
}

void ModifyDatasourceRequest::SetCharset(const string& _charset)
{
    m_charset = _charset;
    m_charsetHasBeenSet = true;
}

bool ModifyDatasourceRequest::CharsetHasBeenSet() const
{
    return m_charsetHasBeenSet;
}

string ModifyDatasourceRequest::GetDbUser() const
{
    return m_dbUser;
}

void ModifyDatasourceRequest::SetDbUser(const string& _dbUser)
{
    m_dbUser = _dbUser;
    m_dbUserHasBeenSet = true;
}

bool ModifyDatasourceRequest::DbUserHasBeenSet() const
{
    return m_dbUserHasBeenSet;
}

string ModifyDatasourceRequest::GetDbPwd() const
{
    return m_dbPwd;
}

void ModifyDatasourceRequest::SetDbPwd(const string& _dbPwd)
{
    m_dbPwd = _dbPwd;
    m_dbPwdHasBeenSet = true;
}

bool ModifyDatasourceRequest::DbPwdHasBeenSet() const
{
    return m_dbPwdHasBeenSet;
}

string ModifyDatasourceRequest::GetDbName() const
{
    return m_dbName;
}

void ModifyDatasourceRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool ModifyDatasourceRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string ModifyDatasourceRequest::GetSourceName() const
{
    return m_sourceName;
}

void ModifyDatasourceRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool ModifyDatasourceRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

int64_t ModifyDatasourceRequest::GetId() const
{
    return m_id;
}

void ModifyDatasourceRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyDatasourceRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ModifyDatasourceRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyDatasourceRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyDatasourceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyDatasourceRequest::GetCatalog() const
{
    return m_catalog;
}

void ModifyDatasourceRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool ModifyDatasourceRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string ModifyDatasourceRequest::GetDataOrigin() const
{
    return m_dataOrigin;
}

void ModifyDatasourceRequest::SetDataOrigin(const string& _dataOrigin)
{
    m_dataOrigin = _dataOrigin;
    m_dataOriginHasBeenSet = true;
}

bool ModifyDatasourceRequest::DataOriginHasBeenSet() const
{
    return m_dataOriginHasBeenSet;
}

string ModifyDatasourceRequest::GetDataOriginProjectId() const
{
    return m_dataOriginProjectId;
}

void ModifyDatasourceRequest::SetDataOriginProjectId(const string& _dataOriginProjectId)
{
    m_dataOriginProjectId = _dataOriginProjectId;
    m_dataOriginProjectIdHasBeenSet = true;
}

bool ModifyDatasourceRequest::DataOriginProjectIdHasBeenSet() const
{
    return m_dataOriginProjectIdHasBeenSet;
}

string ModifyDatasourceRequest::GetDataOriginDatasourceId() const
{
    return m_dataOriginDatasourceId;
}

void ModifyDatasourceRequest::SetDataOriginDatasourceId(const string& _dataOriginDatasourceId)
{
    m_dataOriginDatasourceId = _dataOriginDatasourceId;
    m_dataOriginDatasourceIdHasBeenSet = true;
}

bool ModifyDatasourceRequest::DataOriginDatasourceIdHasBeenSet() const
{
    return m_dataOriginDatasourceIdHasBeenSet;
}

string ModifyDatasourceRequest::GetExtraParam() const
{
    return m_extraParam;
}

void ModifyDatasourceRequest::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool ModifyDatasourceRequest::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}

string ModifyDatasourceRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ModifyDatasourceRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ModifyDatasourceRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string ModifyDatasourceRequest::GetVip() const
{
    return m_vip;
}

void ModifyDatasourceRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ModifyDatasourceRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string ModifyDatasourceRequest::GetVport() const
{
    return m_vport;
}

void ModifyDatasourceRequest::SetVport(const string& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool ModifyDatasourceRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string ModifyDatasourceRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyDatasourceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyDatasourceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

bool ModifyDatasourceRequest::GetUseVPC() const
{
    return m_useVPC;
}

void ModifyDatasourceRequest::SetUseVPC(const bool& _useVPC)
{
    m_useVPC = _useVPC;
    m_useVPCHasBeenSet = true;
}

bool ModifyDatasourceRequest::UseVPCHasBeenSet() const
{
    return m_useVPCHasBeenSet;
}

string ModifyDatasourceRequest::GetRegionId() const
{
    return m_regionId;
}

void ModifyDatasourceRequest::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ModifyDatasourceRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}


