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

#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterUpgradeInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeEdgeClusterUpgradeInfoResponse::DescribeEdgeClusterUpgradeInfoResponse() :
    m_componentVersionHasBeenSet(false),
    m_edgeVersionCurrentHasBeenSet(false),
    m_registryPrefixHasBeenSet(false),
    m_clusterUpgradeStatusHasBeenSet(false),
    m_clusterUpgradeStatusReasonHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEdgeClusterUpgradeInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ComponentVersion") && !rsp["ComponentVersion"].IsNull())
    {
        if (!rsp["ComponentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentVersion = string(rsp["ComponentVersion"].GetString());
        m_componentVersionHasBeenSet = true;
    }

    if (rsp.HasMember("EdgeVersionCurrent") && !rsp["EdgeVersionCurrent"].IsNull())
    {
        if (!rsp["EdgeVersionCurrent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeVersionCurrent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeVersionCurrent = string(rsp["EdgeVersionCurrent"].GetString());
        m_edgeVersionCurrentHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryPrefix") && !rsp["RegistryPrefix"].IsNull())
    {
        if (!rsp["RegistryPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryPrefix = string(rsp["RegistryPrefix"].GetString());
        m_registryPrefixHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterUpgradeStatus") && !rsp["ClusterUpgradeStatus"].IsNull())
    {
        if (!rsp["ClusterUpgradeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterUpgradeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterUpgradeStatus = string(rsp["ClusterUpgradeStatus"].GetString());
        m_clusterUpgradeStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterUpgradeStatusReason") && !rsp["ClusterUpgradeStatusReason"].IsNull())
    {
        if (!rsp["ClusterUpgradeStatusReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterUpgradeStatusReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterUpgradeStatusReason = string(rsp["ClusterUpgradeStatusReason"].GetString());
        m_clusterUpgradeStatusReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEdgeClusterUpgradeInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_componentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeVersionCurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeVersionCurrent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeVersionCurrent.c_str(), allocator).Move(), allocator);
    }

    if (m_registryPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterUpgradeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterUpgradeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterUpgradeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterUpgradeStatusReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterUpgradeStatusReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterUpgradeStatusReason.c_str(), allocator).Move(), allocator);
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


string DescribeEdgeClusterUpgradeInfoResponse::GetComponentVersion() const
{
    return m_componentVersion;
}

bool DescribeEdgeClusterUpgradeInfoResponse::ComponentVersionHasBeenSet() const
{
    return m_componentVersionHasBeenSet;
}

string DescribeEdgeClusterUpgradeInfoResponse::GetEdgeVersionCurrent() const
{
    return m_edgeVersionCurrent;
}

bool DescribeEdgeClusterUpgradeInfoResponse::EdgeVersionCurrentHasBeenSet() const
{
    return m_edgeVersionCurrentHasBeenSet;
}

string DescribeEdgeClusterUpgradeInfoResponse::GetRegistryPrefix() const
{
    return m_registryPrefix;
}

bool DescribeEdgeClusterUpgradeInfoResponse::RegistryPrefixHasBeenSet() const
{
    return m_registryPrefixHasBeenSet;
}

string DescribeEdgeClusterUpgradeInfoResponse::GetClusterUpgradeStatus() const
{
    return m_clusterUpgradeStatus;
}

bool DescribeEdgeClusterUpgradeInfoResponse::ClusterUpgradeStatusHasBeenSet() const
{
    return m_clusterUpgradeStatusHasBeenSet;
}

string DescribeEdgeClusterUpgradeInfoResponse::GetClusterUpgradeStatusReason() const
{
    return m_clusterUpgradeStatusReason;
}

bool DescribeEdgeClusterUpgradeInfoResponse::ClusterUpgradeStatusReasonHasBeenSet() const
{
    return m_clusterUpgradeStatusReasonHasBeenSet;
}


