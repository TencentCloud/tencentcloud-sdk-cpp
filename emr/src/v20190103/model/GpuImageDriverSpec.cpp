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

#include <tencentcloud/emr/v20190103/model/GpuImageDriverSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

GpuImageDriverSpec::GpuImageDriverSpec() :
    m_imageIdHasBeenSet(false),
    m_driverNameHasBeenSet(false),
    m_driverVersionHasBeenSet(false),
    m_cUDANameHasBeenSet(false),
    m_cUDAVersionHasBeenSet(false),
    m_cUDNNNameHasBeenSet(false),
    m_cUDNNVersionHasBeenSet(false)
{
}

CoreInternalOutcome GpuImageDriverSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GpuImageDriverSpec.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("DriverName") && !value["DriverName"].IsNull())
    {
        if (!value["DriverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GpuImageDriverSpec.DriverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverName = string(value["DriverName"].GetString());
        m_driverNameHasBeenSet = true;
    }

    if (value.HasMember("DriverVersion") && !value["DriverVersion"].IsNull())
    {
        if (!value["DriverVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GpuImageDriverSpec.DriverVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverVersion = string(value["DriverVersion"].GetString());
        m_driverVersionHasBeenSet = true;
    }

    if (value.HasMember("CUDAName") && !value["CUDAName"].IsNull())
    {
        if (!value["CUDAName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GpuImageDriverSpec.CUDAName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cUDAName = string(value["CUDAName"].GetString());
        m_cUDANameHasBeenSet = true;
    }

    if (value.HasMember("CUDAVersion") && !value["CUDAVersion"].IsNull())
    {
        if (!value["CUDAVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GpuImageDriverSpec.CUDAVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cUDAVersion = string(value["CUDAVersion"].GetString());
        m_cUDAVersionHasBeenSet = true;
    }

    if (value.HasMember("CUDNNName") && !value["CUDNNName"].IsNull())
    {
        if (!value["CUDNNName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GpuImageDriverSpec.CUDNNName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cUDNNName = string(value["CUDNNName"].GetString());
        m_cUDNNNameHasBeenSet = true;
    }

    if (value.HasMember("CUDNNVersion") && !value["CUDNNVersion"].IsNull())
    {
        if (!value["CUDNNVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GpuImageDriverSpec.CUDNNVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cUDNNVersion = string(value["CUDNNVersion"].GetString());
        m_cUDNNVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GpuImageDriverSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_driverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverName.c_str(), allocator).Move(), allocator);
    }

    if (m_driverVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cUDANameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CUDAName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cUDAName.c_str(), allocator).Move(), allocator);
    }

    if (m_cUDAVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CUDAVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cUDAVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cUDNNNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CUDNNName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cUDNNName.c_str(), allocator).Move(), allocator);
    }

    if (m_cUDNNVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CUDNNVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cUDNNVersion.c_str(), allocator).Move(), allocator);
    }

}


string GpuImageDriverSpec::GetImageId() const
{
    return m_imageId;
}

void GpuImageDriverSpec::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool GpuImageDriverSpec::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string GpuImageDriverSpec::GetDriverName() const
{
    return m_driverName;
}

void GpuImageDriverSpec::SetDriverName(const string& _driverName)
{
    m_driverName = _driverName;
    m_driverNameHasBeenSet = true;
}

bool GpuImageDriverSpec::DriverNameHasBeenSet() const
{
    return m_driverNameHasBeenSet;
}

string GpuImageDriverSpec::GetDriverVersion() const
{
    return m_driverVersion;
}

void GpuImageDriverSpec::SetDriverVersion(const string& _driverVersion)
{
    m_driverVersion = _driverVersion;
    m_driverVersionHasBeenSet = true;
}

bool GpuImageDriverSpec::DriverVersionHasBeenSet() const
{
    return m_driverVersionHasBeenSet;
}

string GpuImageDriverSpec::GetCUDAName() const
{
    return m_cUDAName;
}

void GpuImageDriverSpec::SetCUDAName(const string& _cUDAName)
{
    m_cUDAName = _cUDAName;
    m_cUDANameHasBeenSet = true;
}

bool GpuImageDriverSpec::CUDANameHasBeenSet() const
{
    return m_cUDANameHasBeenSet;
}

string GpuImageDriverSpec::GetCUDAVersion() const
{
    return m_cUDAVersion;
}

void GpuImageDriverSpec::SetCUDAVersion(const string& _cUDAVersion)
{
    m_cUDAVersion = _cUDAVersion;
    m_cUDAVersionHasBeenSet = true;
}

bool GpuImageDriverSpec::CUDAVersionHasBeenSet() const
{
    return m_cUDAVersionHasBeenSet;
}

string GpuImageDriverSpec::GetCUDNNName() const
{
    return m_cUDNNName;
}

void GpuImageDriverSpec::SetCUDNNName(const string& _cUDNNName)
{
    m_cUDNNName = _cUDNNName;
    m_cUDNNNameHasBeenSet = true;
}

bool GpuImageDriverSpec::CUDNNNameHasBeenSet() const
{
    return m_cUDNNNameHasBeenSet;
}

string GpuImageDriverSpec::GetCUDNNVersion() const
{
    return m_cUDNNVersion;
}

void GpuImageDriverSpec::SetCUDNNVersion(const string& _cUDNNVersion)
{
    m_cUDNNVersion = _cUDNNVersion;
    m_cUDNNVersionHasBeenSet = true;
}

bool GpuImageDriverSpec::CUDNNVersionHasBeenSet() const
{
    return m_cUDNNVersionHasBeenSet;
}

