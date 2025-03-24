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

#include <tencentcloud/chc/v20230418/model/LogisticsReceipt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

LogisticsReceipt::LogisticsReceipt() :
    m_logisticsArrivalTimeHasBeenSet(false),
    m_logisticsCompanyHasBeenSet(false),
    m_logisticsStuffHasBeenSet(false),
    m_logisticsStuffContactHasBeenSet(false),
    m_receiverContactHasBeenSet(false),
    m_receiverNameHasBeenSet(false),
    m_shippingAddressHasBeenSet(false)
{
}

CoreInternalOutcome LogisticsReceipt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogisticsArrivalTime") && !value["LogisticsArrivalTime"].IsNull())
    {
        if (!value["LogisticsArrivalTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogisticsReceipt.LogisticsArrivalTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logisticsArrivalTime = string(value["LogisticsArrivalTime"].GetString());
        m_logisticsArrivalTimeHasBeenSet = true;
    }

    if (value.HasMember("LogisticsCompany") && !value["LogisticsCompany"].IsNull())
    {
        if (!value["LogisticsCompany"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogisticsReceipt.LogisticsCompany` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logisticsCompany = string(value["LogisticsCompany"].GetString());
        m_logisticsCompanyHasBeenSet = true;
    }

    if (value.HasMember("LogisticsStuff") && !value["LogisticsStuff"].IsNull())
    {
        if (!value["LogisticsStuff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogisticsReceipt.LogisticsStuff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logisticsStuff = string(value["LogisticsStuff"].GetString());
        m_logisticsStuffHasBeenSet = true;
    }

    if (value.HasMember("LogisticsStuffContact") && !value["LogisticsStuffContact"].IsNull())
    {
        if (!value["LogisticsStuffContact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogisticsReceipt.LogisticsStuffContact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logisticsStuffContact = string(value["LogisticsStuffContact"].GetString());
        m_logisticsStuffContactHasBeenSet = true;
    }

    if (value.HasMember("ReceiverContact") && !value["ReceiverContact"].IsNull())
    {
        if (!value["ReceiverContact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogisticsReceipt.ReceiverContact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverContact = string(value["ReceiverContact"].GetString());
        m_receiverContactHasBeenSet = true;
    }

    if (value.HasMember("ReceiverName") && !value["ReceiverName"].IsNull())
    {
        if (!value["ReceiverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogisticsReceipt.ReceiverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverName = string(value["ReceiverName"].GetString());
        m_receiverNameHasBeenSet = true;
    }

    if (value.HasMember("ShippingAddress") && !value["ShippingAddress"].IsNull())
    {
        if (!value["ShippingAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogisticsReceipt.ShippingAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shippingAddress = string(value["ShippingAddress"].GetString());
        m_shippingAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogisticsReceipt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logisticsArrivalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogisticsArrivalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logisticsArrivalTime.c_str(), allocator).Move(), allocator);
    }

    if (m_logisticsCompanyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogisticsCompany";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logisticsCompany.c_str(), allocator).Move(), allocator);
    }

    if (m_logisticsStuffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogisticsStuff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logisticsStuff.c_str(), allocator).Move(), allocator);
    }

    if (m_logisticsStuffContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogisticsStuffContact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logisticsStuffContact.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverContact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverContact.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverName.c_str(), allocator).Move(), allocator);
    }

    if (m_shippingAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShippingAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shippingAddress.c_str(), allocator).Move(), allocator);
    }

}


string LogisticsReceipt::GetLogisticsArrivalTime() const
{
    return m_logisticsArrivalTime;
}

void LogisticsReceipt::SetLogisticsArrivalTime(const string& _logisticsArrivalTime)
{
    m_logisticsArrivalTime = _logisticsArrivalTime;
    m_logisticsArrivalTimeHasBeenSet = true;
}

bool LogisticsReceipt::LogisticsArrivalTimeHasBeenSet() const
{
    return m_logisticsArrivalTimeHasBeenSet;
}

string LogisticsReceipt::GetLogisticsCompany() const
{
    return m_logisticsCompany;
}

void LogisticsReceipt::SetLogisticsCompany(const string& _logisticsCompany)
{
    m_logisticsCompany = _logisticsCompany;
    m_logisticsCompanyHasBeenSet = true;
}

bool LogisticsReceipt::LogisticsCompanyHasBeenSet() const
{
    return m_logisticsCompanyHasBeenSet;
}

string LogisticsReceipt::GetLogisticsStuff() const
{
    return m_logisticsStuff;
}

void LogisticsReceipt::SetLogisticsStuff(const string& _logisticsStuff)
{
    m_logisticsStuff = _logisticsStuff;
    m_logisticsStuffHasBeenSet = true;
}

bool LogisticsReceipt::LogisticsStuffHasBeenSet() const
{
    return m_logisticsStuffHasBeenSet;
}

string LogisticsReceipt::GetLogisticsStuffContact() const
{
    return m_logisticsStuffContact;
}

void LogisticsReceipt::SetLogisticsStuffContact(const string& _logisticsStuffContact)
{
    m_logisticsStuffContact = _logisticsStuffContact;
    m_logisticsStuffContactHasBeenSet = true;
}

bool LogisticsReceipt::LogisticsStuffContactHasBeenSet() const
{
    return m_logisticsStuffContactHasBeenSet;
}

string LogisticsReceipt::GetReceiverContact() const
{
    return m_receiverContact;
}

void LogisticsReceipt::SetReceiverContact(const string& _receiverContact)
{
    m_receiverContact = _receiverContact;
    m_receiverContactHasBeenSet = true;
}

bool LogisticsReceipt::ReceiverContactHasBeenSet() const
{
    return m_receiverContactHasBeenSet;
}

string LogisticsReceipt::GetReceiverName() const
{
    return m_receiverName;
}

void LogisticsReceipt::SetReceiverName(const string& _receiverName)
{
    m_receiverName = _receiverName;
    m_receiverNameHasBeenSet = true;
}

bool LogisticsReceipt::ReceiverNameHasBeenSet() const
{
    return m_receiverNameHasBeenSet;
}

string LogisticsReceipt::GetShippingAddress() const
{
    return m_shippingAddress;
}

void LogisticsReceipt::SetShippingAddress(const string& _shippingAddress)
{
    m_shippingAddress = _shippingAddress;
    m_shippingAddressHasBeenSet = true;
}

bool LogisticsReceipt::ShippingAddressHasBeenSet() const
{
    return m_shippingAddressHasBeenSet;
}

