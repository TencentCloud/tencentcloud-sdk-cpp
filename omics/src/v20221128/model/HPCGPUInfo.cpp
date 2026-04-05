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

#include <tencentcloud/omics/v20221128/model/HPCGPUInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

HPCGPUInfo::HPCGPUInfo() :
    m_gPUTypeHasBeenSet(false),
    m_gPUCountHasBeenSet(false)
{
}

CoreInternalOutcome HPCGPUInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GPUType") && !value["GPUType"].IsNull())
    {
        if (!value["GPUType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCGPUInfo.GPUType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUType = string(value["GPUType"].GetString());
        m_gPUTypeHasBeenSet = true;
    }

    if (value.HasMember("GPUCount") && !value["GPUCount"].IsNull())
    {
        if (!value["GPUCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HPCGPUInfo.GPUCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_gPUCount = value["GPUCount"].GetDouble();
        m_gPUCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HPCGPUInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gPUTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUType.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPUCount, allocator);
    }

}


string HPCGPUInfo::GetGPUType() const
{
    return m_gPUType;
}

void HPCGPUInfo::SetGPUType(const string& _gPUType)
{
    m_gPUType = _gPUType;
    m_gPUTypeHasBeenSet = true;
}

bool HPCGPUInfo::GPUTypeHasBeenSet() const
{
    return m_gPUTypeHasBeenSet;
}

double HPCGPUInfo::GetGPUCount() const
{
    return m_gPUCount;
}

void HPCGPUInfo::SetGPUCount(const double& _gPUCount)
{
    m_gPUCount = _gPUCount;
    m_gPUCountHasBeenSet = true;
}

bool HPCGPUInfo::GPUCountHasBeenSet() const
{
    return m_gPUCountHasBeenSet;
}

