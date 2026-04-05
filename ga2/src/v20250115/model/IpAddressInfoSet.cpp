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

#include <tencentcloud/ga2/v20250115/model/IpAddressInfoSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

IpAddressInfoSet::IpAddressInfoSet() :
    m_ipAddressHasBeenSet(false),
    m_ispTypeHasBeenSet(false)
{
}

CoreInternalOutcome IpAddressInfoSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAddressInfoSet.IpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddress = string(value["IpAddress"].GetString());
        m_ipAddressHasBeenSet = true;
    }

    if (value.HasMember("IspType") && !value["IspType"].IsNull())
    {
        if (!value["IspType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAddressInfoSet.IspType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispType = string(value["IspType"].GetString());
        m_ispTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpAddressInfoSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_ispTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ispType.c_str(), allocator).Move(), allocator);
    }

}


string IpAddressInfoSet::GetIpAddress() const
{
    return m_ipAddress;
}

void IpAddressInfoSet::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool IpAddressInfoSet::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

string IpAddressInfoSet::GetIspType() const
{
    return m_ispType;
}

void IpAddressInfoSet::SetIspType(const string& _ispType)
{
    m_ispType = _ispType;
    m_ispTypeHasBeenSet = true;
}

bool IpAddressInfoSet::IspTypeHasBeenSet() const
{
    return m_ispTypeHasBeenSet;
}

