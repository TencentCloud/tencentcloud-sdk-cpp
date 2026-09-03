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

#include <tencentcloud/dlc/v20210125/model/DescribeTkeClusterImportInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeTkeClusterImportInfoResponse::DescribeTkeClusterImportInfoResponse() :
    m_partitionNameHasBeenSet(false),
    m_emrClusterIdHasBeenSet(false),
    m_cosBucketIdHasBeenSet(false),
    m_prometheusInstanceIdHasBeenSet(false),
    m_prometheusInstanceNameHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_containerLogTopicIdHasBeenSet(false),
    m_containerLogTopicNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTkeClusterImportInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PartitionName") && !rsp["PartitionName"].IsNull())
    {
        if (!rsp["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(rsp["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (rsp.HasMember("EmrClusterId") && !rsp["EmrClusterId"].IsNull())
    {
        if (!rsp["EmrClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emrClusterId = string(rsp["EmrClusterId"].GetString());
        m_emrClusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("CosBucketId") && !rsp["CosBucketId"].IsNull())
    {
        if (!rsp["CosBucketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketId = string(rsp["CosBucketId"].GetString());
        m_cosBucketIdHasBeenSet = true;
    }

    if (rsp.HasMember("PrometheusInstanceId") && !rsp["PrometheusInstanceId"].IsNull())
    {
        if (!rsp["PrometheusInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prometheusInstanceId = string(rsp["PrometheusInstanceId"].GetString());
        m_prometheusInstanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("PrometheusInstanceName") && !rsp["PrometheusInstanceName"].IsNull())
    {
        if (!rsp["PrometheusInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prometheusInstanceName = string(rsp["PrometheusInstanceName"].GetString());
        m_prometheusInstanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("LoadBalancerId") && !rsp["LoadBalancerId"].IsNull())
    {
        if (!rsp["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(rsp["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (rsp.HasMember("LoadBalancerName") && !rsp["LoadBalancerName"].IsNull())
    {
        if (!rsp["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(rsp["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerLogTopicId") && !rsp["ContainerLogTopicId"].IsNull())
    {
        if (!rsp["ContainerLogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerLogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerLogTopicId = string(rsp["ContainerLogTopicId"].GetString());
        m_containerLogTopicIdHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerLogTopicName") && !rsp["ContainerLogTopicName"].IsNull())
    {
        if (!rsp["ContainerLogTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerLogTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerLogTopicName = string(rsp["ContainerLogTopicName"].GetString());
        m_containerLogTopicNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTkeClusterImportInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_emrClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmrClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emrClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketId.c_str(), allocator).Move(), allocator);
    }

    if (m_prometheusInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrometheusInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prometheusInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_prometheusInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrometheusInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prometheusInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerLogTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerLogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerLogTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerLogTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerLogTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerLogTopicName.c_str(), allocator).Move(), allocator);
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


string DescribeTkeClusterImportInfoResponse::GetPartitionName() const
{
    return m_partitionName;
}

bool DescribeTkeClusterImportInfoResponse::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string DescribeTkeClusterImportInfoResponse::GetEmrClusterId() const
{
    return m_emrClusterId;
}

bool DescribeTkeClusterImportInfoResponse::EmrClusterIdHasBeenSet() const
{
    return m_emrClusterIdHasBeenSet;
}

string DescribeTkeClusterImportInfoResponse::GetCosBucketId() const
{
    return m_cosBucketId;
}

bool DescribeTkeClusterImportInfoResponse::CosBucketIdHasBeenSet() const
{
    return m_cosBucketIdHasBeenSet;
}

string DescribeTkeClusterImportInfoResponse::GetPrometheusInstanceId() const
{
    return m_prometheusInstanceId;
}

bool DescribeTkeClusterImportInfoResponse::PrometheusInstanceIdHasBeenSet() const
{
    return m_prometheusInstanceIdHasBeenSet;
}

string DescribeTkeClusterImportInfoResponse::GetPrometheusInstanceName() const
{
    return m_prometheusInstanceName;
}

bool DescribeTkeClusterImportInfoResponse::PrometheusInstanceNameHasBeenSet() const
{
    return m_prometheusInstanceNameHasBeenSet;
}

string DescribeTkeClusterImportInfoResponse::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

bool DescribeTkeClusterImportInfoResponse::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string DescribeTkeClusterImportInfoResponse::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

bool DescribeTkeClusterImportInfoResponse::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string DescribeTkeClusterImportInfoResponse::GetContainerLogTopicId() const
{
    return m_containerLogTopicId;
}

bool DescribeTkeClusterImportInfoResponse::ContainerLogTopicIdHasBeenSet() const
{
    return m_containerLogTopicIdHasBeenSet;
}

string DescribeTkeClusterImportInfoResponse::GetContainerLogTopicName() const
{
    return m_containerLogTopicName;
}

bool DescribeTkeClusterImportInfoResponse::ContainerLogTopicNameHasBeenSet() const
{
    return m_containerLogTopicNameHasBeenSet;
}


