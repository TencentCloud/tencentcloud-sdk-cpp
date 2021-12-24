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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEAPPLICATIONVISUALIZATIONREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEAPPLICATIONVISUALIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/ApplicationBasicInfo.h>
#include <tencentcloud/iecp/v20210914/model/ApplicationBasicConfig.h>
#include <tencentcloud/iecp/v20210914/model/Volume.h>
#include <tencentcloud/iecp/v20210914/model/Service.h>
#include <tencentcloud/iecp/v20210914/model/Job.h>
#include <tencentcloud/iecp/v20210914/model/CronJob.h>
#include <tencentcloud/iecp/v20210914/model/HorizontalPodAutoscaler.h>
#include <tencentcloud/iecp/v20210914/model/Container.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CreateApplicationVisualization请求参数结构体
                */
                class CreateApplicationVisualizationRequest : public AbstractModel
                {
                public:
                    CreateApplicationVisualizationRequest();
                    ~CreateApplicationVisualizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取基本信息
                     * @return BasicInfo 基本信息
                     */
                    ApplicationBasicInfo GetBasicInfo() const;

                    /**
                     * 设置基本信息
                     * @param BasicInfo 基本信息
                     */
                    void SetBasicInfo(const ApplicationBasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取基本配置
                     * @return BasicConfig 基本配置
                     */
                    ApplicationBasicConfig GetBasicConfig() const;

                    /**
                     * 设置基本配置
                     * @param BasicConfig 基本配置
                     */
                    void SetBasicConfig(const ApplicationBasicConfig& _basicConfig);

                    /**
                     * 判断参数 BasicConfig 是否已赋值
                     * @return BasicConfig 是否已赋值
                     */
                    bool BasicConfigHasBeenSet() const;

                    /**
                     * 获取卷列表
                     * @return Volumes 卷列表
                     */
                    std::vector<Volume> GetVolumes() const;

                    /**
                     * 设置卷列表
                     * @param Volumes 卷列表
                     */
                    void SetVolumes(const std::vector<Volume>& _volumes);

                    /**
                     * 判断参数 Volumes 是否已赋值
                     * @return Volumes 是否已赋值
                     */
                    bool VolumesHasBeenSet() const;

                    /**
                     * 获取服务配置
                     * @return Service 服务配置
                     */
                    Service GetService() const;

                    /**
                     * 设置服务配置
                     * @param Service 服务配置
                     */
                    void SetService(const Service& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Job配置
                     * @return Job Job配置
                     */
                    Job GetJob() const;

                    /**
                     * 设置Job配置
                     * @param Job Job配置
                     */
                    void SetJob(const Job& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取CronJob配置
                     * @return CronJob CronJob配置
                     */
                    CronJob GetCronJob() const;

                    /**
                     * 设置CronJob配置
                     * @param CronJob CronJob配置
                     */
                    void SetCronJob(const CronJob& _cronJob);

                    /**
                     * 判断参数 CronJob 是否已赋值
                     * @return CronJob 是否已赋值
                     */
                    bool CronJobHasBeenSet() const;

                    /**
                     * 获取重新运行策略
                     * @return RestartPolicy 重新运行策略
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置重新运行策略
                     * @param RestartPolicy 重新运行策略
                     */
                    void SetRestartPolicy(const std::string& _restartPolicy);

                    /**
                     * 判断参数 RestartPolicy 是否已赋值
                     * @return RestartPolicy 是否已赋值
                     */
                    bool RestartPolicyHasBeenSet() const;

                    /**
                     * 获取镜像拉取密钥
                     * @return ImagePullSecrets 镜像拉取密钥
                     */
                    std::vector<std::string> GetImagePullSecrets() const;

                    /**
                     * 设置镜像拉取密钥
                     * @param ImagePullSecrets 镜像拉取密钥
                     */
                    void SetImagePullSecrets(const std::vector<std::string>& _imagePullSecrets);

                    /**
                     * 判断参数 ImagePullSecrets 是否已赋值
                     * @return ImagePullSecrets 是否已赋值
                     */
                    bool ImagePullSecretsHasBeenSet() const;

                    /**
                     * 获取HPA配置
                     * @return HorizontalPodAutoscaler HPA配置
                     */
                    HorizontalPodAutoscaler GetHorizontalPodAutoscaler() const;

                    /**
                     * 设置HPA配置
                     * @param HorizontalPodAutoscaler HPA配置
                     */
                    void SetHorizontalPodAutoscaler(const HorizontalPodAutoscaler& _horizontalPodAutoscaler);

                    /**
                     * 判断参数 HorizontalPodAutoscaler 是否已赋值
                     * @return HorizontalPodAutoscaler 是否已赋值
                     */
                    bool HorizontalPodAutoscalerHasBeenSet() const;

                    /**
                     * 获取初始化容器列表
                     * @return InitContainers 初始化容器列表
                     */
                    std::vector<Container> GetInitContainers() const;

                    /**
                     * 设置初始化容器列表
                     * @param InitContainers 初始化容器列表
                     */
                    void SetInitContainers(const std::vector<Container>& _initContainers);

                    /**
                     * 判断参数 InitContainers 是否已赋值
                     * @return InitContainers 是否已赋值
                     */
                    bool InitContainersHasBeenSet() const;

                    /**
                     * 获取容器列表
                     * @return Containers 容器列表
                     */
                    std::vector<Container> GetContainers() const;

                    /**
                     * 设置容器列表
                     * @param Containers 容器列表
                     */
                    void SetContainers(const std::vector<Container>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     */
                    bool ContainersHasBeenSet() const;

                private:

                    /**
                     * 基本信息
                     */
                    ApplicationBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 基本配置
                     */
                    ApplicationBasicConfig m_basicConfig;
                    bool m_basicConfigHasBeenSet;

                    /**
                     * 卷列表
                     */
                    std::vector<Volume> m_volumes;
                    bool m_volumesHasBeenSet;

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
                     * 重新运行策略
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

                    /**
                     * 初始化容器列表
                     */
                    std::vector<Container> m_initContainers;
                    bool m_initContainersHasBeenSet;

                    /**
                     * 容器列表
                     */
                    std::vector<Container> m_containers;
                    bool m_containersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEAPPLICATIONVISUALIZATIONREQUEST_H_
