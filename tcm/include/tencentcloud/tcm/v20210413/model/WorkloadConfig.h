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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_WORKLOADCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_WORKLOADCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/ResourceRequirements.h>
#include <tencentcloud/tcm/v20210413/model/HorizontalPodAutoscalerSpec.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 工作负载配置
                */
                class WorkloadConfig : public AbstractModel
                {
                public:
                    WorkloadConfig();
                    ~WorkloadConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作副本数
                     * @return Replicas 工作副本数
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置工作副本数
                     * @param Replicas 工作副本数
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取资源配置
                     * @return Resources 资源配置
                     */
                    ResourceRequirements GetResources() const;

                    /**
                     * 设置资源配置
                     * @param Resources 资源配置
                     */
                    void SetResources(const ResourceRequirements& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取HPA策略
                     * @return HorizontalPodAutoscaler HPA策略
                     */
                    HorizontalPodAutoscalerSpec GetHorizontalPodAutoscaler() const;

                    /**
                     * 设置HPA策略
                     * @param HorizontalPodAutoscaler HPA策略
                     */
                    void SetHorizontalPodAutoscaler(const HorizontalPodAutoscalerSpec& _horizontalPodAutoscaler);

                    /**
                     * 判断参数 HorizontalPodAutoscaler 是否已赋值
                     * @return HorizontalPodAutoscaler 是否已赋值
                     */
                    bool HorizontalPodAutoscalerHasBeenSet() const;

                    /**
                     * 获取部署到指定节点
                     * @return SelectedNodeList 部署到指定节点
                     */
                    std::vector<std::string> GetSelectedNodeList() const;

                    /**
                     * 设置部署到指定节点
                     * @param SelectedNodeList 部署到指定节点
                     */
                    void SetSelectedNodeList(const std::vector<std::string>& _selectedNodeList);

                    /**
                     * 判断参数 SelectedNodeList 是否已赋值
                     * @return SelectedNodeList 是否已赋值
                     */
                    bool SelectedNodeListHasBeenSet() const;

                private:

                    /**
                     * 工作副本数
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 资源配置
                     */
                    ResourceRequirements m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * HPA策略
                     */
                    HorizontalPodAutoscalerSpec m_horizontalPodAutoscaler;
                    bool m_horizontalPodAutoscalerHasBeenSet;

                    /**
                     * 部署到指定节点
                     */
                    std::vector<std::string> m_selectedNodeList;
                    bool m_selectedNodeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_WORKLOADCONFIG_H_
