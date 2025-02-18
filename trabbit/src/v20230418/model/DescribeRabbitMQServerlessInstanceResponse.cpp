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

#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

DescribeRabbitMQServerlessInstanceResponse::DescribeRabbitMQServerlessInstanceResponse() :
    m_clusterInfoHasBeenSet(false),
    m_clusterSpecInfoHasBeenSet(false),
    m_virtualHostQuotaHasBeenSet(false),
    m_exchangeQuotaHasBeenSet(false),
    m_queueQuotaHasBeenSet(false),
    m_clusterNetInfoHasBeenSet(false),
    m_clusterWhiteListInfoHasBeenSet(false),
    m_userQuotaHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRabbitMQServerlessInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterInfo") && !rsp["ClusterInfo"].IsNull())
    {
        if (!rsp["ClusterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterInfo.Deserialize(rsp["ClusterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterSpecInfo") && !rsp["ClusterSpecInfo"].IsNull())
    {
        if (!rsp["ClusterSpecInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSpecInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterSpecInfo.Deserialize(rsp["ClusterSpecInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterSpecInfoHasBeenSet = true;
    }

    if (rsp.HasMember("VirtualHostQuota") && !rsp["VirtualHostQuota"].IsNull())
    {
        if (!rsp["VirtualHostQuota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualHostQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_virtualHostQuota.Deserialize(rsp["VirtualHostQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_virtualHostQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("ExchangeQuota") && !rsp["ExchangeQuota"].IsNull())
    {
        if (!rsp["ExchangeQuota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_exchangeQuota.Deserialize(rsp["ExchangeQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_exchangeQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("QueueQuota") && !rsp["QueueQuota"].IsNull())
    {
        if (!rsp["QueueQuota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueueQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_queueQuota.Deserialize(rsp["QueueQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_queueQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterNetInfo") && !rsp["ClusterNetInfo"].IsNull())
    {
        if (!rsp["ClusterNetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterNetInfo.Deserialize(rsp["ClusterNetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterNetInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterWhiteListInfo") && !rsp["ClusterWhiteListInfo"].IsNull())
    {
        if (!rsp["ClusterWhiteListInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterWhiteListInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterWhiteListInfo.Deserialize(rsp["ClusterWhiteListInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterWhiteListInfoHasBeenSet = true;
    }

    if (rsp.HasMember("UserQuota") && !rsp["UserQuota"].IsNull())
    {
        if (!rsp["UserQuota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userQuota.Deserialize(rsp["UserQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRabbitMQServerlessInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterSpecInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterSpecInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterSpecInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_virtualHostQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHostQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_virtualHostQuota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_exchangeQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_exchangeQuota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_queueQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_queueQuota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterNetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterNetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterWhiteListInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterWhiteListInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterWhiteListInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userQuota.ToJsonObject(value[key.c_str()], allocator);
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


RabbitMQClusterInfo DescribeRabbitMQServerlessInstanceResponse::GetClusterInfo() const
{
    return m_clusterInfo;
}

bool DescribeRabbitMQServerlessInstanceResponse::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

RabbitMQClusterSpecInfo DescribeRabbitMQServerlessInstanceResponse::GetClusterSpecInfo() const
{
    return m_clusterSpecInfo;
}

bool DescribeRabbitMQServerlessInstanceResponse::ClusterSpecInfoHasBeenSet() const
{
    return m_clusterSpecInfoHasBeenSet;
}

VirtualHostQuota DescribeRabbitMQServerlessInstanceResponse::GetVirtualHostQuota() const
{
    return m_virtualHostQuota;
}

bool DescribeRabbitMQServerlessInstanceResponse::VirtualHostQuotaHasBeenSet() const
{
    return m_virtualHostQuotaHasBeenSet;
}

ExchangeQuota DescribeRabbitMQServerlessInstanceResponse::GetExchangeQuota() const
{
    return m_exchangeQuota;
}

bool DescribeRabbitMQServerlessInstanceResponse::ExchangeQuotaHasBeenSet() const
{
    return m_exchangeQuotaHasBeenSet;
}

QueueQuota DescribeRabbitMQServerlessInstanceResponse::GetQueueQuota() const
{
    return m_queueQuota;
}

bool DescribeRabbitMQServerlessInstanceResponse::QueueQuotaHasBeenSet() const
{
    return m_queueQuotaHasBeenSet;
}

RabbitMQServerlessAccessInfo DescribeRabbitMQServerlessInstanceResponse::GetClusterNetInfo() const
{
    return m_clusterNetInfo;
}

bool DescribeRabbitMQServerlessInstanceResponse::ClusterNetInfoHasBeenSet() const
{
    return m_clusterNetInfoHasBeenSet;
}

RabbitMQServerlessWhiteListInfo DescribeRabbitMQServerlessInstanceResponse::GetClusterWhiteListInfo() const
{
    return m_clusterWhiteListInfo;
}

bool DescribeRabbitMQServerlessInstanceResponse::ClusterWhiteListInfoHasBeenSet() const
{
    return m_clusterWhiteListInfoHasBeenSet;
}

UserQuota DescribeRabbitMQServerlessInstanceResponse::GetUserQuota() const
{
    return m_userQuota;
}

bool DescribeRabbitMQServerlessInstanceResponse::UserQuotaHasBeenSet() const
{
    return m_userQuotaHasBeenSet;
}


