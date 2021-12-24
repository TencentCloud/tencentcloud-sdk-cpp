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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONVISUALIZATIONRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONVISUALIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/ApplicationBasicInfo.h>
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
                * DescribeEdgeUnitApplicationVisualization返回参数结构体
                */
                class DescribeEdgeUnitApplicationVisualizationResponse : public AbstractModel
                {
                public:
                    DescribeEdgeUnitApplicationVisualizationResponse();
                    ~DescribeEdgeUnitApplicationVisualizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicInfo 基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApplicationBasicInfo GetBasicInfo() const;

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取基本配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicConfig 基本配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApplicationBasicConfig GetBasicConfig() const;

                    /**
                     * 判断参数 BasicConfig 是否已赋值
                     * @return BasicConfig 是否已赋值
                     */
                    bool BasicConfigHasBeenSet() const;

                    /**
                     * 获取卷配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Volumes 卷配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Volume> GetVolumes() const;

                    /**
                     * 判断参数 Volumes 是否已赋值
                     * @return Volumes 是否已赋值
                     */
                    bool VolumesHasBeenSet() const;

                    /**
                     * 获取初始化容器配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitContainers 初始化容器配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Container> GetInitContainers() const;

                    /**
                     * 判断参数 InitContainers 是否已赋值
                     * @return InitContainers 是否已赋值
                     */
                    bool InitContainersHasBeenSet() const;

                    /**
                     * 获取容器配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Containers 容器配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Container> GetContainers() const;

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Service 服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Service GetService() const;

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Job配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Job Job配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Job GetJob() const;

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取CronJob配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronJob CronJob配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CronJob GetCronJob() const;

                    /**
                     * 判断参数 CronJob 是否已赋值
                     * @return CronJob 是否已赋值
                     */
                    bool CronJobHasBeenSet() const;

                    /**
                     * 获取重启策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartPolicy 重启策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 判断参数 RestartPolicy 是否已赋值
                     * @return RestartPolicy 是否已赋值
                     */
                    bool RestartPolicyHasBeenSet() const;

                    /**
                     * 获取HPA
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HorizontalPodAutoscaler HPA
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HorizontalPodAutoscaler GetHorizontalPodAutoscaler() const;

                    /**
                     * 判断参数 HorizontalPodAutoscaler 是否已赋值
                     * @return HorizontalPodAutoscaler 是否已赋值
                     */
                    bool HorizontalPodAutoscalerHasBeenSet() const;

                    /**
                     * 获取镜像拉取Secret
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImagePullSecrets 镜像拉取Secret
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetImagePullSecrets() const;

                    /**
                     * 判断参数 ImagePullSecrets 是否已赋值
                     * @return ImagePullSecrets 是否已赋值
                     */
                    bool ImagePullSecretsHasBeenSet() const;

                private:

                    /**
                     * 基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApplicationBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 基本配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApplicationBasicConfig m_basicConfig;
                    bool m_basicConfigHasBeenSet;

                    /**
                     * 卷配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Volume> m_volumes;
                    bool m_volumesHasBeenSet;

                    /**
                     * 初始化容器配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Container> m_initContainers;
                    bool m_initContainersHasBeenSet;

                    /**
                     * 容器配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Container> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * 服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Service m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Job配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Job m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * CronJob配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CronJob m_cronJob;
                    bool m_cronJobHasBeenSet;

                    /**
                     * 重启策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                    /**
                     * HPA
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HorizontalPodAutoscaler m_horizontalPodAutoscaler;
                    bool m_horizontalPodAutoscalerHasBeenSet;

                    /**
                     * 镜像拉取Secret
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_imagePullSecrets;
                    bool m_imagePullSecretsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONVISUALIZATIONRESPONSE_H_
