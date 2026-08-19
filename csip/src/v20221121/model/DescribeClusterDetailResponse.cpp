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

#include <tencentcloud/csip/v20221121/model/DescribeClusterDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeClusterDetailResponse::DescribeClusterDetailResponse() :
    m_clusterBaseInfoHasBeenSet(false),
    m_runtimeComponentHasBeenSet(false),
    m_masterIPHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_namespaceCountHasBeenSet(false),
    m_podCountHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_ingressCountHasBeenSet(false),
    m_imageCountHasBeenSet(false),
    m_systemComponentCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterBaseInfo") && !rsp["ClusterBaseInfo"].IsNull())
    {
        if (!rsp["ClusterBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterBaseInfo.Deserialize(rsp["ClusterBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterBaseInfoHasBeenSet = true;
    }

    if (rsp.HasMember("RuntimeComponent") && !rsp["RuntimeComponent"].IsNull())
    {
        if (!rsp["RuntimeComponent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeComponent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeComponent = string(rsp["RuntimeComponent"].GetString());
        m_runtimeComponentHasBeenSet = true;
    }

    if (rsp.HasMember("MasterIP") && !rsp["MasterIP"].IsNull())
    {
        if (!rsp["MasterIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MasterIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterIP = string(rsp["MasterIP"].GetString());
        m_masterIPHasBeenSet = true;
    }

    if (rsp.HasMember("NodeCount") && !rsp["NodeCount"].IsNull())
    {
        if (!rsp["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = rsp["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("NamespaceCount") && !rsp["NamespaceCount"].IsNull())
    {
        if (!rsp["NamespaceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceCount = rsp["NamespaceCount"].GetUint64();
        m_namespaceCountHasBeenSet = true;
    }

    if (rsp.HasMember("PodCount") && !rsp["PodCount"].IsNull())
    {
        if (!rsp["PodCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PodCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_podCount = rsp["PodCount"].GetUint64();
        m_podCountHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerCount") && !rsp["ContainerCount"].IsNull())
    {
        if (!rsp["ContainerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = rsp["ContainerCount"].GetUint64();
        m_containerCountHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceCount") && !rsp["ServiceCount"].IsNull())
    {
        if (!rsp["ServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = rsp["ServiceCount"].GetUint64();
        m_serviceCountHasBeenSet = true;
    }

    if (rsp.HasMember("IngressCount") && !rsp["IngressCount"].IsNull())
    {
        if (!rsp["IngressCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IngressCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ingressCount = rsp["IngressCount"].GetUint64();
        m_ingressCountHasBeenSet = true;
    }

    if (rsp.HasMember("ImageCount") && !rsp["ImageCount"].IsNull())
    {
        if (!rsp["ImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCount = rsp["ImageCount"].GetUint64();
        m_imageCountHasBeenSet = true;
    }

    if (rsp.HasMember("SystemComponentCount") && !rsp["SystemComponentCount"].IsNull())
    {
        if (!rsp["SystemComponentCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SystemComponentCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_systemComponentCount = rsp["SystemComponentCount"].GetUint64();
        m_systemComponentCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_runtimeComponentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeComponent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeComponent.c_str(), allocator).Move(), allocator);
    }

    if (m_masterIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_namespaceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_namespaceCount, allocator);
    }

    if (m_podCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podCount, allocator);
    }

    if (m_containerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCount, allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_ingressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ingressCount, allocator);
    }

    if (m_imageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCount, allocator);
    }

    if (m_systemComponentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemComponentCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemComponentCount, allocator);
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


ClusterListItem DescribeClusterDetailResponse::GetClusterBaseInfo() const
{
    return m_clusterBaseInfo;
}

bool DescribeClusterDetailResponse::ClusterBaseInfoHasBeenSet() const
{
    return m_clusterBaseInfoHasBeenSet;
}

string DescribeClusterDetailResponse::GetRuntimeComponent() const
{
    return m_runtimeComponent;
}

bool DescribeClusterDetailResponse::RuntimeComponentHasBeenSet() const
{
    return m_runtimeComponentHasBeenSet;
}

string DescribeClusterDetailResponse::GetMasterIP() const
{
    return m_masterIP;
}

bool DescribeClusterDetailResponse::MasterIPHasBeenSet() const
{
    return m_masterIPHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetNodeCount() const
{
    return m_nodeCount;
}

bool DescribeClusterDetailResponse::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetNamespaceCount() const
{
    return m_namespaceCount;
}

bool DescribeClusterDetailResponse::NamespaceCountHasBeenSet() const
{
    return m_namespaceCountHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetPodCount() const
{
    return m_podCount;
}

bool DescribeClusterDetailResponse::PodCountHasBeenSet() const
{
    return m_podCountHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetContainerCount() const
{
    return m_containerCount;
}

bool DescribeClusterDetailResponse::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetServiceCount() const
{
    return m_serviceCount;
}

bool DescribeClusterDetailResponse::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetIngressCount() const
{
    return m_ingressCount;
}

bool DescribeClusterDetailResponse::IngressCountHasBeenSet() const
{
    return m_ingressCountHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetImageCount() const
{
    return m_imageCount;
}

bool DescribeClusterDetailResponse::ImageCountHasBeenSet() const
{
    return m_imageCountHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetSystemComponentCount() const
{
    return m_systemComponentCount;
}

bool DescribeClusterDetailResponse::SystemComponentCountHasBeenSet() const
{
    return m_systemComponentCountHasBeenSet;
}


