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

#include <tencentcloud/cdn/v20180606/model/BriefDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

BriefDomain::BriefDomain() :
    m_resourceIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_disableHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_readonlyHasBeenSet(false),
    m_productHasBeenSet(false),
    m_parentHostHasBeenSet(false)
{
}

CoreInternalOutcome BriefDomain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.Origin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_origin.Deserialize(value["Origin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originHasBeenSet = true;
    }

    if (value.HasMember("Disable") && !value["Disable"].IsNull())
    {
        if (!value["Disable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.Disable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disable = string(value["Disable"].GetString());
        m_disableHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Readonly") && !value["Readonly"].IsNull())
    {
        if (!value["Readonly"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.Readonly` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readonly = string(value["Readonly"].GetString());
        m_readonlyHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("ParentHost") && !value["ParentHost"].IsNull())
    {
        if (!value["ParentHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefDomain.ParentHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentHost = string(value["ParentHost"].GetString());
        m_parentHostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BriefDomain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
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

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_origin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_disableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disable.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_readonlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Readonly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readonly.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_parentHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentHost.c_str(), allocator).Move(), allocator);
    }

}


string BriefDomain::GetResourceId() const
{
    return m_resourceId;
}

void BriefDomain::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BriefDomain::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t BriefDomain::GetAppId() const
{
    return m_appId;
}

void BriefDomain::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BriefDomain::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string BriefDomain::GetDomain() const
{
    return m_domain;
}

void BriefDomain::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BriefDomain::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string BriefDomain::GetCname() const
{
    return m_cname;
}

void BriefDomain::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool BriefDomain::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string BriefDomain::GetStatus() const
{
    return m_status;
}

void BriefDomain::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BriefDomain::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t BriefDomain::GetProjectId() const
{
    return m_projectId;
}

void BriefDomain::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BriefDomain::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string BriefDomain::GetServiceType() const
{
    return m_serviceType;
}

void BriefDomain::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool BriefDomain::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string BriefDomain::GetCreateTime() const
{
    return m_createTime;
}

void BriefDomain::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BriefDomain::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BriefDomain::GetUpdateTime() const
{
    return m_updateTime;
}

void BriefDomain::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BriefDomain::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

Origin BriefDomain::GetOrigin() const
{
    return m_origin;
}

void BriefDomain::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool BriefDomain::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string BriefDomain::GetDisable() const
{
    return m_disable;
}

void BriefDomain::SetDisable(const string& _disable)
{
    m_disable = _disable;
    m_disableHasBeenSet = true;
}

bool BriefDomain::DisableHasBeenSet() const
{
    return m_disableHasBeenSet;
}

string BriefDomain::GetArea() const
{
    return m_area;
}

void BriefDomain::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool BriefDomain::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string BriefDomain::GetReadonly() const
{
    return m_readonly;
}

void BriefDomain::SetReadonly(const string& _readonly)
{
    m_readonly = _readonly;
    m_readonlyHasBeenSet = true;
}

bool BriefDomain::ReadonlyHasBeenSet() const
{
    return m_readonlyHasBeenSet;
}

string BriefDomain::GetProduct() const
{
    return m_product;
}

void BriefDomain::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool BriefDomain::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string BriefDomain::GetParentHost() const
{
    return m_parentHost;
}

void BriefDomain::SetParentHost(const string& _parentHost)
{
    m_parentHost = _parentHost;
    m_parentHostHasBeenSet = true;
}

bool BriefDomain::ParentHostHasBeenSet() const
{
    return m_parentHostHasBeenSet;
}

