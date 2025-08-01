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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_STANDARDENGINERESOURCEGROUPINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_STANDARDENGINERESOURCEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 用户标准引擎资源组信息
                */
                class StandardEngineResourceGroupInfo : public AbstractModel
                {
                public:
                    StandardEngineResourceGroupInfo();
                    ~StandardEngineResourceGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标准引擎资源组ID
                     * @return EngineResourceGroupId 标准引擎资源组ID
                     * 
                     */
                    std::string GetEngineResourceGroupId() const;

                    /**
                     * 设置标准引擎资源组ID
                     * @param _engineResourceGroupId 标准引擎资源组ID
                     * 
                     */
                    void SetEngineResourceGroupId(const std::string& _engineResourceGroupId);

                    /**
                     * 判断参数 EngineResourceGroupId 是否已赋值
                     * @return EngineResourceGroupId 是否已赋值
                     * 
                     */
                    bool EngineResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取标准引擎资源组名称，支持1-50个英文、汉字、数字、连接线-或下划线_
                     * @return EngineResourceGroupName 标准引擎资源组名称，支持1-50个英文、汉字、数字、连接线-或下划线_
                     * 
                     */
                    std::string GetEngineResourceGroupName() const;

                    /**
                     * 设置标准引擎资源组名称，支持1-50个英文、汉字、数字、连接线-或下划线_
                     * @param _engineResourceGroupName 标准引擎资源组名称，支持1-50个英文、汉字、数字、连接线-或下划线_
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
                     * 获取创建者
                     * @return Creator 创建者
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者
                     * @param _creator 创建者
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取资源组 状态，-1--删除、0--启动中、2--运行、3--暂停、4--暂停中、7--切换引擎中、8--配置修改中。9--资源组重启中，10--因为变配导致资源组启动、11--因为隔离导致资源组挂起、12- 资源配置下发中、 13-接入点隔离导致资源组挂起中
                     * @return ResourceGroupState 资源组 状态，-1--删除、0--启动中、2--运行、3--暂停、4--暂停中、7--切换引擎中、8--配置修改中。9--资源组重启中，10--因为变配导致资源组启动、11--因为隔离导致资源组挂起、12- 资源配置下发中、 13-接入点隔离导致资源组挂起中
                     * 
                     */
                    int64_t GetResourceGroupState() const;

                    /**
                     * 设置资源组 状态，-1--删除、0--启动中、2--运行、3--暂停、4--暂停中、7--切换引擎中、8--配置修改中。9--资源组重启中，10--因为变配导致资源组启动、11--因为隔离导致资源组挂起、12- 资源配置下发中、 13-接入点隔离导致资源组挂起中
                     * @param _resourceGroupState 资源组 状态，-1--删除、0--启动中、2--运行、3--暂停、4--暂停中、7--切换引擎中、8--配置修改中。9--资源组重启中，10--因为变配导致资源组启动、11--因为隔离导致资源组挂起、12- 资源配置下发中、 13-接入点隔离导致资源组挂起中
                     * 
                     */
                    void SetResourceGroupState(const int64_t& _resourceGroupState);

                    /**
                     * 判断参数 ResourceGroupState 是否已赋值
                     * @return ResourceGroupState 是否已赋值
                     * 
                     */
                    bool ResourceGroupStateHasBeenSet() const;

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
                     * 获取任务并发数
                     * @return MaxConcurrency 任务并发数
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置任务并发数
                     * @param _maxConcurrency 任务并发数
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
                     * 获取executor最大数量，
                     * @return MaxExecutorNums executor最大数量，
                     * 
                     */
                    int64_t GetMaxExecutorNums() const;

                    /**
                     * 设置executor最大数量，
                     * @param _maxExecutorNums executor最大数量，
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
                     * 获取创建时间戳
                     * @return CreateTime 创建时间戳
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间戳
                     * @param _createTime 创建时间戳
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间戳
                     * @return UpdateTime 更新时间戳
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间戳
                     * @param _updateTime 更新时间戳
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否待重启，作为有资源参数，静态参数修改未重启生效的标识；0-- 不需要重启、1--因为资源参数待重启、2--因静态参数重启、3--因资源和静态参数而待重启、4--因网络配置而待重启、5--因网络配置和资源配置而待重启、6--因网络配置和静态参数而待重启、7--因网络配置，资源参数和静态参数而待重启、
                     * @return NeedRestart 是否待重启，作为有资源参数，静态参数修改未重启生效的标识；0-- 不需要重启、1--因为资源参数待重启、2--因静态参数重启、3--因资源和静态参数而待重启、4--因网络配置而待重启、5--因网络配置和资源配置而待重启、6--因网络配置和静态参数而待重启、7--因网络配置，资源参数和静态参数而待重启、
                     * 
                     */
                    int64_t GetNeedRestart() const;

                    /**
                     * 设置是否待重启，作为有资源参数，静态参数修改未重启生效的标识；0-- 不需要重启、1--因为资源参数待重启、2--因静态参数重启、3--因资源和静态参数而待重启、4--因网络配置而待重启、5--因网络配置和资源配置而待重启、6--因网络配置和静态参数而待重启、7--因网络配置，资源参数和静态参数而待重启、
                     * @param _needRestart 是否待重启，作为有资源参数，静态参数修改未重启生效的标识；0-- 不需要重启、1--因为资源参数待重启、2--因静态参数重启、3--因资源和静态参数而待重启、4--因网络配置而待重启、5--因网络配置和资源配置而待重启、6--因网络配置和静态参数而待重启、7--因网络配置，资源参数和静态参数而待重启、
                     * 
                     */
                    void SetNeedRestart(const int64_t& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取绑定的引擎名称
                     * @return DataEngineName 绑定的引擎名称
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置绑定的引擎名称
                     * @param _dataEngineName 绑定的引擎名称
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
                     * 获取绑定的引擎ID
                     * @return DataEngineId 绑定的引擎ID
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置绑定的引擎ID
                     * @param _dataEngineId 绑定的引擎ID
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取绑定的引擎状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngineState 绑定的引擎状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataEngineState() const;

                    /**
                     * 设置绑定的引擎状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngineState 绑定的引擎状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataEngineState(const int64_t& _dataEngineState);

                    /**
                     * 判断参数 DataEngineState 是否已赋值
                     * @return DataEngineState 是否已赋值
                     * 
                     */
                    bool DataEngineStateHasBeenSet() const;

                    /**
                     * 获取接入点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessPointId 接入点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessPointId() const;

                    /**
                     * 设置接入点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessPointId 接入点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessPointId(const std::string& _accessPointId);

                    /**
                     * 判断参数 AccessPointId 是否已赋值
                     * @return AccessPointId 是否已赋值
                     * 
                     */
                    bool AccessPointIdHasBeenSet() const;

                    /**
                     * 获取接入点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessPointName 接入点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessPointName() const;

                    /**
                     * 设置接入点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessPointName 接入点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessPointName(const std::string& _accessPointName);

                    /**
                     * 判断参数 AccessPointName 是否已赋值
                     * @return AccessPointName 是否已赋值
                     * 
                     */
                    bool AccessPointNameHasBeenSet() const;

                    /**
                     * 获取接入点状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessPointState 接入点状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccessPointState() const;

                    /**
                     * 设置接入点状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessPointState 接入点状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessPointState(const int64_t& _accessPointState);

                    /**
                     * 判断参数 AccessPointState 是否已赋值
                     * @return AccessPointState 是否已赋值
                     * 
                     */
                    bool AccessPointStateHasBeenSet() const;

                    /**
                     * 获取资源组类型，console/ default
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupType 资源组类型，console/ default
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupType() const;

                    /**
                     * 设置资源组类型，console/ default
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupType 资源组类型，console/ default
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupType(const std::string& _resourceGroupType);

                    /**
                     * 判断参数 ResourceGroupType 是否已赋值
                     * @return ResourceGroupType 是否已赋值
                     * 
                     */
                    bool ResourceGroupTypeHasBeenSet() const;

                    /**
                     * 获取引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineNetworkId 引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineNetworkId() const;

                    /**
                     * 设置引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineNetworkId 引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineNetworkId(const std::string& _engineNetworkId);

                    /**
                     * 判断参数 EngineNetworkId 是否已赋值
                     * @return EngineNetworkId 是否已赋值
                     * 
                     */
                    bool EngineNetworkIdHasBeenSet() const;

                    /**
                     * 获取网络配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkConfigNames 网络配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNetworkConfigNames() const;

                    /**
                     * 设置网络配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkConfigNames 网络配置名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取AI类型资源组的框架类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameType AI类型资源组的框架类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrameType() const;

                    /**
                     * 设置AI类型资源组的框架类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameType AI类型资源组的框架类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取AI类型资源组的镜像类型，内置：bulit-in，自定义：custom
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageType AI类型资源组的镜像类型，内置：bulit-in，自定义：custom
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置AI类型资源组的镜像类型，内置：bulit-in，自定义：custom
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageType AI类型资源组的镜像类型，内置：bulit-in，自定义：custom
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageName 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageName 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageVersion 镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageVersion 镜像id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取AI资源组的可用资源上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size AI资源组的可用资源上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置AI资源组的可用资源上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size AI资源组的可用资源上限
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否是默认资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefault 是否是默认资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否是默认资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDefault 是否是默认资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取资源组场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupScene 资源组场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupScene() const;

                    /**
                     * 设置资源组场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupScene 资源组场景
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取python类型资源组python单机节点资源上限，该值要小于资源组的资源上限.small:1cu medium:2cu large:4cu xlarge:8cu 4xlarge:16cu 8xlarge:32cu 16xlarge:64cu，如果是高内存型资源，在类型前面加上m.
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PythonCuSpec python类型资源组python单机节点资源上限，该值要小于资源组的资源上限.small:1cu medium:2cu large:4cu xlarge:8cu 4xlarge:16cu 8xlarge:32cu 16xlarge:64cu，如果是高内存型资源，在类型前面加上m.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPythonCuSpec() const;

                    /**
                     * 设置python类型资源组python单机节点资源上限，该值要小于资源组的资源上限.small:1cu medium:2cu large:4cu xlarge:8cu 4xlarge:16cu 8xlarge:32cu 16xlarge:64cu，如果是高内存型资源，在类型前面加上m.
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pythonCuSpec python类型资源组python单机节点资源上限，该值要小于资源组的资源上限.small:1cu medium:2cu large:4cu xlarge:8cu 4xlarge:16cu 8xlarge:32cu 16xlarge:64cu，如果是高内存型资源，在类型前面加上m.
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Spark类型资源组资源配置模式，fast：快速模式，custom：自定义模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkSpecMode Spark类型资源组资源配置模式，fast：快速模式，custom：自定义模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkSpecMode() const;

                    /**
                     * 设置Spark类型资源组资源配置模式，fast：快速模式，custom：自定义模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkSpecMode Spark类型资源组资源配置模式，fast：快速模式，custom：自定义模式
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Spark类型资源组资源上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkSize Spark类型资源组资源上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSparkSize() const;

                    /**
                     * 设置Spark类型资源组资源上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkSize Spark类型资源组资源上限
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Spark类型资源组资源最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkMinSize Spark类型资源组资源最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSparkMinSize() const;

                    /**
                     * 设置Spark类型资源组资源最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkMinSize Spark类型资源组资源最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkMinSize(const int64_t& _sparkMinSize);

                    /**
                     * 判断参数 SparkMinSize 是否已赋值
                     * @return SparkMinSize 是否已赋值
                     * 
                     */
                    bool SparkMinSizeHasBeenSet() const;

                private:

                    /**
                     * 标准引擎资源组ID
                     */
                    std::string m_engineResourceGroupId;
                    bool m_engineResourceGroupIdHasBeenSet;

                    /**
                     * 标准引擎资源组名称，支持1-50个英文、汉字、数字、连接线-或下划线_
                     */
                    std::string m_engineResourceGroupName;
                    bool m_engineResourceGroupNameHasBeenSet;

                    /**
                     * 创建者
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 资源组 状态，-1--删除、0--启动中、2--运行、3--暂停、4--暂停中、7--切换引擎中、8--配置修改中。9--资源组重启中，10--因为变配导致资源组启动、11--因为隔离导致资源组挂起、12- 资源配置下发中、 13-接入点隔离导致资源组挂起中
                     */
                    int64_t m_resourceGroupState;
                    bool m_resourceGroupStateHasBeenSet;

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
                     * 自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     */
                    int64_t m_autoPauseTime;
                    bool m_autoPauseTimeHasBeenSet;

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
                     * 任务并发数
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * executor最小数量，
                     */
                    int64_t m_minExecutorNums;
                    bool m_minExecutorNumsHasBeenSet;

                    /**
                     * executor最大数量，
                     */
                    int64_t m_maxExecutorNums;
                    bool m_maxExecutorNumsHasBeenSet;

                    /**
                     * 创建时间戳
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间戳
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否待重启，作为有资源参数，静态参数修改未重启生效的标识；0-- 不需要重启、1--因为资源参数待重启、2--因静态参数重启、3--因资源和静态参数而待重启、4--因网络配置而待重启、5--因网络配置和资源配置而待重启、6--因网络配置和静态参数而待重启、7--因网络配置，资源参数和静态参数而待重启、
                     */
                    int64_t m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * 绑定的引擎名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 绑定的引擎ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 绑定的引擎状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataEngineState;
                    bool m_dataEngineStateHasBeenSet;

                    /**
                     * 接入点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessPointId;
                    bool m_accessPointIdHasBeenSet;

                    /**
                     * 接入点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessPointName;
                    bool m_accessPointNameHasBeenSet;

                    /**
                     * 接入点状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accessPointState;
                    bool m_accessPointStateHasBeenSet;

                    /**
                     * 资源组类型，console/ default
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupType;
                    bool m_resourceGroupTypeHasBeenSet;

                    /**
                     * 引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineNetworkId;
                    bool m_engineNetworkIdHasBeenSet;

                    /**
                     * 网络配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_networkConfigNames;
                    bool m_networkConfigNamesHasBeenSet;

                    /**
                     * AI类型资源组的框架类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameType;
                    bool m_frameTypeHasBeenSet;

                    /**
                     * AI类型资源组的镜像类型，内置：bulit-in，自定义：custom
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * AI资源组的可用资源上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 是否是默认资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 资源组场景
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupScene;
                    bool m_resourceGroupSceneHasBeenSet;

                    /**
                     * python类型资源组python单机节点资源上限，该值要小于资源组的资源上限.small:1cu medium:2cu large:4cu xlarge:8cu 4xlarge:16cu 8xlarge:32cu 16xlarge:64cu，如果是高内存型资源，在类型前面加上m.
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pythonCuSpec;
                    bool m_pythonCuSpecHasBeenSet;

                    /**
                     * Spark类型资源组资源配置模式，fast：快速模式，custom：自定义模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkSpecMode;
                    bool m_sparkSpecModeHasBeenSet;

                    /**
                     * Spark类型资源组资源上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sparkSize;
                    bool m_sparkSizeHasBeenSet;

                    /**
                     * Spark类型资源组资源最小值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sparkMinSize;
                    bool m_sparkMinSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_STANDARDENGINERESOURCEGROUPINFO_H_
