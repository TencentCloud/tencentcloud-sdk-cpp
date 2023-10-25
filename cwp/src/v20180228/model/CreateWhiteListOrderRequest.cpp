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

#include <tencentcloud/cwp/v20180228/model/CreateWhiteListOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CreateWhiteListOrderRequest::CreateWhiteListOrderRequest() :
    m_licenseTypeHasBeenSet(false),
    m_licenseNumHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_extraParamHasBeenSet(false)
{
}

string CreateWhiteListOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_licenseType, allocator);
    }

    if (m_licenseNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_licenseNum, allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadline, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regionId, allocator);
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraParam.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateWhiteListOrderRequest::GetLicenseType() const
{
    return m_licenseType;
}

void CreateWhiteListOrderRequest::SetLicenseType(const uint64_t& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool CreateWhiteListOrderRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

uint64_t CreateWhiteListOrderRequest::GetLicenseNum() const
{
    return m_licenseNum;
}

void CreateWhiteListOrderRequest::SetLicenseNum(const uint64_t& _licenseNum)
{
    m_licenseNum = _licenseNum;
    m_licenseNumHasBeenSet = true;
}

bool CreateWhiteListOrderRequest::LicenseNumHasBeenSet() const
{
    return m_licenseNumHasBeenSet;
}

uint64_t CreateWhiteListOrderRequest::GetDeadline() const
{
    return m_deadline;
}

void CreateWhiteListOrderRequest::SetDeadline(const uint64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool CreateWhiteListOrderRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string CreateWhiteListOrderRequest::GetRuleName() const
{
    return m_ruleName;
}

void CreateWhiteListOrderRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CreateWhiteListOrderRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t CreateWhiteListOrderRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateWhiteListOrderRequest::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateWhiteListOrderRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

uint64_t CreateWhiteListOrderRequest::GetRegionId() const
{
    return m_regionId;
}

void CreateWhiteListOrderRequest::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool CreateWhiteListOrderRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string CreateWhiteListOrderRequest::GetExtraParam() const
{
    return m_extraParam;
}

void CreateWhiteListOrderRequest::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool CreateWhiteListOrderRequest::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}


