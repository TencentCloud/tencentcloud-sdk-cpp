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

#include <tencentcloud/thpc/v20230321/model/DescribeClusterDedicatedProxyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

DescribeClusterDedicatedProxyResponse::DescribeClusterDedicatedProxyResponse() :
    m_enabledHasBeenSet(false),
    m_endPointIdHasBeenSet(false),
    m_endPointVipHasBeenSet(false),
    m_endPointReadyHasBeenSet(false),
    m_endPointStatusHasBeenSet(false),
    m_lastKnownStatusHasBeenSet(false),
    m_endPointServiceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastSyncTimeHasBeenSet(false),
    m_realtimeQueryTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterDedicatedProxyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Enabled") && !rsp["Enabled"].IsNull())
    {
        if (!rsp["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = rsp["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
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

    if (rsp.HasMember("LastKnownStatus") && !rsp["LastKnownStatus"].IsNull())
    {
        if (!rsp["LastKnownStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastKnownStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastKnownStatus = string(rsp["LastKnownStatus"].GetString());
        m_lastKnownStatusHasBeenSet = true;
    }

    if (rsp.HasMember("EndPointServiceId") && !rsp["EndPointServiceId"].IsNull())
    {
        if (!rsp["EndPointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointServiceId = string(rsp["EndPointServiceId"].GetString());
        m_endPointServiceIdHasBeenSet = true;
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

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastSyncTime") && !rsp["LastSyncTime"].IsNull())
    {
        if (!rsp["LastSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSyncTime = string(rsp["LastSyncTime"].GetString());
        m_lastSyncTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RealtimeQueryTime") && !rsp["RealtimeQueryTime"].IsNull())
    {
        if (!rsp["RealtimeQueryTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeQueryTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realtimeQueryTime = string(rsp["RealtimeQueryTime"].GetString());
        m_realtimeQueryTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterDedicatedProxyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

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

    if (m_lastKnownStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastKnownStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastKnownStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointServiceId.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastSyncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastSyncTime.c_str(), allocator).Move(), allocator);
    }

    if (m_realtimeQueryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealtimeQueryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realtimeQueryTime.c_str(), allocator).Move(), allocator);
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


bool DescribeClusterDedicatedProxyResponse::GetEnabled() const
{
    return m_enabled;
}

bool DescribeClusterDedicatedProxyResponse::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string DescribeClusterDedicatedProxyResponse::GetEndPointId() const
{
    return m_endPointId;
}

bool DescribeClusterDedicatedProxyResponse::EndPointIdHasBeenSet() const
{
    return m_endPointIdHasBeenSet;
}

string DescribeClusterDedicatedProxyResponse::GetEndPointVip() const
{
    return m_endPointVip;
}

bool DescribeClusterDedicatedProxyResponse::EndPointVipHasBeenSet() const
{
    return m_endPointVipHasBeenSet;
}

bool DescribeClusterDedicatedProxyResponse::GetEndPointReady() const
{
    return m_endPointReady;
}

bool DescribeClusterDedicatedProxyResponse::EndPointReadyHasBeenSet() const
{
    return m_endPointReadyHasBeenSet;
}

string DescribeClusterDedicatedProxyResponse::GetEndPointStatus() const
{
    return m_endPointStatus;
}

bool DescribeClusterDedicatedProxyResponse::EndPointStatusHasBeenSet() const
{
    return m_endPointStatusHasBeenSet;
}

string DescribeClusterDedicatedProxyResponse::GetLastKnownStatus() const
{
    return m_lastKnownStatus;
}

bool DescribeClusterDedicatedProxyResponse::LastKnownStatusHasBeenSet() const
{
    return m_lastKnownStatusHasBeenSet;
}

string DescribeClusterDedicatedProxyResponse::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

bool DescribeClusterDedicatedProxyResponse::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

string DescribeClusterDedicatedProxyResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeClusterDedicatedProxyResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeClusterDedicatedProxyResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribeClusterDedicatedProxyResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DescribeClusterDedicatedProxyResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeClusterDedicatedProxyResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeClusterDedicatedProxyResponse::GetLastSyncTime() const
{
    return m_lastSyncTime;
}

bool DescribeClusterDedicatedProxyResponse::LastSyncTimeHasBeenSet() const
{
    return m_lastSyncTimeHasBeenSet;
}

string DescribeClusterDedicatedProxyResponse::GetRealtimeQueryTime() const
{
    return m_realtimeQueryTime;
}

bool DescribeClusterDedicatedProxyResponse::RealtimeQueryTimeHasBeenSet() const
{
    return m_realtimeQueryTimeHasBeenSet;
}


