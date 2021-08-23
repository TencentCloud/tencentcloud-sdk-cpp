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

#include <tencentcloud/ecm/v20190719/model/DescribeBaseOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

DescribeBaseOverviewResponse::DescribeBaseOverviewResponse() :
    m_moduleNumHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_vcpuNumHasBeenSet(false),
    m_memoryNumHasBeenSet(false),
    m_storageNumHasBeenSet(false),
    m_networkNumHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_runningNumHasBeenSet(false),
    m_isolationNumHasBeenSet(false),
    m_expiredNumHasBeenSet(false),
    m_willExpireNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBaseOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ModuleNum") && !rsp["ModuleNum"].IsNull())
    {
        if (!rsp["ModuleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModuleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_moduleNum = rsp["ModuleNum"].GetInt64();
        m_moduleNumHasBeenSet = true;
    }

    if (rsp.HasMember("NodeNum") && !rsp["NodeNum"].IsNull())
    {
        if (!rsp["NodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = rsp["NodeNum"].GetInt64();
        m_nodeNumHasBeenSet = true;
    }

    if (rsp.HasMember("VcpuNum") && !rsp["VcpuNum"].IsNull())
    {
        if (!rsp["VcpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VcpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vcpuNum = rsp["VcpuNum"].GetInt64();
        m_vcpuNumHasBeenSet = true;
    }

    if (rsp.HasMember("MemoryNum") && !rsp["MemoryNum"].IsNull())
    {
        if (!rsp["MemoryNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryNum = rsp["MemoryNum"].GetInt64();
        m_memoryNumHasBeenSet = true;
    }

    if (rsp.HasMember("StorageNum") && !rsp["StorageNum"].IsNull())
    {
        if (!rsp["StorageNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNum = rsp["StorageNum"].GetInt64();
        m_storageNumHasBeenSet = true;
    }

    if (rsp.HasMember("NetworkNum") && !rsp["NetworkNum"].IsNull())
    {
        if (!rsp["NetworkNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkNum = rsp["NetworkNum"].GetInt64();
        m_networkNumHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceNum") && !rsp["InstanceNum"].IsNull())
    {
        if (!rsp["InstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = rsp["InstanceNum"].GetInt64();
        m_instanceNumHasBeenSet = true;
    }

    if (rsp.HasMember("RunningNum") && !rsp["RunningNum"].IsNull())
    {
        if (!rsp["RunningNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunningNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningNum = rsp["RunningNum"].GetInt64();
        m_runningNumHasBeenSet = true;
    }

    if (rsp.HasMember("IsolationNum") && !rsp["IsolationNum"].IsNull())
    {
        if (!rsp["IsolationNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsolationNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isolationNum = rsp["IsolationNum"].GetInt64();
        m_isolationNumHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredNum") && !rsp["ExpiredNum"].IsNull())
    {
        if (!rsp["ExpiredNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredNum = rsp["ExpiredNum"].GetInt64();
        m_expiredNumHasBeenSet = true;
    }

    if (rsp.HasMember("WillExpireNum") && !rsp["WillExpireNum"].IsNull())
    {
        if (!rsp["WillExpireNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WillExpireNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_willExpireNum = rsp["WillExpireNum"].GetInt64();
        m_willExpireNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBaseOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_moduleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_moduleNum, allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_vcpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VcpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vcpuNum, allocator);
    }

    if (m_memoryNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryNum, allocator);
    }

    if (m_storageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNum, allocator);
    }

    if (m_networkNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkNum, allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_runningNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningNum, allocator);
    }

    if (m_isolationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolationNum, allocator);
    }

    if (m_expiredNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredNum, allocator);
    }

    if (m_willExpireNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillExpireNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_willExpireNum, allocator);
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


int64_t DescribeBaseOverviewResponse::GetModuleNum() const
{
    return m_moduleNum;
}

bool DescribeBaseOverviewResponse::ModuleNumHasBeenSet() const
{
    return m_moduleNumHasBeenSet;
}

int64_t DescribeBaseOverviewResponse::GetNodeNum() const
{
    return m_nodeNum;
}

bool DescribeBaseOverviewResponse::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

int64_t DescribeBaseOverviewResponse::GetVcpuNum() const
{
    return m_vcpuNum;
}

bool DescribeBaseOverviewResponse::VcpuNumHasBeenSet() const
{
    return m_vcpuNumHasBeenSet;
}

int64_t DescribeBaseOverviewResponse::GetMemoryNum() const
{
    return m_memoryNum;
}

bool DescribeBaseOverviewResponse::MemoryNumHasBeenSet() const
{
    return m_memoryNumHasBeenSet;
}

int64_t DescribeBaseOverviewResponse::GetStorageNum() const
{
    return m_storageNum;
}

bool DescribeBaseOverviewResponse::StorageNumHasBeenSet() const
{
    return m_storageNumHasBeenSet;
}

int64_t DescribeBaseOverviewResponse::GetNetworkNum() const
{
    return m_networkNum;
}

bool DescribeBaseOverviewResponse::NetworkNumHasBeenSet() const
{
    return m_networkNumHasBeenSet;
}

int64_t DescribeBaseOverviewResponse::GetInstanceNum() const
{
    return m_instanceNum;
}

bool DescribeBaseOverviewResponse::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

int64_t DescribeBaseOverviewResponse::GetRunningNum() const
{
    return m_runningNum;
}

bool DescribeBaseOverviewResponse::RunningNumHasBeenSet() const
{
    return m_runningNumHasBeenSet;
}

int64_t DescribeBaseOverviewResponse::GetIsolationNum() const
{
    return m_isolationNum;
}

bool DescribeBaseOverviewResponse::IsolationNumHasBeenSet() const
{
    return m_isolationNumHasBeenSet;
}

int64_t DescribeBaseOverviewResponse::GetExpiredNum() const
{
    return m_expiredNum;
}

bool DescribeBaseOverviewResponse::ExpiredNumHasBeenSet() const
{
    return m_expiredNumHasBeenSet;
}

int64_t DescribeBaseOverviewResponse::GetWillExpireNum() const
{
    return m_willExpireNum;
}

bool DescribeBaseOverviewResponse::WillExpireNumHasBeenSet() const
{
    return m_willExpireNumHasBeenSet;
}


