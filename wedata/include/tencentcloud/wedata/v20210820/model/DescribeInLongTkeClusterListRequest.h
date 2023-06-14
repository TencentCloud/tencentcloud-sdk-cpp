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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINLONGTKECLUSTERLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINLONGTKECLUSTERLISTREQUEST_H_

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
                * DescribeInLongTkeClusterList请求参数结构体
                */
                class DescribeInLongTkeClusterListRequest : public AbstractModel
                {
                public:
                    DescribeInLongTkeClusterListRequest();
                    ~DescribeInLongTkeClusterListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取TKE集群地域
                     * @return TkeRegion TKE集群地域
                     * 
                     */
                    std::string GetTkeRegion() const;

                    /**
                     * 设置TKE集群地域
                     * @param _tkeRegion TKE集群地域
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
                     * 获取集群名称。
多个名称用逗号连接。
                     * @return ClusterName 集群名称。
多个名称用逗号连接。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称。
多个名称用逗号连接。
                     * @param _clusterName 集群名称。
多个名称用逗号连接。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取TKE集群状态 (Running 运行中 Creating 创建中 Idling 闲置中 Abnormal 异常 Failed 异常 Deleting 删除中 Scaling 规模调整中 Upgrading 升级中 Isolated 欠费隔离中 NodeUpgrading 节点升级中 Recovering 唤醒中 Activating 激活中 MasterScaling Master扩缩容中 Waiting 等待注册 ClusterLevelUpgrading 调整规格中 ResourceIsolate 隔离中 ResourceIsolated 已隔离 ResourceReverse 冲正中 Trading 集群开通中 ResourceReversal 集群冲正 ClusterLevelTrading 集群变配交易中)
多个状态用逗号连接。
                     * @return Status TKE集群状态 (Running 运行中 Creating 创建中 Idling 闲置中 Abnormal 异常 Failed 异常 Deleting 删除中 Scaling 规模调整中 Upgrading 升级中 Isolated 欠费隔离中 NodeUpgrading 节点升级中 Recovering 唤醒中 Activating 激活中 MasterScaling Master扩缩容中 Waiting 等待注册 ClusterLevelUpgrading 调整规格中 ResourceIsolate 隔离中 ResourceIsolated 已隔离 ResourceReverse 冲正中 Trading 集群开通中 ResourceReversal 集群冲正 ClusterLevelTrading 集群变配交易中)
多个状态用逗号连接。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置TKE集群状态 (Running 运行中 Creating 创建中 Idling 闲置中 Abnormal 异常 Failed 异常 Deleting 删除中 Scaling 规模调整中 Upgrading 升级中 Isolated 欠费隔离中 NodeUpgrading 节点升级中 Recovering 唤醒中 Activating 激活中 MasterScaling Master扩缩容中 Waiting 等待注册 ClusterLevelUpgrading 调整规格中 ResourceIsolate 隔离中 ResourceIsolated 已隔离 ResourceReverse 冲正中 Trading 集群开通中 ResourceReversal 集群冲正 ClusterLevelTrading 集群变配交易中)
多个状态用逗号连接。
                     * @param _status TKE集群状态 (Running 运行中 Creating 创建中 Idling 闲置中 Abnormal 异常 Failed 异常 Deleting 删除中 Scaling 规模调整中 Upgrading 升级中 Isolated 欠费隔离中 NodeUpgrading 节点升级中 Recovering 唤醒中 Activating 激活中 MasterScaling Master扩缩容中 Waiting 等待注册 ClusterLevelUpgrading 调整规格中 ResourceIsolate 隔离中 ResourceIsolated 已隔离 ResourceReverse 冲正中 Trading 集群开通中 ResourceReversal 集群冲正 ClusterLevelTrading 集群变配交易中)
多个状态用逗号连接。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否安装Agent，true: 是，false: 否
                     * @return HasAgent 是否安装Agent，true: 是，false: 否
                     * 
                     */
                    bool GetHasAgent() const;

                    /**
                     * 设置是否安装Agent，true: 是，false: 否
                     * @param _hasAgent 是否安装Agent，true: 是，false: 否
                     * 
                     */
                    void SetHasAgent(const bool& _hasAgent);

                    /**
                     * 判断参数 HasAgent 是否已赋值
                     * @return HasAgent 是否已赋值
                     * 
                     */
                    bool HasAgentHasBeenSet() const;

                    /**
                     * 获取集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
多个集群用逗号连接。
                     * @return ClusterType 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
多个集群用逗号连接。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
多个集群用逗号连接。
                     * @param _clusterType 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
多个集群用逗号连接。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取分页页码，从1开始，默认：1
                     * @return PageIndex 分页页码，从1开始，默认：1
                     * 
                     */
                    uint64_t GetPageIndex() const;

                    /**
                     * 设置分页页码，从1开始，默认：1
                     * @param _pageIndex 分页页码，从1开始，默认：1
                     * 
                     */
                    void SetPageIndex(const uint64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取分页每页记录数，默认10
                     * @return PageSize 分页每页记录数，默认10
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页每页记录数，默认10
                     * @param _pageSize 分页每页记录数，默认10
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * WeData项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * TKE集群地域
                     */
                    std::string m_tkeRegion;
                    bool m_tkeRegionHasBeenSet;

                    /**
                     * 集群名称。
多个名称用逗号连接。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * TKE集群状态 (Running 运行中 Creating 创建中 Idling 闲置中 Abnormal 异常 Failed 异常 Deleting 删除中 Scaling 规模调整中 Upgrading 升级中 Isolated 欠费隔离中 NodeUpgrading 节点升级中 Recovering 唤醒中 Activating 激活中 MasterScaling Master扩缩容中 Waiting 等待注册 ClusterLevelUpgrading 调整规格中 ResourceIsolate 隔离中 ResourceIsolated 已隔离 ResourceReverse 冲正中 Trading 集群开通中 ResourceReversal 集群冲正 ClusterLevelTrading 集群变配交易中)
多个状态用逗号连接。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否安装Agent，true: 是，false: 否
                     */
                    bool m_hasAgent;
                    bool m_hasAgentHasBeenSet;

                    /**
                     * 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
多个集群用逗号连接。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINLONGTKECLUSTERLISTREQUEST_H_
