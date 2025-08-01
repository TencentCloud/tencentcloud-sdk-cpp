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

#include <tencentcloud/dlc/v20210125/model/StandardEngineResourceGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

StandardEngineResourceGroupInfo::StandardEngineResourceGroupInfo() :
    m_engineResourceGroupIdHasBeenSet(false),
    m_engineResourceGroupNameHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_resourceGroupStateHasBeenSet(false),
    m_autoLaunchHasBeenSet(false),
    m_autoPauseHasBeenSet(false),
    m_autoPauseTimeHasBeenSet(false),
    m_driverCuSpecHasBeenSet(false),
    m_executorCuSpecHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_minExecutorNumsHasBeenSet(false),
    m_maxExecutorNumsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_needRestartHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_dataEngineIdHasBeenSet(false),
    m_dataEngineStateHasBeenSet(false),
    m_accessPointIdHasBeenSet(false),
    m_accessPointNameHasBeenSet(false),
    m_accessPointStateHasBeenSet(false),
    m_resourceGroupTypeHasBeenSet(false),
    m_engineNetworkIdHasBeenSet(false),
    m_networkConfigNamesHasBeenSet(false),
    m_frameTypeHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_resourceGroupSceneHasBeenSet(false),
    m_pythonCuSpecHasBeenSet(false),
    m_sparkSpecModeHasBeenSet(false),
    m_sparkSizeHasBeenSet(false),
    m_sparkMinSizeHasBeenSet(false)
{
}

CoreInternalOutcome StandardEngineResourceGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineResourceGroupId") && !value["EngineResourceGroupId"].IsNull())
    {
        if (!value["EngineResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.EngineResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineResourceGroupId = string(value["EngineResourceGroupId"].GetString());
        m_engineResourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("EngineResourceGroupName") && !value["EngineResourceGroupName"].IsNull())
    {
        if (!value["EngineResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.EngineResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineResourceGroupName = string(value["EngineResourceGroupName"].GetString());
        m_engineResourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupState") && !value["ResourceGroupState"].IsNull())
    {
        if (!value["ResourceGroupState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.ResourceGroupState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupState = value["ResourceGroupState"].GetInt64();
        m_resourceGroupStateHasBeenSet = true;
    }

    if (value.HasMember("AutoLaunch") && !value["AutoLaunch"].IsNull())
    {
        if (!value["AutoLaunch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.AutoLaunch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoLaunch = value["AutoLaunch"].GetInt64();
        m_autoLaunchHasBeenSet = true;
    }

    if (value.HasMember("AutoPause") && !value["AutoPause"].IsNull())
    {
        if (!value["AutoPause"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.AutoPause` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoPause = value["AutoPause"].GetInt64();
        m_autoPauseHasBeenSet = true;
    }

    if (value.HasMember("AutoPauseTime") && !value["AutoPauseTime"].IsNull())
    {
        if (!value["AutoPauseTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.AutoPauseTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoPauseTime = value["AutoPauseTime"].GetInt64();
        m_autoPauseTimeHasBeenSet = true;
    }

    if (value.HasMember("DriverCuSpec") && !value["DriverCuSpec"].IsNull())
    {
        if (!value["DriverCuSpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.DriverCuSpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverCuSpec = string(value["DriverCuSpec"].GetString());
        m_driverCuSpecHasBeenSet = true;
    }

    if (value.HasMember("ExecutorCuSpec") && !value["ExecutorCuSpec"].IsNull())
    {
        if (!value["ExecutorCuSpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.ExecutorCuSpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorCuSpec = string(value["ExecutorCuSpec"].GetString());
        m_executorCuSpecHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrency") && !value["MaxConcurrency"].IsNull())
    {
        if (!value["MaxConcurrency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.MaxConcurrency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrency = value["MaxConcurrency"].GetInt64();
        m_maxConcurrencyHasBeenSet = true;
    }

    if (value.HasMember("MinExecutorNums") && !value["MinExecutorNums"].IsNull())
    {
        if (!value["MinExecutorNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.MinExecutorNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minExecutorNums = value["MinExecutorNums"].GetInt64();
        m_minExecutorNumsHasBeenSet = true;
    }

    if (value.HasMember("MaxExecutorNums") && !value["MaxExecutorNums"].IsNull())
    {
        if (!value["MaxExecutorNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.MaxExecutorNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxExecutorNums = value["MaxExecutorNums"].GetInt64();
        m_maxExecutorNumsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("NeedRestart") && !value["NeedRestart"].IsNull())
    {
        if (!value["NeedRestart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.NeedRestart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needRestart = value["NeedRestart"].GetInt64();
        m_needRestartHasBeenSet = true;
    }

    if (value.HasMember("DataEngineName") && !value["DataEngineName"].IsNull())
    {
        if (!value["DataEngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.DataEngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineName = string(value["DataEngineName"].GetString());
        m_dataEngineNameHasBeenSet = true;
    }

    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("DataEngineState") && !value["DataEngineState"].IsNull())
    {
        if (!value["DataEngineState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.DataEngineState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineState = value["DataEngineState"].GetInt64();
        m_dataEngineStateHasBeenSet = true;
    }

    if (value.HasMember("AccessPointId") && !value["AccessPointId"].IsNull())
    {
        if (!value["AccessPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.AccessPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointId = string(value["AccessPointId"].GetString());
        m_accessPointIdHasBeenSet = true;
    }

    if (value.HasMember("AccessPointName") && !value["AccessPointName"].IsNull())
    {
        if (!value["AccessPointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.AccessPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointName = string(value["AccessPointName"].GetString());
        m_accessPointNameHasBeenSet = true;
    }

    if (value.HasMember("AccessPointState") && !value["AccessPointState"].IsNull())
    {
        if (!value["AccessPointState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.AccessPointState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointState = value["AccessPointState"].GetInt64();
        m_accessPointStateHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupType") && !value["ResourceGroupType"].IsNull())
    {
        if (!value["ResourceGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.ResourceGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupType = string(value["ResourceGroupType"].GetString());
        m_resourceGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("EngineNetworkId") && !value["EngineNetworkId"].IsNull())
    {
        if (!value["EngineNetworkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.EngineNetworkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineNetworkId = string(value["EngineNetworkId"].GetString());
        m_engineNetworkIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkConfigNames") && !value["NetworkConfigNames"].IsNull())
    {
        if (!value["NetworkConfigNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.NetworkConfigNames` is not array type"));

        const rapidjson::Value &tmpValue = value["NetworkConfigNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_networkConfigNames.push_back((*itr).GetString());
        }
        m_networkConfigNamesHasBeenSet = true;
    }

    if (value.HasMember("FrameType") && !value["FrameType"].IsNull())
    {
        if (!value["FrameType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.FrameType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameType = string(value["FrameType"].GetString());
        m_frameTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageVersion") && !value["ImageVersion"].IsNull())
    {
        if (!value["ImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.ImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersion = string(value["ImageVersion"].GetString());
        m_imageVersionHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupScene") && !value["ResourceGroupScene"].IsNull())
    {
        if (!value["ResourceGroupScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.ResourceGroupScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupScene = string(value["ResourceGroupScene"].GetString());
        m_resourceGroupSceneHasBeenSet = true;
    }

    if (value.HasMember("PythonCuSpec") && !value["PythonCuSpec"].IsNull())
    {
        if (!value["PythonCuSpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.PythonCuSpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pythonCuSpec = string(value["PythonCuSpec"].GetString());
        m_pythonCuSpecHasBeenSet = true;
    }

    if (value.HasMember("SparkSpecMode") && !value["SparkSpecMode"].IsNull())
    {
        if (!value["SparkSpecMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.SparkSpecMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkSpecMode = string(value["SparkSpecMode"].GetString());
        m_sparkSpecModeHasBeenSet = true;
    }

    if (value.HasMember("SparkSize") && !value["SparkSize"].IsNull())
    {
        if (!value["SparkSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.SparkSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sparkSize = value["SparkSize"].GetInt64();
        m_sparkSizeHasBeenSet = true;
    }

    if (value.HasMember("SparkMinSize") && !value["SparkMinSize"].IsNull())
    {
        if (!value["SparkMinSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupInfo.SparkMinSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sparkMinSize = value["SparkMinSize"].GetInt64();
        m_sparkMinSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandardEngineResourceGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineResourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineResourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineResourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineResourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceGroupState, allocator);
    }

    if (m_autoLaunchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoLaunch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoLaunch, allocator);
    }

    if (m_autoPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPause";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoPause, allocator);
    }

    if (m_autoPauseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPauseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoPauseTime, allocator);
    }

    if (m_driverCuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverCuSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverCuSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_executorCuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorCuSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorCuSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrency, allocator);
    }

    if (m_minExecutorNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinExecutorNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minExecutorNums, allocator);
    }

    if (m_maxExecutorNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxExecutorNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxExecutorNums, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_needRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needRestart, allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataEngineState, allocator);
    }

    if (m_accessPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessPointStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessPointState, allocator);
    }

    if (m_resourceGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNetworkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNetworkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineNetworkId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkConfigNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfigNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_networkConfigNames.begin(); itr != m_networkConfigNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_frameTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_resourceGroupSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupScene.c_str(), allocator).Move(), allocator);
    }

    if (m_pythonCuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PythonCuSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pythonCuSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkSpecModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkSpecMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkSpecMode.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sparkSize, allocator);
    }

    if (m_sparkMinSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkMinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sparkMinSize, allocator);
    }

}


string StandardEngineResourceGroupInfo::GetEngineResourceGroupId() const
{
    return m_engineResourceGroupId;
}

void StandardEngineResourceGroupInfo::SetEngineResourceGroupId(const string& _engineResourceGroupId)
{
    m_engineResourceGroupId = _engineResourceGroupId;
    m_engineResourceGroupIdHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::EngineResourceGroupIdHasBeenSet() const
{
    return m_engineResourceGroupIdHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetEngineResourceGroupName() const
{
    return m_engineResourceGroupName;
}

void StandardEngineResourceGroupInfo::SetEngineResourceGroupName(const string& _engineResourceGroupName)
{
    m_engineResourceGroupName = _engineResourceGroupName;
    m_engineResourceGroupNameHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::EngineResourceGroupNameHasBeenSet() const
{
    return m_engineResourceGroupNameHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetCreator() const
{
    return m_creator;
}

void StandardEngineResourceGroupInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetResourceGroupState() const
{
    return m_resourceGroupState;
}

void StandardEngineResourceGroupInfo::SetResourceGroupState(const int64_t& _resourceGroupState)
{
    m_resourceGroupState = _resourceGroupState;
    m_resourceGroupStateHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::ResourceGroupStateHasBeenSet() const
{
    return m_resourceGroupStateHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetAutoLaunch() const
{
    return m_autoLaunch;
}

void StandardEngineResourceGroupInfo::SetAutoLaunch(const int64_t& _autoLaunch)
{
    m_autoLaunch = _autoLaunch;
    m_autoLaunchHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::AutoLaunchHasBeenSet() const
{
    return m_autoLaunchHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetAutoPause() const
{
    return m_autoPause;
}

void StandardEngineResourceGroupInfo::SetAutoPause(const int64_t& _autoPause)
{
    m_autoPause = _autoPause;
    m_autoPauseHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::AutoPauseHasBeenSet() const
{
    return m_autoPauseHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetAutoPauseTime() const
{
    return m_autoPauseTime;
}

void StandardEngineResourceGroupInfo::SetAutoPauseTime(const int64_t& _autoPauseTime)
{
    m_autoPauseTime = _autoPauseTime;
    m_autoPauseTimeHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::AutoPauseTimeHasBeenSet() const
{
    return m_autoPauseTimeHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetDriverCuSpec() const
{
    return m_driverCuSpec;
}

void StandardEngineResourceGroupInfo::SetDriverCuSpec(const string& _driverCuSpec)
{
    m_driverCuSpec = _driverCuSpec;
    m_driverCuSpecHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::DriverCuSpecHasBeenSet() const
{
    return m_driverCuSpecHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetExecutorCuSpec() const
{
    return m_executorCuSpec;
}

void StandardEngineResourceGroupInfo::SetExecutorCuSpec(const string& _executorCuSpec)
{
    m_executorCuSpec = _executorCuSpec;
    m_executorCuSpecHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::ExecutorCuSpecHasBeenSet() const
{
    return m_executorCuSpecHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void StandardEngineResourceGroupInfo::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetMinExecutorNums() const
{
    return m_minExecutorNums;
}

void StandardEngineResourceGroupInfo::SetMinExecutorNums(const int64_t& _minExecutorNums)
{
    m_minExecutorNums = _minExecutorNums;
    m_minExecutorNumsHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::MinExecutorNumsHasBeenSet() const
{
    return m_minExecutorNumsHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetMaxExecutorNums() const
{
    return m_maxExecutorNums;
}

void StandardEngineResourceGroupInfo::SetMaxExecutorNums(const int64_t& _maxExecutorNums)
{
    m_maxExecutorNums = _maxExecutorNums;
    m_maxExecutorNumsHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::MaxExecutorNumsHasBeenSet() const
{
    return m_maxExecutorNumsHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void StandardEngineResourceGroupInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void StandardEngineResourceGroupInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetNeedRestart() const
{
    return m_needRestart;
}

void StandardEngineResourceGroupInfo::SetNeedRestart(const int64_t& _needRestart)
{
    m_needRestart = _needRestart;
    m_needRestartHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::NeedRestartHasBeenSet() const
{
    return m_needRestartHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetDataEngineName() const
{
    return m_dataEngineName;
}

void StandardEngineResourceGroupInfo::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetDataEngineId() const
{
    return m_dataEngineId;
}

void StandardEngineResourceGroupInfo::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetDataEngineState() const
{
    return m_dataEngineState;
}

void StandardEngineResourceGroupInfo::SetDataEngineState(const int64_t& _dataEngineState)
{
    m_dataEngineState = _dataEngineState;
    m_dataEngineStateHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::DataEngineStateHasBeenSet() const
{
    return m_dataEngineStateHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetAccessPointId() const
{
    return m_accessPointId;
}

void StandardEngineResourceGroupInfo::SetAccessPointId(const string& _accessPointId)
{
    m_accessPointId = _accessPointId;
    m_accessPointIdHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::AccessPointIdHasBeenSet() const
{
    return m_accessPointIdHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetAccessPointName() const
{
    return m_accessPointName;
}

void StandardEngineResourceGroupInfo::SetAccessPointName(const string& _accessPointName)
{
    m_accessPointName = _accessPointName;
    m_accessPointNameHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::AccessPointNameHasBeenSet() const
{
    return m_accessPointNameHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetAccessPointState() const
{
    return m_accessPointState;
}

void StandardEngineResourceGroupInfo::SetAccessPointState(const int64_t& _accessPointState)
{
    m_accessPointState = _accessPointState;
    m_accessPointStateHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::AccessPointStateHasBeenSet() const
{
    return m_accessPointStateHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetResourceGroupType() const
{
    return m_resourceGroupType;
}

void StandardEngineResourceGroupInfo::SetResourceGroupType(const string& _resourceGroupType)
{
    m_resourceGroupType = _resourceGroupType;
    m_resourceGroupTypeHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::ResourceGroupTypeHasBeenSet() const
{
    return m_resourceGroupTypeHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetEngineNetworkId() const
{
    return m_engineNetworkId;
}

void StandardEngineResourceGroupInfo::SetEngineNetworkId(const string& _engineNetworkId)
{
    m_engineNetworkId = _engineNetworkId;
    m_engineNetworkIdHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::EngineNetworkIdHasBeenSet() const
{
    return m_engineNetworkIdHasBeenSet;
}

vector<string> StandardEngineResourceGroupInfo::GetNetworkConfigNames() const
{
    return m_networkConfigNames;
}

void StandardEngineResourceGroupInfo::SetNetworkConfigNames(const vector<string>& _networkConfigNames)
{
    m_networkConfigNames = _networkConfigNames;
    m_networkConfigNamesHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::NetworkConfigNamesHasBeenSet() const
{
    return m_networkConfigNamesHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetFrameType() const
{
    return m_frameType;
}

void StandardEngineResourceGroupInfo::SetFrameType(const string& _frameType)
{
    m_frameType = _frameType;
    m_frameTypeHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::FrameTypeHasBeenSet() const
{
    return m_frameTypeHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetImageType() const
{
    return m_imageType;
}

void StandardEngineResourceGroupInfo::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetImageName() const
{
    return m_imageName;
}

void StandardEngineResourceGroupInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetImageVersion() const
{
    return m_imageVersion;
}

void StandardEngineResourceGroupInfo::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetSize() const
{
    return m_size;
}

void StandardEngineResourceGroupInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

bool StandardEngineResourceGroupInfo::GetIsDefault() const
{
    return m_isDefault;
}

void StandardEngineResourceGroupInfo::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetResourceGroupScene() const
{
    return m_resourceGroupScene;
}

void StandardEngineResourceGroupInfo::SetResourceGroupScene(const string& _resourceGroupScene)
{
    m_resourceGroupScene = _resourceGroupScene;
    m_resourceGroupSceneHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::ResourceGroupSceneHasBeenSet() const
{
    return m_resourceGroupSceneHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetPythonCuSpec() const
{
    return m_pythonCuSpec;
}

void StandardEngineResourceGroupInfo::SetPythonCuSpec(const string& _pythonCuSpec)
{
    m_pythonCuSpec = _pythonCuSpec;
    m_pythonCuSpecHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::PythonCuSpecHasBeenSet() const
{
    return m_pythonCuSpecHasBeenSet;
}

string StandardEngineResourceGroupInfo::GetSparkSpecMode() const
{
    return m_sparkSpecMode;
}

void StandardEngineResourceGroupInfo::SetSparkSpecMode(const string& _sparkSpecMode)
{
    m_sparkSpecMode = _sparkSpecMode;
    m_sparkSpecModeHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::SparkSpecModeHasBeenSet() const
{
    return m_sparkSpecModeHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetSparkSize() const
{
    return m_sparkSize;
}

void StandardEngineResourceGroupInfo::SetSparkSize(const int64_t& _sparkSize)
{
    m_sparkSize = _sparkSize;
    m_sparkSizeHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::SparkSizeHasBeenSet() const
{
    return m_sparkSizeHasBeenSet;
}

int64_t StandardEngineResourceGroupInfo::GetSparkMinSize() const
{
    return m_sparkMinSize;
}

void StandardEngineResourceGroupInfo::SetSparkMinSize(const int64_t& _sparkMinSize)
{
    m_sparkMinSize = _sparkMinSize;
    m_sparkMinSizeHasBeenSet = true;
}

bool StandardEngineResourceGroupInfo::SparkMinSizeHasBeenSet() const
{
    return m_sparkMinSizeHasBeenSet;
}

