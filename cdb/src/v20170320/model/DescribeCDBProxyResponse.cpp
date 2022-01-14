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

#include <tencentcloud/cdb/v20170320/model/DescribeCDBProxyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeCDBProxyResponse::DescribeCDBProxyResponse() :
    m_baseGroupHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_proxyNodeHasBeenSet(false),
    m_rWInstInfoHasBeenSet(false),
    m_connectionPoolInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCDBProxyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BaseGroup") && !rsp["BaseGroup"].IsNull())
    {
        if (!rsp["BaseGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaseGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseGroup.Deserialize(rsp["BaseGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseGroupHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Address` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_address.Deserialize(rsp["Address"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("ProxyNode") && !rsp["ProxyNode"].IsNull())
    {
        if (!rsp["ProxyNode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_proxyNode.Deserialize(rsp["ProxyNode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_proxyNodeHasBeenSet = true;
    }

    if (rsp.HasMember("RWInstInfo") && !rsp["RWInstInfo"].IsNull())
    {
        if (!rsp["RWInstInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RWInstInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rWInstInfo.Deserialize(rsp["RWInstInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rWInstInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ConnectionPoolInfo") && !rsp["ConnectionPoolInfo"].IsNull())
    {
        if (!rsp["ConnectionPoolInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionPoolInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_connectionPoolInfo.Deserialize(rsp["ConnectionPoolInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_connectionPoolInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCDBProxyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_baseGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseGroup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_address.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_proxyNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_proxyNode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rWInstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RWInstInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rWInstInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_connectionPoolInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_connectionPoolInfo.ToJsonObject(value[key.c_str()], allocator);
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


BaseGroupInfo DescribeCDBProxyResponse::GetBaseGroup() const
{
    return m_baseGroup;
}

bool DescribeCDBProxyResponse::BaseGroupHasBeenSet() const
{
    return m_baseGroupHasBeenSet;
}

Address DescribeCDBProxyResponse::GetAddress() const
{
    return m_address;
}

bool DescribeCDBProxyResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

ProxyNodeInfo DescribeCDBProxyResponse::GetProxyNode() const
{
    return m_proxyNode;
}

bool DescribeCDBProxyResponse::ProxyNodeHasBeenSet() const
{
    return m_proxyNodeHasBeenSet;
}

RWInfo DescribeCDBProxyResponse::GetRWInstInfo() const
{
    return m_rWInstInfo;
}

bool DescribeCDBProxyResponse::RWInstInfoHasBeenSet() const
{
    return m_rWInstInfoHasBeenSet;
}

ConnectionPoolInfo DescribeCDBProxyResponse::GetConnectionPoolInfo() const
{
    return m_connectionPoolInfo;
}

bool DescribeCDBProxyResponse::ConnectionPoolInfoHasBeenSet() const
{
    return m_connectionPoolInfoHasBeenSet;
}


