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

#include <tencentcloud/ecdn/v20191012/model/DomainBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace rapidjson;
using namespace std;

DomainBriefInfo::DomainBriefInfo() :
    m_resourceIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_disableHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_readonlyHasBeenSet(false)
{
}

CoreInternalOutcome DomainBriefInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsObject())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.Origin` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DomainBriefInfo.Disable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disable = string(value["Disable"].GetString());
        m_disableHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Readonly") && !value["Readonly"].IsNull())
    {
        if (!value["Readonly"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBriefInfo.Readonly` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readonly = string(value["Readonly"].GetString());
        m_readonlyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainBriefInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
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

    if (m_originHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_origin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_disableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Disable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_disable.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_readonlyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Readonly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_readonly.c_str(), allocator).Move(), allocator);
    }

}


string DomainBriefInfo::GetResourceId() const
{
    return m_resourceId;
}

void DomainBriefInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DomainBriefInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t DomainBriefInfo::GetAppId() const
{
    return m_appId;
}

void DomainBriefInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DomainBriefInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DomainBriefInfo::GetDomain() const
{
    return m_domain;
}

void DomainBriefInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainBriefInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DomainBriefInfo::GetCname() const
{
    return m_cname;
}

void DomainBriefInfo::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool DomainBriefInfo::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string DomainBriefInfo::GetStatus() const
{
    return m_status;
}

void DomainBriefInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainBriefInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DomainBriefInfo::GetProjectId() const
{
    return m_projectId;
}

void DomainBriefInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DomainBriefInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DomainBriefInfo::GetCreateTime() const
{
    return m_createTime;
}

void DomainBriefInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DomainBriefInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DomainBriefInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DomainBriefInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DomainBriefInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

Origin DomainBriefInfo::GetOrigin() const
{
    return m_origin;
}

void DomainBriefInfo::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool DomainBriefInfo::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string DomainBriefInfo::GetDisable() const
{
    return m_disable;
}

void DomainBriefInfo::SetDisable(const string& _disable)
{
    m_disable = _disable;
    m_disableHasBeenSet = true;
}

bool DomainBriefInfo::DisableHasBeenSet() const
{
    return m_disableHasBeenSet;
}

string DomainBriefInfo::GetArea() const
{
    return m_area;
}

void DomainBriefInfo::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DomainBriefInfo::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DomainBriefInfo::GetReadonly() const
{
    return m_readonly;
}

void DomainBriefInfo::SetReadonly(const string& _readonly)
{
    m_readonly = _readonly;
    m_readonlyHasBeenSet = true;
}

bool DomainBriefInfo::ReadonlyHasBeenSet() const
{
    return m_readonlyHasBeenSet;
}

