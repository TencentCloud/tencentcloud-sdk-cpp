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

#include <tencentcloud/tke/v20220501/model/GPUConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

GPUConfig::GPUConfig() :
    m_instanceTypeHasBeenSet(false),
    m_gPUParamsHasBeenSet(false)
{
}

CoreInternalOutcome GPUConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUConfig.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("GPUParams") && !value["GPUParams"].IsNull())
    {
        if (!value["GPUParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GPUConfig.GPUParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gPUParams.Deserialize(value["GPUParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gPUParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GPUConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gPUParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


string GPUConfig::GetInstanceType() const
{
    return m_instanceType;
}

void GPUConfig::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool GPUConfig::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

GPUParams GPUConfig::GetGPUParams() const
{
    return m_gPUParams;
}

void GPUConfig::SetGPUParams(const GPUParams& _gPUParams)
{
    m_gPUParams = _gPUParams;
    m_gPUParamsHasBeenSet = true;
}

bool GPUConfig::GPUParamsHasBeenSet() const
{
    return m_gPUParamsHasBeenSet;
}

