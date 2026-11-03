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

#include <tencentcloud/ssl/v20191205/model/DescribeCSRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DescribeCSRResponse::DescribeCSRResponse() :
    m_idHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_encryptAlgoHasBeenSet(false),
    m_keyParameterHasBeenSet(false),
    m_remarksHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_keyPasswordHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_cSRHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_subjectAltNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCSRResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("OwnerUin") && !rsp["OwnerUin"].IsNull())
    {
        if (!rsp["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(rsp["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("Organization") && !rsp["Organization"].IsNull())
    {
        if (!rsp["Organization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Organization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organization = string(rsp["Organization"].GetString());
        m_organizationHasBeenSet = true;
    }

    if (rsp.HasMember("Department") && !rsp["Department"].IsNull())
    {
        if (!rsp["Department"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Department` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_department = string(rsp["Department"].GetString());
        m_departmentHasBeenSet = true;
    }

    if (rsp.HasMember("Email") && !rsp["Email"].IsNull())
    {
        if (!rsp["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(rsp["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (rsp.HasMember("Province") && !rsp["Province"].IsNull())
    {
        if (!rsp["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(rsp["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (rsp.HasMember("City") && !rsp["City"].IsNull())
    {
        if (!rsp["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(rsp["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (rsp.HasMember("Country") && !rsp["Country"].IsNull())
    {
        if (!rsp["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(rsp["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptAlgo") && !rsp["EncryptAlgo"].IsNull())
    {
        if (!rsp["EncryptAlgo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptAlgo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptAlgo = string(rsp["EncryptAlgo"].GetString());
        m_encryptAlgoHasBeenSet = true;
    }

    if (rsp.HasMember("KeyParameter") && !rsp["KeyParameter"].IsNull())
    {
        if (!rsp["KeyParameter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyParameter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyParameter = string(rsp["KeyParameter"].GetString());
        m_keyParameterHasBeenSet = true;
    }

    if (rsp.HasMember("Remarks") && !rsp["Remarks"].IsNull())
    {
        if (!rsp["Remarks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remarks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarks = string(rsp["Remarks"].GetString());
        m_remarksHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("KeyPassword") && !rsp["KeyPassword"].IsNull())
    {
        if (!rsp["KeyPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyPassword = string(rsp["KeyPassword"].GetString());
        m_keyPasswordHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CSR") && !rsp["CSR"].IsNull())
    {
        if (!rsp["CSR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cSR = string(rsp["CSR"].GetString());
        m_cSRHasBeenSet = true;
    }

    if (rsp.HasMember("PrivateKey") && !rsp["PrivateKey"].IsNull())
    {
        if (!rsp["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(rsp["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (rsp.HasMember("SubjectAltName") && !rsp["SubjectAltName"].IsNull())
    {
        if (!rsp["SubjectAltName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubjectAltName` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SubjectAltName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectAltName.push_back((*itr).GetString());
        }
        m_subjectAltNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCSRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organization.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_department.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptAlgoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAlgo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptAlgo.c_str(), allocator).Move(), allocator);
    }

    if (m_keyParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyParameter.c_str(), allocator).Move(), allocator);
    }

    if (m_remarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remarks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarks.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_keyPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cSRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cSR.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectAltNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectAltName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectAltName.begin(); itr != m_subjectAltName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeCSRResponse::GetId() const
{
    return m_id;
}

bool DescribeCSRResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeCSRResponse::GetOwnerUin() const
{
    return m_ownerUin;
}

bool DescribeCSRResponse::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string DescribeCSRResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeCSRResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeCSRResponse::GetOrganization() const
{
    return m_organization;
}

bool DescribeCSRResponse::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

string DescribeCSRResponse::GetDepartment() const
{
    return m_department;
}

bool DescribeCSRResponse::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

string DescribeCSRResponse::GetEmail() const
{
    return m_email;
}

bool DescribeCSRResponse::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string DescribeCSRResponse::GetProvince() const
{
    return m_province;
}

bool DescribeCSRResponse::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string DescribeCSRResponse::GetCity() const
{
    return m_city;
}

bool DescribeCSRResponse::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string DescribeCSRResponse::GetCountry() const
{
    return m_country;
}

bool DescribeCSRResponse::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string DescribeCSRResponse::GetEncryptAlgo() const
{
    return m_encryptAlgo;
}

bool DescribeCSRResponse::EncryptAlgoHasBeenSet() const
{
    return m_encryptAlgoHasBeenSet;
}

string DescribeCSRResponse::GetKeyParameter() const
{
    return m_keyParameter;
}

bool DescribeCSRResponse::KeyParameterHasBeenSet() const
{
    return m_keyParameterHasBeenSet;
}

string DescribeCSRResponse::GetRemarks() const
{
    return m_remarks;
}

bool DescribeCSRResponse::RemarksHasBeenSet() const
{
    return m_remarksHasBeenSet;
}

int64_t DescribeCSRResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCSRResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCSRResponse::GetKeyPassword() const
{
    return m_keyPassword;
}

bool DescribeCSRResponse::KeyPasswordHasBeenSet() const
{
    return m_keyPasswordHasBeenSet;
}

string DescribeCSRResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeCSRResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeCSRResponse::GetCSR() const
{
    return m_cSR;
}

bool DescribeCSRResponse::CSRHasBeenSet() const
{
    return m_cSRHasBeenSet;
}

string DescribeCSRResponse::GetPrivateKey() const
{
    return m_privateKey;
}

bool DescribeCSRResponse::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

vector<string> DescribeCSRResponse::GetSubjectAltName() const
{
    return m_subjectAltName;
}

bool DescribeCSRResponse::SubjectAltNameHasBeenSet() const
{
    return m_subjectAltNameHasBeenSet;
}


