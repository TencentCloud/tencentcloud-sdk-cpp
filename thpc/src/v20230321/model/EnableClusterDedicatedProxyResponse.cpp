/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/thpc/v20230321/model/EnableClusterDedicatedProxyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

EnableClusterDedicatedProxyResponse::EnableClusterDedicatedProxyResponse() :
    m_endPointIdHasBeenSet(false),
    m_endPointVipHasBeenSet(false),
    m_endPointReadyHasBeenSet(false),
    m_endPointStatusHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

CoreInternalOutcome EnableClusterDedicatedProxyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EndPointId") && !rsp["EndPointId"].IsNull())
    {
        if (!rsp["EndPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointId = string(rsp["EndPointId"].GetString());
        m_endPointIdHasBeenSet = true;
    }

    if (rsp.HasMember("EndPointVip") && !rsp["EndPointVip"].IsNull())
    {
        if (!rsp["EndPointVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointVip = string(rsp["EndPointVip"].GetString());
        m_endPointVipHasBeenSet = true;
    }

    if (rsp.HasMember("EndPointReady") && !rsp["EndPointReady"].IsNull())
    {
        if (!rsp["EndPointReady"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointReady` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_endPointReady = rsp["EndPointReady"].GetBool();
        m_endPointReadyHasBeenSet = true;
    }

    if (rsp.HasMember("EndPointStatus") && !rsp["EndPointStatus"].IsNull())
    {
        if (!rsp["EndPointStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointStatus = string(rsp["EndPointStatus"].GetString());
        m_endPointStatusHasBeenSet = true;
    }

    if (rsp.HasMember("VpcId") && !rsp["VpcId"].IsNull())
    {
        if (!rsp["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(rsp["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetId") && !rsp["SubnetId"].IsNull())
    {
        if (!rsp["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(rsp["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string EnableClusterDedicatedProxyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_endPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointVip.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointReadyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointReady";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPointReady, allocator);
    }

    if (m_endPointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
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


string EnableClusterDedicatedProxyResponse::GetEndPointId() const
{
    return m_endPointId;
}

bool EnableClusterDedicatedProxyResponse::EndPointIdHasBeenSet() const
{
    return m_endPointIdHasBeenSet;
}

string EnableClusterDedicatedProxyResponse::GetEndPointVip() const
{
    return m_endPointVip;
}

bool EnableClusterDedicatedProxyResponse::EndPointVipHasBeenSet() const
{
    return m_endPointVipHasBeenSet;
}

bool EnableClusterDedicatedProxyResponse::GetEndPointReady() const
{
    return m_endPointReady;
}

bool EnableClusterDedicatedProxyResponse::EndPointReadyHasBeenSet() const
{
    return m_endPointReadyHasBeenSet;
}

string EnableClusterDedicatedProxyResponse::GetEndPointStatus() const
{
    return m_endPointStatus;
}

bool EnableClusterDedicatedProxyResponse::EndPointStatusHasBeenSet() const
{
    return m_endPointStatusHasBeenSet;
}

string EnableClusterDedicatedProxyResponse::GetVpcId() const
{
    return m_vpcId;
}

bool EnableClusterDedicatedProxyResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string EnableClusterDedicatedProxyResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool EnableClusterDedicatedProxyResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}


