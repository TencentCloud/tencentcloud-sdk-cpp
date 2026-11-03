/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESLISTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Filters.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInstancesList请求参数结构体
                */
                class DescribeInstancesListRequest : public AbstractModel
                {
                public:
                    DescribeInstancesListRequest();
                    ~DescribeInstancesListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群筛选策略。取值范围：<li>clusterList：表示查询除了已销毁集群之外的集群列表。</li><li>monitorManage：表示查询除了已销毁、创建中以及创建失败的集群之外的集群列表。</li><li>cloudHardwareManage/componentManage：目前这两个取值为预留取值，暂时和monitorManage表示同样的含义。</li></p>
                     * @return DisplayStrategy <p>集群筛选策略。取值范围：<li>clusterList：表示查询除了已销毁集群之外的集群列表。</li><li>monitorManage：表示查询除了已销毁、创建中以及创建失败的集群之外的集群列表。</li><li>cloudHardwareManage/componentManage：目前这两个取值为预留取值，暂时和monitorManage表示同样的含义。</li></p>
                     * 
                     */
                    std::string GetDisplayStrategy() const;

                    /**
                     * 设置<p>集群筛选策略。取值范围：<li>clusterList：表示查询除了已销毁集群之外的集群列表。</li><li>monitorManage：表示查询除了已销毁、创建中以及创建失败的集群之外的集群列表。</li><li>cloudHardwareManage/componentManage：目前这两个取值为预留取值，暂时和monitorManage表示同样的含义。</li></p>
                     * @param _displayStrategy <p>集群筛选策略。取值范围：<li>clusterList：表示查询除了已销毁集群之外的集群列表。</li><li>monitorManage：表示查询除了已销毁、创建中以及创建失败的集群之外的集群列表。</li><li>cloudHardwareManage/componentManage：目前这两个取值为预留取值，暂时和monitorManage表示同样的含义。</li></p>
                     * 
                     */
                    void SetDisplayStrategy(const std::string& _displayStrategy);

                    /**
                     * 判断参数 DisplayStrategy 是否已赋值
                     * @return DisplayStrategy 是否已赋值
                     * 
                     */
                    bool DisplayStrategyHasBeenSet() const;

                    /**
                     * 获取<p>页编号，默认值为0，表示第一页。</p>
                     * @return Offset <p>页编号，默认值为0，表示第一页。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>页编号，默认值为0，表示第一页。</p>
                     * @param _offset <p>页编号，默认值为0，表示第一页。</p>
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
                     * 获取<p>每页返回数量，默认值为100，最大值为100。<br>如果limit和offset都为0，则查询全部记录；</p>
                     * @return Limit <p>每页返回数量，默认值为100，最大值为100。<br>如果limit和offset都为0，则查询全部记录；</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回数量，默认值为100，最大值为100。<br>如果limit和offset都为0，则查询全部记录；</p>
                     * @param _limit <p>每页返回数量，默认值为100，最大值为100。<br>如果limit和offset都为0，则查询全部记录；</p>
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
                     * 获取<p>排序字段。取值范围：<li>clusterId：表示按照实例ID排序。</li><li>addTime：表示按照实例创建时间排序。</li><li>status：表示按照实例的状态码排序。</li></p>
                     * @return OrderField <p>排序字段。取值范围：<li>clusterId：表示按照实例ID排序。</li><li>addTime：表示按照实例创建时间排序。</li><li>status：表示按照实例的状态码排序。</li></p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>排序字段。取值范围：<li>clusterId：表示按照实例ID排序。</li><li>addTime：表示按照实例创建时间排序。</li><li>status：表示按照实例的状态码排序。</li></p>
                     * @param _orderField <p>排序字段。取值范围：<li>clusterId：表示按照实例ID排序。</li><li>addTime：表示按照实例创建时间排序。</li><li>status：表示按照实例的状态码排序。</li></p>
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取<p>按照OrderField升序或者降序进行排序。取值范围：<li>0：表示升序。</li><li>1：表示降序。</li>默认值为0。</p>
                     * @return Asc <p>按照OrderField升序或者降序进行排序。取值范围：<li>0：表示升序。</li><li>1：表示降序。</li>默认值为0。</p>
                     * 
                     */
                    int64_t GetAsc() const;

                    /**
                     * 设置<p>按照OrderField升序或者降序进行排序。取值范围：<li>0：表示升序。</li><li>1：表示降序。</li>默认值为0。</p>
                     * @param _asc <p>按照OrderField升序或者降序进行排序。取值范围：<li>0：表示升序。</li><li>1：表示降序。</li>默认值为0。</p>
                     * 
                     */
                    void SetAsc(const int64_t& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                    /**
                     * 获取<p>自定义查询过滤器。示例：<li>根据ClusterId过滤实例：[{&quot;Name&quot;:&quot;ClusterId&quot;,&quot;Values&quot;:[&quot;emr-xxxxxxxx&quot;]}]</li><li>根据clusterName过滤实例：[{&quot;Name&quot;: &quot;ClusterName&quot;,&quot;Values&quot;: [&quot;cluster_name&quot;]}]</li><li>根据ClusterStatus过滤实例：[{&quot;Name&quot;: &quot;ClusterStatus&quot;,&quot;Values&quot;: [&quot;2&quot;]}]</li></p>
                     * @return Filters <p>自定义查询过滤器。示例：<li>根据ClusterId过滤实例：[{&quot;Name&quot;:&quot;ClusterId&quot;,&quot;Values&quot;:[&quot;emr-xxxxxxxx&quot;]}]</li><li>根据clusterName过滤实例：[{&quot;Name&quot;: &quot;ClusterName&quot;,&quot;Values&quot;: [&quot;cluster_name&quot;]}]</li><li>根据ClusterStatus过滤实例：[{&quot;Name&quot;: &quot;ClusterStatus&quot;,&quot;Values&quot;: [&quot;2&quot;]}]</li></p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>自定义查询过滤器。示例：<li>根据ClusterId过滤实例：[{&quot;Name&quot;:&quot;ClusterId&quot;,&quot;Values&quot;:[&quot;emr-xxxxxxxx&quot;]}]</li><li>根据clusterName过滤实例：[{&quot;Name&quot;: &quot;ClusterName&quot;,&quot;Values&quot;: [&quot;cluster_name&quot;]}]</li><li>根据ClusterStatus过滤实例：[{&quot;Name&quot;: &quot;ClusterStatus&quot;,&quot;Values&quot;: [&quot;2&quot;]}]</li></p>
                     * @param _filters <p>自定义查询过滤器。示例：<li>根据ClusterId过滤实例：[{&quot;Name&quot;:&quot;ClusterId&quot;,&quot;Values&quot;:[&quot;emr-xxxxxxxx&quot;]}]</li><li>根据clusterName过滤实例：[{&quot;Name&quot;: &quot;ClusterName&quot;,&quot;Values&quot;: [&quot;cluster_name&quot;]}]</li><li>根据ClusterStatus过滤实例：[{&quot;Name&quot;: &quot;ClusterStatus&quot;,&quot;Values&quot;: [&quot;2&quot;]}]</li></p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>默认0为普通集群，2为tke集群</p>
                     * @return ClusterType <p>默认0为普通集群，2为tke集群</p>
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置<p>默认0为普通集群，2为tke集群</p>
                     * @param _clusterType <p>默认0为普通集群，2为tke集群</p>
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否返回需要密码信息</p>
                     * @return NeedMcpPasswordInfo <p>是否返回需要密码信息</p>
                     * 
                     */
                    bool GetNeedMcpPasswordInfo() const;

                    /**
                     * 设置<p>是否返回需要密码信息</p>
                     * @param _needMcpPasswordInfo <p>是否返回需要密码信息</p>
                     * 
                     */
                    void SetNeedMcpPasswordInfo(const bool& _needMcpPasswordInfo);

                    /**
                     * 判断参数 NeedMcpPasswordInfo 是否已赋值
                     * @return NeedMcpPasswordInfo 是否已赋值
                     * 
                     */
                    bool NeedMcpPasswordInfoHasBeenSet() const;

                private:

                    /**
                     * <p>集群筛选策略。取值范围：<li>clusterList：表示查询除了已销毁集群之外的集群列表。</li><li>monitorManage：表示查询除了已销毁、创建中以及创建失败的集群之外的集群列表。</li><li>cloudHardwareManage/componentManage：目前这两个取值为预留取值，暂时和monitorManage表示同样的含义。</li></p>
                     */
                    std::string m_displayStrategy;
                    bool m_displayStrategyHasBeenSet;

                    /**
                     * <p>页编号，默认值为0，表示第一页。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页返回数量，默认值为100，最大值为100。<br>如果limit和offset都为0，则查询全部记录；</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序字段。取值范围：<li>clusterId：表示按照实例ID排序。</li><li>addTime：表示按照实例创建时间排序。</li><li>status：表示按照实例的状态码排序。</li></p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>按照OrderField升序或者降序进行排序。取值范围：<li>0：表示升序。</li><li>1：表示降序。</li>默认值为0。</p>
                     */
                    int64_t m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * <p>自定义查询过滤器。示例：<li>根据ClusterId过滤实例：[{&quot;Name&quot;:&quot;ClusterId&quot;,&quot;Values&quot;:[&quot;emr-xxxxxxxx&quot;]}]</li><li>根据clusterName过滤实例：[{&quot;Name&quot;: &quot;ClusterName&quot;,&quot;Values&quot;: [&quot;cluster_name&quot;]}]</li><li>根据ClusterStatus过滤实例：[{&quot;Name&quot;: &quot;ClusterStatus&quot;,&quot;Values&quot;: [&quot;2&quot;]}]</li></p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>默认0为普通集群，2为tke集群</p>
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>是否返回需要密码信息</p>
                     */
                    bool m_needMcpPasswordInfo;
                    bool m_needMcpPasswordInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESLISTREQUEST_H_
