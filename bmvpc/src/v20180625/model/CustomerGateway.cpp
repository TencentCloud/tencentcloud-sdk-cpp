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

#include <tencentcloud/bmvpc/v20180625/model/CustomerGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

CustomerGateway::CustomerGateway() :
    m_customerGatewayIdHasBeenSet(false),
    m_customerGatewayNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_vpnConnNumHasBeenSet(false)
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

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerGateway.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("VpnConnNum") && !value["VpnConnNum"].IsNull())
    {
        if (!value["VpnConnNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerGateway.VpnConnNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpnConnNum = value["VpnConnNum"].GetUint64();
        m_vpnConnNumHasBeenSet = true;
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnConnNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnConnNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpnConnNum, allocator);
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

string CustomerGateway::GetCreateTime() const
{
    return m_createTime;
}

void CustomerGateway::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CustomerGateway::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t CustomerGateway::GetVpnConnNum() const
{
    return m_vpnConnNum;
}

void CustomerGateway::SetVpnConnNum(const uint64_t& _vpnConnNum)
{
    m_vpnConnNum = _vpnConnNum;
    m_vpnConnNumHasBeenSet = true;
}

bool CustomerGateway::VpnConnNumHasBeenSet() const
{
    return m_vpnConnNumHasBeenSet;
}

