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

#include <tencentcloud/dlc/v20210125/model/UpdateStandardEngineResourceGroupResourceInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateStandardEngineResourceGroupResourceInfoRequest::UpdateStandardEngineResourceGroupResourceInfoRequest() :
    m_engineResourceGroupNameHasBeenSet(false),
    m_driverCuSpecHasBeenSet(false),
    m_executorCuSpecHasBeenSet(false),
    m_minExecutorNumsHasBeenSet(false),
    m_maxExecutorNumsHasBeenSet(false),
    m_isEffectiveNowHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_frameTypeHasBeenSet(false),
    m_publicDomainHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_pythonCuSpecHasBeenSet(false),
    m_sparkSpecModeHasBeenSet(false),
    m_sparkSizeHasBeenSet(false)
{
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineResourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineResourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_driverCuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverCuSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_driverCuSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_executorCuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorCuSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorCuSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_minExecutorNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinExecutorNums";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minExecutorNums, allocator);
    }

    if (m_maxExecutorNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxExecutorNums";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxExecutorNums, allocator);
    }

    if (m_isEffectiveNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEffectiveNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEffectiveNow, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_frameTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frameType.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publicDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_pythonCuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PythonCuSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pythonCuSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkSpecModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkSpecMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sparkSpecMode.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sparkSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateStandardEngineResourceGroupResourceInfoRequest::GetEngineResourceGroupName() const
{
    return m_engineResourceGroupName;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetEngineResourceGroupName(const string& _engineResourceGroupName)
{
    m_engineResourceGroupName = _engineResourceGroupName;
    m_engineResourceGroupNameHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::EngineResourceGroupNameHasBeenSet() const
{
    return m_engineResourceGroupNameHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetDriverCuSpec() const
{
    return m_driverCuSpec;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetDriverCuSpec(const string& _driverCuSpec)
{
    m_driverCuSpec = _driverCuSpec;
    m_driverCuSpecHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::DriverCuSpecHasBeenSet() const
{
    return m_driverCuSpecHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetExecutorCuSpec() const
{
    return m_executorCuSpec;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetExecutorCuSpec(const string& _executorCuSpec)
{
    m_executorCuSpec = _executorCuSpec;
    m_executorCuSpecHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::ExecutorCuSpecHasBeenSet() const
{
    return m_executorCuSpecHasBeenSet;
}

int64_t UpdateStandardEngineResourceGroupResourceInfoRequest::GetMinExecutorNums() const
{
    return m_minExecutorNums;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetMinExecutorNums(const int64_t& _minExecutorNums)
{
    m_minExecutorNums = _minExecutorNums;
    m_minExecutorNumsHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::MinExecutorNumsHasBeenSet() const
{
    return m_minExecutorNumsHasBeenSet;
}

int64_t UpdateStandardEngineResourceGroupResourceInfoRequest::GetMaxExecutorNums() const
{
    return m_maxExecutorNums;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetMaxExecutorNums(const int64_t& _maxExecutorNums)
{
    m_maxExecutorNums = _maxExecutorNums;
    m_maxExecutorNumsHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::MaxExecutorNumsHasBeenSet() const
{
    return m_maxExecutorNumsHasBeenSet;
}

int64_t UpdateStandardEngineResourceGroupResourceInfoRequest::GetIsEffectiveNow() const
{
    return m_isEffectiveNow;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetIsEffectiveNow(const int64_t& _isEffectiveNow)
{
    m_isEffectiveNow = _isEffectiveNow;
    m_isEffectiveNowHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::IsEffectiveNowHasBeenSet() const
{
    return m_isEffectiveNowHasBeenSet;
}

int64_t UpdateStandardEngineResourceGroupResourceInfoRequest::GetSize() const
{
    return m_size;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetImageType() const
{
    return m_imageType;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetImageName() const
{
    return m_imageName;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetImageVersion() const
{
    return m_imageVersion;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetFrameType() const
{
    return m_frameType;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetFrameType(const string& _frameType)
{
    m_frameType = _frameType;
    m_frameTypeHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::FrameTypeHasBeenSet() const
{
    return m_frameTypeHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetPublicDomain() const
{
    return m_publicDomain;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetPublicDomain(const string& _publicDomain)
{
    m_publicDomain = _publicDomain;
    m_publicDomainHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::PublicDomainHasBeenSet() const
{
    return m_publicDomainHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetRegistryId() const
{
    return m_registryId;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetRegionName() const
{
    return m_regionName;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetPythonCuSpec() const
{
    return m_pythonCuSpec;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetPythonCuSpec(const string& _pythonCuSpec)
{
    m_pythonCuSpec = _pythonCuSpec;
    m_pythonCuSpecHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::PythonCuSpecHasBeenSet() const
{
    return m_pythonCuSpecHasBeenSet;
}

string UpdateStandardEngineResourceGroupResourceInfoRequest::GetSparkSpecMode() const
{
    return m_sparkSpecMode;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetSparkSpecMode(const string& _sparkSpecMode)
{
    m_sparkSpecMode = _sparkSpecMode;
    m_sparkSpecModeHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::SparkSpecModeHasBeenSet() const
{
    return m_sparkSpecModeHasBeenSet;
}

int64_t UpdateStandardEngineResourceGroupResourceInfoRequest::GetSparkSize() const
{
    return m_sparkSize;
}

void UpdateStandardEngineResourceGroupResourceInfoRequest::SetSparkSize(const int64_t& _sparkSize)
{
    m_sparkSize = _sparkSize;
    m_sparkSizeHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupResourceInfoRequest::SparkSizeHasBeenSet() const
{
    return m_sparkSizeHasBeenSet;
}


