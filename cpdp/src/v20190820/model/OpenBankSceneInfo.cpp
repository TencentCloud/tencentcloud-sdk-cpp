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

#include <tencentcloud/cpdp/v20190820/model/OpenBankSceneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankSceneInfo::OpenBankSceneInfo() :
    m_payerClientIpHasBeenSet(false),
    m_payerUaHasBeenSet(false),
    m_orderTimeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankSceneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayerClientIp") && !value["PayerClientIp"].IsNull())
    {
        if (!value["PayerClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankSceneInfo.PayerClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerClientIp = string(value["PayerClientIp"].GetString());
        m_payerClientIpHasBeenSet = true;
    }

    if (value.HasMember("PayerUa") && !value["PayerUa"].IsNull())
    {
        if (!value["PayerUa"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankSceneInfo.PayerUa` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUa = string(value["PayerUa"].GetString());
        m_payerUaHasBeenSet = true;
    }

    if (value.HasMember("OrderTime") && !value["OrderTime"].IsNull())
    {
        if (!value["OrderTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankSceneInfo.OrderTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderTime = string(value["OrderTime"].GetString());
        m_orderTimeHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankSceneInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankSceneInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankSceneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payerClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_payerUaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerUa.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankSceneInfo::GetPayerClientIp() const
{
    return m_payerClientIp;
}

void OpenBankSceneInfo::SetPayerClientIp(const string& _payerClientIp)
{
    m_payerClientIp = _payerClientIp;
    m_payerClientIpHasBeenSet = true;
}

bool OpenBankSceneInfo::PayerClientIpHasBeenSet() const
{
    return m_payerClientIpHasBeenSet;
}

string OpenBankSceneInfo::GetPayerUa() const
{
    return m_payerUa;
}

void OpenBankSceneInfo::SetPayerUa(const string& _payerUa)
{
    m_payerUa = _payerUa;
    m_payerUaHasBeenSet = true;
}

bool OpenBankSceneInfo::PayerUaHasBeenSet() const
{
    return m_payerUaHasBeenSet;
}

string OpenBankSceneInfo::GetOrderTime() const
{
    return m_orderTime;
}

void OpenBankSceneInfo::SetOrderTime(const string& _orderTime)
{
    m_orderTime = _orderTime;
    m_orderTimeHasBeenSet = true;
}

bool OpenBankSceneInfo::OrderTimeHasBeenSet() const
{
    return m_orderTimeHasBeenSet;
}

string OpenBankSceneInfo::GetDeviceId() const
{
    return m_deviceId;
}

void OpenBankSceneInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool OpenBankSceneInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string OpenBankSceneInfo::GetDeviceType() const
{
    return m_deviceType;
}

void OpenBankSceneInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool OpenBankSceneInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

