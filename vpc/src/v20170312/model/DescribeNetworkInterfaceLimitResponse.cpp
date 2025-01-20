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

#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfaceLimitResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeNetworkInterfaceLimitResponse::DescribeNetworkInterfaceLimitResponse() :
    m_eniQuantityHasBeenSet(false),
    m_eniPrivateIpAddressQuantityHasBeenSet(false),
    m_extendEniQuantityHasBeenSet(false),
    m_extendEniPrivateIpAddressQuantityHasBeenSet(false),
    m_subEniQuantityHasBeenSet(false),
    m_subEniPrivateIpAddressQuantityHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNetworkInterfaceLimitResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EniQuantity") && !rsp["EniQuantity"].IsNull())
    {
        if (!rsp["EniQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EniQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eniQuantity = rsp["EniQuantity"].GetInt64();
        m_eniQuantityHasBeenSet = true;
    }

    if (rsp.HasMember("EniPrivateIpAddressQuantity") && !rsp["EniPrivateIpAddressQuantity"].IsNull())
    {
        if (!rsp["EniPrivateIpAddressQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EniPrivateIpAddressQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eniPrivateIpAddressQuantity = rsp["EniPrivateIpAddressQuantity"].GetInt64();
        m_eniPrivateIpAddressQuantityHasBeenSet = true;
    }

    if (rsp.HasMember("ExtendEniQuantity") && !rsp["ExtendEniQuantity"].IsNull())
    {
        if (!rsp["ExtendEniQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendEniQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extendEniQuantity = rsp["ExtendEniQuantity"].GetInt64();
        m_extendEniQuantityHasBeenSet = true;
    }

    if (rsp.HasMember("ExtendEniPrivateIpAddressQuantity") && !rsp["ExtendEniPrivateIpAddressQuantity"].IsNull())
    {
        if (!rsp["ExtendEniPrivateIpAddressQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendEniPrivateIpAddressQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extendEniPrivateIpAddressQuantity = rsp["ExtendEniPrivateIpAddressQuantity"].GetInt64();
        m_extendEniPrivateIpAddressQuantityHasBeenSet = true;
    }

    if (rsp.HasMember("SubEniQuantity") && !rsp["SubEniQuantity"].IsNull())
    {
        if (!rsp["SubEniQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubEniQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subEniQuantity = rsp["SubEniQuantity"].GetInt64();
        m_subEniQuantityHasBeenSet = true;
    }

    if (rsp.HasMember("SubEniPrivateIpAddressQuantity") && !rsp["SubEniPrivateIpAddressQuantity"].IsNull())
    {
        if (!rsp["SubEniPrivateIpAddressQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubEniPrivateIpAddressQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subEniPrivateIpAddressQuantity = rsp["SubEniPrivateIpAddressQuantity"].GetInt64();
        m_subEniPrivateIpAddressQuantityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNetworkInterfaceLimitResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_eniQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eniQuantity, allocator);
    }

    if (m_eniPrivateIpAddressQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniPrivateIpAddressQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eniPrivateIpAddressQuantity, allocator);
    }

    if (m_extendEniQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendEniQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extendEniQuantity, allocator);
    }

    if (m_extendEniPrivateIpAddressQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendEniPrivateIpAddressQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extendEniPrivateIpAddressQuantity, allocator);
    }

    if (m_subEniQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubEniQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subEniQuantity, allocator);
    }

    if (m_subEniPrivateIpAddressQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubEniPrivateIpAddressQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subEniPrivateIpAddressQuantity, allocator);
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


int64_t DescribeNetworkInterfaceLimitResponse::GetEniQuantity() const
{
    return m_eniQuantity;
}

bool DescribeNetworkInterfaceLimitResponse::EniQuantityHasBeenSet() const
{
    return m_eniQuantityHasBeenSet;
}

int64_t DescribeNetworkInterfaceLimitResponse::GetEniPrivateIpAddressQuantity() const
{
    return m_eniPrivateIpAddressQuantity;
}

bool DescribeNetworkInterfaceLimitResponse::EniPrivateIpAddressQuantityHasBeenSet() const
{
    return m_eniPrivateIpAddressQuantityHasBeenSet;
}

int64_t DescribeNetworkInterfaceLimitResponse::GetExtendEniQuantity() const
{
    return m_extendEniQuantity;
}

bool DescribeNetworkInterfaceLimitResponse::ExtendEniQuantityHasBeenSet() const
{
    return m_extendEniQuantityHasBeenSet;
}

int64_t DescribeNetworkInterfaceLimitResponse::GetExtendEniPrivateIpAddressQuantity() const
{
    return m_extendEniPrivateIpAddressQuantity;
}

bool DescribeNetworkInterfaceLimitResponse::ExtendEniPrivateIpAddressQuantityHasBeenSet() const
{
    return m_extendEniPrivateIpAddressQuantityHasBeenSet;
}

int64_t DescribeNetworkInterfaceLimitResponse::GetSubEniQuantity() const
{
    return m_subEniQuantity;
}

bool DescribeNetworkInterfaceLimitResponse::SubEniQuantityHasBeenSet() const
{
    return m_subEniQuantityHasBeenSet;
}

int64_t DescribeNetworkInterfaceLimitResponse::GetSubEniPrivateIpAddressQuantity() const
{
    return m_subEniPrivateIpAddressQuantity;
}

bool DescribeNetworkInterfaceLimitResponse::SubEniPrivateIpAddressQuantityHasBeenSet() const
{
    return m_subEniPrivateIpAddressQuantityHasBeenSet;
}


