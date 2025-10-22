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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATESTANDARDENGINERESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATESTANDARDENGINERESOURCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/EngineResourceGroupConfigPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateStandardEngineResourceGroup请求参数结构体
                */
                class CreateStandardEngineResourceGroupRequest : public AbstractModel
                {
                public:
                    CreateStandardEngineResourceGroupRequest();
                    ~CreateStandardEngineResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标准引擎资源组名称
                     * @return EngineResourceGroupName 标准引擎资源组名称
                     * 
                     */
                    std::string GetEngineResourceGroupName() const;

                    /**
                     * 设置标准引擎资源组名称
                     * @param _engineResourceGroupName 标准引擎资源组名称
                     * 
                     */
                    void SetEngineResourceGroupName(const std::string& _engineResourceGroupName);

                    /**
                     * 判断参数 EngineResourceGroupName 是否已赋值
                     * @return EngineResourceGroupName 是否已赋值
                     * 
                     */
                    bool EngineResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取标准引擎名称
                     * @return DataEngineName 标准引擎名称
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置标准引擎名称
                     * @param _dataEngineName 标准引擎名称
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取自动启动，（任务提交自动拉起资源组）0-自动启动，1-不自动启动
                     * @return AutoLaunch 自动启动，（任务提交自动拉起资源组）0-自动启动，1-不自动启动
                     * 
                     */
                    int64_t GetAutoLaunch() const;

                    /**
                     * 设置自动启动，（任务提交自动拉起资源组）0-自动启动，1-不自动启动
                     * @param _autoLaunch 自动启动，（任务提交自动拉起资源组）0-自动启动，1-不自动启动
                     * 
                     */
                    void SetAutoLaunch(const int64_t& _autoLaunch);

                    /**
                     * 判断参数 AutoLaunch 是否已赋值
                     * @return AutoLaunch 是否已赋值
                     * 
                     */
                    bool AutoLaunchHasBeenSet() const;

                    /**
                     * 获取自动挂起资源组。0-自动挂起，1-不自动挂起
                     * @return AutoPause 自动挂起资源组。0-自动挂起，1-不自动挂起
                     * 
                     */
                    int64_t GetAutoPause() const;

                    /**
                     * 设置自动挂起资源组。0-自动挂起，1-不自动挂起
                     * @param _autoPause 自动挂起资源组。0-自动挂起，1-不自动挂起
                     * 
                     */
                    void SetAutoPause(const int64_t& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取driver的cu规格：
当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu），内存型cu为cpu：men=1:8，m.small（1cu内存型）、m.medium（2cu内存型）、m.large（4cu内存型）、m.xlarge（8cu内存型）
                     * @return DriverCuSpec driver的cu规格：
当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu），内存型cu为cpu：men=1:8，m.small（1cu内存型）、m.medium（2cu内存型）、m.large（4cu内存型）、m.xlarge（8cu内存型）
                     * 
                     */
                    std::string GetDriverCuSpec() const;

                    /**
                     * 设置driver的cu规格：
当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu），内存型cu为cpu：men=1:8，m.small（1cu内存型）、m.medium（2cu内存型）、m.large（4cu内存型）、m.xlarge（8cu内存型）
                     * @param _driverCuSpec driver的cu规格：
当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu），内存型cu为cpu：men=1:8，m.small（1cu内存型）、m.medium（2cu内存型）、m.large（4cu内存型）、m.xlarge（8cu内存型）
                     * 
                     */
                    void SetDriverCuSpec(const std::string& _driverCuSpec);

                    /**
                     * 判断参数 DriverCuSpec 是否已赋值
                     * @return DriverCuSpec 是否已赋值
                     * 
                     */
                    bool DriverCuSpecHasBeenSet() const;

                    /**
                     * 获取executor的cu规格：
当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu），内存型cu为cpu：men=1:8，m.small（1cu内存型）、m.medium（2cu内存型）、m.large（4cu内存型）、m.xlarge（8cu内存型）
                     * @return ExecutorCuSpec executor的cu规格：
当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu），内存型cu为cpu：men=1:8，m.small（1cu内存型）、m.medium（2cu内存型）、m.large（4cu内存型）、m.xlarge（8cu内存型）
                     * 
                     */
                    std::string GetExecutorCuSpec() const;

                    /**
                     * 设置executor的cu规格：
当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu），内存型cu为cpu：men=1:8，m.small（1cu内存型）、m.medium（2cu内存型）、m.large（4cu内存型）、m.xlarge（8cu内存型）
                     * @param _executorCuSpec executor的cu规格：
当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu），内存型cu为cpu：men=1:8，m.small（1cu内存型）、m.medium（2cu内存型）、m.large（4cu内存型）、m.xlarge（8cu内存型）
                     * 
                     */
                    void SetExecutorCuSpec(const std::string& _executorCuSpec);

                    /**
                     * 判断参数 ExecutorCuSpec 是否已赋值
                     * @return ExecutorCuSpec 是否已赋值
                     * 
                     */
                    bool ExecutorCuSpecHasBeenSet() const;

                    /**
                     * 获取executor最小数量，
                     * @return MinExecutorNums executor最小数量，
                     * 
                     */
                    int64_t GetMinExecutorNums() const;

                    /**
                     * 设置executor最小数量，
                     * @param _minExecutorNums executor最小数量，
                     * 
                     */
                    void SetMinExecutorNums(const int64_t& _minExecutorNums);

                    /**
                     * 判断参数 MinExecutorNums 是否已赋值
                     * @return MinExecutorNums 是否已赋值
                     * 
                     */
                    bool MinExecutorNumsHasBeenSet() const;

                    /**
                     * 获取executor最大数量
                     * @return MaxExecutorNums executor最大数量
                     * 
                     */
                    int64_t GetMaxExecutorNums() const;

                    /**
                     * 设置executor最大数量
                     * @param _maxExecutorNums executor最大数量
                     * 
                     */
                    void SetMaxExecutorNums(const int64_t& _maxExecutorNums);

                    /**
                     * 判断参数 MaxExecutorNums 是否已赋值
                     * @return MaxExecutorNums 是否已赋值
                     * 
                     */
                    bool MaxExecutorNumsHasBeenSet() const;

                    /**
                     * 获取创建资源组后是否直接拉起，0-拉起，1-不拉起
                     * @return IsLaunchNow 创建资源组后是否直接拉起，0-拉起，1-不拉起
                     * 
                     */
                    int64_t GetIsLaunchNow() const;

                    /**
                     * 设置创建资源组后是否直接拉起，0-拉起，1-不拉起
                     * @param _isLaunchNow 创建资源组后是否直接拉起，0-拉起，1-不拉起
                     * 
                     */
                    void SetIsLaunchNow(const int64_t& _isLaunchNow);

                    /**
                     * 判断参数 IsLaunchNow 是否已赋值
                     * @return IsLaunchNow 是否已赋值
                     * 
                     */
                    bool IsLaunchNowHasBeenSet() const;

                    /**
                     * 获取自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     * @return AutoPauseTime 自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     * 
                     */
                    int64_t GetAutoPauseTime() const;

                    /**
                     * 设置自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     * @param _autoPauseTime 自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     * 
                     */
                    void SetAutoPauseTime(const int64_t& _autoPauseTime);

                    /**
                     * 判断参数 AutoPauseTime 是否已赋值
                     * @return AutoPauseTime 是否已赋值
                     * 
                     */
                    bool AutoPauseTimeHasBeenSet() const;

                    /**
                     * 获取资源组静态参数，需要重启资源组生效
                     * @return StaticConfigPairs 资源组静态参数，需要重启资源组生效
                     * 
                     */
                    std::vector<EngineResourceGroupConfigPair> GetStaticConfigPairs() const;

                    /**
                     * 设置资源组静态参数，需要重启资源组生效
                     * @param _staticConfigPairs 资源组静态参数，需要重启资源组生效
                     * 
                     */
                    void SetStaticConfigPairs(const std::vector<EngineResourceGroupConfigPair>& _staticConfigPairs);

                    /**
                     * 判断参数 StaticConfigPairs 是否已赋值
                     * @return StaticConfigPairs 是否已赋值
                     * 
                     */
                    bool StaticConfigPairsHasBeenSet() const;

                    /**
                     * 获取资源组动态参数，下一个任务生效。
                     * @return DynamicConfigPairs 资源组动态参数，下一个任务生效。
                     * 
                     */
                    std::vector<EngineResourceGroupConfigPair> GetDynamicConfigPairs() const;

                    /**
                     * 设置资源组动态参数，下一个任务生效。
                     * @param _dynamicConfigPairs 资源组动态参数，下一个任务生效。
                     * 
                     */
                    void SetDynamicConfigPairs(const std::vector<EngineResourceGroupConfigPair>& _dynamicConfigPairs);

                    /**
                     * 判断参数 DynamicConfigPairs 是否已赋值
                     * @return DynamicConfigPairs 是否已赋值
                     * 
                     */
                    bool DynamicConfigPairsHasBeenSet() const;

                    /**
                     * 获取任务并发数，默人是5个
                     * @return MaxConcurrency 任务并发数，默人是5个
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置任务并发数，默人是5个
                     * @param _maxConcurrency 任务并发数，默人是5个
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取网络配置名称
                     * @return NetworkConfigNames 网络配置名称
                     * 
                     */
                    std::vector<std::string> GetNetworkConfigNames() const;

                    /**
                     * 设置网络配置名称
                     * @param _networkConfigNames 网络配置名称
                     * 
                     */
                    void SetNetworkConfigNames(const std::vector<std::string>& _networkConfigNames);

                    /**
                     * 判断参数 NetworkConfigNames 是否已赋值
                     * @return NetworkConfigNames 是否已赋值
                     * 
                     */
                    bool NetworkConfigNamesHasBeenSet() const;

                    /**
                     * 获取自定义镜像域名
                     * @return PublicDomain 自定义镜像域名
                     * 
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 设置自定义镜像域名
                     * @param _publicDomain 自定义镜像域名
                     * 
                     */
                    void SetPublicDomain(const std::string& _publicDomain);

                    /**
                     * 判断参数 PublicDomain 是否已赋值
                     * @return PublicDomain 是否已赋值
                     * 
                     */
                    bool PublicDomainHasBeenSet() const;

                    /**
                     * 获取自定义镜像实例id
                     * @return RegistryId 自定义镜像实例id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置自定义镜像实例id
                     * @param _registryId 自定义镜像实例id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取AI类型资源组的框架类型，machine-learning，python，spark-ml，不填默认为machine-learning
                     * @return FrameType AI类型资源组的框架类型，machine-learning，python，spark-ml，不填默认为machine-learning
                     * 
                     */
                    std::string GetFrameType() const;

                    /**
                     * 设置AI类型资源组的框架类型，machine-learning，python，spark-ml，不填默认为machine-learning
                     * @param _frameType AI类型资源组的框架类型，machine-learning，python，spark-ml，不填默认为machine-learning
                     * 
                     */
                    void SetFrameType(const std::string& _frameType);

                    /**
                     * 判断参数 FrameType 是否已赋值
                     * @return FrameType 是否已赋值
                     * 
                     */
                    bool FrameTypeHasBeenSet() const;

                    /**
                     * 获取镜像类型，bulit-in：内置，custom：自定义，不填默认为bulit-in
                     * @return ImageType 镜像类型，bulit-in：内置，custom：自定义，不填默认为bulit-in
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像类型，bulit-in：内置，custom：自定义，不填默认为bulit-in
                     * @param _imageType 镜像类型，bulit-in：内置，custom：自定义，不填默认为bulit-in
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param _imageName 镜像名称
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取镜像id
                     * @return ImageVersion 镜像id
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置镜像id
                     * @param _imageVersion 镜像id
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取AI资源组有效，资源组可用资源上限，该值需要小于引擎资源上限
                     * @return Size AI资源组有效，资源组可用资源上限，该值需要小于引擎资源上限
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置AI资源组有效，资源组可用资源上限，该值需要小于引擎资源上限
                     * @param _size AI资源组有效，资源组可用资源上限，该值需要小于引擎资源上限
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取资源组场景
                     * @return ResourceGroupScene 资源组场景
                     * 
                     */
                    std::string GetResourceGroupScene() const;

                    /**
                     * 设置资源组场景
                     * @param _resourceGroupScene 资源组场景
                     * 
                     */
                    void SetResourceGroupScene(const std::string& _resourceGroupScene);

                    /**
                     * 判断参数 ResourceGroupScene 是否已赋值
                     * @return ResourceGroupScene 是否已赋值
                     * 
                     */
                    bool ResourceGroupSceneHasBeenSet() const;

                    /**
                     * 获取自定义镜像所在地域
                     * @return RegionName 自定义镜像所在地域
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置自定义镜像所在地域
                     * @param _regionName 自定义镜像所在地域
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取python类型资源组python单机节点资源上限，该值要小于资源组的资源上限.small:1cu medium:2cu large:4cu xlarge:8cu 4xlarge:16cu 8xlarge:32cu 16xlarge:64cu，如果是高内存型资源，在类型前面加上m.
                     * @return PythonCuSpec python类型资源组python单机节点资源上限，该值要小于资源组的资源上限.small:1cu medium:2cu large:4cu xlarge:8cu 4xlarge:16cu 8xlarge:32cu 16xlarge:64cu，如果是高内存型资源，在类型前面加上m.
                     * 
                     */
                    std::string GetPythonCuSpec() const;

                    /**
                     * 设置python类型资源组python单机节点资源上限，该值要小于资源组的资源上限.small:1cu medium:2cu large:4cu xlarge:8cu 4xlarge:16cu 8xlarge:32cu 16xlarge:64cu，如果是高内存型资源，在类型前面加上m.
                     * @param _pythonCuSpec python类型资源组python单机节点资源上限，该值要小于资源组的资源上限.small:1cu medium:2cu large:4cu xlarge:8cu 4xlarge:16cu 8xlarge:32cu 16xlarge:64cu，如果是高内存型资源，在类型前面加上m.
                     * 
                     */
                    void SetPythonCuSpec(const std::string& _pythonCuSpec);

                    /**
                     * 判断参数 PythonCuSpec 是否已赋值
                     * @return PythonCuSpec 是否已赋值
                     * 
                     */
                    bool PythonCuSpecHasBeenSet() const;

                    /**
                     * 获取仅SQL资源组资源配置模式，fast：快速模式，custom：自定义模式
                     * @return SparkSpecMode 仅SQL资源组资源配置模式，fast：快速模式，custom：自定义模式
                     * 
                     */
                    std::string GetSparkSpecMode() const;

                    /**
                     * 设置仅SQL资源组资源配置模式，fast：快速模式，custom：自定义模式
                     * @param _sparkSpecMode 仅SQL资源组资源配置模式，fast：快速模式，custom：自定义模式
                     * 
                     */
                    void SetSparkSpecMode(const std::string& _sparkSpecMode);

                    /**
                     * 判断参数 SparkSpecMode 是否已赋值
                     * @return SparkSpecMode 是否已赋值
                     * 
                     */
                    bool SparkSpecModeHasBeenSet() const;

                    /**
                     * 获取仅SQL资源组资源上限，仅用于快速模块
                     * @return SparkSize 仅SQL资源组资源上限，仅用于快速模块
                     * 
                     */
                    int64_t GetSparkSize() const;

                    /**
                     * 设置仅SQL资源组资源上限，仅用于快速模块
                     * @param _sparkSize 仅SQL资源组资源上限，仅用于快速模块
                     * 
                     */
                    void SetSparkSize(const int64_t& _sparkSize);

                    /**
                     * 判断参数 SparkSize 是否已赋值
                     * @return SparkSize 是否已赋值
                     * 
                     */
                    bool SparkSizeHasBeenSet() const;

                    /**
                     * 获取GPUDriver规格
                     * @return DriverGPUSpec GPUDriver规格
                     * 
                     */
                    int64_t GetDriverGPUSpec() const;

                    /**
                     * 设置GPUDriver规格
                     * @param _driverGPUSpec GPUDriver规格
                     * 
                     */
                    void SetDriverGPUSpec(const int64_t& _driverGPUSpec);

                    /**
                     * 判断参数 DriverGPUSpec 是否已赋值
                     * @return DriverGPUSpec 是否已赋值
                     * 
                     */
                    bool DriverGPUSpecHasBeenSet() const;

                    /**
                     * 获取GPUExecutor规格
                     * @return ExecutorGPUSpec GPUExecutor规格
                     * 
                     */
                    int64_t GetExecutorGPUSpec() const;

                    /**
                     * 设置GPUExecutor规格
                     * @param _executorGPUSpec GPUExecutor规格
                     * 
                     */
                    void SetExecutorGPUSpec(const int64_t& _executorGPUSpec);

                    /**
                     * 判断参数 ExecutorGPUSpec 是否已赋值
                     * @return ExecutorGPUSpec 是否已赋值
                     * 
                     */
                    bool ExecutorGPUSpecHasBeenSet() const;

                    /**
                     * 获取GPU上限
                     * @return GPULimitSize GPU上限
                     * 
                     */
                    int64_t GetGPULimitSize() const;

                    /**
                     * 设置GPU上限
                     * @param _gPULimitSize GPU上限
                     * 
                     */
                    void SetGPULimitSize(const int64_t& _gPULimitSize);

                    /**
                     * 判断参数 GPULimitSize 是否已赋值
                     * @return GPULimitSize 是否已赋值
                     * 
                     */
                    bool GPULimitSizeHasBeenSet() const;

                    /**
                     * 获取GPU规格
                     * @return GPUSize GPU规格
                     * 
                     */
                    int64_t GetGPUSize() const;

                    /**
                     * 设置GPU规格
                     * @param _gPUSize GPU规格
                     * 
                     */
                    void SetGPUSize(const int64_t& _gPUSize);

                    /**
                     * 判断参数 GPUSize 是否已赋值
                     * @return GPUSize 是否已赋值
                     * 
                     */
                    bool GPUSizeHasBeenSet() const;

                    /**
                     * 获取Pod GPU规格上限
                     * @return PythonGPUSpec Pod GPU规格上限
                     * 
                     */
                    int64_t GetPythonGPUSpec() const;

                    /**
                     * 设置Pod GPU规格上限
                     * @param _pythonGPUSpec Pod GPU规格上限
                     * 
                     */
                    void SetPythonGPUSpec(const int64_t& _pythonGPUSpec);

                    /**
                     * 判断参数 PythonGPUSpec 是否已赋值
                     * @return PythonGPUSpec 是否已赋值
                     * 
                     */
                    bool PythonGPUSpecHasBeenSet() const;

                private:

                    /**
                     * 标准引擎资源组名称
                     */
                    std::string m_engineResourceGroupName;
                    bool m_engineResourceGroupNameHasBeenSet;

                    /**
                     * 标准引擎名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 自动启动，（任务提交自动拉起资源组）0-自动启动，1-不自动启动
                     */
                    int64_t m_autoLaunch;
                    bool m_autoLaunchHasBeenSet;

                    /**
                     * 自动挂起资源组。0-自动挂起，1-不自动挂起
                     */
                    int64_t m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * driver的cu规格：
当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu），内存型cu为cpu：men=1:8，m.small（1cu内存型）、m.medium（2cu内存型）、m.large（4cu内存型）、m.xlarge（8cu内存型）
                     */
                    std::string m_driverCuSpec;
                    bool m_driverCuSpecHasBeenSet;

                    /**
                     * executor的cu规格：
当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu），内存型cu为cpu：men=1:8，m.small（1cu内存型）、m.medium（2cu内存型）、m.large（4cu内存型）、m.xlarge（8cu内存型）
                     */
                    std::string m_executorCuSpec;
                    bool m_executorCuSpecHasBeenSet;

                    /**
                     * executor最小数量，
                     */
                    int64_t m_minExecutorNums;
                    bool m_minExecutorNumsHasBeenSet;

                    /**
                     * executor最大数量
                     */
                    int64_t m_maxExecutorNums;
                    bool m_maxExecutorNumsHasBeenSet;

                    /**
                     * 创建资源组后是否直接拉起，0-拉起，1-不拉起
                     */
                    int64_t m_isLaunchNow;
                    bool m_isLaunchNowHasBeenSet;

                    /**
                     * 自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     */
                    int64_t m_autoPauseTime;
                    bool m_autoPauseTimeHasBeenSet;

                    /**
                     * 资源组静态参数，需要重启资源组生效
                     */
                    std::vector<EngineResourceGroupConfigPair> m_staticConfigPairs;
                    bool m_staticConfigPairsHasBeenSet;

                    /**
                     * 资源组动态参数，下一个任务生效。
                     */
                    std::vector<EngineResourceGroupConfigPair> m_dynamicConfigPairs;
                    bool m_dynamicConfigPairsHasBeenSet;

                    /**
                     * 任务并发数，默人是5个
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * 网络配置名称
                     */
                    std::vector<std::string> m_networkConfigNames;
                    bool m_networkConfigNamesHasBeenSet;

                    /**
                     * 自定义镜像域名
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * 自定义镜像实例id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * AI类型资源组的框架类型，machine-learning，python，spark-ml，不填默认为machine-learning
                     */
                    std::string m_frameType;
                    bool m_frameTypeHasBeenSet;

                    /**
                     * 镜像类型，bulit-in：内置，custom：自定义，不填默认为bulit-in
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像id
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * AI资源组有效，资源组可用资源上限，该值需要小于引擎资源上限
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 资源组场景
                     */
                    std::string m_resourceGroupScene;
                    bool m_resourceGroupSceneHasBeenSet;

                    /**
                     * 自定义镜像所在地域
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * python类型资源组python单机节点资源上限，该值要小于资源组的资源上限.small:1cu medium:2cu large:4cu xlarge:8cu 4xlarge:16cu 8xlarge:32cu 16xlarge:64cu，如果是高内存型资源，在类型前面加上m.
                     */
                    std::string m_pythonCuSpec;
                    bool m_pythonCuSpecHasBeenSet;

                    /**
                     * 仅SQL资源组资源配置模式，fast：快速模式，custom：自定义模式
                     */
                    std::string m_sparkSpecMode;
                    bool m_sparkSpecModeHasBeenSet;

                    /**
                     * 仅SQL资源组资源上限，仅用于快速模块
                     */
                    int64_t m_sparkSize;
                    bool m_sparkSizeHasBeenSet;

                    /**
                     * GPUDriver规格
                     */
                    int64_t m_driverGPUSpec;
                    bool m_driverGPUSpecHasBeenSet;

                    /**
                     * GPUExecutor规格
                     */
                    int64_t m_executorGPUSpec;
                    bool m_executorGPUSpecHasBeenSet;

                    /**
                     * GPU上限
                     */
                    int64_t m_gPULimitSize;
                    bool m_gPULimitSizeHasBeenSet;

                    /**
                     * GPU规格
                     */
                    int64_t m_gPUSize;
                    bool m_gPUSizeHasBeenSet;

                    /**
                     * Pod GPU规格上限
                     */
                    int64_t m_pythonGPUSpec;
                    bool m_pythonGPUSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESTANDARDENGINERESOURCEGROUPREQUEST_H_
