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

#include <tencentcloud/es/v20180416/model/GpuInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

GpuInfo::GpuInfo() :
    m_gpuCountHasBeenSet(false),
    m_gpuTypeHasBeenSet(false)
{
}

CoreInternalOutcome GpuInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GpuCount") && !value["GpuCount"].IsNull())
    {
        if (!value["GpuCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GpuInfo.GpuCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuCount = value["GpuCount"].GetInt64();
        m_gpuCountHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GpuInfo.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GpuInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gpuCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuCount, allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

}


int64_t GpuInfo::GetGpuCount() const
{
    return m_gpuCount;
}

void GpuInfo::SetGpuCount(const int64_t& _gpuCount)
{
    m_gpuCount = _gpuCount;
    m_gpuCountHasBeenSet = true;
}

bool GpuInfo::GpuCountHasBeenSet() const
{
    return m_gpuCountHasBeenSet;
}

string GpuInfo::GetGpuType() const
{
    return m_gpuType;
}

void GpuInfo::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool GpuInfo::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

