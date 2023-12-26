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

#include <tencentcloud/essbasic/v20210526/model/NeedReviewApproverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

NeedReviewApproverInfo::NeedReviewApproverInfo() :
    m_approverTypeHasBeenSet(false),
    m_approverNameHasBeenSet(false),
    m_approverMobileHasBeenSet(false),
    m_approverIdCardTypeHasBeenSet(false),
    m_approverIdCardNumberHasBeenSet(false),
    m_organizationNameHasBeenSet(false)
{
}

CoreInternalOutcome NeedReviewApproverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeedReviewApproverInfo.ApproverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = string(value["ApproverType"].GetString());
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverName") && !value["ApproverName"].IsNull())
    {
        if (!value["ApproverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeedReviewApproverInfo.ApproverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverName = string(value["ApproverName"].GetString());
        m_approverNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverMobile") && !value["ApproverMobile"].IsNull())
    {
        if (!value["ApproverMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeedReviewApproverInfo.ApproverMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverMobile = string(value["ApproverMobile"].GetString());
        m_approverMobileHasBeenSet = true;
    }

    if (value.HasMember("ApproverIdCardType") && !value["ApproverIdCardType"].IsNull())
    {
        if (!value["ApproverIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeedReviewApproverInfo.ApproverIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardType = string(value["ApproverIdCardType"].GetString());
        m_approverIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverIdCardNumber") && !value["ApproverIdCardNumber"].IsNull())
    {
        if (!value["ApproverIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeedReviewApproverInfo.ApproverIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardNumber = string(value["ApproverIdCardNumber"].GetString());
        m_approverIdCardNumberHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeedReviewApproverInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NeedReviewApproverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverType.c_str(), allocator).Move(), allocator);
    }

    if (m_approverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverName.c_str(), allocator).Move(), allocator);
    }

    if (m_approverMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverMobile.c_str(), allocator).Move(), allocator);
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

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

}


string NeedReviewApproverInfo::GetApproverType() const
{
    return m_approverType;
}

void NeedReviewApproverInfo::SetApproverType(const string& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool NeedReviewApproverInfo::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string NeedReviewApproverInfo::GetApproverName() const
{
    return m_approverName;
}

void NeedReviewApproverInfo::SetApproverName(const string& _approverName)
{
    m_approverName = _approverName;
    m_approverNameHasBeenSet = true;
}

bool NeedReviewApproverInfo::ApproverNameHasBeenSet() const
{
    return m_approverNameHasBeenSet;
}

string NeedReviewApproverInfo::GetApproverMobile() const
{
    return m_approverMobile;
}

void NeedReviewApproverInfo::SetApproverMobile(const string& _approverMobile)
{
    m_approverMobile = _approverMobile;
    m_approverMobileHasBeenSet = true;
}

bool NeedReviewApproverInfo::ApproverMobileHasBeenSet() const
{
    return m_approverMobileHasBeenSet;
}

string NeedReviewApproverInfo::GetApproverIdCardType() const
{
    return m_approverIdCardType;
}

void NeedReviewApproverInfo::SetApproverIdCardType(const string& _approverIdCardType)
{
    m_approverIdCardType = _approverIdCardType;
    m_approverIdCardTypeHasBeenSet = true;
}

bool NeedReviewApproverInfo::ApproverIdCardTypeHasBeenSet() const
{
    return m_approverIdCardTypeHasBeenSet;
}

string NeedReviewApproverInfo::GetApproverIdCardNumber() const
{
    return m_approverIdCardNumber;
}

void NeedReviewApproverInfo::SetApproverIdCardNumber(const string& _approverIdCardNumber)
{
    m_approverIdCardNumber = _approverIdCardNumber;
    m_approverIdCardNumberHasBeenSet = true;
}

bool NeedReviewApproverInfo::ApproverIdCardNumberHasBeenSet() const
{
    return m_approverIdCardNumberHasBeenSet;
}

string NeedReviewApproverInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void NeedReviewApproverInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool NeedReviewApproverInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

