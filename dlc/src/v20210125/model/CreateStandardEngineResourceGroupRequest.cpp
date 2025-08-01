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

#include <tencentcloud/dlc/v20210125/model/CreateStandardEngineResourceGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateStandardEngineResourceGroupRequest::CreateStandardEngineResourceGroupRequest() :
    m_engineResourceGroupNameHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_autoLaunchHasBeenSet(false),
    m_autoPauseHasBeenSet(false),
    m_driverCuSpecHasBeenSet(false),
    m_executorCuSpecHasBeenSet(false),
    m_minExecutorNumsHasBeenSet(false),
    m_maxExecutorNumsHasBeenSet(false),
    m_isLaunchNowHasBeenSet(false),
    m_autoPauseTimeHasBeenSet(false),
    m_staticConfigPairsHasBeenSet(false),
    m_dynamicConfigPairsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_networkConfigNamesHasBeenSet(false),
    m_publicDomainHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_frameTypeHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_resourceGroupSceneHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_pythonCuSpecHasBeenSet(false),
    m_sparkSpecModeHasBeenSet(false),
    m_sparkSizeHasBeenSet(false)
{
}

string CreateStandardEngineResourceGroupRequest::ToJsonString() const
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

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoLaunchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoLaunch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoLaunch, allocator);
    }

    if (m_autoPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPause";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPause, allocator);
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

    if (m_isLaunchNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLaunchNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isLaunchNow, allocator);
    }

    if (m_autoPauseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPauseTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPauseTime, allocator);
    }

    if (m_staticConfigPairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticConfigPairs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_staticConfigPairs.begin(); itr != m_staticConfigPairs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dynamicConfigPairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicConfigPairs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dynamicConfigPairs.begin(); itr != m_dynamicConfigPairs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrency, allocator);
    }

    if (m_networkConfigNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfigNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_networkConfigNames.begin(); itr != m_networkConfigNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_frameTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frameType.c_str(), allocator).Move(), allocator);
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

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_resourceGroupSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupScene.c_str(), allocator).Move(), allocator);
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


string CreateStandardEngineResourceGroupRequest::GetEngineResourceGroupName() const
{
    return m_engineResourceGroupName;
}

void CreateStandardEngineResourceGroupRequest::SetEngineResourceGroupName(const string& _engineResourceGroupName)
{
    m_engineResourceGroupName = _engineResourceGroupName;
    m_engineResourceGroupNameHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::EngineResourceGroupNameHasBeenSet() const
{
    return m_engineResourceGroupNameHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void CreateStandardEngineResourceGroupRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

int64_t CreateStandardEngineResourceGroupRequest::GetAutoLaunch() const
{
    return m_autoLaunch;
}

void CreateStandardEngineResourceGroupRequest::SetAutoLaunch(const int64_t& _autoLaunch)
{
    m_autoLaunch = _autoLaunch;
    m_autoLaunchHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::AutoLaunchHasBeenSet() const
{
    return m_autoLaunchHasBeenSet;
}

int64_t CreateStandardEngineResourceGroupRequest::GetAutoPause() const
{
    return m_autoPause;
}

void CreateStandardEngineResourceGroupRequest::SetAutoPause(const int64_t& _autoPause)
{
    m_autoPause = _autoPause;
    m_autoPauseHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::AutoPauseHasBeenSet() const
{
    return m_autoPauseHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetDriverCuSpec() const
{
    return m_driverCuSpec;
}

void CreateStandardEngineResourceGroupRequest::SetDriverCuSpec(const string& _driverCuSpec)
{
    m_driverCuSpec = _driverCuSpec;
    m_driverCuSpecHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::DriverCuSpecHasBeenSet() const
{
    return m_driverCuSpecHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetExecutorCuSpec() const
{
    return m_executorCuSpec;
}

void CreateStandardEngineResourceGroupRequest::SetExecutorCuSpec(const string& _executorCuSpec)
{
    m_executorCuSpec = _executorCuSpec;
    m_executorCuSpecHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::ExecutorCuSpecHasBeenSet() const
{
    return m_executorCuSpecHasBeenSet;
}

int64_t CreateStandardEngineResourceGroupRequest::GetMinExecutorNums() const
{
    return m_minExecutorNums;
}

void CreateStandardEngineResourceGroupRequest::SetMinExecutorNums(const int64_t& _minExecutorNums)
{
    m_minExecutorNums = _minExecutorNums;
    m_minExecutorNumsHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::MinExecutorNumsHasBeenSet() const
{
    return m_minExecutorNumsHasBeenSet;
}

int64_t CreateStandardEngineResourceGroupRequest::GetMaxExecutorNums() const
{
    return m_maxExecutorNums;
}

void CreateStandardEngineResourceGroupRequest::SetMaxExecutorNums(const int64_t& _maxExecutorNums)
{
    m_maxExecutorNums = _maxExecutorNums;
    m_maxExecutorNumsHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::MaxExecutorNumsHasBeenSet() const
{
    return m_maxExecutorNumsHasBeenSet;
}

int64_t CreateStandardEngineResourceGroupRequest::GetIsLaunchNow() const
{
    return m_isLaunchNow;
}

void CreateStandardEngineResourceGroupRequest::SetIsLaunchNow(const int64_t& _isLaunchNow)
{
    m_isLaunchNow = _isLaunchNow;
    m_isLaunchNowHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::IsLaunchNowHasBeenSet() const
{
    return m_isLaunchNowHasBeenSet;
}

int64_t CreateStandardEngineResourceGroupRequest::GetAutoPauseTime() const
{
    return m_autoPauseTime;
}

void CreateStandardEngineResourceGroupRequest::SetAutoPauseTime(const int64_t& _autoPauseTime)
{
    m_autoPauseTime = _autoPauseTime;
    m_autoPauseTimeHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::AutoPauseTimeHasBeenSet() const
{
    return m_autoPauseTimeHasBeenSet;
}

vector<EngineResourceGroupConfigPair> CreateStandardEngineResourceGroupRequest::GetStaticConfigPairs() const
{
    return m_staticConfigPairs;
}

void CreateStandardEngineResourceGroupRequest::SetStaticConfigPairs(const vector<EngineResourceGroupConfigPair>& _staticConfigPairs)
{
    m_staticConfigPairs = _staticConfigPairs;
    m_staticConfigPairsHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::StaticConfigPairsHasBeenSet() const
{
    return m_staticConfigPairsHasBeenSet;
}

vector<EngineResourceGroupConfigPair> CreateStandardEngineResourceGroupRequest::GetDynamicConfigPairs() const
{
    return m_dynamicConfigPairs;
}

void CreateStandardEngineResourceGroupRequest::SetDynamicConfigPairs(const vector<EngineResourceGroupConfigPair>& _dynamicConfigPairs)
{
    m_dynamicConfigPairs = _dynamicConfigPairs;
    m_dynamicConfigPairsHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::DynamicConfigPairsHasBeenSet() const
{
    return m_dynamicConfigPairsHasBeenSet;
}

int64_t CreateStandardEngineResourceGroupRequest::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void CreateStandardEngineResourceGroupRequest::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

vector<string> CreateStandardEngineResourceGroupRequest::GetNetworkConfigNames() const
{
    return m_networkConfigNames;
}

void CreateStandardEngineResourceGroupRequest::SetNetworkConfigNames(const vector<string>& _networkConfigNames)
{
    m_networkConfigNames = _networkConfigNames;
    m_networkConfigNamesHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::NetworkConfigNamesHasBeenSet() const
{
    return m_networkConfigNamesHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetPublicDomain() const
{
    return m_publicDomain;
}

void CreateStandardEngineResourceGroupRequest::SetPublicDomain(const string& _publicDomain)
{
    m_publicDomain = _publicDomain;
    m_publicDomainHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::PublicDomainHasBeenSet() const
{
    return m_publicDomainHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetRegistryId() const
{
    return m_registryId;
}

void CreateStandardEngineResourceGroupRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetFrameType() const
{
    return m_frameType;
}

void CreateStandardEngineResourceGroupRequest::SetFrameType(const string& _frameType)
{
    m_frameType = _frameType;
    m_frameTypeHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::FrameTypeHasBeenSet() const
{
    return m_frameTypeHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetImageType() const
{
    return m_imageType;
}

void CreateStandardEngineResourceGroupRequest::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetImageName() const
{
    return m_imageName;
}

void CreateStandardEngineResourceGroupRequest::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetImageVersion() const
{
    return m_imageVersion;
}

void CreateStandardEngineResourceGroupRequest::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

int64_t CreateStandardEngineResourceGroupRequest::GetSize() const
{
    return m_size;
}

void CreateStandardEngineResourceGroupRequest::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetResourceGroupScene() const
{
    return m_resourceGroupScene;
}

void CreateStandardEngineResourceGroupRequest::SetResourceGroupScene(const string& _resourceGroupScene)
{
    m_resourceGroupScene = _resourceGroupScene;
    m_resourceGroupSceneHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::ResourceGroupSceneHasBeenSet() const
{
    return m_resourceGroupSceneHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetRegionName() const
{
    return m_regionName;
}

void CreateStandardEngineResourceGroupRequest::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetPythonCuSpec() const
{
    return m_pythonCuSpec;
}

void CreateStandardEngineResourceGroupRequest::SetPythonCuSpec(const string& _pythonCuSpec)
{
    m_pythonCuSpec = _pythonCuSpec;
    m_pythonCuSpecHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::PythonCuSpecHasBeenSet() const
{
    return m_pythonCuSpecHasBeenSet;
}

string CreateStandardEngineResourceGroupRequest::GetSparkSpecMode() const
{
    return m_sparkSpecMode;
}

void CreateStandardEngineResourceGroupRequest::SetSparkSpecMode(const string& _sparkSpecMode)
{
    m_sparkSpecMode = _sparkSpecMode;
    m_sparkSpecModeHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::SparkSpecModeHasBeenSet() const
{
    return m_sparkSpecModeHasBeenSet;
}

int64_t CreateStandardEngineResourceGroupRequest::GetSparkSize() const
{
    return m_sparkSize;
}

void CreateStandardEngineResourceGroupRequest::SetSparkSize(const int64_t& _sparkSize)
{
    m_sparkSize = _sparkSize;
    m_sparkSizeHasBeenSet = true;
}

bool CreateStandardEngineResourceGroupRequest::SparkSizeHasBeenSet() const
{
    return m_sparkSizeHasBeenSet;
}


