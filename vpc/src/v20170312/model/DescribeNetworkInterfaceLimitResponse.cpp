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
    m_extendEniPrivateIpAddressQuantityHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNetworkInterfaceLimitResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("EniQuantity") && !rsp["EniQuantity"].IsNull())
    {
        if (!rsp["EniQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EniQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eniQuantity = rsp["EniQuantity"].GetInt64();
        m_eniQuantityHasBeenSet = true;
    }

    if (rsp.HasMember("EniPrivateIpAddressQuantity") && !rsp["EniPrivateIpAddressQuantity"].IsNull())
    {
        if (!rsp["EniPrivateIpAddressQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EniPrivateIpAddressQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eniPrivateIpAddressQuantity = rsp["EniPrivateIpAddressQuantity"].GetInt64();
        m_eniPrivateIpAddressQuantityHasBeenSet = true;
    }

    if (rsp.HasMember("ExtendEniQuantity") && !rsp["ExtendEniQuantity"].IsNull())
    {
        if (!rsp["ExtendEniQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ExtendEniQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extendEniQuantity = rsp["ExtendEniQuantity"].GetInt64();
        m_extendEniQuantityHasBeenSet = true;
    }

    if (rsp.HasMember("ExtendEniPrivateIpAddressQuantity") && !rsp["ExtendEniPrivateIpAddressQuantity"].IsNull())
    {
        if (!rsp["ExtendEniPrivateIpAddressQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ExtendEniPrivateIpAddressQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extendEniPrivateIpAddressQuantity = rsp["ExtendEniPrivateIpAddressQuantity"].GetInt64();
        m_extendEniPrivateIpAddressQuantityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


