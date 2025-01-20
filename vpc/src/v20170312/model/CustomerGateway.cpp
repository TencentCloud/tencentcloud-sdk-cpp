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

#include <tencentcloud/vpc/v20170312/model/CustomerGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CustomerGateway::CustomerGateway() :
    m_customerGatewayIdHasBeenSet(false),
    m_customerGatewayNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_bgpAsnHasBeenSet(false)
{
}

CoreInternalOutcome CustomerGateway::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerGatewayId") && !value["CustomerGatewayId"].IsNull())
    {
        if (!value["CustomerGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerGateway.CustomerGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerGatewayId = string(value["CustomerGatewayId"].GetString());
        m_customerGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerGatewayName") && !value["CustomerGatewayName"].IsNull())
    {
        if (!value["CustomerGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerGateway.CustomerGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerGatewayName = string(value["CustomerGatewayName"].GetString());
        m_customerGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerGateway.IpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddress = string(value["IpAddress"].GetString());
        m_ipAddressHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerGateway.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("BgpAsn") && !value["BgpAsn"].IsNull())
    {
        if (!value["BgpAsn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerGateway.BgpAsn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bgpAsn = value["BgpAsn"].GetUint64();
        m_bgpAsnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomerGateway::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bgpAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpAsn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bgpAsn, allocator);
    }

}


string CustomerGateway::GetCustomerGatewayId() const
{
    return m_customerGatewayId;
}

void CustomerGateway::SetCustomerGatewayId(const string& _customerGatewayId)
{
    m_customerGatewayId = _customerGatewayId;
    m_customerGatewayIdHasBeenSet = true;
}

bool CustomerGateway::CustomerGatewayIdHasBeenSet() const
{
    return m_customerGatewayIdHasBeenSet;
}

string CustomerGateway::GetCustomerGatewayName() const
{
    return m_customerGatewayName;
}

void CustomerGateway::SetCustomerGatewayName(const string& _customerGatewayName)
{
    m_customerGatewayName = _customerGatewayName;
    m_customerGatewayNameHasBeenSet = true;
}

bool CustomerGateway::CustomerGatewayNameHasBeenSet() const
{
    return m_customerGatewayNameHasBeenSet;
}

string CustomerGateway::GetIpAddress() const
{
    return m_ipAddress;
}

void CustomerGateway::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool CustomerGateway::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

string CustomerGateway::GetCreatedTime() const
{
    return m_createdTime;
}

void CustomerGateway::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool CustomerGateway::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

uint64_t CustomerGateway::GetBgpAsn() const
{
    return m_bgpAsn;
}

void CustomerGateway::SetBgpAsn(const uint64_t& _bgpAsn)
{
    m_bgpAsn = _bgpAsn;
    m_bgpAsnHasBeenSet = true;
}

bool CustomerGateway::BgpAsnHasBeenSet() const
{
    return m_bgpAsnHasBeenSet;
}

