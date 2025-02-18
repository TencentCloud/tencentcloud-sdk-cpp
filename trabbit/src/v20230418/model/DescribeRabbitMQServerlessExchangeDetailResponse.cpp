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

#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessExchangeDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

DescribeRabbitMQServerlessExchangeDetailResponse::DescribeRabbitMQServerlessExchangeDetailResponse() :
    m_exchangeNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_durableHasBeenSet(false),
    m_autoDeleteHasBeenSet(false),
    m_internalHasBeenSet(false),
    m_alternateExchangeHasBeenSet(false),
    m_exchangeTypeHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_exchangeCreatorHasBeenSet(false),
    m_argumentsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRabbitMQServerlessExchangeDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ExchangeName") && !rsp["ExchangeName"].IsNull())
    {
        if (!rsp["ExchangeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeName = string(rsp["ExchangeName"].GetString());
        m_exchangeNameHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("Durable") && !rsp["Durable"].IsNull())
    {
        if (!rsp["Durable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Durable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_durable = rsp["Durable"].GetBool();
        m_durableHasBeenSet = true;
    }

    if (rsp.HasMember("AutoDelete") && !rsp["AutoDelete"].IsNull())
    {
        if (!rsp["AutoDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoDelete = rsp["AutoDelete"].GetBool();
        m_autoDeleteHasBeenSet = true;
    }

    if (rsp.HasMember("Internal") && !rsp["Internal"].IsNull())
    {
        if (!rsp["Internal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Internal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_internal = rsp["Internal"].GetBool();
        m_internalHasBeenSet = true;
    }

    if (rsp.HasMember("AlternateExchange") && !rsp["AlternateExchange"].IsNull())
    {
        if (!rsp["AlternateExchange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlternateExchange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alternateExchange = string(rsp["AlternateExchange"].GetString());
        m_alternateExchangeHasBeenSet = true;
    }

    if (rsp.HasMember("ExchangeType") && !rsp["ExchangeType"].IsNull())
    {
        if (!rsp["ExchangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeType = string(rsp["ExchangeType"].GetString());
        m_exchangeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("VirtualHost") && !rsp["VirtualHost"].IsNull())
    {
        if (!rsp["VirtualHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualHost = string(rsp["VirtualHost"].GetString());
        m_virtualHostHasBeenSet = true;
    }

    if (rsp.HasMember("ExchangeCreator") && !rsp["ExchangeCreator"].IsNull())
    {
        if (!rsp["ExchangeCreator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeCreator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeCreator = string(rsp["ExchangeCreator"].GetString());
        m_exchangeCreatorHasBeenSet = true;
    }

    if (rsp.HasMember("Arguments") && !rsp["Arguments"].IsNull())
    {
        if (!rsp["Arguments"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Arguments` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arguments = string(rsp["Arguments"].GetString());
        m_argumentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRabbitMQServerlessExchangeDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_exchangeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exchangeName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_durableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Durable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durable, allocator);
    }

    if (m_autoDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoDelete, allocator);
    }

    if (m_internalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Internal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internal, allocator);
    }

    if (m_alternateExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlternateExchange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alternateExchange.c_str(), allocator).Move(), allocator);
    }

    if (m_exchangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exchangeType.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_exchangeCreatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeCreator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exchangeCreator.c_str(), allocator).Move(), allocator);
    }

    if (m_argumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arguments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arguments.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeRabbitMQServerlessExchangeDetailResponse::GetExchangeName() const
{
    return m_exchangeName;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::ExchangeNameHasBeenSet() const
{
    return m_exchangeNameHasBeenSet;
}

string DescribeRabbitMQServerlessExchangeDetailResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::GetDurable() const
{
    return m_durable;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::DurableHasBeenSet() const
{
    return m_durableHasBeenSet;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::GetAutoDelete() const
{
    return m_autoDelete;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::GetInternal() const
{
    return m_internal;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::InternalHasBeenSet() const
{
    return m_internalHasBeenSet;
}

string DescribeRabbitMQServerlessExchangeDetailResponse::GetAlternateExchange() const
{
    return m_alternateExchange;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::AlternateExchangeHasBeenSet() const
{
    return m_alternateExchangeHasBeenSet;
}

string DescribeRabbitMQServerlessExchangeDetailResponse::GetExchangeType() const
{
    return m_exchangeType;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::ExchangeTypeHasBeenSet() const
{
    return m_exchangeTypeHasBeenSet;
}

string DescribeRabbitMQServerlessExchangeDetailResponse::GetVirtualHost() const
{
    return m_virtualHost;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string DescribeRabbitMQServerlessExchangeDetailResponse::GetExchangeCreator() const
{
    return m_exchangeCreator;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::ExchangeCreatorHasBeenSet() const
{
    return m_exchangeCreatorHasBeenSet;
}

string DescribeRabbitMQServerlessExchangeDetailResponse::GetArguments() const
{
    return m_arguments;
}

bool DescribeRabbitMQServerlessExchangeDetailResponse::ArgumentsHasBeenSet() const
{
    return m_argumentsHasBeenSet;
}


