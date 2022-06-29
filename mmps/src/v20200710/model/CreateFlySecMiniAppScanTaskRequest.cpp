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

#include <tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

CreateFlySecMiniAppScanTaskRequest::CreateFlySecMiniAppScanTaskRequest() :
    m_miniAppIDHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_miniAppTestAccountHasBeenSet(false),
    m_miniAppTestPwdHasBeenSet(false),
    m_industryHasBeenSet(false),
    m_surveyContentHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_salesPersonHasBeenSet(false),
    m_scanVersionHasBeenSet(false)
{
}

string CreateFlySecMiniAppScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_miniAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_miniAppTestAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppTestAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniAppTestAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppTestPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppTestPwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniAppTestPwd.c_str(), allocator).Move(), allocator);
    }

    if (m_industryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Industry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_industry.c_str(), allocator).Move(), allocator);
    }

    if (m_surveyContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurveyContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_surveyContent.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_salesPersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesPerson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_salesPerson.c_str(), allocator).Move(), allocator);
    }

    if (m_scanVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFlySecMiniAppScanTaskRequest::GetMiniAppID() const
{
    return m_miniAppID;
}

void CreateFlySecMiniAppScanTaskRequest::SetMiniAppID(const string& _miniAppID)
{
    m_miniAppID = _miniAppID;
    m_miniAppIDHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRequest::MiniAppIDHasBeenSet() const
{
    return m_miniAppIDHasBeenSet;
}

int64_t CreateFlySecMiniAppScanTaskRequest::GetMode() const
{
    return m_mode;
}

void CreateFlySecMiniAppScanTaskRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string CreateFlySecMiniAppScanTaskRequest::GetMiniAppTestAccount() const
{
    return m_miniAppTestAccount;
}

void CreateFlySecMiniAppScanTaskRequest::SetMiniAppTestAccount(const string& _miniAppTestAccount)
{
    m_miniAppTestAccount = _miniAppTestAccount;
    m_miniAppTestAccountHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRequest::MiniAppTestAccountHasBeenSet() const
{
    return m_miniAppTestAccountHasBeenSet;
}

string CreateFlySecMiniAppScanTaskRequest::GetMiniAppTestPwd() const
{
    return m_miniAppTestPwd;
}

void CreateFlySecMiniAppScanTaskRequest::SetMiniAppTestPwd(const string& _miniAppTestPwd)
{
    m_miniAppTestPwd = _miniAppTestPwd;
    m_miniAppTestPwdHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRequest::MiniAppTestPwdHasBeenSet() const
{
    return m_miniAppTestPwdHasBeenSet;
}

string CreateFlySecMiniAppScanTaskRequest::GetIndustry() const
{
    return m_industry;
}

void CreateFlySecMiniAppScanTaskRequest::SetIndustry(const string& _industry)
{
    m_industry = _industry;
    m_industryHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRequest::IndustryHasBeenSet() const
{
    return m_industryHasBeenSet;
}

string CreateFlySecMiniAppScanTaskRequest::GetSurveyContent() const
{
    return m_surveyContent;
}

void CreateFlySecMiniAppScanTaskRequest::SetSurveyContent(const string& _surveyContent)
{
    m_surveyContent = _surveyContent;
    m_surveyContentHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRequest::SurveyContentHasBeenSet() const
{
    return m_surveyContentHasBeenSet;
}

string CreateFlySecMiniAppScanTaskRequest::GetMobile() const
{
    return m_mobile;
}

void CreateFlySecMiniAppScanTaskRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string CreateFlySecMiniAppScanTaskRequest::GetEmail() const
{
    return m_email;
}

void CreateFlySecMiniAppScanTaskRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateFlySecMiniAppScanTaskRequest::GetSalesPerson() const
{
    return m_salesPerson;
}

void CreateFlySecMiniAppScanTaskRequest::SetSalesPerson(const string& _salesPerson)
{
    m_salesPerson = _salesPerson;
    m_salesPersonHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRequest::SalesPersonHasBeenSet() const
{
    return m_salesPersonHasBeenSet;
}

int64_t CreateFlySecMiniAppScanTaskRequest::GetScanVersion() const
{
    return m_scanVersion;
}

void CreateFlySecMiniAppScanTaskRequest::SetScanVersion(const int64_t& _scanVersion)
{
    m_scanVersion = _scanVersion;
    m_scanVersionHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRequest::ScanVersionHasBeenSet() const
{
    return m_scanVersionHasBeenSet;
}


