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

#include <tencentcloud/tke/v20180525/model/GPUArgs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

GPUArgs::GPUArgs() :
    m_cUDAHasBeenSet(false),
    m_cUDNNHasBeenSet(false),
    m_customDriverHasBeenSet(false),
    m_driverHasBeenSet(false),
    m_mIGEnableHasBeenSet(false)
{
}

CoreInternalOutcome GPUArgs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CUDA") && !value["CUDA"].IsNull())
    {
        if (!value["CUDA"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GPUArgs.CUDA` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cUDA.Deserialize(value["CUDA"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cUDAHasBeenSet = true;
    }

    if (value.HasMember("CUDNN") && !value["CUDNN"].IsNull())
    {
        if (!value["CUDNN"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GPUArgs.CUDNN` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cUDNN.Deserialize(value["CUDNN"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cUDNNHasBeenSet = true;
    }

    if (value.HasMember("CustomDriver") && !value["CustomDriver"].IsNull())
    {
        if (!value["CustomDriver"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GPUArgs.CustomDriver` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customDriver.Deserialize(value["CustomDriver"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customDriverHasBeenSet = true;
    }

    if (value.HasMember("Driver") && !value["Driver"].IsNull())
    {
        if (!value["Driver"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GPUArgs.Driver` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_driver.Deserialize(value["Driver"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_driverHasBeenSet = true;
    }

    if (value.HasMember("MIGEnable") && !value["MIGEnable"].IsNull())
    {
        if (!value["MIGEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GPUArgs.MIGEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mIGEnable = value["MIGEnable"].GetBool();
        m_mIGEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GPUArgs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cUDAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CUDA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cUDA.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cUDNNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CUDNN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cUDNN.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customDriverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDriver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customDriver.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_driverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Driver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_driver.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mIGEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MIGEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mIGEnable, allocator);
    }

}


DriverVersion GPUArgs::GetCUDA() const
{
    return m_cUDA;
}

void GPUArgs::SetCUDA(const DriverVersion& _cUDA)
{
    m_cUDA = _cUDA;
    m_cUDAHasBeenSet = true;
}

bool GPUArgs::CUDAHasBeenSet() const
{
    return m_cUDAHasBeenSet;
}

CUDNN GPUArgs::GetCUDNN() const
{
    return m_cUDNN;
}

void GPUArgs::SetCUDNN(const CUDNN& _cUDNN)
{
    m_cUDNN = _cUDNN;
    m_cUDNNHasBeenSet = true;
}

bool GPUArgs::CUDNNHasBeenSet() const
{
    return m_cUDNNHasBeenSet;
}

CustomDriver GPUArgs::GetCustomDriver() const
{
    return m_customDriver;
}

void GPUArgs::SetCustomDriver(const CustomDriver& _customDriver)
{
    m_customDriver = _customDriver;
    m_customDriverHasBeenSet = true;
}

bool GPUArgs::CustomDriverHasBeenSet() const
{
    return m_customDriverHasBeenSet;
}

DriverVersion GPUArgs::GetDriver() const
{
    return m_driver;
}

void GPUArgs::SetDriver(const DriverVersion& _driver)
{
    m_driver = _driver;
    m_driverHasBeenSet = true;
}

bool GPUArgs::DriverHasBeenSet() const
{
    return m_driverHasBeenSet;
}

bool GPUArgs::GetMIGEnable() const
{
    return m_mIGEnable;
}

void GPUArgs::SetMIGEnable(const bool& _mIGEnable)
{
    m_mIGEnable = _mIGEnable;
    m_mIGEnableHasBeenSet = true;
}

bool GPUArgs::MIGEnableHasBeenSet() const
{
    return m_mIGEnableHasBeenSet;
}

