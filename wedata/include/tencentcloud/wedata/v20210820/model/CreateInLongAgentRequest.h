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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEINLONGAGENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEINLONGAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateInLongAgent请求参数结构体
                */
                class CreateInLongAgentRequest : public AbstractModel
                {
                public:
                    CreateInLongAgentRequest();
                    ~CreateInLongAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取采集器类型，1：TKE Agent，2：BOSS SDK，默认：1
                     * @return AgentType 采集器类型，1：TKE Agent，2：BOSS SDK，默认：1
                     * 
                     */
                    uint64_t GetAgentType() const;

                    /**
                     * 设置采集器类型，1：TKE Agent，2：BOSS SDK，默认：1
                     * @param _agentType 采集器类型，1：TKE Agent，2：BOSS SDK，默认：1
                     * 
                     */
                    void SetAgentType(const uint64_t& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     * 
                     */
                    bool AgentTypeHasBeenSet() const;

                    /**
                     * 获取采集器名称
                     * @return AgentName 采集器名称
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置采集器名称
                     * @param _agentName 采集器名称
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取集成资源组id
                     * @return ExecutorGroupId 集成资源组id
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置集成资源组id
                     * @param _executorGroupId 集成资源组id
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取WeData项目ID
                     * @return ProjectId WeData项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置WeData项目ID
                     * @param _projectId WeData项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取TKE集群的地域
                     * @return TkeRegion TKE集群的地域
                     * 
                     */
                    std::string GetTkeRegion() const;

                    /**
                     * 设置TKE集群的地域
                     * @param _tkeRegion TKE集群的地域
                     * 
                     */
                    void SetTkeRegion(const std::string& _tkeRegion);

                    /**
                     * 判断参数 TkeRegion 是否已赋值
                     * @return TkeRegion 是否已赋值
                     * 
                     */
                    bool TkeRegionHasBeenSet() const;

                    /**
                     * 获取当AgentType为1时，必填。当AgentType为2时，不用填
                     * @return ClusterId 当AgentType为1时，必填。当AgentType为2时，不用填
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置当AgentType为1时，必填。当AgentType为2时，不用填
                     * @param _clusterId 当AgentType为1时，必填。当AgentType为2时，不用填
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 采集器类型，1：TKE Agent，2：BOSS SDK，默认：1
                     */
                    uint64_t m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * 采集器名称
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 集成资源组id
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * WeData项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * TKE集群的地域
                     */
                    std::string m_tkeRegion;
                    bool m_tkeRegionHasBeenSet;

                    /**
                     * 当AgentType为1时，必填。当AgentType为2时，不用填
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEINLONGAGENTREQUEST_H_
