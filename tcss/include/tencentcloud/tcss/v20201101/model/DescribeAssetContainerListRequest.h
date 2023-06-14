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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetContainerList请求参数结构体
                */
                class DescribeAssetContainerListRequest : public AbstractModel
                {
                public:
                    DescribeAssetContainerListRequest();
                    ~DescribeAssetContainerListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要返回的数量，默认为10，最大值为100
                     * @return Limit 需要返回的数量，默认为10，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为100
                     * @param _limit 需要返回的数量，默认为10，最大值为100
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取过滤条件。
<li>ContainerName - String - 是否必填：否 - 容器名称模糊搜索</li>
<li>Status - String - 是否必填：否 - 容器运行状态筛选，0："created",1："running", 2："paused", 3："restarting", 4："removing", 5："exited", 6："dead" </li>
<li>Runas - String - 是否必填：否 - 运行用户筛选</li>
<li>ImageName- String - 是否必填：否 - 镜像名称搜索</li>
<li>HostIP- string - 是否必填：否 - 主机ip搜索</li>
<li>OrderBy - String 是否必填：否 -排序字段，支持：cpu_usage, mem_usage的动态排序 ["cpu_usage","+"]  '+'升序、'-'降序</li>
<li>NetStatus - String -是否必填: 否 -  容器网络状态筛选 normal isolated isolating isolate_failed restoring restore_failed</li>
<li>PodID - String -是否必填: 否 - PodID筛选</li>
<li>NodeUniqueID - String -是否必填: 否 - SuperNode筛选</li>
<li>PodUid - String -是否必填: 否 - Pod筛选</li>
<li>PodIP - String -是否必填: 否 - PodIP筛选</li>
<li>NodeType - String -是否必填: 否 - 节点类型筛选:NORMAL:普通节点;SUPER:超级节点</li>
                     * @return Filters 过滤条件。
<li>ContainerName - String - 是否必填：否 - 容器名称模糊搜索</li>
<li>Status - String - 是否必填：否 - 容器运行状态筛选，0："created",1："running", 2："paused", 3："restarting", 4："removing", 5："exited", 6："dead" </li>
<li>Runas - String - 是否必填：否 - 运行用户筛选</li>
<li>ImageName- String - 是否必填：否 - 镜像名称搜索</li>
<li>HostIP- string - 是否必填：否 - 主机ip搜索</li>
<li>OrderBy - String 是否必填：否 -排序字段，支持：cpu_usage, mem_usage的动态排序 ["cpu_usage","+"]  '+'升序、'-'降序</li>
<li>NetStatus - String -是否必填: 否 -  容器网络状态筛选 normal isolated isolating isolate_failed restoring restore_failed</li>
<li>PodID - String -是否必填: 否 - PodID筛选</li>
<li>NodeUniqueID - String -是否必填: 否 - SuperNode筛选</li>
<li>PodUid - String -是否必填: 否 - Pod筛选</li>
<li>PodIP - String -是否必填: 否 - PodIP筛选</li>
<li>NodeType - String -是否必填: 否 - 节点类型筛选:NORMAL:普通节点;SUPER:超级节点</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>ContainerName - String - 是否必填：否 - 容器名称模糊搜索</li>
<li>Status - String - 是否必填：否 - 容器运行状态筛选，0："created",1："running", 2："paused", 3："restarting", 4："removing", 5："exited", 6："dead" </li>
<li>Runas - String - 是否必填：否 - 运行用户筛选</li>
<li>ImageName- String - 是否必填：否 - 镜像名称搜索</li>
<li>HostIP- string - 是否必填：否 - 主机ip搜索</li>
<li>OrderBy - String 是否必填：否 -排序字段，支持：cpu_usage, mem_usage的动态排序 ["cpu_usage","+"]  '+'升序、'-'降序</li>
<li>NetStatus - String -是否必填: 否 -  容器网络状态筛选 normal isolated isolating isolate_failed restoring restore_failed</li>
<li>PodID - String -是否必填: 否 - PodID筛选</li>
<li>NodeUniqueID - String -是否必填: 否 - SuperNode筛选</li>
<li>PodUid - String -是否必填: 否 - Pod筛选</li>
<li>PodIP - String -是否必填: 否 - PodIP筛选</li>
<li>NodeType - String -是否必填: 否 - 节点类型筛选:NORMAL:普通节点;SUPER:超级节点</li>
                     * @param _filters 过滤条件。
<li>ContainerName - String - 是否必填：否 - 容器名称模糊搜索</li>
<li>Status - String - 是否必填：否 - 容器运行状态筛选，0："created",1："running", 2："paused", 3："restarting", 4："removing", 5："exited", 6："dead" </li>
<li>Runas - String - 是否必填：否 - 运行用户筛选</li>
<li>ImageName- String - 是否必填：否 - 镜像名称搜索</li>
<li>HostIP- string - 是否必填：否 - 主机ip搜索</li>
<li>OrderBy - String 是否必填：否 -排序字段，支持：cpu_usage, mem_usage的动态排序 ["cpu_usage","+"]  '+'升序、'-'降序</li>
<li>NetStatus - String -是否必填: 否 -  容器网络状态筛选 normal isolated isolating isolate_failed restoring restore_failed</li>
<li>PodID - String -是否必填: 否 - PodID筛选</li>
<li>NodeUniqueID - String -是否必填: 否 - SuperNode筛选</li>
<li>PodUid - String -是否必填: 否 - Pod筛选</li>
<li>PodIP - String -是否必填: 否 - PodIP筛选</li>
<li>NodeType - String -是否必填: 否 - 节点类型筛选:NORMAL:普通节点;SUPER:超级节点</li>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

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
                     * 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。
<li>ContainerName - String - 是否必填：否 - 容器名称模糊搜索</li>
<li>Status - String - 是否必填：否 - 容器运行状态筛选，0："created",1："running", 2："paused", 3："restarting", 4："removing", 5："exited", 6："dead" </li>
<li>Runas - String - 是否必填：否 - 运行用户筛选</li>
<li>ImageName- String - 是否必填：否 - 镜像名称搜索</li>
<li>HostIP- string - 是否必填：否 - 主机ip搜索</li>
<li>OrderBy - String 是否必填：否 -排序字段，支持：cpu_usage, mem_usage的动态排序 ["cpu_usage","+"]  '+'升序、'-'降序</li>
<li>NetStatus - String -是否必填: 否 -  容器网络状态筛选 normal isolated isolating isolate_failed restoring restore_failed</li>
<li>PodID - String -是否必填: 否 - PodID筛选</li>
<li>NodeUniqueID - String -是否必填: 否 - SuperNode筛选</li>
<li>PodUid - String -是否必填: 否 - Pod筛选</li>
<li>PodIP - String -是否必填: 否 - PodIP筛选</li>
<li>NodeType - String -是否必填: 否 - 节点类型筛选:NORMAL:普通节点;SUPER:超级节点</li>
                     */
                    std::vector<AssetFilters> m_filters;
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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERLISTREQUEST_H_
