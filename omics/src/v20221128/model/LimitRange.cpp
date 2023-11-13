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

#include <tencentcloud/omics/v20221128/model/LimitRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

LimitRange::LimitRange() :
    m_maxCPUHasBeenSet(false),
    m_maxMemoryHasBeenSet(false)
{
}

CoreInternalOutcome LimitRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxCPU") && !value["MaxCPU"].IsNull())
    {
        if (!value["MaxCPU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRange.MaxCPU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxCPU = string(value["MaxCPU"].GetString());
        m_maxCPUHasBeenSet = true;
    }

    if (value.HasMember("MaxMemory") && !value["MaxMemory"].IsNull())
    {
        if (!value["MaxMemory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRange.MaxMemory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxMemory = string(value["MaxMemory"].GetString());
        m_maxMemoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LimitRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxCPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxCPU.c_str(), allocator).Move(), allocator);
    }

    if (m_maxMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxMemory.c_str(), allocator).Move(), allocator);
    }

}


string LimitRange::GetMaxCPU() const
{
    return m_maxCPU;
}

void LimitRange::SetMaxCPU(const string& _maxCPU)
{
    m_maxCPU = _maxCPU;
    m_maxCPUHasBeenSet = true;
}

bool LimitRange::MaxCPUHasBeenSet() const
{
    return m_maxCPUHasBeenSet;
}

string LimitRange::GetMaxMemory() const
{
    return m_maxMemory;
}

void LimitRange::SetMaxMemory(const string& _maxMemory)
{
    m_maxMemory = _maxMemory;
    m_maxMemoryHasBeenSet = true;
}

bool LimitRange::MaxMemoryHasBeenSet() const
{
    return m_maxMemoryHasBeenSet;
}

