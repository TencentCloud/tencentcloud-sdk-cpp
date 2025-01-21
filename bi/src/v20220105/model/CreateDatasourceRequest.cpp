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

#include <tencentcloud/bi/v20220105/model/CreateDatasourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

CreateDatasourceRequest::CreateDatasourceRequest() :
    m_dbHostHasBeenSet(false),
    m_dbPortHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_dbPwdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
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
    m_operationAuthLimitHasBeenSet(false),
    m_useVPCHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

string CreateDatasourceRequest::ToJsonString() const
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

    if (m_operationAuthLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationAuthLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operationAuthLimit.begin(); itr != m_operationAuthLimit.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string CreateDatasourceRequest::GetDbHost() const
{
    return m_dbHost;
}

void CreateDatasourceRequest::SetDbHost(const string& _dbHost)
{
    m_dbHost = _dbHost;
    m_dbHostHasBeenSet = true;
}

bool CreateDatasourceRequest::DbHostHasBeenSet() const
{
    return m_dbHostHasBeenSet;
}

uint64_t CreateDatasourceRequest::GetDbPort() const
{
    return m_dbPort;
}

void CreateDatasourceRequest::SetDbPort(const uint64_t& _dbPort)
{
    m_dbPort = _dbPort;
    m_dbPortHasBeenSet = true;
}

bool CreateDatasourceRequest::DbPortHasBeenSet() const
{
    return m_dbPortHasBeenSet;
}

string CreateDatasourceRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateDatasourceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateDatasourceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string CreateDatasourceRequest::GetDbType() const
{
    return m_dbType;
}

void CreateDatasourceRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool CreateDatasourceRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string CreateDatasourceRequest::GetCharset() const
{
    return m_charset;
}

void CreateDatasourceRequest::SetCharset(const string& _charset)
{
    m_charset = _charset;
    m_charsetHasBeenSet = true;
}

bool CreateDatasourceRequest::CharsetHasBeenSet() const
{
    return m_charsetHasBeenSet;
}

string CreateDatasourceRequest::GetDbUser() const
{
    return m_dbUser;
}

void CreateDatasourceRequest::SetDbUser(const string& _dbUser)
{
    m_dbUser = _dbUser;
    m_dbUserHasBeenSet = true;
}

bool CreateDatasourceRequest::DbUserHasBeenSet() const
{
    return m_dbUserHasBeenSet;
}

string CreateDatasourceRequest::GetDbPwd() const
{
    return m_dbPwd;
}

void CreateDatasourceRequest::SetDbPwd(const string& _dbPwd)
{
    m_dbPwd = _dbPwd;
    m_dbPwdHasBeenSet = true;
}

bool CreateDatasourceRequest::DbPwdHasBeenSet() const
{
    return m_dbPwdHasBeenSet;
}

string CreateDatasourceRequest::GetDbName() const
{
    return m_dbName;
}

void CreateDatasourceRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool CreateDatasourceRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string CreateDatasourceRequest::GetSourceName() const
{
    return m_sourceName;
}

void CreateDatasourceRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool CreateDatasourceRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

uint64_t CreateDatasourceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDatasourceRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDatasourceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateDatasourceRequest::GetCatalog() const
{
    return m_catalog;
}

void CreateDatasourceRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool CreateDatasourceRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string CreateDatasourceRequest::GetDataOrigin() const
{
    return m_dataOrigin;
}

void CreateDatasourceRequest::SetDataOrigin(const string& _dataOrigin)
{
    m_dataOrigin = _dataOrigin;
    m_dataOriginHasBeenSet = true;
}

bool CreateDatasourceRequest::DataOriginHasBeenSet() const
{
    return m_dataOriginHasBeenSet;
}

string CreateDatasourceRequest::GetDataOriginProjectId() const
{
    return m_dataOriginProjectId;
}

void CreateDatasourceRequest::SetDataOriginProjectId(const string& _dataOriginProjectId)
{
    m_dataOriginProjectId = _dataOriginProjectId;
    m_dataOriginProjectIdHasBeenSet = true;
}

bool CreateDatasourceRequest::DataOriginProjectIdHasBeenSet() const
{
    return m_dataOriginProjectIdHasBeenSet;
}

string CreateDatasourceRequest::GetDataOriginDatasourceId() const
{
    return m_dataOriginDatasourceId;
}

void CreateDatasourceRequest::SetDataOriginDatasourceId(const string& _dataOriginDatasourceId)
{
    m_dataOriginDatasourceId = _dataOriginDatasourceId;
    m_dataOriginDatasourceIdHasBeenSet = true;
}

bool CreateDatasourceRequest::DataOriginDatasourceIdHasBeenSet() const
{
    return m_dataOriginDatasourceIdHasBeenSet;
}

string CreateDatasourceRequest::GetExtraParam() const
{
    return m_extraParam;
}

void CreateDatasourceRequest::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool CreateDatasourceRequest::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}

string CreateDatasourceRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void CreateDatasourceRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool CreateDatasourceRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string CreateDatasourceRequest::GetVip() const
{
    return m_vip;
}

void CreateDatasourceRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CreateDatasourceRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string CreateDatasourceRequest::GetVport() const
{
    return m_vport;
}

void CreateDatasourceRequest::SetVport(const string& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool CreateDatasourceRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string CreateDatasourceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDatasourceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDatasourceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> CreateDatasourceRequest::GetOperationAuthLimit() const
{
    return m_operationAuthLimit;
}

void CreateDatasourceRequest::SetOperationAuthLimit(const vector<string>& _operationAuthLimit)
{
    m_operationAuthLimit = _operationAuthLimit;
    m_operationAuthLimitHasBeenSet = true;
}

bool CreateDatasourceRequest::OperationAuthLimitHasBeenSet() const
{
    return m_operationAuthLimitHasBeenSet;
}

bool CreateDatasourceRequest::GetUseVPC() const
{
    return m_useVPC;
}

void CreateDatasourceRequest::SetUseVPC(const bool& _useVPC)
{
    m_useVPC = _useVPC;
    m_useVPCHasBeenSet = true;
}

bool CreateDatasourceRequest::UseVPCHasBeenSet() const
{
    return m_useVPCHasBeenSet;
}

string CreateDatasourceRequest::GetRegionId() const
{
    return m_regionId;
}

void CreateDatasourceRequest::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool CreateDatasourceRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}


