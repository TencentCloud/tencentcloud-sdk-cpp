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

#include <tencentcloud/vpc/v20170312/model/CustomerGatewayVendor.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CustomerGatewayVendor::CustomerGatewayVendor() :
    m_platformHasBeenSet(false),
    m_softwareVersionHasBeenSet(false),
    m_vendorNameHasBeenSet(false)
{
}

CoreInternalOutcome CustomerGatewayVendor::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerGatewayVendor.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("SoftwareVersion") && !value["SoftwareVersion"].IsNull())
    {
        if (!value["SoftwareVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerGatewayVendor.SoftwareVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_softwareVersion = string(value["SoftwareVersion"].GetString());
        m_softwareVersionHasBeenSet = true;
    }

    if (value.HasMember("VendorName") && !value["VendorName"].IsNull())
    {
        if (!value["VendorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerGatewayVendor.VendorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendorName = string(value["VendorName"].GetString());
        m_vendorNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomerGatewayVendor::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_softwareVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftwareVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_softwareVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VendorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendorName.c_str(), allocator).Move(), allocator);
    }

}


string CustomerGatewayVendor::GetPlatform() const
{
    return m_platform;
}

void CustomerGatewayVendor::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CustomerGatewayVendor::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string CustomerGatewayVendor::GetSoftwareVersion() const
{
    return m_softwareVersion;
}

void CustomerGatewayVendor::SetSoftwareVersion(const string& _softwareVersion)
{
    m_softwareVersion = _softwareVersion;
    m_softwareVersionHasBeenSet = true;
}

bool CustomerGatewayVendor::SoftwareVersionHasBeenSet() const
{
    return m_softwareVersionHasBeenSet;
}

string CustomerGatewayVendor::GetVendorName() const
{
    return m_vendorName;
}

void CustomerGatewayVendor::SetVendorName(const string& _vendorName)
{
    m_vendorName = _vendorName;
    m_vendorNameHasBeenSet = true;
}

bool CustomerGatewayVendor::VendorNameHasBeenSet() const
{
    return m_vendorNameHasBeenSet;
}

