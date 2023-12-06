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

#include <tencentcloud/bi/v20220105/model/ModifyDatasourceCloudRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ModifyDatasourceCloudRequest::ModifyDatasourceCloudRequest() :
    m_serviceTypeHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_dbPwdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_extraParamHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_prodDbNameHasBeenSet(false),
    m_dataOriginHasBeenSet(false),
    m_dataOriginProjectIdHasBeenSet(false),
    m_dataOriginDatasourceIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

string ModifyDatasourceCloudRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
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

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraParam.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_prodDbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProdDbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prodDbName.c_str(), allocator).Move(), allocator);
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

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDatasourceCloudRequest::GetServiceType() const
{
    return m_serviceType;
}

void ModifyDatasourceCloudRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetDbType() const
{
    return m_dbType;
}

void ModifyDatasourceCloudRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetCharset() const
{
    return m_charset;
}

void ModifyDatasourceCloudRequest::SetCharset(const string& _charset)
{
    m_charset = _charset;
    m_charsetHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::CharsetHasBeenSet() const
{
    return m_charsetHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetDbUser() const
{
    return m_dbUser;
}

void ModifyDatasourceCloudRequest::SetDbUser(const string& _dbUser)
{
    m_dbUser = _dbUser;
    m_dbUserHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::DbUserHasBeenSet() const
{
    return m_dbUserHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetDbPwd() const
{
    return m_dbPwd;
}

void ModifyDatasourceCloudRequest::SetDbPwd(const string& _dbPwd)
{
    m_dbPwd = _dbPwd;
    m_dbPwdHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::DbPwdHasBeenSet() const
{
    return m_dbPwdHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetDbName() const
{
    return m_dbName;
}

void ModifyDatasourceCloudRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetSourceName() const
{
    return m_sourceName;
}

void ModifyDatasourceCloudRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyDatasourceCloudRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ModifyDatasourceCloudRequest::GetId() const
{
    return m_id;
}

void ModifyDatasourceCloudRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetVip() const
{
    return m_vip;
}

void ModifyDatasourceCloudRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetVport() const
{
    return m_vport;
}

void ModifyDatasourceCloudRequest::SetVport(const string& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyDatasourceCloudRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ModifyDatasourceCloudRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetRegionId() const
{
    return m_regionId;
}

void ModifyDatasourceCloudRequest::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetExtraParam() const
{
    return m_extraParam;
}

void ModifyDatasourceCloudRequest::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDatasourceCloudRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetProdDbName() const
{
    return m_prodDbName;
}

void ModifyDatasourceCloudRequest::SetProdDbName(const string& _prodDbName)
{
    m_prodDbName = _prodDbName;
    m_prodDbNameHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::ProdDbNameHasBeenSet() const
{
    return m_prodDbNameHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetDataOrigin() const
{
    return m_dataOrigin;
}

void ModifyDatasourceCloudRequest::SetDataOrigin(const string& _dataOrigin)
{
    m_dataOrigin = _dataOrigin;
    m_dataOriginHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::DataOriginHasBeenSet() const
{
    return m_dataOriginHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetDataOriginProjectId() const
{
    return m_dataOriginProjectId;
}

void ModifyDatasourceCloudRequest::SetDataOriginProjectId(const string& _dataOriginProjectId)
{
    m_dataOriginProjectId = _dataOriginProjectId;
    m_dataOriginProjectIdHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::DataOriginProjectIdHasBeenSet() const
{
    return m_dataOriginProjectIdHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetDataOriginDatasourceId() const
{
    return m_dataOriginDatasourceId;
}

void ModifyDatasourceCloudRequest::SetDataOriginDatasourceId(const string& _dataOriginDatasourceId)
{
    m_dataOriginDatasourceId = _dataOriginDatasourceId;
    m_dataOriginDatasourceIdHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::DataOriginDatasourceIdHasBeenSet() const
{
    return m_dataOriginDatasourceIdHasBeenSet;
}

string ModifyDatasourceCloudRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyDatasourceCloudRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyDatasourceCloudRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}


