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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINLONGAGENTLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINLONGAGENTLISTREQUEST_H_

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
                * DescribeInLongAgentList请求参数结构体
                */
                class DescribeInLongAgentListRequest : public AbstractModel
                {
                public:
                    DescribeInLongAgentListRequest();
                    ~DescribeInLongAgentListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取WeData项目ID
                     * @return ProjectId WeData项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置WeData项目ID
                     * @param ProjectId WeData项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取采集器ID
                     * @return AgentId 采集器ID
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置采集器ID
                     * @param AgentId 采集器ID
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取Agent Name
                     * @return AgentName Agent Name
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置Agent Name
                     * @param AgentName Agent Name
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取集群类型，1：TKE Agent，2：BOSS SDK，默认：1
                     * @return AgentType 集群类型，1：TKE Agent，2：BOSS SDK，默认：1
                     */
                    uint64_t GetAgentType() const;

                    /**
                     * 设置集群类型，1：TKE Agent，2：BOSS SDK，默认：1
                     * @param AgentType 集群类型，1：TKE Agent，2：BOSS SDK，默认：1
                     */
                    void SetAgentType(const uint64_t& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     */
                    bool AgentTypeHasBeenSet() const;

                    /**
                     * 获取Agent状态(running运行中，initializing 操作中，failed心跳异常)
                     * @return Status Agent状态(running运行中，initializing 操作中，failed心跳异常)
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Agent状态(running运行中，initializing 操作中，failed心跳异常)
                     * @param Status Agent状态(running运行中，initializing 操作中，failed心跳异常)
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Vpc Id
                     * @return VpcId Vpc Id
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc Id
                     * @param VpcId Vpc Id
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取分页页码，从1开始，默认：1
                     * @return PageIndex 分页页码，从1开始，默认：1
                     */
                    uint64_t GetPageIndex() const;

                    /**
                     * 设置分页页码，从1开始，默认：1
                     * @param PageIndex 分页页码，从1开始，默认：1
                     */
                    void SetPageIndex(const uint64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取分页每页记录数，默认10
                     * @return PageSize 分页每页记录数，默认10
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页每页记录数，默认10
                     * @param PageSize 分页每页记录数，默认10
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取名称搜索是否开启模糊匹配，1：开启，0：不开启（精确匹配）
                     * @return Like 名称搜索是否开启模糊匹配，1：开启，0：不开启（精确匹配）
                     */
                    uint64_t GetLike() const;

                    /**
                     * 设置名称搜索是否开启模糊匹配，1：开启，0：不开启（精确匹配）
                     * @param Like 名称搜索是否开启模糊匹配，1：开启，0：不开启（精确匹配）
                     */
                    void SetLike(const uint64_t& _like);

                    /**
                     * 判断参数 Like 是否已赋值
                     * @return Like 是否已赋值
                     */
                    bool LikeHasBeenSet() const;

                private:

                    /**
                     * WeData项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 采集器ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * Agent Name
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 集群类型，1：TKE Agent，2：BOSS SDK，默认：1
                     */
                    uint64_t m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * Agent状态(running运行中，initializing 操作中，failed心跳异常)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Vpc Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 分页页码，从1开始，默认：1
                     */
                    uint64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 分页每页记录数，默认10
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 名称搜索是否开启模糊匹配，1：开启，0：不开启（精确匹配）
                     */
                    uint64_t m_like;
                    bool m_likeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINLONGAGENTLISTREQUEST_H_
