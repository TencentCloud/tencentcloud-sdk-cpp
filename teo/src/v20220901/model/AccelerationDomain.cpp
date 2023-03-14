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

#include <tencentcloud/teo/v20220901/model/AccelerationDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AccelerationDomain::AccelerationDomain() :
    m_originDetailHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_modifiedOnHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_domainStatusHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_identificationStatusHasBeenSet(false)
{
}

CoreInternalOutcome AccelerationDomain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginDetail") && !value["OriginDetail"].IsNull())
    {
        if (!value["OriginDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.OriginDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originDetail.Deserialize(value["OriginDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originDetailHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("DomainStatus") && !value["DomainStatus"].IsNull())
    {
        if (!value["DomainStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.DomainStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainStatus = string(value["DomainStatus"].GetString());
        m_domainStatusHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("IdentificationStatus") && !value["IdentificationStatus"].IsNull())
    {
        if (!value["IdentificationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.IdentificationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identificationStatus = string(value["IdentificationStatus"].GetString());
        m_identificationStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccelerationDomain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_identificationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentificationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identificationStatus.c_str(), allocator).Move(), allocator);
    }

}


OriginDetail AccelerationDomain::GetOriginDetail() const
{
    return m_originDetail;
}

void AccelerationDomain::SetOriginDetail(const OriginDetail& _originDetail)
{
    m_originDetail = _originDetail;
    m_originDetailHasBeenSet = true;
}

bool AccelerationDomain::OriginDetailHasBeenSet() const
{
    return m_originDetailHasBeenSet;
}

string AccelerationDomain::GetCreatedOn() const
{
    return m_createdOn;
}

void AccelerationDomain::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool AccelerationDomain::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string AccelerationDomain::GetDomainName() const
{
    return m_domainName;
}

void AccelerationDomain::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool AccelerationDomain::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string AccelerationDomain::GetModifiedOn() const
{
    return m_modifiedOn;
}

void AccelerationDomain::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool AccelerationDomain::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

string AccelerationDomain::GetZoneId() const
{
    return m_zoneId;
}

void AccelerationDomain::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AccelerationDomain::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string AccelerationDomain::GetDomainStatus() const
{
    return m_domainStatus;
}

void AccelerationDomain::SetDomainStatus(const string& _domainStatus)
{
    m_domainStatus = _domainStatus;
    m_domainStatusHasBeenSet = true;
}

bool AccelerationDomain::DomainStatusHasBeenSet() const
{
    return m_domainStatusHasBeenSet;
}

string AccelerationDomain::GetCname() const
{
    return m_cname;
}

void AccelerationDomain::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool AccelerationDomain::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string AccelerationDomain::GetIdentificationStatus() const
{
    return m_identificationStatus;
}

void AccelerationDomain::SetIdentificationStatus(const string& _identificationStatus)
{
    m_identificationStatus = _identificationStatus;
    m_identificationStatusHasBeenSet = true;
}

bool AccelerationDomain::IdentificationStatusHasBeenSet() const
{
    return m_identificationStatusHasBeenSet;
}

