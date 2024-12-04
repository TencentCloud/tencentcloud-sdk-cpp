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

#include <tencentcloud/tke/v20220501/model/GPUParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

GPUParams::GPUParams() :
    m_driverHasBeenSet(false),
    m_cUDAHasBeenSet(false),
    m_cUDNNHasBeenSet(false),
    m_mIGEnableHasBeenSet(false),
    m_fabricHasBeenSet(false),
    m_customGPUDriverHasBeenSet(false)
{
}

CoreInternalOutcome GPUParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Driver") && !value["Driver"].IsNull())
    {
        if (!value["Driver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUParams.Driver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driver = string(value["Driver"].GetString());
        m_driverHasBeenSet = true;
    }

    if (value.HasMember("CUDA") && !value["CUDA"].IsNull())
    {
        if (!value["CUDA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUParams.CUDA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cUDA = string(value["CUDA"].GetString());
        m_cUDAHasBeenSet = true;
    }

    if (value.HasMember("CUDNN") && !value["CUDNN"].IsNull())
    {
        if (!value["CUDNN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUParams.CUDNN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cUDNN = string(value["CUDNN"].GetString());
        m_cUDNNHasBeenSet = true;
    }

    if (value.HasMember("MIGEnable") && !value["MIGEnable"].IsNull())
    {
        if (!value["MIGEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GPUParams.MIGEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mIGEnable = value["MIGEnable"].GetBool();
        m_mIGEnableHasBeenSet = true;
    }

    if (value.HasMember("Fabric") && !value["Fabric"].IsNull())
    {
        if (!value["Fabric"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GPUParams.Fabric` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fabric = value["Fabric"].GetBool();
        m_fabricHasBeenSet = true;
    }

    if (value.HasMember("CustomGPUDriver") && !value["CustomGPUDriver"].IsNull())
    {
        if (!value["CustomGPUDriver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUParams.CustomGPUDriver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customGPUDriver = string(value["CustomGPUDriver"].GetString());
        m_customGPUDriverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GPUParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_driverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Driver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driver.c_str(), allocator).Move(), allocator);
    }

    if (m_cUDAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CUDA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cUDA.c_str(), allocator).Move(), allocator);
    }

    if (m_cUDNNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CUDNN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cUDNN.c_str(), allocator).Move(), allocator);
    }

    if (m_mIGEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MIGEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mIGEnable, allocator);
    }

    if (m_fabricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fabric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fabric, allocator);
    }

    if (m_customGPUDriverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomGPUDriver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customGPUDriver.c_str(), allocator).Move(), allocator);
    }

}


string GPUParams::GetDriver() const
{
    return m_driver;
}

void GPUParams::SetDriver(const string& _driver)
{
    m_driver = _driver;
    m_driverHasBeenSet = true;
}

bool GPUParams::DriverHasBeenSet() const
{
    return m_driverHasBeenSet;
}

string GPUParams::GetCUDA() const
{
    return m_cUDA;
}

void GPUParams::SetCUDA(const string& _cUDA)
{
    m_cUDA = _cUDA;
    m_cUDAHasBeenSet = true;
}

bool GPUParams::CUDAHasBeenSet() const
{
    return m_cUDAHasBeenSet;
}

string GPUParams::GetCUDNN() const
{
    return m_cUDNN;
}

void GPUParams::SetCUDNN(const string& _cUDNN)
{
    m_cUDNN = _cUDNN;
    m_cUDNNHasBeenSet = true;
}

bool GPUParams::CUDNNHasBeenSet() const
{
    return m_cUDNNHasBeenSet;
}

bool GPUParams::GetMIGEnable() const
{
    return m_mIGEnable;
}

void GPUParams::SetMIGEnable(const bool& _mIGEnable)
{
    m_mIGEnable = _mIGEnable;
    m_mIGEnableHasBeenSet = true;
}

bool GPUParams::MIGEnableHasBeenSet() const
{
    return m_mIGEnableHasBeenSet;
}

bool GPUParams::GetFabric() const
{
    return m_fabric;
}

void GPUParams::SetFabric(const bool& _fabric)
{
    m_fabric = _fabric;
    m_fabricHasBeenSet = true;
}

bool GPUParams::FabricHasBeenSet() const
{
    return m_fabricHasBeenSet;
}

string GPUParams::GetCustomGPUDriver() const
{
    return m_customGPUDriver;
}

void GPUParams::SetCustomGPUDriver(const string& _customGPUDriver)
{
    m_customGPUDriver = _customGPUDriver;
    m_customGPUDriverHasBeenSet = true;
}

bool GPUParams::CustomGPUDriverHasBeenSet() const
{
    return m_customGPUDriverHasBeenSet;
}

