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

#include <tencentcloud/cloudapp/v20220530/model/IssueLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudapp::V20220530::Model;
using namespace std;

IssueLicenseRequest::IssueLicenseRequest() :
    m_cloudappIdHasBeenSet(false),
    m_licenseIdHasBeenSet(false),
    m_licenseDataHasBeenSet(false),
    m_activateModeHasBeenSet(false),
    m_activateAtHasBeenSet(false)
{
}

string IssueLicenseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cloudappIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudappId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudappId.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_licenseId.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_licenseData.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_activateModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivateMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_activateMode.c_str(), allocator).Move(), allocator);
    }

    if (m_activateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivateAt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_activateAt.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string IssueLicenseRequest::GetCloudappId() const
{
    return m_cloudappId;
}

void IssueLicenseRequest::SetCloudappId(const string& _cloudappId)
{
    m_cloudappId = _cloudappId;
    m_cloudappIdHasBeenSet = true;
}

bool IssueLicenseRequest::CloudappIdHasBeenSet() const
{
    return m_cloudappIdHasBeenSet;
}

string IssueLicenseRequest::GetLicenseId() const
{
    return m_licenseId;
}

void IssueLicenseRequest::SetLicenseId(const string& _licenseId)
{
    m_licenseId = _licenseId;
    m_licenseIdHasBeenSet = true;
}

bool IssueLicenseRequest::LicenseIdHasBeenSet() const
{
    return m_licenseIdHasBeenSet;
}

PartnerLicenseData IssueLicenseRequest::GetLicenseData() const
{
    return m_licenseData;
}

void IssueLicenseRequest::SetLicenseData(const PartnerLicenseData& _licenseData)
{
    m_licenseData = _licenseData;
    m_licenseDataHasBeenSet = true;
}

bool IssueLicenseRequest::LicenseDataHasBeenSet() const
{
    return m_licenseDataHasBeenSet;
}

string IssueLicenseRequest::GetActivateMode() const
{
    return m_activateMode;
}

void IssueLicenseRequest::SetActivateMode(const string& _activateMode)
{
    m_activateMode = _activateMode;
    m_activateModeHasBeenSet = true;
}

bool IssueLicenseRequest::ActivateModeHasBeenSet() const
{
    return m_activateModeHasBeenSet;
}

string IssueLicenseRequest::GetActivateAt() const
{
    return m_activateAt;
}

void IssueLicenseRequest::SetActivateAt(const string& _activateAt)
{
    m_activateAt = _activateAt;
    m_activateAtHasBeenSet = true;
}

bool IssueLicenseRequest::ActivateAtHasBeenSet() const
{
    return m_activateAtHasBeenSet;
}


