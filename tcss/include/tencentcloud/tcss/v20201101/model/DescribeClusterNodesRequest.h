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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERNODESREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeClusterNodes请求参数结构体
                */
                class DescribeClusterNodesRequest : public AbstractModel
                {
                public:
                    DescribeClusterNodesRequest();
                    ~DescribeClusterNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群Id,不输入表示查询所有
                     * @return ClusterId 集群Id,不输入表示查询所有
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id,不输入表示查询所有
                     * @param _clusterId 集群Id,不输入表示查询所有
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每次查询的最大记录数量
                     * @return Limit 每次查询的最大记录数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每次查询的最大记录数量
                     * @param _limit 每次查询的最大记录数量
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Name 可取值：
DefendStatus（防护状态）:
	Defended 已防护
	UnDefended 未防护
AgentStatus (容器agent状态):
 	OFFLINE 离线
 	ONLINE 在线
 	UNINSTALL 未安装
InstanceState (节点状态):
  	Running 运行中
  	Ready 准备
  	Notready 未准备好
  	Initializing 初始化
  	Failed 失败
  	Error 错误
InstanceRole (节点角色)
    WORKER 工作节点
    MASTER_ETCD 主节点
    SUPER 超级节点
                     * @return Filters Name 可取值：
DefendStatus（防护状态）:
	Defended 已防护
	UnDefended 未防护
AgentStatus (容器agent状态):
 	OFFLINE 离线
 	ONLINE 在线
 	UNINSTALL 未安装
InstanceState (节点状态):
  	Running 运行中
  	Ready 准备
  	Notready 未准备好
  	Initializing 初始化
  	Failed 失败
  	Error 错误
InstanceRole (节点角色)
    WORKER 工作节点
    MASTER_ETCD 主节点
    SUPER 超级节点
                     * 
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置Name 可取值：
DefendStatus（防护状态）:
	Defended 已防护
	UnDefended 未防护
AgentStatus (容器agent状态):
 	OFFLINE 离线
 	ONLINE 在线
 	UNINSTALL 未安装
InstanceState (节点状态):
  	Running 运行中
  	Ready 准备
  	Notready 未准备好
  	Initializing 初始化
  	Failed 失败
  	Error 错误
InstanceRole (节点角色)
    WORKER 工作节点
    MASTER_ETCD 主节点
    SUPER 超级节点
                     * @param _filters Name 可取值：
DefendStatus（防护状态）:
	Defended 已防护
	UnDefended 未防护
AgentStatus (容器agent状态):
 	OFFLINE 离线
 	ONLINE 在线
 	UNINSTALL 未安装
InstanceState (节点状态):
  	Running 运行中
  	Ready 准备
  	Notready 未准备好
  	Initializing 初始化
  	Failed 失败
  	Error 错误
InstanceRole (节点角色)
    WORKER 工作节点
    MASTER_ETCD 主节点
    SUPER 超级节点
                     * 
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取排序方式 asc,desc
                     * @return Order 排序方式 asc,desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式 asc,desc
                     * @param _order 排序方式 asc,desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 集群Id,不输入表示查询所有
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每次查询的最大记录数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Name 可取值：
DefendStatus（防护状态）:
	Defended 已防护
	UnDefended 未防护
AgentStatus (容器agent状态):
 	OFFLINE 离线
 	ONLINE 在线
 	UNINSTALL 未安装
InstanceState (节点状态):
  	Running 运行中
  	Ready 准备
  	Notready 未准备好
  	Initializing 初始化
  	Failed 失败
  	Error 错误
InstanceRole (节点角色)
    WORKER 工作节点
    MASTER_ETCD 主节点
    SUPER 超级节点
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式 asc,desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERNODESREQUEST_H_
