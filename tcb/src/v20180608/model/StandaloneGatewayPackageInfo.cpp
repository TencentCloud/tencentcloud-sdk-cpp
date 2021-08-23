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

#include <tencentcloud/tcb/v20180608/model/StandaloneGatewayPackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

StandaloneGatewayPackageInfo::StandaloneGatewayPackageInfo() :
    m_cPUHasBeenSet(false),
    m_memHasBeenSet(false),
    m_packageVersionHasBeenSet(false)
{
}

CoreInternalOutcome StandaloneGatewayPackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayPackageInfo.CPU` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetDouble();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayPackageInfo.Mem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetUint64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("PackageVersion") && !value["PackageVersion"].IsNull())
    {
        if (!value["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayPackageInfo.PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(value["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandaloneGatewayPackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

}


double StandaloneGatewayPackageInfo::GetCPU() const
{
    return m_cPU;
}

void StandaloneGatewayPackageInfo::SetCPU(const double& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool StandaloneGatewayPackageInfo::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t StandaloneGatewayPackageInfo::GetMem() const
{
    return m_mem;
}

void StandaloneGatewayPackageInfo::SetMem(const uint64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool StandaloneGatewayPackageInfo::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string StandaloneGatewayPackageInfo::GetPackageVersion() const
{
    return m_packageVersion;
}

void StandaloneGatewayPackageInfo::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool StandaloneGatewayPackageInfo::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

