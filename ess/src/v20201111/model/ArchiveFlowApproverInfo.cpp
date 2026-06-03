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

#include <tencentcloud/ess/v20201111/model/ArchiveFlowApproverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ArchiveFlowApproverInfo::ArchiveFlowApproverInfo() :
    m_approverNameHasBeenSet(false),
    m_approverTypeHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_approverMobileHasBeenSet(false),
    m_approverEmailHasBeenSet(false),
    m_approverIdCardTypeHasBeenSet(false),
    m_approverIdCardNumberHasBeenSet(false),
    m_approveTimeHasBeenSet(false)
{
}

CoreInternalOutcome ArchiveFlowApproverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproverName") && !value["ApproverName"].IsNull())
    {
        if (!value["ApproverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowApproverInfo.ApproverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverName = string(value["ApproverName"].GetString());
        m_approverNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowApproverInfo.ApproverType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = value["ApproverType"].GetInt64();
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowApproverInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverMobile") && !value["ApproverMobile"].IsNull())
    {
        if (!value["ApproverMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowApproverInfo.ApproverMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverMobile = string(value["ApproverMobile"].GetString());
        m_approverMobileHasBeenSet = true;
    }

    if (value.HasMember("ApproverEmail") && !value["ApproverEmail"].IsNull())
    {
        if (!value["ApproverEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowApproverInfo.ApproverEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverEmail = string(value["ApproverEmail"].GetString());
        m_approverEmailHasBeenSet = true;
    }

    if (value.HasMember("ApproverIdCardType") && !value["ApproverIdCardType"].IsNull())
    {
        if (!value["ApproverIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowApproverInfo.ApproverIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardType = string(value["ApproverIdCardType"].GetString());
        m_approverIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverIdCardNumber") && !value["ApproverIdCardNumber"].IsNull())
    {
        if (!value["ApproverIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowApproverInfo.ApproverIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardNumber = string(value["ApproverIdCardNumber"].GetString());
        m_approverIdCardNumberHasBeenSet = true;
    }

    if (value.HasMember("ApproveTime") && !value["ApproveTime"].IsNull())
    {
        if (!value["ApproveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowApproverInfo.ApproveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approveTime = value["ApproveTime"].GetInt64();
        m_approveTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ArchiveFlowApproverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverName.c_str(), allocator).Move(), allocator);
    }

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverType, allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_approverMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_approverEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_approverIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverIdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_approverIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approveTime, allocator);
    }

}


string ArchiveFlowApproverInfo::GetApproverName() const
{
    return m_approverName;
}

void ArchiveFlowApproverInfo::SetApproverName(const string& _approverName)
{
    m_approverName = _approverName;
    m_approverNameHasBeenSet = true;
}

bool ArchiveFlowApproverInfo::ApproverNameHasBeenSet() const
{
    return m_approverNameHasBeenSet;
}

int64_t ArchiveFlowApproverInfo::GetApproverType() const
{
    return m_approverType;
}

void ArchiveFlowApproverInfo::SetApproverType(const int64_t& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool ArchiveFlowApproverInfo::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string ArchiveFlowApproverInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void ArchiveFlowApproverInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool ArchiveFlowApproverInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string ArchiveFlowApproverInfo::GetApproverMobile() const
{
    return m_approverMobile;
}

void ArchiveFlowApproverInfo::SetApproverMobile(const string& _approverMobile)
{
    m_approverMobile = _approverMobile;
    m_approverMobileHasBeenSet = true;
}

bool ArchiveFlowApproverInfo::ApproverMobileHasBeenSet() const
{
    return m_approverMobileHasBeenSet;
}

string ArchiveFlowApproverInfo::GetApproverEmail() const
{
    return m_approverEmail;
}

void ArchiveFlowApproverInfo::SetApproverEmail(const string& _approverEmail)
{
    m_approverEmail = _approverEmail;
    m_approverEmailHasBeenSet = true;
}

bool ArchiveFlowApproverInfo::ApproverEmailHasBeenSet() const
{
    return m_approverEmailHasBeenSet;
}

string ArchiveFlowApproverInfo::GetApproverIdCardType() const
{
    return m_approverIdCardType;
}

void ArchiveFlowApproverInfo::SetApproverIdCardType(const string& _approverIdCardType)
{
    m_approverIdCardType = _approverIdCardType;
    m_approverIdCardTypeHasBeenSet = true;
}

bool ArchiveFlowApproverInfo::ApproverIdCardTypeHasBeenSet() const
{
    return m_approverIdCardTypeHasBeenSet;
}

string ArchiveFlowApproverInfo::GetApproverIdCardNumber() const
{
    return m_approverIdCardNumber;
}

void ArchiveFlowApproverInfo::SetApproverIdCardNumber(const string& _approverIdCardNumber)
{
    m_approverIdCardNumber = _approverIdCardNumber;
    m_approverIdCardNumberHasBeenSet = true;
}

bool ArchiveFlowApproverInfo::ApproverIdCardNumberHasBeenSet() const
{
    return m_approverIdCardNumberHasBeenSet;
}

int64_t ArchiveFlowApproverInfo::GetApproveTime() const
{
    return m_approveTime;
}

void ArchiveFlowApproverInfo::SetApproveTime(const int64_t& _approveTime)
{
    m_approveTime = _approveTime;
    m_approveTimeHasBeenSet = true;
}

bool ArchiveFlowApproverInfo::ApproveTimeHasBeenSet() const
{
    return m_approveTimeHasBeenSet;
}

