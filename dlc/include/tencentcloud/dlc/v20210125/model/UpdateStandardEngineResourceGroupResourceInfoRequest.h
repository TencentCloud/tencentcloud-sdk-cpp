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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATESTANDARDENGINERESOURCEGROUPRESOURCEINFOREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATESTANDARDENGINERESOURCEGROUPRESOURCEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateStandardEngineResourceGroupResourceInfo请求参数结构体
                */
                class UpdateStandardEngineResourceGroupResourceInfoRequest : public AbstractModel
                {
                public:
                    UpdateStandardEngineResourceGroupResourceInfoRequest();
                    ~UpdateStandardEngineResourceGroupResourceInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎资源组名称
                     * @return EngineResourceGroupName 引擎资源组名称
                     * 
                     */
                    std::string GetEngineResourceGroupName() const;

                    /**
                     * 设置引擎资源组名称
                     * @param _engineResourceGroupName 引擎资源组名称
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
                     * 获取是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     * @return IsEffectiveNow 是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     * 
                     */
                    int64_t GetIsEffectiveNow() const;

                    /**
                     * 设置是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     * @param _isEffectiveNow 是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     * 
                     */
                    void SetIsEffectiveNow(const int64_t& _isEffectiveNow);

                    /**
                     * 判断参数 IsEffectiveNow 是否已赋值
                     * @return IsEffectiveNow 是否已赋值
                     * 
                     */
                    bool IsEffectiveNowHasBeenSet() const;

                    /**
                     * 获取AI资源组资源上限
                     * @return Size AI资源组资源上限
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置AI资源组资源上限
                     * @param _size AI资源组资源上限
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
                     * 获取镜像类型，内置镜像：built-in，自定义镜像：custom
                     * @return ImageType 镜像类型，内置镜像：built-in，自定义镜像：custom
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像类型，内置镜像：built-in，自定义镜像：custom
                     * @param _imageType 镜像类型，内置镜像：built-in，自定义镜像：custom
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
                     * 获取镜像版本，镜像id
                     * @return ImageVersion 镜像版本，镜像id
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置镜像版本，镜像id
                     * @param _imageVersion 镜像版本，镜像id
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
                     * 获取框架类型
                     * @return FrameType 框架类型
                     * 
                     */
                    std::string GetFrameType() const;

                    /**
                     * 设置框架类型
                     * @param _frameType 框架类型
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
                     * 获取自定义镜像所属地域
                     * @return RegionName 自定义镜像所属地域
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置自定义镜像所属地域
                     * @param _regionName 自定义镜像所属地域
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
                     * 获取仅SQL资源组资源上限，仅用于快速模式
                     * @return SparkSize 仅SQL资源组资源上限，仅用于快速模式
                     * 
                     */
                    int64_t GetSparkSize() const;

                    /**
                     * 设置仅SQL资源组资源上限，仅用于快速模式
                     * @param _sparkSize 仅SQL资源组资源上限，仅用于快速模式
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
                     * 获取gpuDriver规格
                     * @return DriverGPUSpec gpuDriver规格
                     * 
                     */
                    int64_t GetDriverGPUSpec() const;

                    /**
                     * 设置gpuDriver规格
                     * @param _driverGPUSpec gpuDriver规格
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
                     * 获取gpuExcutor 规格
                     * @return ExecutorGPUSpec gpuExcutor 规格
                     * 
                     */
                    int64_t GetExecutorGPUSpec() const;

                    /**
                     * 设置gpuExcutor 规格
                     * @param _executorGPUSpec gpuExcutor 规格
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
                     * 获取gpu 上限
                     * @return GPULimitSize gpu 上限
                     * 
                     */
                    int64_t GetGPULimitSize() const;

                    /**
                     * 设置gpu 上限
                     * @param _gPULimitSize gpu 上限
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
                     * 获取gpu 规格
                     * @return GPUSize gpu 规格
                     * 
                     */
                    int64_t GetGPUSize() const;

                    /**
                     * 设置gpu 规格
                     * @param _gPUSize gpu 规格
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
                     * 获取gpupod 规格
                     * @return PythonGPUSpec gpupod 规格
                     * 
                     */
                    int64_t GetPythonGPUSpec() const;

                    /**
                     * 设置gpupod 规格
                     * @param _pythonGPUSpec gpupod 规格
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
                     * 引擎资源组名称
                     */
                    std::string m_engineResourceGroupName;
                    bool m_engineResourceGroupNameHasBeenSet;

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
                     * 是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     */
                    int64_t m_isEffectiveNow;
                    bool m_isEffectiveNowHasBeenSet;

                    /**
                     * AI资源组资源上限
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 镜像类型，内置镜像：built-in，自定义镜像：custom
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像版本，镜像id
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * 框架类型
                     */
                    std::string m_frameType;
                    bool m_frameTypeHasBeenSet;

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
                     * 自定义镜像所属地域
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
                     * 仅SQL资源组资源上限，仅用于快速模式
                     */
                    int64_t m_sparkSize;
                    bool m_sparkSizeHasBeenSet;

                    /**
                     * gpuDriver规格
                     */
                    int64_t m_driverGPUSpec;
                    bool m_driverGPUSpecHasBeenSet;

                    /**
                     * gpuExcutor 规格
                     */
                    int64_t m_executorGPUSpec;
                    bool m_executorGPUSpecHasBeenSet;

                    /**
                     * gpu 上限
                     */
                    int64_t m_gPULimitSize;
                    bool m_gPULimitSizeHasBeenSet;

                    /**
                     * gpu 规格
                     */
                    int64_t m_gPUSize;
                    bool m_gPUSizeHasBeenSet;

                    /**
                     * gpupod 规格
                     */
                    int64_t m_pythonGPUSpec;
                    bool m_pythonGPUSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATESTANDARDENGINERESOURCEGROUPRESOURCEINFOREQUEST_H_
