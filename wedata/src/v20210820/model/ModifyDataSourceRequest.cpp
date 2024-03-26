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

#include <tencentcloud/wedata/v20210820/model/ModifyDataSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyDataSourceRequest::ModifyDataSourceRequest() :
    m_nameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_bizParamsHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_collectHasBeenSet(false),
    m_ownerProjectIdHasBeenSet(false),
    m_ownerProjectNameHasBeenSet(false),
    m_ownerProjectIdentHasBeenSet(false),
    m_cOSBucketHasBeenSet(false),
    m_cOSRegionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_developmentParamsHasBeenSet(false)
{
}

string ModifyDataSourceRequest::ToJsonString() const
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

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_developmentParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevelopmentParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_developmentParams.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDataSourceRequest::GetName() const
{
    return m_name;
}

void ModifyDataSourceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDataSourceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyDataSourceRequest::GetCategory() const
{
    return m_category;
}

void ModifyDataSourceRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ModifyDataSourceRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string ModifyDataSourceRequest::GetType() const
{
    return m_type;
}

void ModifyDataSourceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyDataSourceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ModifyDataSourceRequest::GetID() const
{
    return m_iD;
}

void ModifyDataSourceRequest::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyDataSourceRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ModifyDataSourceRequest::GetBizParams() const
{
    return m_bizParams;
}

void ModifyDataSourceRequest::SetBizParams(const string& _bizParams)
{
    m_bizParams = _bizParams;
    m_bizParamsHasBeenSet = true;
}

bool ModifyDataSourceRequest::BizParamsHasBeenSet() const
{
    return m_bizParamsHasBeenSet;
}

string ModifyDataSourceRequest::GetParams() const
{
    return m_params;
}

void ModifyDataSourceRequest::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool ModifyDataSourceRequest::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string ModifyDataSourceRequest::GetDescription() const
{
    return m_description;
}

void ModifyDataSourceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyDataSourceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyDataSourceRequest::GetDisplay() const
{
    return m_display;
}

void ModifyDataSourceRequest::SetDisplay(const string& _display)
{
    m_display = _display;
    m_displayHasBeenSet = true;
}

bool ModifyDataSourceRequest::DisplayHasBeenSet() const
{
    return m_displayHasBeenSet;
}

string ModifyDataSourceRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void ModifyDataSourceRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool ModifyDataSourceRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string ModifyDataSourceRequest::GetInstance() const
{
    return m_instance;
}

void ModifyDataSourceRequest::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool ModifyDataSourceRequest::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

uint64_t ModifyDataSourceRequest::GetStatus() const
{
    return m_status;
}

void ModifyDataSourceRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDataSourceRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyDataSourceRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyDataSourceRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyDataSourceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyDataSourceRequest::GetCollect() const
{
    return m_collect;
}

void ModifyDataSourceRequest::SetCollect(const string& _collect)
{
    m_collect = _collect;
    m_collectHasBeenSet = true;
}

bool ModifyDataSourceRequest::CollectHasBeenSet() const
{
    return m_collectHasBeenSet;
}

string ModifyDataSourceRequest::GetOwnerProjectId() const
{
    return m_ownerProjectId;
}

void ModifyDataSourceRequest::SetOwnerProjectId(const string& _ownerProjectId)
{
    m_ownerProjectId = _ownerProjectId;
    m_ownerProjectIdHasBeenSet = true;
}

bool ModifyDataSourceRequest::OwnerProjectIdHasBeenSet() const
{
    return m_ownerProjectIdHasBeenSet;
}

string ModifyDataSourceRequest::GetOwnerProjectName() const
{
    return m_ownerProjectName;
}

void ModifyDataSourceRequest::SetOwnerProjectName(const string& _ownerProjectName)
{
    m_ownerProjectName = _ownerProjectName;
    m_ownerProjectNameHasBeenSet = true;
}

bool ModifyDataSourceRequest::OwnerProjectNameHasBeenSet() const
{
    return m_ownerProjectNameHasBeenSet;
}

string ModifyDataSourceRequest::GetOwnerProjectIdent() const
{
    return m_ownerProjectIdent;
}

void ModifyDataSourceRequest::SetOwnerProjectIdent(const string& _ownerProjectIdent)
{
    m_ownerProjectIdent = _ownerProjectIdent;
    m_ownerProjectIdentHasBeenSet = true;
}

bool ModifyDataSourceRequest::OwnerProjectIdentHasBeenSet() const
{
    return m_ownerProjectIdentHasBeenSet;
}

string ModifyDataSourceRequest::GetCOSBucket() const
{
    return m_cOSBucket;
}

void ModifyDataSourceRequest::SetCOSBucket(const string& _cOSBucket)
{
    m_cOSBucket = _cOSBucket;
    m_cOSBucketHasBeenSet = true;
}

bool ModifyDataSourceRequest::COSBucketHasBeenSet() const
{
    return m_cOSBucketHasBeenSet;
}

string ModifyDataSourceRequest::GetCOSRegion() const
{
    return m_cOSRegion;
}

void ModifyDataSourceRequest::SetCOSRegion(const string& _cOSRegion)
{
    m_cOSRegion = _cOSRegion;
    m_cOSRegionHasBeenSet = true;
}

bool ModifyDataSourceRequest::COSRegionHasBeenSet() const
{
    return m_cOSRegionHasBeenSet;
}

string ModifyDataSourceRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyDataSourceRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyDataSourceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyDataSourceRequest::GetDevelopmentParams() const
{
    return m_developmentParams;
}

void ModifyDataSourceRequest::SetDevelopmentParams(const string& _developmentParams)
{
    m_developmentParams = _developmentParams;
    m_developmentParamsHasBeenSet = true;
}

bool ModifyDataSourceRequest::DevelopmentParamsHasBeenSet() const
{
    return m_developmentParamsHasBeenSet;
}


