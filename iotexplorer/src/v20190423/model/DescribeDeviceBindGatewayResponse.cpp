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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceBindGatewayResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeDeviceBindGatewayResponse::DescribeDeviceBindGatewayResponse() :
    m_gatewayProductIdHasBeenSet(false),
    m_gatewayDeviceNameHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_gatewayProductOwnerNameHasBeenSet(false),
    m_gatewayProductOwnerUinHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceBindGatewayResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GatewayProductId") && !rsp["GatewayProductId"].IsNull())
    {
        if (!rsp["GatewayProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayProductId = string(rsp["GatewayProductId"].GetString());
        m_gatewayProductIdHasBeenSet = true;
    }

    if (rsp.HasMember("GatewayDeviceName") && !rsp["GatewayDeviceName"].IsNull())
    {
        if (!rsp["GatewayDeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayDeviceName = string(rsp["GatewayDeviceName"].GetString());
        m_gatewayDeviceNameHasBeenSet = true;
    }

    if (rsp.HasMember("GatewayName") && !rsp["GatewayName"].IsNull())
    {
        if (!rsp["GatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayName = string(rsp["GatewayName"].GetString());
        m_gatewayNameHasBeenSet = true;
    }

    if (rsp.HasMember("GatewayProductOwnerName") && !rsp["GatewayProductOwnerName"].IsNull())
    {
        if (!rsp["GatewayProductOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayProductOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayProductOwnerName = string(rsp["GatewayProductOwnerName"].GetString());
        m_gatewayProductOwnerNameHasBeenSet = true;
    }

    if (rsp.HasMember("GatewayProductOwnerUin") && !rsp["GatewayProductOwnerUin"].IsNull())
    {
        if (!rsp["GatewayProductOwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayProductOwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayProductOwnerUin = string(rsp["GatewayProductOwnerUin"].GetString());
        m_gatewayProductOwnerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDeviceBindGatewayResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_gatewayProductIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayProductId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayDeviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayDeviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayProductOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayProductOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayProductOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayProductOwnerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayProductOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayProductOwnerUin.c_str(), allocator).Move(), allocator);
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


string DescribeDeviceBindGatewayResponse::GetGatewayProductId() const
{
    return m_gatewayProductId;
}

bool DescribeDeviceBindGatewayResponse::GatewayProductIdHasBeenSet() const
{
    return m_gatewayProductIdHasBeenSet;
}

string DescribeDeviceBindGatewayResponse::GetGatewayDeviceName() const
{
    return m_gatewayDeviceName;
}

bool DescribeDeviceBindGatewayResponse::GatewayDeviceNameHasBeenSet() const
{
    return m_gatewayDeviceNameHasBeenSet;
}

string DescribeDeviceBindGatewayResponse::GetGatewayName() const
{
    return m_gatewayName;
}

bool DescribeDeviceBindGatewayResponse::GatewayNameHasBeenSet() const
{
    return m_gatewayNameHasBeenSet;
}

string DescribeDeviceBindGatewayResponse::GetGatewayProductOwnerName() const
{
    return m_gatewayProductOwnerName;
}

bool DescribeDeviceBindGatewayResponse::GatewayProductOwnerNameHasBeenSet() const
{
    return m_gatewayProductOwnerNameHasBeenSet;
}

string DescribeDeviceBindGatewayResponse::GetGatewayProductOwnerUin() const
{
    return m_gatewayProductOwnerUin;
}

bool DescribeDeviceBindGatewayResponse::GatewayProductOwnerUinHasBeenSet() const
{
    return m_gatewayProductOwnerUinHasBeenSet;
}


