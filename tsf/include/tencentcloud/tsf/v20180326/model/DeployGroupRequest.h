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
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param GroupId 部署组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取程序包ID
                     * @return PkgId 程序包ID
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置程序包ID
                     * @param PkgId 程序包ID
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取部署组启动参数
                     * @return StartupParameters 部署组启动参数
                     */
                    std::string GetStartupParameters() const;

                    /**
                     * 设置部署组启动参数
                     * @param StartupParameters 部署组启动参数
                     */
                    void SetStartupParameters(const std::string& _startupParameters);

                    /**
                     * 判断参数 StartupParameters 是否已赋值
                     * @return StartupParameters 是否已赋值
                     */
                    bool StartupParametersHasBeenSet() const;

                    /**
                     * 获取部署应用描述信息
                     * @return DeployDesc 部署应用描述信息
                     */
                    std::string GetDeployDesc() const;

                    /**
                     * 设置部署应用描述信息
                     * @param DeployDesc 部署应用描述信息
                     */
                    void SetDeployDesc(const std::string& _deployDesc);

                    /**
                     * 判断参数 DeployDesc 是否已赋值
                     * @return DeployDesc 是否已赋值
                     */
                    bool DeployDescHasBeenSet() const;

                    /**
                     * 获取是否允许强制启动
                     * @return ForceStart 是否允许强制启动
                     */
                    bool GetForceStart() const;

                    /**
                     * 设置是否允许强制启动
                     * @param ForceStart 是否允许强制启动
                     */
                    void SetForceStart(const bool& _forceStart);

                    /**
                     * 判断参数 ForceStart 是否已赋值
                     * @return ForceStart 是否已赋值
                     */
                    bool ForceStartHasBeenSet() const;

                    /**
                     * 获取是否开启健康检查
                     * @return EnableHealthCheck 是否开启健康检查
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置是否开启健康检查
                     * @param EnableHealthCheck 是否开启健康检查
                     */
                    void SetEnableHealthCheck(const bool& _enableHealthCheck);

                    /**
                     * 判断参数 EnableHealthCheck 是否已赋值
                     * @return EnableHealthCheck 是否已赋值
                     */
                    bool EnableHealthCheckHasBeenSet() const;

                    /**
                     * 获取开启健康检查时，配置健康检查
                     * @return HealthCheckSettings 开启健康检查时，配置健康检查
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置开启健康检查时，配置健康检查
                     * @param HealthCheckSettings 开启健康检查时，配置健康检查
                     */
                    void SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings);

                    /**
                     * 判断参数 HealthCheckSettings 是否已赋值
                     * @return HealthCheckSettings 是否已赋值
                     */
                    bool HealthCheckSettingsHasBeenSet() const;

                    /**
                     * 获取部署方式，0表示快速更新，1表示滚动更新
                     * @return UpdateType 部署方式，0表示快速更新，1表示滚动更新
                     */
                    uint64_t GetUpdateType() const;

                    /**
                     * 设置部署方式，0表示快速更新，1表示滚动更新
                     * @param UpdateType 部署方式，0表示快速更新，1表示滚动更新
                     */
                    void SetUpdateType(const uint64_t& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取是否启用beta批次
                     * @return DeployBetaEnable 是否启用beta批次
                     */
                    bool GetDeployBetaEnable() const;

                    /**
                     * 设置是否启用beta批次
                     * @param DeployBetaEnable 是否启用beta批次
                     */
                    void SetDeployBetaEnable(const bool& _deployBetaEnable);

                    /**
                     * 判断参数 DeployBetaEnable 是否已赋值
                     * @return DeployBetaEnable 是否已赋值
                     */
                    bool DeployBetaEnableHasBeenSet() const;

                    /**
                     * 获取滚动发布每个批次参与的实例比率
                     * @return DeployBatch 滚动发布每个批次参与的实例比率
                     */
                    std::vector<double> GetDeployBatch() const;

                    /**
                     * 设置滚动发布每个批次参与的实例比率
                     * @param DeployBatch 滚动发布每个批次参与的实例比率
                     */
                    void SetDeployBatch(const std::vector<double>& _deployBatch);

                    /**
                     * 判断参数 DeployBatch 是否已赋值
                     * @return DeployBatch 是否已赋值
                     */
                    bool DeployBatchHasBeenSet() const;

                    /**
                     * 获取滚动发布的执行方式
                     * @return DeployExeMode 滚动发布的执行方式
                     */
                    std::string GetDeployExeMode() const;

                    /**
                     * 设置滚动发布的执行方式
                     * @param DeployExeMode 滚动发布的执行方式
                     */
                    void SetDeployExeMode(const std::string& _deployExeMode);

                    /**
                     * 判断参数 DeployExeMode 是否已赋值
                     * @return DeployExeMode 是否已赋值
                     */
                    bool DeployExeModeHasBeenSet() const;

                    /**
                     * 获取滚动发布每个批次的时间间隔
                     * @return DeployWaitTime 滚动发布每个批次的时间间隔
                     */
                    uint64_t GetDeployWaitTime() const;

                    /**
                     * 设置滚动发布每个批次的时间间隔
                     * @param DeployWaitTime 滚动发布每个批次的时间间隔
                     */
                    void SetDeployWaitTime(const uint64_t& _deployWaitTime);

                    /**
                     * 判断参数 DeployWaitTime 是否已赋值
                     * @return DeployWaitTime 是否已赋值
                     */
                    bool DeployWaitTimeHasBeenSet() const;

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
                     * 滚动发布的执行方式
                     */
                    std::string m_deployExeMode;
                    bool m_deployExeModeHasBeenSet;

                    /**
                     * 滚动发布每个批次的时间间隔
                     */
                    uint64_t m_deployWaitTime;
                    bool m_deployWaitTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYGROUPREQUEST_H_
