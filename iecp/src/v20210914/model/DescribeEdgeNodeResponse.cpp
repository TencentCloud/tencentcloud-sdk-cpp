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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeNodeResponse::DescribeEdgeNodeResponse() :
    m_idHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cpuArchitectureHasBeenSet(false),
    m_aiChipArchitectureHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEdgeNodeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Kind") && !rsp["Kind"].IsNull())
    {
        if (!rsp["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(rsp["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CpuArchitecture") && !rsp["CpuArchitecture"].IsNull())
    {
        if (!rsp["CpuArchitecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CpuArchitecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuArchitecture = string(rsp["CpuArchitecture"].GetString());
        m_cpuArchitectureHasBeenSet = true;
    }

    if (rsp.HasMember("AiChipArchitecture") && !rsp["AiChipArchitecture"].IsNull())
    {
        if (!rsp["AiChipArchitecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiChipArchitecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aiChipArchitecture = string(rsp["AiChipArchitecture"].GetString());
        m_aiChipArchitectureHasBeenSet = true;
    }

    if (rsp.HasMember("Ip") && !rsp["Ip"].IsNull())
    {
        if (!rsp["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(rsp["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (rsp.HasMember("Labels") && !rsp["Labels"].IsNull())
    {
        if (!rsp["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Labels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EdgeNodeLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (rsp.HasMember("Resource") && !rsp["Resource"].IsNull())
    {
        if (!rsp["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(rsp["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEdgeNodeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cpuArchitectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuArchitecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuArchitecture.c_str(), allocator).Move(), allocator);
    }

    if (m_aiChipArchitectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiChipArchitecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aiChipArchitecture.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
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


uint64_t DescribeEdgeNodeResponse::GetId() const
{
    return m_id;
}

bool DescribeEdgeNodeResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeEdgeNodeResponse::GetKind() const
{
    return m_kind;
}

bool DescribeEdgeNodeResponse::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string DescribeEdgeNodeResponse::GetName() const
{
    return m_name;
}

bool DescribeEdgeNodeResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeEdgeNodeResponse::GetStatus() const
{
    return m_status;
}

bool DescribeEdgeNodeResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeEdgeNodeResponse::GetCpuArchitecture() const
{
    return m_cpuArchitecture;
}

bool DescribeEdgeNodeResponse::CpuArchitectureHasBeenSet() const
{
    return m_cpuArchitectureHasBeenSet;
}

string DescribeEdgeNodeResponse::GetAiChipArchitecture() const
{
    return m_aiChipArchitecture;
}

bool DescribeEdgeNodeResponse::AiChipArchitectureHasBeenSet() const
{
    return m_aiChipArchitectureHasBeenSet;
}

string DescribeEdgeNodeResponse::GetIp() const
{
    return m_ip;
}

bool DescribeEdgeNodeResponse::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

vector<EdgeNodeLabel> DescribeEdgeNodeResponse::GetLabels() const
{
    return m_labels;
}

bool DescribeEdgeNodeResponse::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

EdgeNodeResourceInfo DescribeEdgeNodeResponse::GetResource() const
{
    return m_resource;
}

bool DescribeEdgeNodeResponse::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}


