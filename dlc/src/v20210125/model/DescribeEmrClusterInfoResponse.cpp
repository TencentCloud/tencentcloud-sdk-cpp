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

#include <tencentcloud/dlc/v20210125/model/DescribeEmrClusterInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeEmrClusterInfoResponse::DescribeEmrClusterInfoResponse() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_cosBucketHasBeenSet(false),
    m_tkeClusterIdHasBeenSet(false),
    m_resourceUsageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEmrClusterInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("CosBucket") && !rsp["CosBucket"].IsNull())
    {
        if (!rsp["CosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucket = string(rsp["CosBucket"].GetString());
        m_cosBucketHasBeenSet = true;
    }

    if (rsp.HasMember("TkeClusterId") && !rsp["TkeClusterId"].IsNull())
    {
        if (!rsp["TkeClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tkeClusterId = string(rsp["TkeClusterId"].GetString());
        m_tkeClusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceUsage") && !rsp["ResourceUsage"].IsNull())
    {
        if (!rsp["ResourceUsage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceUsage.Deserialize(rsp["ResourceUsage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEmrClusterInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_tkeClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TkeClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tkeClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceUsage.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeEmrClusterInfoResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeEmrClusterInfoResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeEmrClusterInfoResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeEmrClusterInfoResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeEmrClusterInfoResponse::GetCosBucket() const
{
    return m_cosBucket;
}

bool DescribeEmrClusterInfoResponse::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string DescribeEmrClusterInfoResponse::GetTkeClusterId() const
{
    return m_tkeClusterId;
}

bool DescribeEmrClusterInfoResponse::TkeClusterIdHasBeenSet() const
{
    return m_tkeClusterIdHasBeenSet;
}

EmrResourceUsage DescribeEmrClusterInfoResponse::GetResourceUsage() const
{
    return m_resourceUsage;
}

bool DescribeEmrClusterInfoResponse::ResourceUsageHasBeenSet() const
{
    return m_resourceUsageHasBeenSet;
}


