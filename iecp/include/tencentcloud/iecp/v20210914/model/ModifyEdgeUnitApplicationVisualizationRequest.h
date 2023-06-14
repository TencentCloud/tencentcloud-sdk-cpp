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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYEDGEUNITAPPLICATIONVISUALIZATIONREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYEDGEUNITAPPLICATIONVISUALIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/ApplicationBasicConfig.h>
#include <tencentcloud/iecp/v20210914/model/Volume.h>
#include <tencentcloud/iecp/v20210914/model/Container.h>
#include <tencentcloud/iecp/v20210914/model/Service.h>
#include <tencentcloud/iecp/v20210914/model/Job.h>
#include <tencentcloud/iecp/v20210914/model/CronJob.h>
#include <tencentcloud/iecp/v20210914/model/HorizontalPodAutoscaler.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * ModifyEdgeUnitApplicationVisualization请求参数结构体
                */
                class ModifyEdgeUnitApplicationVisualizationRequest : public AbstractModel
                {
                public:
                    ModifyEdgeUnitApplicationVisualizationRequest();
                    ~ModifyEdgeUnitApplicationVisualizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单元ID
                     * @return EdgeUnitId 单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitId() const;

                    /**
                     * 设置单元ID
                     * @param _edgeUnitId 单元ID
                     * 
                     */
                    void SetEdgeUnitId(const uint64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     * 
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    uint64_t GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const uint64_t& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用配置
                     * @return BasicConfig 应用配置
                     * 
                     */
                    ApplicationBasicConfig GetBasicConfig() const;

                    /**
                     * 设置应用配置
                     * @param _basicConfig 应用配置
                     * 
                     */
                    void SetBasicConfig(const ApplicationBasicConfig& _basicConfig);

                    /**
                     * 判断参数 BasicConfig 是否已赋值
                     * @return BasicConfig 是否已赋值
                     * 
                     */
                    bool BasicConfigHasBeenSet() const;

                    /**
                     * 获取卷配置
                     * @return Volumes 卷配置
                     * 
                     */
                    std::vector<Volume> GetVolumes() const;

                    /**
                     * 设置卷配置
                     * @param _volumes 卷配置
                     * 
                     */
                    void SetVolumes(const std::vector<Volume>& _volumes);

                    /**
                     * 判断参数 Volumes 是否已赋值
                     * @return Volumes 是否已赋值
                     * 
                     */
                    bool VolumesHasBeenSet() const;

                    /**
                     * 获取初始容器列表
                     * @return InitContainers 初始容器列表
                     * 
                     */
                    std::vector<Container> GetInitContainers() const;

                    /**
                     * 设置初始容器列表
                     * @param _initContainers 初始容器列表
                     * 
                     */
                    void SetInitContainers(const std::vector<Container>& _initContainers);

                    /**
                     * 判断参数 InitContainers 是否已赋值
                     * @return InitContainers 是否已赋值
                     * 
                     */
                    bool InitContainersHasBeenSet() const;

                    /**
                     * 获取容器配置
                     * @return Containers 容器配置
                     * 
                     */
                    std::vector<Container> GetContainers() const;

                    /**
                     * 设置容器配置
                     * @param _containers 容器配置
                     * 
                     */
                    void SetContainers(const std::vector<Container>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * 
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取服务配置
                     * @return Service 服务配置
                     * 
                     */
                    Service GetService() const;

                    /**
                     * 设置服务配置
                     * @param _service 服务配置
                     * 
                     */
                    void SetService(const Service& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Job配置
                     * @return Job Job配置
                     * 
                     */
                    Job GetJob() const;

                    /**
                     * 设置Job配置
                     * @param _job Job配置
                     * 
                     */
                    void SetJob(const Job& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取CronJob配置
                     * @return CronJob CronJob配置
                     * 
                     */
                    CronJob GetCronJob() const;

                    /**
                     * 设置CronJob配置
                     * @param _cronJob CronJob配置
                     * 
                     */
                    void SetCronJob(const CronJob& _cronJob);

                    /**
                     * 判断参数 CronJob 是否已赋值
                     * @return CronJob 是否已赋值
                     * 
                     */
                    bool CronJobHasBeenSet() const;

                    /**
                     * 获取重启策略
                     * @return RestartPolicy 重启策略
                     * 
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置重启策略
                     * @param _restartPolicy 重启策略
                     * 
                     */
                    void SetRestartPolicy(const std::string& _restartPolicy);

                    /**
                     * 判断参数 RestartPolicy 是否已赋值
                     * @return RestartPolicy 是否已赋值
                     * 
                     */
                    bool RestartPolicyHasBeenSet() const;

                    /**
                     * 获取镜像拉取密钥
                     * @return ImagePullSecrets 镜像拉取密钥
                     * 
                     */
                    std::vector<std::string> GetImagePullSecrets() const;

                    /**
                     * 设置镜像拉取密钥
                     * @param _imagePullSecrets 镜像拉取密钥
                     * 
                     */
                    void SetImagePullSecrets(const std::vector<std::string>& _imagePullSecrets);

                    /**
                     * 判断参数 ImagePullSecrets 是否已赋值
                     * @return ImagePullSecrets 是否已赋值
                     * 
                     */
                    bool ImagePullSecretsHasBeenSet() const;

                    /**
                     * 获取HPA配置
                     * @return HorizontalPodAutoscaler HPA配置
                     * 
                     */
                    HorizontalPodAutoscaler GetHorizontalPodAutoscaler() const;

                    /**
                     * 设置HPA配置
                     * @param _horizontalPodAutoscaler HPA配置
                     * 
                     */
                    void SetHorizontalPodAutoscaler(const HorizontalPodAutoscaler& _horizontalPodAutoscaler);

                    /**
                     * 判断参数 HorizontalPodAutoscaler 是否已赋值
                     * @return HorizontalPodAutoscaler 是否已赋值
                     * 
                     */
                    bool HorizontalPodAutoscalerHasBeenSet() const;

                private:

                    /**
                     * 单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * 应用ID
                     */
                    uint64_t m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用配置
                     */
                    ApplicationBasicConfig m_basicConfig;
                    bool m_basicConfigHasBeenSet;

                    /**
                     * 卷配置
                     */
                    std::vector<Volume> m_volumes;
                    bool m_volumesHasBeenSet;

                    /**
                     * 初始容器列表
                     */
                    std::vector<Container> m_initContainers;
                    bool m_initContainersHasBeenSet;

                    /**
                     * 容器配置
                     */
                    std::vector<Container> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * 服务配置
                     */
                    Service m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Job配置
                     */
                    Job m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * CronJob配置
                     */
                    CronJob m_cronJob;
                    bool m_cronJobHasBeenSet;

                    /**
                     * 重启策略
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                    /**
                     * 镜像拉取密钥
                     */
                    std::vector<std::string> m_imagePullSecrets;
                    bool m_imagePullSecretsHasBeenSet;

                    /**
                     * HPA配置
                     */
                    HorizontalPodAutoscaler m_horizontalPodAutoscaler;
                    bool m_horizontalPodAutoscalerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYEDGEUNITAPPLICATIONVISUALIZATIONREQUEST_H_
