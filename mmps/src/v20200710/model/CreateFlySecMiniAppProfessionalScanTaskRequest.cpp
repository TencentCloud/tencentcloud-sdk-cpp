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

#include <tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppProfessionalScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

CreateFlySecMiniAppProfessionalScanTaskRequest::CreateFlySecMiniAppProfessionalScanTaskRequest() :
    m_miniAppIDHasBeenSet(false),
    m_miniAppNameHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_corpNameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateFlySecMiniAppProfessionalScanTaskRequest::ToJsonString() const
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

    if (m_miniAppNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniAppName.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_corpNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_corpName.c_str(), allocator).Move(), allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFlySecMiniAppProfessionalScanTaskRequest::GetMiniAppID() const
{
    return m_miniAppID;
}

void CreateFlySecMiniAppProfessionalScanTaskRequest::SetMiniAppID(const string& _miniAppID)
{
    m_miniAppID = _miniAppID;
    m_miniAppIDHasBeenSet = true;
}

bool CreateFlySecMiniAppProfessionalScanTaskRequest::MiniAppIDHasBeenSet() const
{
    return m_miniAppIDHasBeenSet;
}

string CreateFlySecMiniAppProfessionalScanTaskRequest::GetMiniAppName() const
{
    return m_miniAppName;
}

void CreateFlySecMiniAppProfessionalScanTaskRequest::SetMiniAppName(const string& _miniAppName)
{
    m_miniAppName = _miniAppName;
    m_miniAppNameHasBeenSet = true;
}

bool CreateFlySecMiniAppProfessionalScanTaskRequest::MiniAppNameHasBeenSet() const
{
    return m_miniAppNameHasBeenSet;
}

int64_t CreateFlySecMiniAppProfessionalScanTaskRequest::GetMode() const
{
    return m_mode;
}

void CreateFlySecMiniAppProfessionalScanTaskRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateFlySecMiniAppProfessionalScanTaskRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string CreateFlySecMiniAppProfessionalScanTaskRequest::GetCorpName() const
{
    return m_corpName;
}

void CreateFlySecMiniAppProfessionalScanTaskRequest::SetCorpName(const string& _corpName)
{
    m_corpName = _corpName;
    m_corpNameHasBeenSet = true;
}

bool CreateFlySecMiniAppProfessionalScanTaskRequest::CorpNameHasBeenSet() const
{
    return m_corpNameHasBeenSet;
}

string CreateFlySecMiniAppProfessionalScanTaskRequest::GetMobile() const
{
    return m_mobile;
}

void CreateFlySecMiniAppProfessionalScanTaskRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CreateFlySecMiniAppProfessionalScanTaskRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string CreateFlySecMiniAppProfessionalScanTaskRequest::GetEmail() const
{
    return m_email;
}

void CreateFlySecMiniAppProfessionalScanTaskRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateFlySecMiniAppProfessionalScanTaskRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateFlySecMiniAppProfessionalScanTaskRequest::GetRemark() const
{
    return m_remark;
}

void CreateFlySecMiniAppProfessionalScanTaskRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateFlySecMiniAppProfessionalScanTaskRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


