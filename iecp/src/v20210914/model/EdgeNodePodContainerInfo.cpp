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

#include <tencentcloud/iecp/v20210914/model/EdgeNodePodContainerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

EdgeNodePodContainerInfo::EdgeNodePodContainerInfo() :
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memoryRequestHasBeenSet(false),
    m_memoryLimitHasBeenSet(false),
    m_restartCountHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome EdgeNodePodContainerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodContainerInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodContainerInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodContainerInfo.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("CpuRequest") && !value["CpuRequest"].IsNull())
    {
        if (!value["CpuRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodContainerInfo.CpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequest = string(value["CpuRequest"].GetString());
        m_cpuRequestHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodContainerInfo.CpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = string(value["CpuLimit"].GetString());
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("MemoryRequest") && !value["MemoryRequest"].IsNull())
    {
        if (!value["MemoryRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodContainerInfo.MemoryRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryRequest = string(value["MemoryRequest"].GetString());
        m_memoryRequestHasBeenSet = true;
    }

    if (value.HasMember("MemoryLimit") && !value["MemoryLimit"].IsNull())
    {
        if (!value["MemoryLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodContainerInfo.MemoryLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryLimit = string(value["MemoryLimit"].GetString());
        m_memoryLimitHasBeenSet = true;
    }

    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodContainerInfo.RestartCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetUint64();
        m_restartCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodContainerInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeNodePodContainerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string EdgeNodePodContainerInfo::GetName() const
{
    return m_name;
}

void EdgeNodePodContainerInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EdgeNodePodContainerInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EdgeNodePodContainerInfo::GetId() const
{
    return m_id;
}

void EdgeNodePodContainerInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EdgeNodePodContainerInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string EdgeNodePodContainerInfo::GetImage() const
{
    return m_image;
}

void EdgeNodePodContainerInfo::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool EdgeNodePodContainerInfo::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string EdgeNodePodContainerInfo::GetCpuRequest() const
{
    return m_cpuRequest;
}

void EdgeNodePodContainerInfo::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool EdgeNodePodContainerInfo::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string EdgeNodePodContainerInfo::GetCpuLimit() const
{
    return m_cpuLimit;
}

void EdgeNodePodContainerInfo::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool EdgeNodePodContainerInfo::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string EdgeNodePodContainerInfo::GetMemoryRequest() const
{
    return m_memoryRequest;
}

void EdgeNodePodContainerInfo::SetMemoryRequest(const string& _memoryRequest)
{
    m_memoryRequest = _memoryRequest;
    m_memoryRequestHasBeenSet = true;
}

bool EdgeNodePodContainerInfo::MemoryRequestHasBeenSet() const
{
    return m_memoryRequestHasBeenSet;
}

string EdgeNodePodContainerInfo::GetMemoryLimit() const
{
    return m_memoryLimit;
}

void EdgeNodePodContainerInfo::SetMemoryLimit(const string& _memoryLimit)
{
    m_memoryLimit = _memoryLimit;
    m_memoryLimitHasBeenSet = true;
}

bool EdgeNodePodContainerInfo::MemoryLimitHasBeenSet() const
{
    return m_memoryLimitHasBeenSet;
}

uint64_t EdgeNodePodContainerInfo::GetRestartCount() const
{
    return m_restartCount;
}

void EdgeNodePodContainerInfo::SetRestartCount(const uint64_t& _restartCount)
{
    m_restartCount = _restartCount;
    m_restartCountHasBeenSet = true;
}

bool EdgeNodePodContainerInfo::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
}

string EdgeNodePodContainerInfo::GetStatus() const
{
    return m_status;
}

void EdgeNodePodContainerInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EdgeNodePodContainerInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

