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

#include <tencentcloud/ccc/v20200210/model/CompanyApplyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CompanyApplyInfo::CompanyApplyInfo() :
    m_applicantTypeHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_businessIdPicUrlHasBeenSet(false),
    m_corporationNameHasBeenSet(false),
    m_corporationIdHasBeenSet(false),
    m_corporationIdPicUrlHasBeenSet(false),
    m_networkCommitmentPicUrlHasBeenSet(false),
    m_isEqualTencentCloudHasBeenSet(false),
    m_corporationMobileHasBeenSet(false),
    m_corporationMobilePicUrlHasBeenSet(false),
    m_useDescribeFileUrlHasBeenSet(false),
    m_companyAuthLetterPicUrlHasBeenSet(false),
    m_acceptPicUrlHasBeenSet(false),
    m_corporationHoldingOnIdPicUrlHasBeenSet(false),
    m_operatorNameHasBeenSet(false),
    m_operatorIdHasBeenSet(false),
    m_operatorIdPicUrlHasBeenSet(false),
    m_operatorHoldingOnIdPicUrlHasBeenSet(false),
    m_commissionPicUrlHasBeenSet(false),
    m_operatorMobileHasBeenSet(false),
    m_operatorEmailHasBeenSet(false),
    m_operatorMobilePicUrlHasBeenSet(false)
{
}

CoreInternalOutcome CompanyApplyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicantType") && !value["ApplicantType"].IsNull())
    {
        if (!value["ApplicantType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.ApplicantType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicantType = value["ApplicantType"].GetInt64();
        m_applicantTypeHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("BusinessIdPicUrl") && !value["BusinessIdPicUrl"].IsNull())
    {
        if (!value["BusinessIdPicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.BusinessIdPicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessIdPicUrl = string(value["BusinessIdPicUrl"].GetString());
        m_businessIdPicUrlHasBeenSet = true;
    }

    if (value.HasMember("CorporationName") && !value["CorporationName"].IsNull())
    {
        if (!value["CorporationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.CorporationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corporationName = string(value["CorporationName"].GetString());
        m_corporationNameHasBeenSet = true;
    }

    if (value.HasMember("CorporationId") && !value["CorporationId"].IsNull())
    {
        if (!value["CorporationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.CorporationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corporationId = string(value["CorporationId"].GetString());
        m_corporationIdHasBeenSet = true;
    }

    if (value.HasMember("CorporationIdPicUrl") && !value["CorporationIdPicUrl"].IsNull())
    {
        if (!value["CorporationIdPicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.CorporationIdPicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corporationIdPicUrl = string(value["CorporationIdPicUrl"].GetString());
        m_corporationIdPicUrlHasBeenSet = true;
    }

    if (value.HasMember("NetworkCommitmentPicUrl") && !value["NetworkCommitmentPicUrl"].IsNull())
    {
        if (!value["NetworkCommitmentPicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.NetworkCommitmentPicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkCommitmentPicUrl = string(value["NetworkCommitmentPicUrl"].GetString());
        m_networkCommitmentPicUrlHasBeenSet = true;
    }

    if (value.HasMember("IsEqualTencentCloud") && !value["IsEqualTencentCloud"].IsNull())
    {
        if (!value["IsEqualTencentCloud"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.IsEqualTencentCloud` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEqualTencentCloud = value["IsEqualTencentCloud"].GetInt64();
        m_isEqualTencentCloudHasBeenSet = true;
    }

    if (value.HasMember("CorporationMobile") && !value["CorporationMobile"].IsNull())
    {
        if (!value["CorporationMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.CorporationMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corporationMobile = string(value["CorporationMobile"].GetString());
        m_corporationMobileHasBeenSet = true;
    }

    if (value.HasMember("CorporationMobilePicUrl") && !value["CorporationMobilePicUrl"].IsNull())
    {
        if (!value["CorporationMobilePicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.CorporationMobilePicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corporationMobilePicUrl = string(value["CorporationMobilePicUrl"].GetString());
        m_corporationMobilePicUrlHasBeenSet = true;
    }

    if (value.HasMember("UseDescribeFileUrl") && !value["UseDescribeFileUrl"].IsNull())
    {
        if (!value["UseDescribeFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.UseDescribeFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_useDescribeFileUrl = string(value["UseDescribeFileUrl"].GetString());
        m_useDescribeFileUrlHasBeenSet = true;
    }

    if (value.HasMember("CompanyAuthLetterPicUrl") && !value["CompanyAuthLetterPicUrl"].IsNull())
    {
        if (!value["CompanyAuthLetterPicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.CompanyAuthLetterPicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyAuthLetterPicUrl = string(value["CompanyAuthLetterPicUrl"].GetString());
        m_companyAuthLetterPicUrlHasBeenSet = true;
    }

    if (value.HasMember("AcceptPicUrl") && !value["AcceptPicUrl"].IsNull())
    {
        if (!value["AcceptPicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.AcceptPicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acceptPicUrl = string(value["AcceptPicUrl"].GetString());
        m_acceptPicUrlHasBeenSet = true;
    }

    if (value.HasMember("CorporationHoldingOnIdPicUrl") && !value["CorporationHoldingOnIdPicUrl"].IsNull())
    {
        if (!value["CorporationHoldingOnIdPicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.CorporationHoldingOnIdPicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corporationHoldingOnIdPicUrl = string(value["CorporationHoldingOnIdPicUrl"].GetString());
        m_corporationHoldingOnIdPicUrlHasBeenSet = true;
    }

    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }

    if (value.HasMember("OperatorId") && !value["OperatorId"].IsNull())
    {
        if (!value["OperatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.OperatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorId = string(value["OperatorId"].GetString());
        m_operatorIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorIdPicUrl") && !value["OperatorIdPicUrl"].IsNull())
    {
        if (!value["OperatorIdPicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.OperatorIdPicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorIdPicUrl = string(value["OperatorIdPicUrl"].GetString());
        m_operatorIdPicUrlHasBeenSet = true;
    }

    if (value.HasMember("OperatorHoldingOnIdPicUrl") && !value["OperatorHoldingOnIdPicUrl"].IsNull())
    {
        if (!value["OperatorHoldingOnIdPicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.OperatorHoldingOnIdPicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorHoldingOnIdPicUrl = string(value["OperatorHoldingOnIdPicUrl"].GetString());
        m_operatorHoldingOnIdPicUrlHasBeenSet = true;
    }

    if (value.HasMember("CommissionPicUrl") && !value["CommissionPicUrl"].IsNull())
    {
        if (!value["CommissionPicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.CommissionPicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commissionPicUrl = string(value["CommissionPicUrl"].GetString());
        m_commissionPicUrlHasBeenSet = true;
    }

    if (value.HasMember("OperatorMobile") && !value["OperatorMobile"].IsNull())
    {
        if (!value["OperatorMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.OperatorMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorMobile = string(value["OperatorMobile"].GetString());
        m_operatorMobileHasBeenSet = true;
    }

    if (value.HasMember("OperatorEmail") && !value["OperatorEmail"].IsNull())
    {
        if (!value["OperatorEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.OperatorEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorEmail = string(value["OperatorEmail"].GetString());
        m_operatorEmailHasBeenSet = true;
    }

    if (value.HasMember("OperatorMobilePicUrl") && !value["OperatorMobilePicUrl"].IsNull())
    {
        if (!value["OperatorMobilePicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyApplyInfo.OperatorMobilePicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorMobilePicUrl = string(value["OperatorMobilePicUrl"].GetString());
        m_operatorMobilePicUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompanyApplyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicantTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicantType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicantType, allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdPicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessIdPicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessIdPicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_corporationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorporationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corporationName.c_str(), allocator).Move(), allocator);
    }

    if (m_corporationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorporationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corporationId.c_str(), allocator).Move(), allocator);
    }

    if (m_corporationIdPicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorporationIdPicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corporationIdPicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_networkCommitmentPicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkCommitmentPicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkCommitmentPicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isEqualTencentCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEqualTencentCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEqualTencentCloud, allocator);
    }

    if (m_corporationMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorporationMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corporationMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_corporationMobilePicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorporationMobilePicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corporationMobilePicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_useDescribeFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseDescribeFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_useDescribeFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_companyAuthLetterPicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyAuthLetterPicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyAuthLetterPicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_acceptPicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptPicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acceptPicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_corporationHoldingOnIdPicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorporationHoldingOnIdPicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corporationHoldingOnIdPicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorIdPicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorIdPicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorIdPicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHoldingOnIdPicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorHoldingOnIdPicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorHoldingOnIdPicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_commissionPicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommissionPicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commissionPicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorMobilePicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorMobilePicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorMobilePicUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t CompanyApplyInfo::GetApplicantType() const
{
    return m_applicantType;
}

void CompanyApplyInfo::SetApplicantType(const int64_t& _applicantType)
{
    m_applicantType = _applicantType;
    m_applicantTypeHasBeenSet = true;
}

bool CompanyApplyInfo::ApplicantTypeHasBeenSet() const
{
    return m_applicantTypeHasBeenSet;
}

string CompanyApplyInfo::GetCompanyName() const
{
    return m_companyName;
}

void CompanyApplyInfo::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CompanyApplyInfo::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string CompanyApplyInfo::GetBusinessId() const
{
    return m_businessId;
}

void CompanyApplyInfo::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CompanyApplyInfo::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string CompanyApplyInfo::GetBusinessIdPicUrl() const
{
    return m_businessIdPicUrl;
}

void CompanyApplyInfo::SetBusinessIdPicUrl(const string& _businessIdPicUrl)
{
    m_businessIdPicUrl = _businessIdPicUrl;
    m_businessIdPicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::BusinessIdPicUrlHasBeenSet() const
{
    return m_businessIdPicUrlHasBeenSet;
}

string CompanyApplyInfo::GetCorporationName() const
{
    return m_corporationName;
}

void CompanyApplyInfo::SetCorporationName(const string& _corporationName)
{
    m_corporationName = _corporationName;
    m_corporationNameHasBeenSet = true;
}

bool CompanyApplyInfo::CorporationNameHasBeenSet() const
{
    return m_corporationNameHasBeenSet;
}

string CompanyApplyInfo::GetCorporationId() const
{
    return m_corporationId;
}

void CompanyApplyInfo::SetCorporationId(const string& _corporationId)
{
    m_corporationId = _corporationId;
    m_corporationIdHasBeenSet = true;
}

bool CompanyApplyInfo::CorporationIdHasBeenSet() const
{
    return m_corporationIdHasBeenSet;
}

string CompanyApplyInfo::GetCorporationIdPicUrl() const
{
    return m_corporationIdPicUrl;
}

void CompanyApplyInfo::SetCorporationIdPicUrl(const string& _corporationIdPicUrl)
{
    m_corporationIdPicUrl = _corporationIdPicUrl;
    m_corporationIdPicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::CorporationIdPicUrlHasBeenSet() const
{
    return m_corporationIdPicUrlHasBeenSet;
}

string CompanyApplyInfo::GetNetworkCommitmentPicUrl() const
{
    return m_networkCommitmentPicUrl;
}

void CompanyApplyInfo::SetNetworkCommitmentPicUrl(const string& _networkCommitmentPicUrl)
{
    m_networkCommitmentPicUrl = _networkCommitmentPicUrl;
    m_networkCommitmentPicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::NetworkCommitmentPicUrlHasBeenSet() const
{
    return m_networkCommitmentPicUrlHasBeenSet;
}

int64_t CompanyApplyInfo::GetIsEqualTencentCloud() const
{
    return m_isEqualTencentCloud;
}

void CompanyApplyInfo::SetIsEqualTencentCloud(const int64_t& _isEqualTencentCloud)
{
    m_isEqualTencentCloud = _isEqualTencentCloud;
    m_isEqualTencentCloudHasBeenSet = true;
}

bool CompanyApplyInfo::IsEqualTencentCloudHasBeenSet() const
{
    return m_isEqualTencentCloudHasBeenSet;
}

string CompanyApplyInfo::GetCorporationMobile() const
{
    return m_corporationMobile;
}

void CompanyApplyInfo::SetCorporationMobile(const string& _corporationMobile)
{
    m_corporationMobile = _corporationMobile;
    m_corporationMobileHasBeenSet = true;
}

bool CompanyApplyInfo::CorporationMobileHasBeenSet() const
{
    return m_corporationMobileHasBeenSet;
}

string CompanyApplyInfo::GetCorporationMobilePicUrl() const
{
    return m_corporationMobilePicUrl;
}

void CompanyApplyInfo::SetCorporationMobilePicUrl(const string& _corporationMobilePicUrl)
{
    m_corporationMobilePicUrl = _corporationMobilePicUrl;
    m_corporationMobilePicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::CorporationMobilePicUrlHasBeenSet() const
{
    return m_corporationMobilePicUrlHasBeenSet;
}

string CompanyApplyInfo::GetUseDescribeFileUrl() const
{
    return m_useDescribeFileUrl;
}

void CompanyApplyInfo::SetUseDescribeFileUrl(const string& _useDescribeFileUrl)
{
    m_useDescribeFileUrl = _useDescribeFileUrl;
    m_useDescribeFileUrlHasBeenSet = true;
}

bool CompanyApplyInfo::UseDescribeFileUrlHasBeenSet() const
{
    return m_useDescribeFileUrlHasBeenSet;
}

string CompanyApplyInfo::GetCompanyAuthLetterPicUrl() const
{
    return m_companyAuthLetterPicUrl;
}

void CompanyApplyInfo::SetCompanyAuthLetterPicUrl(const string& _companyAuthLetterPicUrl)
{
    m_companyAuthLetterPicUrl = _companyAuthLetterPicUrl;
    m_companyAuthLetterPicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::CompanyAuthLetterPicUrlHasBeenSet() const
{
    return m_companyAuthLetterPicUrlHasBeenSet;
}

string CompanyApplyInfo::GetAcceptPicUrl() const
{
    return m_acceptPicUrl;
}

void CompanyApplyInfo::SetAcceptPicUrl(const string& _acceptPicUrl)
{
    m_acceptPicUrl = _acceptPicUrl;
    m_acceptPicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::AcceptPicUrlHasBeenSet() const
{
    return m_acceptPicUrlHasBeenSet;
}

string CompanyApplyInfo::GetCorporationHoldingOnIdPicUrl() const
{
    return m_corporationHoldingOnIdPicUrl;
}

void CompanyApplyInfo::SetCorporationHoldingOnIdPicUrl(const string& _corporationHoldingOnIdPicUrl)
{
    m_corporationHoldingOnIdPicUrl = _corporationHoldingOnIdPicUrl;
    m_corporationHoldingOnIdPicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::CorporationHoldingOnIdPicUrlHasBeenSet() const
{
    return m_corporationHoldingOnIdPicUrlHasBeenSet;
}

string CompanyApplyInfo::GetOperatorName() const
{
    return m_operatorName;
}

void CompanyApplyInfo::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool CompanyApplyInfo::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string CompanyApplyInfo::GetOperatorId() const
{
    return m_operatorId;
}

void CompanyApplyInfo::SetOperatorId(const string& _operatorId)
{
    m_operatorId = _operatorId;
    m_operatorIdHasBeenSet = true;
}

bool CompanyApplyInfo::OperatorIdHasBeenSet() const
{
    return m_operatorIdHasBeenSet;
}

string CompanyApplyInfo::GetOperatorIdPicUrl() const
{
    return m_operatorIdPicUrl;
}

void CompanyApplyInfo::SetOperatorIdPicUrl(const string& _operatorIdPicUrl)
{
    m_operatorIdPicUrl = _operatorIdPicUrl;
    m_operatorIdPicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::OperatorIdPicUrlHasBeenSet() const
{
    return m_operatorIdPicUrlHasBeenSet;
}

string CompanyApplyInfo::GetOperatorHoldingOnIdPicUrl() const
{
    return m_operatorHoldingOnIdPicUrl;
}

void CompanyApplyInfo::SetOperatorHoldingOnIdPicUrl(const string& _operatorHoldingOnIdPicUrl)
{
    m_operatorHoldingOnIdPicUrl = _operatorHoldingOnIdPicUrl;
    m_operatorHoldingOnIdPicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::OperatorHoldingOnIdPicUrlHasBeenSet() const
{
    return m_operatorHoldingOnIdPicUrlHasBeenSet;
}

string CompanyApplyInfo::GetCommissionPicUrl() const
{
    return m_commissionPicUrl;
}

void CompanyApplyInfo::SetCommissionPicUrl(const string& _commissionPicUrl)
{
    m_commissionPicUrl = _commissionPicUrl;
    m_commissionPicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::CommissionPicUrlHasBeenSet() const
{
    return m_commissionPicUrlHasBeenSet;
}

string CompanyApplyInfo::GetOperatorMobile() const
{
    return m_operatorMobile;
}

void CompanyApplyInfo::SetOperatorMobile(const string& _operatorMobile)
{
    m_operatorMobile = _operatorMobile;
    m_operatorMobileHasBeenSet = true;
}

bool CompanyApplyInfo::OperatorMobileHasBeenSet() const
{
    return m_operatorMobileHasBeenSet;
}

string CompanyApplyInfo::GetOperatorEmail() const
{
    return m_operatorEmail;
}

void CompanyApplyInfo::SetOperatorEmail(const string& _operatorEmail)
{
    m_operatorEmail = _operatorEmail;
    m_operatorEmailHasBeenSet = true;
}

bool CompanyApplyInfo::OperatorEmailHasBeenSet() const
{
    return m_operatorEmailHasBeenSet;
}

string CompanyApplyInfo::GetOperatorMobilePicUrl() const
{
    return m_operatorMobilePicUrl;
}

void CompanyApplyInfo::SetOperatorMobilePicUrl(const string& _operatorMobilePicUrl)
{
    m_operatorMobilePicUrl = _operatorMobilePicUrl;
    m_operatorMobilePicUrlHasBeenSet = true;
}

bool CompanyApplyInfo::OperatorMobilePicUrlHasBeenSet() const
{
    return m_operatorMobilePicUrlHasBeenSet;
}

