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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/HealthCheckSettings.h>
#include <tencentcloud/tsf/v20180326/model/AgentProfile.h>
#include <tencentcloud/tsf/v20180326/model/WarmupSetting.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeployGroup请求参数结构体
                */
                class DeployGroupRequest : public AbstractModel
                {
                public:
                    DeployGroupRequest();
                    ~DeployGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署组ID
                     * @return GroupId 部署组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param _groupId 部署组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取程序包ID
                     * @return PkgId 程序包ID
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置程序包ID
                     * @param _pkgId 程序包ID
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取部署组启动参数
                     * @return StartupParameters 部署组启动参数
                     * 
                     */
                    std::string GetStartupParameters() const;

                    /**
                     * 设置部署组启动参数
                     * @param _startupParameters 部署组启动参数
                     * 
                     */
                    void SetStartupParameters(const std::string& _startupParameters);

                    /**
                     * 判断参数 StartupParameters 是否已赋值
                     * @return StartupParameters 是否已赋值
                     * 
                     */
                    bool StartupParametersHasBeenSet() const;

                    /**
                     * 获取部署应用描述信息
                     * @return DeployDesc 部署应用描述信息
                     * 
                     */
                    std::string GetDeployDesc() const;

                    /**
                     * 设置部署应用描述信息
                     * @param _deployDesc 部署应用描述信息
                     * 
                     */
                    void SetDeployDesc(const std::string& _deployDesc);

                    /**
                     * 判断参数 DeployDesc 是否已赋值
                     * @return DeployDesc 是否已赋值
                     * 
                     */
                    bool DeployDescHasBeenSet() const;

                    /**
                     * 获取是否允许强制启动
                     * @return ForceStart 是否允许强制启动
                     * 
                     */
                    bool GetForceStart() const;

                    /**
                     * 设置是否允许强制启动
                     * @param _forceStart 是否允许强制启动
                     * 
                     */
                    void SetForceStart(const bool& _forceStart);

                    /**
                     * 判断参数 ForceStart 是否已赋值
                     * @return ForceStart 是否已赋值
                     * 
                     */
                    bool ForceStartHasBeenSet() const;

                    /**
                     * 获取是否开启健康检查
                     * @return EnableHealthCheck 是否开启健康检查
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置是否开启健康检查
                     * @param _enableHealthCheck 是否开启健康检查
                     * 
                     */
                    void SetEnableHealthCheck(const bool& _enableHealthCheck);

                    /**
                     * 判断参数 EnableHealthCheck 是否已赋值
                     * @return EnableHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableHealthCheckHasBeenSet() const;

                    /**
                     * 获取开启健康检查时，配置健康检查
                     * @return HealthCheckSettings 开启健康检查时，配置健康检查
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置开启健康检查时，配置健康检查
                     * @param _healthCheckSettings 开启健康检查时，配置健康检查
                     * 
                     */
                    void SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings);

                    /**
                     * 判断参数 HealthCheckSettings 是否已赋值
                     * @return HealthCheckSettings 是否已赋值
                     * 
                     */
                    bool HealthCheckSettingsHasBeenSet() const;

                    /**
                     * 获取部署方式，0表示快速更新，1表示滚动更新
                     * @return UpdateType 部署方式，0表示快速更新，1表示滚动更新
                     * 
                     */
                    uint64_t GetUpdateType() const;

                    /**
                     * 设置部署方式，0表示快速更新，1表示滚动更新
                     * @param _updateType 部署方式，0表示快速更新，1表示滚动更新
                     * 
                     */
                    void SetUpdateType(const uint64_t& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     * 
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取是否启用beta批次
                     * @return DeployBetaEnable 是否启用beta批次
                     * 
                     */
                    bool GetDeployBetaEnable() const;

                    /**
                     * 设置是否启用beta批次
                     * @param _deployBetaEnable 是否启用beta批次
                     * 
                     */
                    void SetDeployBetaEnable(const bool& _deployBetaEnable);

                    /**
                     * 判断参数 DeployBetaEnable 是否已赋值
                     * @return DeployBetaEnable 是否已赋值
                     * 
                     */
                    bool DeployBetaEnableHasBeenSet() const;

                    /**
                     * 获取滚动发布每个批次参与的实例比率
                     * @return DeployBatch 滚动发布每个批次参与的实例比率
                     * 
                     */
                    std::vector<double> GetDeployBatch() const;

                    /**
                     * 设置滚动发布每个批次参与的实例比率
                     * @param _deployBatch 滚动发布每个批次参与的实例比率
                     * 
                     */
                    void SetDeployBatch(const std::vector<double>& _deployBatch);

                    /**
                     * 判断参数 DeployBatch 是否已赋值
                     * @return DeployBatch 是否已赋值
                     * 
                     */
                    bool DeployBatchHasBeenSet() const;

                    /**
                     * 获取滚动发布的执行方式，auto表示自动， manual表示手动
                     * @return DeployExeMode 滚动发布的执行方式，auto表示自动， manual表示手动
                     * 
                     */
                    std::string GetDeployExeMode() const;

                    /**
                     * 设置滚动发布的执行方式，auto表示自动， manual表示手动
                     * @param _deployExeMode 滚动发布的执行方式，auto表示自动， manual表示手动
                     * 
                     */
                    void SetDeployExeMode(const std::string& _deployExeMode);

                    /**
                     * 判断参数 DeployExeMode 是否已赋值
                     * @return DeployExeMode 是否已赋值
                     * 
                     */
                    bool DeployExeModeHasBeenSet() const;

                    /**
                     * 获取滚动发布每个批次的时间间隔
                     * @return DeployWaitTime 滚动发布每个批次的时间间隔
                     * 
                     */
                    uint64_t GetDeployWaitTime() const;

                    /**
                     * 设置滚动发布每个批次的时间间隔
                     * @param _deployWaitTime 滚动发布每个批次的时间间隔
                     * 
                     */
                    void SetDeployWaitTime(const uint64_t& _deployWaitTime);

                    /**
                     * 判断参数 DeployWaitTime 是否已赋值
                     * @return DeployWaitTime 是否已赋值
                     * 
                     */
                    bool DeployWaitTimeHasBeenSet() const;

                    /**
                     * 获取启动脚本 base64编码
                     * @return StartScript 启动脚本 base64编码
                     * 
                     */
                    std::string GetStartScript() const;

                    /**
                     * 设置启动脚本 base64编码
                     * @param _startScript 启动脚本 base64编码
                     * 
                     */
                    void SetStartScript(const std::string& _startScript);

                    /**
                     * 判断参数 StartScript 是否已赋值
                     * @return StartScript 是否已赋值
                     * 
                     */
                    bool StartScriptHasBeenSet() const;

                    /**
                     * 获取停止脚本 base64编码
                     * @return StopScript 停止脚本 base64编码
                     * 
                     */
                    std::string GetStopScript() const;

                    /**
                     * 设置停止脚本 base64编码
                     * @param _stopScript 停止脚本 base64编码
                     * 
                     */
                    void SetStopScript(const std::string& _stopScript);

                    /**
                     * 判断参数 StopScript 是否已赋值
                     * @return StopScript 是否已赋值
                     * 
                     */
                    bool StopScriptHasBeenSet() const;

                    /**
                     * 获取是否进行增量部署，默认为false，全量更新
                     * @return IncrementalDeployment 是否进行增量部署，默认为false，全量更新
                     * 
                     */
                    bool GetIncrementalDeployment() const;

                    /**
                     * 设置是否进行增量部署，默认为false，全量更新
                     * @param _incrementalDeployment 是否进行增量部署，默认为false，全量更新
                     * 
                     */
                    void SetIncrementalDeployment(const bool& _incrementalDeployment);

                    /**
                     * 判断参数 IncrementalDeployment 是否已赋值
                     * @return IncrementalDeployment 是否已赋值
                     * 
                     */
                    bool IncrementalDeploymentHasBeenSet() const;

                    /**
                     * 获取JDK名称: konaJDK或openJDK
                     * @return JdkName JDK名称: konaJDK或openJDK
                     * 
                     */
                    std::string GetJdkName() const;

                    /**
                     * 设置JDK名称: konaJDK或openJDK
                     * @param _jdkName JDK名称: konaJDK或openJDK
                     * 
                     */
                    void SetJdkName(const std::string& _jdkName);

                    /**
                     * 判断参数 JdkName 是否已赋值
                     * @return JdkName 是否已赋值
                     * 
                     */
                    bool JdkNameHasBeenSet() const;

                    /**
                     * 获取konaJDK版本：8、11和17
openJDK版本：8、17
                     * @return JdkVersion konaJDK版本：8、11和17
openJDK版本：8、17
                     * 
                     */
                    std::string GetJdkVersion() const;

                    /**
                     * 设置konaJDK版本：8、11和17
openJDK版本：8、17
                     * @param _jdkVersion konaJDK版本：8、11和17
openJDK版本：8、17
                     * 
                     */
                    void SetJdkVersion(const std::string& _jdkVersion);

                    /**
                     * 判断参数 JdkVersion 是否已赋值
                     * @return JdkVersion 是否已赋值
                     * 
                     */
                    bool JdkVersionHasBeenSet() const;

                    /**
                     * 获取部署agent的类型、版本
                     * @return AgentProfileList 部署agent的类型、版本
                     * 
                     */
                    std::vector<AgentProfile> GetAgentProfileList() const;

                    /**
                     * 设置部署agent的类型、版本
                     * @param _agentProfileList 部署agent的类型、版本
                     * 
                     */
                    void SetAgentProfileList(const std::vector<AgentProfile>& _agentProfileList);

                    /**
                     * 判断参数 AgentProfileList 是否已赋值
                     * @return AgentProfileList 是否已赋值
                     * 
                     */
                    bool AgentProfileListHasBeenSet() const;

                    /**
                     * 获取预热参数配置
                     * @return WarmupSetting 预热参数配置
                     * 
                     */
                    WarmupSetting GetWarmupSetting() const;

                    /**
                     * 设置预热参数配置
                     * @param _warmupSetting 预热参数配置
                     * 
                     */
                    void SetWarmupSetting(const WarmupSetting& _warmupSetting);

                    /**
                     * 判断参数 WarmupSetting 是否已赋值
                     * @return WarmupSetting 是否已赋值
                     * 
                     */
                    bool WarmupSettingHasBeenSet() const;

                    /**
                     * 获取开启分批健康检查
                     * @return EnableBatchHealthCheck 开启分批健康检查
                     * 
                     */
                    bool GetEnableBatchHealthCheck() const;

                    /**
                     * 设置开启分批健康检查
                     * @param _enableBatchHealthCheck 开启分批健康检查
                     * 
                     */
                    void SetEnableBatchHealthCheck(const bool& _enableBatchHealthCheck);

                    /**
                     * 判断参数 EnableBatchHealthCheck 是否已赋值
                     * @return EnableBatchHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableBatchHealthCheckHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 程序包ID
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 部署组启动参数
                     */
                    std::string m_startupParameters;
                    bool m_startupParametersHasBeenSet;

                    /**
                     * 部署应用描述信息
                     */
                    std::string m_deployDesc;
                    bool m_deployDescHasBeenSet;

                    /**
                     * 是否允许强制启动
                     */
                    bool m_forceStart;
                    bool m_forceStartHasBeenSet;

                    /**
                     * 是否开启健康检查
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * 开启健康检查时，配置健康检查
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * 部署方式，0表示快速更新，1表示滚动更新
                     */
                    uint64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * 是否启用beta批次
                     */
                    bool m_deployBetaEnable;
                    bool m_deployBetaEnableHasBeenSet;

                    /**
                     * 滚动发布每个批次参与的实例比率
                     */
                    std::vector<double> m_deployBatch;
                    bool m_deployBatchHasBeenSet;

                    /**
                     * 滚动发布的执行方式，auto表示自动， manual表示手动
                     */
                    std::string m_deployExeMode;
                    bool m_deployExeModeHasBeenSet;

                    /**
                     * 滚动发布每个批次的时间间隔
                     */
                    uint64_t m_deployWaitTime;
                    bool m_deployWaitTimeHasBeenSet;

                    /**
                     * 启动脚本 base64编码
                     */
                    std::string m_startScript;
                    bool m_startScriptHasBeenSet;

                    /**
                     * 停止脚本 base64编码
                     */
                    std::string m_stopScript;
                    bool m_stopScriptHasBeenSet;

                    /**
                     * 是否进行增量部署，默认为false，全量更新
                     */
                    bool m_incrementalDeployment;
                    bool m_incrementalDeploymentHasBeenSet;

                    /**
                     * JDK名称: konaJDK或openJDK
                     */
                    std::string m_jdkName;
                    bool m_jdkNameHasBeenSet;

                    /**
                     * konaJDK版本：8、11和17
openJDK版本：8、17
                     */
                    std::string m_jdkVersion;
                    bool m_jdkVersionHasBeenSet;

                    /**
                     * 部署agent的类型、版本
                     */
                    std::vector<AgentProfile> m_agentProfileList;
                    bool m_agentProfileListHasBeenSet;

                    /**
                     * 预热参数配置
                     */
                    WarmupSetting m_warmupSetting;
                    bool m_warmupSettingHasBeenSet;

                    /**
                     * 开启分批健康检查
                     */
                    bool m_enableBatchHealthCheck;
                    bool m_enableBatchHealthCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYGROUPREQUEST_H_
