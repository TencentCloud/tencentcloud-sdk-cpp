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

#include <tencentcloud/wedata/v20210820/model/CreateDataSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateDataSourceRequest::CreateDataSourceRequest() :
    m_nameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ownerProjectIdHasBeenSet(false),
    m_ownerProjectNameHasBeenSet(false),
    m_ownerProjectIdentHasBeenSet(false),
    m_bizParamsHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_collectHasBeenSet(false),
    m_cOSBucketHasBeenSet(false),
    m_cOSRegionHasBeenSet(false),
    m_connectResultHasBeenSet(false),
    m_developmentParamsHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string CreateDataSourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerProjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerProjectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerProjectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_bizParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizParams.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_displayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Display";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_display.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instance.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collect.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cOSBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cOSRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_connectResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectResult.c_str(), allocator).Move(), allocator);
    }

    if (m_developmentParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevelopmentParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_developmentParams.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataSourceRequest::GetName() const
{
    return m_name;
}

void CreateDataSourceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDataSourceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDataSourceRequest::GetCategory() const
{
    return m_category;
}

void CreateDataSourceRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool CreateDataSourceRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string CreateDataSourceRequest::GetType() const
{
    return m_type;
}

void CreateDataSourceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateDataSourceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateDataSourceRequest::GetOwnerProjectId() const
{
    return m_ownerProjectId;
}

void CreateDataSourceRequest::SetOwnerProjectId(const string& _ownerProjectId)
{
    m_ownerProjectId = _ownerProjectId;
    m_ownerProjectIdHasBeenSet = true;
}

bool CreateDataSourceRequest::OwnerProjectIdHasBeenSet() const
{
    return m_ownerProjectIdHasBeenSet;
}

string CreateDataSourceRequest::GetOwnerProjectName() const
{
    return m_ownerProjectName;
}

void CreateDataSourceRequest::SetOwnerProjectName(const string& _ownerProjectName)
{
    m_ownerProjectName = _ownerProjectName;
    m_ownerProjectNameHasBeenSet = true;
}

bool CreateDataSourceRequest::OwnerProjectNameHasBeenSet() const
{
    return m_ownerProjectNameHasBeenSet;
}

string CreateDataSourceRequest::GetOwnerProjectIdent() const
{
    return m_ownerProjectIdent;
}

void CreateDataSourceRequest::SetOwnerProjectIdent(const string& _ownerProjectIdent)
{
    m_ownerProjectIdent = _ownerProjectIdent;
    m_ownerProjectIdentHasBeenSet = true;
}

bool CreateDataSourceRequest::OwnerProjectIdentHasBeenSet() const
{
    return m_ownerProjectIdentHasBeenSet;
}

string CreateDataSourceRequest::GetBizParams() const
{
    return m_bizParams;
}

void CreateDataSourceRequest::SetBizParams(const string& _bizParams)
{
    m_bizParams = _bizParams;
    m_bizParamsHasBeenSet = true;
}

bool CreateDataSourceRequest::BizParamsHasBeenSet() const
{
    return m_bizParamsHasBeenSet;
}

string CreateDataSourceRequest::GetParams() const
{
    return m_params;
}

void CreateDataSourceRequest::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool CreateDataSourceRequest::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string CreateDataSourceRequest::GetDescription() const
{
    return m_description;
}

void CreateDataSourceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDataSourceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateDataSourceRequest::GetDisplay() const
{
    return m_display;
}

void CreateDataSourceRequest::SetDisplay(const string& _display)
{
    m_display = _display;
    m_displayHasBeenSet = true;
}

bool CreateDataSourceRequest::DisplayHasBeenSet() const
{
    return m_displayHasBeenSet;
}

string CreateDataSourceRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void CreateDataSourceRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool CreateDataSourceRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string CreateDataSourceRequest::GetInstance() const
{
    return m_instance;
}

void CreateDataSourceRequest::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool CreateDataSourceRequest::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

uint64_t CreateDataSourceRequest::GetStatus() const
{
    return m_status;
}

void CreateDataSourceRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateDataSourceRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateDataSourceRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateDataSourceRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateDataSourceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateDataSourceRequest::GetCollect() const
{
    return m_collect;
}

void CreateDataSourceRequest::SetCollect(const string& _collect)
{
    m_collect = _collect;
    m_collectHasBeenSet = true;
}

bool CreateDataSourceRequest::CollectHasBeenSet() const
{
    return m_collectHasBeenSet;
}

string CreateDataSourceRequest::GetCOSBucket() const
{
    return m_cOSBucket;
}

void CreateDataSourceRequest::SetCOSBucket(const string& _cOSBucket)
{
    m_cOSBucket = _cOSBucket;
    m_cOSBucketHasBeenSet = true;
}

bool CreateDataSourceRequest::COSBucketHasBeenSet() const
{
    return m_cOSBucketHasBeenSet;
}

string CreateDataSourceRequest::GetCOSRegion() const
{
    return m_cOSRegion;
}

void CreateDataSourceRequest::SetCOSRegion(const string& _cOSRegion)
{
    m_cOSRegion = _cOSRegion;
    m_cOSRegionHasBeenSet = true;
}

bool CreateDataSourceRequest::COSRegionHasBeenSet() const
{
    return m_cOSRegionHasBeenSet;
}

string CreateDataSourceRequest::GetConnectResult() const
{
    return m_connectResult;
}

void CreateDataSourceRequest::SetConnectResult(const string& _connectResult)
{
    m_connectResult = _connectResult;
    m_connectResultHasBeenSet = true;
}

bool CreateDataSourceRequest::ConnectResultHasBeenSet() const
{
    return m_connectResultHasBeenSet;
}

string CreateDataSourceRequest::GetDevelopmentParams() const
{
    return m_developmentParams;
}

void CreateDataSourceRequest::SetDevelopmentParams(const string& _developmentParams)
{
    m_developmentParams = _developmentParams;
    m_developmentParamsHasBeenSet = true;
}

bool CreateDataSourceRequest::DevelopmentParamsHasBeenSet() const
{
    return m_developmentParamsHasBeenSet;
}

string CreateDataSourceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDataSourceRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDataSourceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


