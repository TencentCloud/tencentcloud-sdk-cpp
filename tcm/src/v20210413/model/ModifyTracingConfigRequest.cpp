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

#include <tencentcloud/tcm/v20210413/model/ModifyTracingConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

ModifyTracingConfigRequest::ModifyTracingConfigRequest() :
    m_meshIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_aPMHasBeenSet(false),
    m_samplingHasBeenSet(false),
    m_zipkinHasBeenSet(false)
{
}

string ModifyTracingConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_meshIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeshId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_meshId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_aPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APM";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aPM.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_samplingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sampling";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampling, allocator);
    }

    if (m_zipkinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zipkin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zipkin.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTracingConfigRequest::GetMeshId() const
{
    return m_meshId;
}

void ModifyTracingConfigRequest::SetMeshId(const string& _meshId)
{
    m_meshId = _meshId;
    m_meshIdHasBeenSet = true;
}

bool ModifyTracingConfigRequest::MeshIdHasBeenSet() const
{
    return m_meshIdHasBeenSet;
}

bool ModifyTracingConfigRequest::GetEnable() const
{
    return m_enable;
}

void ModifyTracingConfigRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyTracingConfigRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

APM ModifyTracingConfigRequest::GetAPM() const
{
    return m_aPM;
}

void ModifyTracingConfigRequest::SetAPM(const APM& _aPM)
{
    m_aPM = _aPM;
    m_aPMHasBeenSet = true;
}

bool ModifyTracingConfigRequest::APMHasBeenSet() const
{
    return m_aPMHasBeenSet;
}

double ModifyTracingConfigRequest::GetSampling() const
{
    return m_sampling;
}

void ModifyTracingConfigRequest::SetSampling(const double& _sampling)
{
    m_sampling = _sampling;
    m_samplingHasBeenSet = true;
}

bool ModifyTracingConfigRequest::SamplingHasBeenSet() const
{
    return m_samplingHasBeenSet;
}

TracingZipkin ModifyTracingConfigRequest::GetZipkin() const
{
    return m_zipkin;
}

void ModifyTracingConfigRequest::SetZipkin(const TracingZipkin& _zipkin)
{
    m_zipkin = _zipkin;
    m_zipkinHasBeenSet = true;
}

bool ModifyTracingConfigRequest::ZipkinHasBeenSet() const
{
    return m_zipkinHasBeenSet;
}


