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

#include <tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

DescribeVcubeApplicationAndLicenseRequest::DescribeVcubeApplicationAndLicenseRequest() :
    m_bizTypeHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_macBundleIdHasBeenSet(false),
    m_winProcessNameHasBeenSet(false)
{
}

string DescribeVcubeApplicationAndLicenseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_macBundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacBundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_macBundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_winProcessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WinProcessName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_winProcessName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeVcubeApplicationAndLicenseRequest::GetBizType() const
{
    return m_bizType;
}

void DescribeVcubeApplicationAndLicenseRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool DescribeVcubeApplicationAndLicenseRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string DescribeVcubeApplicationAndLicenseRequest::GetAppType() const
{
    return m_appType;
}

void DescribeVcubeApplicationAndLicenseRequest::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool DescribeVcubeApplicationAndLicenseRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string DescribeVcubeApplicationAndLicenseRequest::GetAppName() const
{
    return m_appName;
}

void DescribeVcubeApplicationAndLicenseRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeVcubeApplicationAndLicenseRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeVcubeApplicationAndLicenseRequest::GetBundleId() const
{
    return m_bundleId;
}

void DescribeVcubeApplicationAndLicenseRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool DescribeVcubeApplicationAndLicenseRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string DescribeVcubeApplicationAndLicenseRequest::GetPackageName() const
{
    return m_packageName;
}

void DescribeVcubeApplicationAndLicenseRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool DescribeVcubeApplicationAndLicenseRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string DescribeVcubeApplicationAndLicenseRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeVcubeApplicationAndLicenseRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeVcubeApplicationAndLicenseRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeVcubeApplicationAndLicenseRequest::GetMacBundleId() const
{
    return m_macBundleId;
}

void DescribeVcubeApplicationAndLicenseRequest::SetMacBundleId(const string& _macBundleId)
{
    m_macBundleId = _macBundleId;
    m_macBundleIdHasBeenSet = true;
}

bool DescribeVcubeApplicationAndLicenseRequest::MacBundleIdHasBeenSet() const
{
    return m_macBundleIdHasBeenSet;
}

string DescribeVcubeApplicationAndLicenseRequest::GetWinProcessName() const
{
    return m_winProcessName;
}

void DescribeVcubeApplicationAndLicenseRequest::SetWinProcessName(const string& _winProcessName)
{
    m_winProcessName = _winProcessName;
    m_winProcessNameHasBeenSet = true;
}

bool DescribeVcubeApplicationAndLicenseRequest::WinProcessNameHasBeenSet() const
{
    return m_winProcessNameHasBeenSet;
}


