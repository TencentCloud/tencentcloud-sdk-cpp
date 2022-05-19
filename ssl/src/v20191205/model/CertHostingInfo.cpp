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

#include <tencentcloud/ssl/v20191205/model/CertHostingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CertHostingInfo::CertHostingInfo() :
    m_certIdHasBeenSet(false),
    m_renewCertIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome CertHostingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertHostingInfo.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("RenewCertId") && !value["RenewCertId"].IsNull())
    {
        if (!value["RenewCertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertHostingInfo.RenewCertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewCertId = string(value["RenewCertId"].GetString());
        m_renewCertIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertHostingInfo.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertHostingInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertHostingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_renewCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewCertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewCertId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string CertHostingInfo::GetCertId() const
{
    return m_certId;
}

void CertHostingInfo::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertHostingInfo::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CertHostingInfo::GetRenewCertId() const
{
    return m_renewCertId;
}

void CertHostingInfo::SetRenewCertId(const string& _renewCertId)
{
    m_renewCertId = _renewCertId;
    m_renewCertIdHasBeenSet = true;
}

bool CertHostingInfo::RenewCertIdHasBeenSet() const
{
    return m_renewCertIdHasBeenSet;
}

string CertHostingInfo::GetResourceType() const
{
    return m_resourceType;
}

void CertHostingInfo::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CertHostingInfo::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CertHostingInfo::GetCreateTime() const
{
    return m_createTime;
}

void CertHostingInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CertHostingInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

