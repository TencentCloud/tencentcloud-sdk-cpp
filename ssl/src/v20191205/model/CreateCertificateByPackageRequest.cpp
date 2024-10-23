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

#include <tencentcloud/ssl/v20191205/model/CreateCertificateByPackageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CreateCertificateByPackageRequest::CreateCertificateByPackageRequest() :
    m_productPidHasBeenSet(false),
    m_packageIdsHasBeenSet(false),
    m_domainCountHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_oldCertificateIdHasBeenSet(false),
    m_renewGenCsrMethodHasBeenSet(false),
    m_renewCsrHasBeenSet(false),
    m_renewAlgorithmTypeHasBeenSet(false),
    m_renewAlgorithmParamHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_renewKeyPassHasBeenSet(false),
    m_domainNamesHasBeenSet(false),
    m_certificateCountHasBeenSet(false),
    m_managerIdHasBeenSet(false),
    m_companyIdHasBeenSet(false),
    m_verifyTypeHasBeenSet(false),
    m_priceKeyHasBeenSet(false)
{
}

string CreateCertificateByPackageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productPidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductPid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productPid, allocator);
    }

    if (m_packageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageIds.begin(); itr != m_packageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainCount.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_oldCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_renewGenCsrMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewGenCsrMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewGenCsrMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_renewCsrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewCsr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewCsr.c_str(), allocator).Move(), allocator);
    }

    if (m_renewAlgorithmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewAlgorithmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewAlgorithmType.c_str(), allocator).Move(), allocator);
    }

    if (m_renewAlgorithmParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewAlgorithmParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewAlgorithmParam.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_renewKeyPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewKeyPass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewKeyPass.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainNames.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certificateCount, allocator);
    }

    if (m_managerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_managerId, allocator);
    }

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_companyId, allocator);
    }

    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_priceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_priceKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateCertificateByPackageRequest::GetProductPid() const
{
    return m_productPid;
}

void CreateCertificateByPackageRequest::SetProductPid(const uint64_t& _productPid)
{
    m_productPid = _productPid;
    m_productPidHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::ProductPidHasBeenSet() const
{
    return m_productPidHasBeenSet;
}

vector<string> CreateCertificateByPackageRequest::GetPackageIds() const
{
    return m_packageIds;
}

void CreateCertificateByPackageRequest::SetPackageIds(const vector<string>& _packageIds)
{
    m_packageIds = _packageIds;
    m_packageIdsHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::PackageIdsHasBeenSet() const
{
    return m_packageIdsHasBeenSet;
}

string CreateCertificateByPackageRequest::GetDomainCount() const
{
    return m_domainCount;
}

void CreateCertificateByPackageRequest::SetDomainCount(const string& _domainCount)
{
    m_domainCount = _domainCount;
    m_domainCountHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::DomainCountHasBeenSet() const
{
    return m_domainCountHasBeenSet;
}

uint64_t CreateCertificateByPackageRequest::GetPeriod() const
{
    return m_period;
}

void CreateCertificateByPackageRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateCertificateByPackageRequest::GetOldCertificateId() const
{
    return m_oldCertificateId;
}

void CreateCertificateByPackageRequest::SetOldCertificateId(const string& _oldCertificateId)
{
    m_oldCertificateId = _oldCertificateId;
    m_oldCertificateIdHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::OldCertificateIdHasBeenSet() const
{
    return m_oldCertificateIdHasBeenSet;
}

string CreateCertificateByPackageRequest::GetRenewGenCsrMethod() const
{
    return m_renewGenCsrMethod;
}

void CreateCertificateByPackageRequest::SetRenewGenCsrMethod(const string& _renewGenCsrMethod)
{
    m_renewGenCsrMethod = _renewGenCsrMethod;
    m_renewGenCsrMethodHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::RenewGenCsrMethodHasBeenSet() const
{
    return m_renewGenCsrMethodHasBeenSet;
}

string CreateCertificateByPackageRequest::GetRenewCsr() const
{
    return m_renewCsr;
}

void CreateCertificateByPackageRequest::SetRenewCsr(const string& _renewCsr)
{
    m_renewCsr = _renewCsr;
    m_renewCsrHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::RenewCsrHasBeenSet() const
{
    return m_renewCsrHasBeenSet;
}

string CreateCertificateByPackageRequest::GetRenewAlgorithmType() const
{
    return m_renewAlgorithmType;
}

void CreateCertificateByPackageRequest::SetRenewAlgorithmType(const string& _renewAlgorithmType)
{
    m_renewAlgorithmType = _renewAlgorithmType;
    m_renewAlgorithmTypeHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::RenewAlgorithmTypeHasBeenSet() const
{
    return m_renewAlgorithmTypeHasBeenSet;
}

string CreateCertificateByPackageRequest::GetRenewAlgorithmParam() const
{
    return m_renewAlgorithmParam;
}

void CreateCertificateByPackageRequest::SetRenewAlgorithmParam(const string& _renewAlgorithmParam)
{
    m_renewAlgorithmParam = _renewAlgorithmParam;
    m_renewAlgorithmParamHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::RenewAlgorithmParamHasBeenSet() const
{
    return m_renewAlgorithmParamHasBeenSet;
}

uint64_t CreateCertificateByPackageRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateCertificateByPackageRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<Tags> CreateCertificateByPackageRequest::GetTags() const
{
    return m_tags;
}

void CreateCertificateByPackageRequest::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateCertificateByPackageRequest::GetRenewKeyPass() const
{
    return m_renewKeyPass;
}

void CreateCertificateByPackageRequest::SetRenewKeyPass(const string& _renewKeyPass)
{
    m_renewKeyPass = _renewKeyPass;
    m_renewKeyPassHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::RenewKeyPassHasBeenSet() const
{
    return m_renewKeyPassHasBeenSet;
}

string CreateCertificateByPackageRequest::GetDomainNames() const
{
    return m_domainNames;
}

void CreateCertificateByPackageRequest::SetDomainNames(const string& _domainNames)
{
    m_domainNames = _domainNames;
    m_domainNamesHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::DomainNamesHasBeenSet() const
{
    return m_domainNamesHasBeenSet;
}

uint64_t CreateCertificateByPackageRequest::GetCertificateCount() const
{
    return m_certificateCount;
}

void CreateCertificateByPackageRequest::SetCertificateCount(const uint64_t& _certificateCount)
{
    m_certificateCount = _certificateCount;
    m_certificateCountHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::CertificateCountHasBeenSet() const
{
    return m_certificateCountHasBeenSet;
}

uint64_t CreateCertificateByPackageRequest::GetManagerId() const
{
    return m_managerId;
}

void CreateCertificateByPackageRequest::SetManagerId(const uint64_t& _managerId)
{
    m_managerId = _managerId;
    m_managerIdHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::ManagerIdHasBeenSet() const
{
    return m_managerIdHasBeenSet;
}

uint64_t CreateCertificateByPackageRequest::GetCompanyId() const
{
    return m_companyId;
}

void CreateCertificateByPackageRequest::SetCompanyId(const uint64_t& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

string CreateCertificateByPackageRequest::GetVerifyType() const
{
    return m_verifyType;
}

void CreateCertificateByPackageRequest::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

string CreateCertificateByPackageRequest::GetPriceKey() const
{
    return m_priceKey;
}

void CreateCertificateByPackageRequest::SetPriceKey(const string& _priceKey)
{
    m_priceKey = _priceKey;
    m_priceKeyHasBeenSet = true;
}

bool CreateCertificateByPackageRequest::PriceKeyHasBeenSet() const
{
    return m_priceKeyHasBeenSet;
}


