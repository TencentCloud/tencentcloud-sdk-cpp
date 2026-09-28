/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/CloudAppResourceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudAppResourceItem::CloudAppResourceItem() :
    m_serviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_deployedRefHasBeenSet(false),
    m_diffCategoryHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CloudAppResourceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppResourceItem.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppResourceItem.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("DeployedRef") && !value["DeployedRef"].IsNull())
    {
        if (!value["DeployedRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppResourceItem.DeployedRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployedRef = string(value["DeployedRef"].GetString());
        m_deployedRefHasBeenSet = true;
    }

    if (value.HasMember("DiffCategory") && !value["DiffCategory"].IsNull())
    {
        if (!value["DiffCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppResourceItem.DiffCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diffCategory = string(value["DiffCategory"].GetString());
        m_diffCategoryHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppResourceItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAppResourceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_deployedRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployedRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployedRef.c_str(), allocator).Move(), allocator);
    }

    if (m_diffCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diffCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string CloudAppResourceItem::GetServiceName() const
{
    return m_serviceName;
}

void CloudAppResourceItem::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CloudAppResourceItem::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CloudAppResourceItem::GetServiceType() const
{
    return m_serviceType;
}

void CloudAppResourceItem::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CloudAppResourceItem::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string CloudAppResourceItem::GetDeployedRef() const
{
    return m_deployedRef;
}

void CloudAppResourceItem::SetDeployedRef(const string& _deployedRef)
{
    m_deployedRef = _deployedRef;
    m_deployedRefHasBeenSet = true;
}

bool CloudAppResourceItem::DeployedRefHasBeenSet() const
{
    return m_deployedRefHasBeenSet;
}

string CloudAppResourceItem::GetDiffCategory() const
{
    return m_diffCategory;
}

void CloudAppResourceItem::SetDiffCategory(const string& _diffCategory)
{
    m_diffCategory = _diffCategory;
    m_diffCategoryHasBeenSet = true;
}

bool CloudAppResourceItem::DiffCategoryHasBeenSet() const
{
    return m_diffCategoryHasBeenSet;
}

string CloudAppResourceItem::GetStatus() const
{
    return m_status;
}

void CloudAppResourceItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudAppResourceItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

