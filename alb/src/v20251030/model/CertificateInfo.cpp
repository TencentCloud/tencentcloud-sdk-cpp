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

#include <tencentcloud/alb/v20251030/model/CertificateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

CertificateInfo::CertificateInfo() :
    m_associatedTimeHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_certificateTypeHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CertificateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssociatedTime") && !value["AssociatedTime"].IsNull())
    {
        if (!value["AssociatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.AssociatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associatedTime = string(value["AssociatedTime"].GetString());
        m_associatedTimeHasBeenSet = true;
    }

    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("CertificateType") && !value["CertificateType"].IsNull())
    {
        if (!value["CertificateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.CertificateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateType = string(value["CertificateType"].GetString());
        m_certificateTypeHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertificateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_associatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateType.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string CertificateInfo::GetAssociatedTime() const
{
    return m_associatedTime;
}

void CertificateInfo::SetAssociatedTime(const string& _associatedTime)
{
    m_associatedTime = _associatedTime;
    m_associatedTimeHasBeenSet = true;
}

bool CertificateInfo::AssociatedTimeHasBeenSet() const
{
    return m_associatedTimeHasBeenSet;
}

string CertificateInfo::GetCertificateId() const
{
    return m_certificateId;
}

void CertificateInfo::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool CertificateInfo::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string CertificateInfo::GetCertificateType() const
{
    return m_certificateType;
}

void CertificateInfo::SetCertificateType(const string& _certificateType)
{
    m_certificateType = _certificateType;
    m_certificateTypeHasBeenSet = true;
}

bool CertificateInfo::CertificateTypeHasBeenSet() const
{
    return m_certificateTypeHasBeenSet;
}

bool CertificateInfo::GetIsDefault() const
{
    return m_isDefault;
}

void CertificateInfo::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool CertificateInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string CertificateInfo::GetStatus() const
{
    return m_status;
}

void CertificateInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CertificateInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

