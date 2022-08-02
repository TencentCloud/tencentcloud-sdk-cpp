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

#include <tencentcloud/bma/v20210624/model/DescribeBPCompanyInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

DescribeBPCompanyInfoResponse::DescribeBPCompanyInfoResponse() :
    m_companyNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_licenseNameHasBeenSet(false),
    m_licenseStatusHasBeenSet(false),
    m_licenseNoteHasBeenSet(false),
    m_authorizationNameHasBeenSet(false),
    m_authorizationStatusHasBeenSet(false),
    m_authorizationNoteHasBeenSet(false),
    m_brandDatasHasBeenSet(false),
    m_companyIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBPCompanyInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CompanyName") && !rsp["CompanyName"].IsNull())
    {
        if (!rsp["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(rsp["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (rsp.HasMember("Phone") && !rsp["Phone"].IsNull())
    {
        if (!rsp["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(rsp["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (rsp.HasMember("LicenseName") && !rsp["LicenseName"].IsNull())
    {
        if (!rsp["LicenseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseName = string(rsp["LicenseName"].GetString());
        m_licenseNameHasBeenSet = true;
    }

    if (rsp.HasMember("LicenseStatus") && !rsp["LicenseStatus"].IsNull())
    {
        if (!rsp["LicenseStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseStatus = rsp["LicenseStatus"].GetInt64();
        m_licenseStatusHasBeenSet = true;
    }

    if (rsp.HasMember("LicenseNote") && !rsp["LicenseNote"].IsNull())
    {
        if (!rsp["LicenseNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNote = string(rsp["LicenseNote"].GetString());
        m_licenseNoteHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationName") && !rsp["AuthorizationName"].IsNull())
    {
        if (!rsp["AuthorizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationName = string(rsp["AuthorizationName"].GetString());
        m_authorizationNameHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationStatus") && !rsp["AuthorizationStatus"].IsNull())
    {
        if (!rsp["AuthorizationStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationStatus = rsp["AuthorizationStatus"].GetInt64();
        m_authorizationStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationNote") && !rsp["AuthorizationNote"].IsNull())
    {
        if (!rsp["AuthorizationNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationNote = string(rsp["AuthorizationNote"].GetString());
        m_authorizationNoteHasBeenSet = true;
    }

    if (rsp.HasMember("BrandDatas") && !rsp["BrandDatas"].IsNull())
    {
        if (!rsp["BrandDatas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BrandDatas` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BrandDatas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BrandData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_brandDatas.push_back(item);
        }
        m_brandDatasHasBeenSet = true;
    }

    if (rsp.HasMember("CompanyId") && !rsp["CompanyId"].IsNull())
    {
        if (!rsp["CompanyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = rsp["CompanyId"].GetInt64();
        m_companyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBPCompanyInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseName.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseStatus, allocator);
    }

    if (m_licenseNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNote.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationStatus, allocator);
    }

    if (m_authorizationNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationNote.c_str(), allocator).Move(), allocator);
    }

    if (m_brandDatasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandDatas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_brandDatas.begin(); itr != m_brandDatas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companyId, allocator);
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


string DescribeBPCompanyInfoResponse::GetCompanyName() const
{
    return m_companyName;
}

bool DescribeBPCompanyInfoResponse::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string DescribeBPCompanyInfoResponse::GetPhone() const
{
    return m_phone;
}

bool DescribeBPCompanyInfoResponse::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string DescribeBPCompanyInfoResponse::GetLicenseName() const
{
    return m_licenseName;
}

bool DescribeBPCompanyInfoResponse::LicenseNameHasBeenSet() const
{
    return m_licenseNameHasBeenSet;
}

int64_t DescribeBPCompanyInfoResponse::GetLicenseStatus() const
{
    return m_licenseStatus;
}

bool DescribeBPCompanyInfoResponse::LicenseStatusHasBeenSet() const
{
    return m_licenseStatusHasBeenSet;
}

string DescribeBPCompanyInfoResponse::GetLicenseNote() const
{
    return m_licenseNote;
}

bool DescribeBPCompanyInfoResponse::LicenseNoteHasBeenSet() const
{
    return m_licenseNoteHasBeenSet;
}

string DescribeBPCompanyInfoResponse::GetAuthorizationName() const
{
    return m_authorizationName;
}

bool DescribeBPCompanyInfoResponse::AuthorizationNameHasBeenSet() const
{
    return m_authorizationNameHasBeenSet;
}

int64_t DescribeBPCompanyInfoResponse::GetAuthorizationStatus() const
{
    return m_authorizationStatus;
}

bool DescribeBPCompanyInfoResponse::AuthorizationStatusHasBeenSet() const
{
    return m_authorizationStatusHasBeenSet;
}

string DescribeBPCompanyInfoResponse::GetAuthorizationNote() const
{
    return m_authorizationNote;
}

bool DescribeBPCompanyInfoResponse::AuthorizationNoteHasBeenSet() const
{
    return m_authorizationNoteHasBeenSet;
}

vector<BrandData> DescribeBPCompanyInfoResponse::GetBrandDatas() const
{
    return m_brandDatas;
}

bool DescribeBPCompanyInfoResponse::BrandDatasHasBeenSet() const
{
    return m_brandDatasHasBeenSet;
}

int64_t DescribeBPCompanyInfoResponse::GetCompanyId() const
{
    return m_companyId;
}

bool DescribeBPCompanyInfoResponse::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}


