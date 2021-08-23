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

#include <tencentcloud/emr/v20190103/model/DynamicPodSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DynamicPodSpec::DynamicPodSpec() :
    m_requestCpuHasBeenSet(false),
    m_limitCpuHasBeenSet(false),
    m_requestMemoryHasBeenSet(false),
    m_limitMemoryHasBeenSet(false)
{
}

CoreInternalOutcome DynamicPodSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequestCpu") && !value["RequestCpu"].IsNull())
    {
        if (!value["RequestCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicPodSpec.RequestCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestCpu = value["RequestCpu"].GetDouble();
        m_requestCpuHasBeenSet = true;
    }

    if (value.HasMember("LimitCpu") && !value["LimitCpu"].IsNull())
    {
        if (!value["LimitCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicPodSpec.LimitCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_limitCpu = value["LimitCpu"].GetDouble();
        m_limitCpuHasBeenSet = true;
    }

    if (value.HasMember("RequestMemory") && !value["RequestMemory"].IsNull())
    {
        if (!value["RequestMemory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicPodSpec.RequestMemory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestMemory = value["RequestMemory"].GetDouble();
        m_requestMemoryHasBeenSet = true;
    }

    if (value.HasMember("LimitMemory") && !value["LimitMemory"].IsNull())
    {
        if (!value["LimitMemory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicPodSpec.LimitMemory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_limitMemory = value["LimitMemory"].GetDouble();
        m_limitMemoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicPodSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestCpu, allocator);
    }

    if (m_limitCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitCpu, allocator);
    }

    if (m_requestMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestMemory, allocator);
    }

    if (m_limitMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitMemory, allocator);
    }

}


double DynamicPodSpec::GetRequestCpu() const
{
    return m_requestCpu;
}

void DynamicPodSpec::SetRequestCpu(const double& _requestCpu)
{
    m_requestCpu = _requestCpu;
    m_requestCpuHasBeenSet = true;
}

bool DynamicPodSpec::RequestCpuHasBeenSet() const
{
    return m_requestCpuHasBeenSet;
}

double DynamicPodSpec::GetLimitCpu() const
{
    return m_limitCpu;
}

void DynamicPodSpec::SetLimitCpu(const double& _limitCpu)
{
    m_limitCpu = _limitCpu;
    m_limitCpuHasBeenSet = true;
}

bool DynamicPodSpec::LimitCpuHasBeenSet() const
{
    return m_limitCpuHasBeenSet;
}

double DynamicPodSpec::GetRequestMemory() const
{
    return m_requestMemory;
}

void DynamicPodSpec::SetRequestMemory(const double& _requestMemory)
{
    m_requestMemory = _requestMemory;
    m_requestMemoryHasBeenSet = true;
}

bool DynamicPodSpec::RequestMemoryHasBeenSet() const
{
    return m_requestMemoryHasBeenSet;
}

double DynamicPodSpec::GetLimitMemory() const
{
    return m_limitMemory;
}

void DynamicPodSpec::SetLimitMemory(const double& _limitMemory)
{
    m_limitMemory = _limitMemory;
    m_limitMemoryHasBeenSet = true;
}

bool DynamicPodSpec::LimitMemoryHasBeenSet() const
{
    return m_limitMemoryHasBeenSet;
}

