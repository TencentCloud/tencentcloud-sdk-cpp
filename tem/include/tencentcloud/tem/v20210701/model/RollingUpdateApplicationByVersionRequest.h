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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_ROLLINGUPDATEAPPLICATIONBYVERSIONREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_ROLLINGUPDATEAPPLICATIONBYVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * RollingUpdateApplicationByVersion请求参数结构体
                */
                class RollingUpdateApplicationByVersionRequest : public AbstractModel
                {
                public:
                    RollingUpdateApplicationByVersionRequest();
                    ~RollingUpdateApplicationByVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取环境ID
                     * @return EnvironmentId 环境ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID
                     * @param _environmentId 环境ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取更新版本，IMAGE 部署为 tag 值；JAR/WAR 部署 为 Version
                     * @return DeployVersion 更新版本，IMAGE 部署为 tag 值；JAR/WAR 部署 为 Version
                     * 
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置更新版本，IMAGE 部署为 tag 值；JAR/WAR 部署 为 Version
                     * @param _deployVersion 更新版本，IMAGE 部署为 tag 值；JAR/WAR 部署 为 Version
                     * 
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     * 
                     */
                    bool DeployVersionHasBeenSet() const;

                    /**
                     * 获取JAR/WAR 包名，仅 JAR/WAR 部署时必填
                     * @return PackageName JAR/WAR 包名，仅 JAR/WAR 部署时必填
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置JAR/WAR 包名，仅 JAR/WAR 部署时必填
                     * @param _packageName JAR/WAR 包名，仅 JAR/WAR 部署时必填
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取请求来源平台，含 IntelliJ，Coding
                     * @return From 请求来源平台，含 IntelliJ，Coding
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置请求来源平台，含 IntelliJ，Coding
                     * @param _from 请求来源平台，含 IntelliJ，Coding
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取部署策略，AUTO 为全自动；BETA 为小批量验证后自动；MANUAL 为全手动；
                     * @return DeployStrategyType 部署策略，AUTO 为全自动；BETA 为小批量验证后自动；MANUAL 为全手动；
                     * 
                     */
                    std::string GetDeployStrategyType() const;

                    /**
                     * 设置部署策略，AUTO 为全自动；BETA 为小批量验证后自动；MANUAL 为全手动；
                     * @param _deployStrategyType 部署策略，AUTO 为全自动；BETA 为小批量验证后自动；MANUAL 为全手动；
                     * 
                     */
                    void SetDeployStrategyType(const std::string& _deployStrategyType);

                    /**
                     * 判断参数 DeployStrategyType 是否已赋值
                     * @return DeployStrategyType 是否已赋值
                     * 
                     */
                    bool DeployStrategyTypeHasBeenSet() const;

                    /**
                     * 获取发布批次数
                     * @return TotalBatchCount 发布批次数
                     * 
                     */
                    int64_t GetTotalBatchCount() const;

                    /**
                     * 设置发布批次数
                     * @param _totalBatchCount 发布批次数
                     * 
                     */
                    void SetTotalBatchCount(const int64_t& _totalBatchCount);

                    /**
                     * 判断参数 TotalBatchCount 是否已赋值
                     * @return TotalBatchCount 是否已赋值
                     * 
                     */
                    bool TotalBatchCountHasBeenSet() const;

                    /**
                     * 获取批次间隔时间
                     * @return BatchInterval 批次间隔时间
                     * 
                     */
                    int64_t GetBatchInterval() const;

                    /**
                     * 设置批次间隔时间
                     * @param _batchInterval 批次间隔时间
                     * 
                     */
                    void SetBatchInterval(const int64_t& _batchInterval);

                    /**
                     * 判断参数 BatchInterval 是否已赋值
                     * @return BatchInterval 是否已赋值
                     * 
                     */
                    bool BatchIntervalHasBeenSet() const;

                    /**
                     * 获取小批量验证批次的实例数
                     * @return BetaBatchNum 小批量验证批次的实例数
                     * 
                     */
                    int64_t GetBetaBatchNum() const;

                    /**
                     * 设置小批量验证批次的实例数
                     * @param _betaBatchNum 小批量验证批次的实例数
                     * 
                     */
                    void SetBetaBatchNum(const int64_t& _betaBatchNum);

                    /**
                     * 判断参数 BetaBatchNum 是否已赋值
                     * @return BetaBatchNum 是否已赋值
                     * 
                     */
                    bool BetaBatchNumHasBeenSet() const;

                    /**
                     * 获取发布过程中保障的最小可用实例数
                     * @return MinAvailable 发布过程中保障的最小可用实例数
                     * 
                     */
                    int64_t GetMinAvailable() const;

                    /**
                     * 设置发布过程中保障的最小可用实例数
                     * @param _minAvailable 发布过程中保障的最小可用实例数
                     * 
                     */
                    void SetMinAvailable(const int64_t& _minAvailable);

                    /**
                     * 判断参数 MinAvailable 是否已赋值
                     * @return MinAvailable 是否已赋值
                     * 
                     */
                    bool MinAvailableHasBeenSet() const;

                    /**
                     * 获取是否强制发布
                     * @return Force 是否强制发布
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否强制发布
                     * @param _force 是否强制发布
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 更新版本，IMAGE 部署为 tag 值；JAR/WAR 部署 为 Version
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * JAR/WAR 包名，仅 JAR/WAR 部署时必填
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 请求来源平台，含 IntelliJ，Coding
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 部署策略，AUTO 为全自动；BETA 为小批量验证后自动；MANUAL 为全手动；
                     */
                    std::string m_deployStrategyType;
                    bool m_deployStrategyTypeHasBeenSet;

                    /**
                     * 发布批次数
                     */
                    int64_t m_totalBatchCount;
                    bool m_totalBatchCountHasBeenSet;

                    /**
                     * 批次间隔时间
                     */
                    int64_t m_batchInterval;
                    bool m_batchIntervalHasBeenSet;

                    /**
                     * 小批量验证批次的实例数
                     */
                    int64_t m_betaBatchNum;
                    bool m_betaBatchNumHasBeenSet;

                    /**
                     * 发布过程中保障的最小可用实例数
                     */
                    int64_t m_minAvailable;
                    bool m_minAvailableHasBeenSet;

                    /**
                     * 是否强制发布
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_ROLLINGUPDATEAPPLICATIONBYVERSIONREQUEST_H_
