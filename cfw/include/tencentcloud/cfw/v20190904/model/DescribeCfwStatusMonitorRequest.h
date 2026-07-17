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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CfwStatusMonitorFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwStatusMonitor请求参数结构体
                */
                class DescribeCfwStatusMonitorRequest : public AbstractModel
                {
                public:
                    DescribeCfwStatusMonitorRequest();
                    ~DescribeCfwStatusMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>操作类型。describe_scene 表示发现场景和二级下拉选项；fetch_scene 表示获取具体场景快照。必填。</p>
                     * @return Op <p>操作类型。describe_scene 表示发现场景和二级下拉选项；fetch_scene 表示获取具体场景快照。必填。</p>
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置<p>操作类型。describe_scene 表示发现场景和二级下拉选项；fetch_scene 表示获取具体场景快照。必填。</p>
                     * @param _op <p>操作类型。describe_scene 表示发现场景和二级下拉选项；fetch_scene 表示获取具体场景快照。必填。</p>
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取<p>防火墙场景类型。支持 internet_edge（互联网边界防火墙）、nat_cluster（NAT边界防火墙-集群）、nat_ha（NAT边界防火墙-主备）、vpc_cluster（VPC边界防火墙-集群）、vpc_ha（VPC边界防火墙-主备）。必填。</p>
                     * @return FirewallType <p>防火墙场景类型。支持 internet_edge（互联网边界防火墙）、nat_cluster（NAT边界防火墙-集群）、nat_ha（NAT边界防火墙-主备）、vpc_cluster（VPC边界防火墙-集群）、vpc_ha（VPC边界防火墙-主备）。必填。</p>
                     * 
                     */
                    std::string GetFirewallType() const;

                    /**
                     * 设置<p>防火墙场景类型。支持 internet_edge（互联网边界防火墙）、nat_cluster（NAT边界防火墙-集群）、nat_ha（NAT边界防火墙-主备）、vpc_cluster（VPC边界防火墙-集群）、vpc_ha（VPC边界防火墙-主备）。必填。</p>
                     * @param _firewallType <p>防火墙场景类型。支持 internet_edge（互联网边界防火墙）、nat_cluster（NAT边界防火墙-集群）、nat_ha（NAT边界防火墙-主备）、vpc_cluster（VPC边界防火墙-集群）、vpc_ha（VPC边界防火墙-主备）。必填。</p>
                     * 
                     */
                    void SetFirewallType(const std::string& _firewallType);

                    /**
                     * 判断参数 FirewallType 是否已赋值
                     * @return FirewallType 是否已赋值
                     * 
                     */
                    bool FirewallTypeHasBeenSet() const;

                    /**
                     * 获取<p>二级下拉选项 ID。fetch_scene 按需传入；internet_edge 为地域，NAT 为实例 ID，VPC 带宽场景为防火墙组 ID；vpc_cluster 的 connections 汇总场景会忽略该参数。</p>
                     * @return SelectionId <p>二级下拉选项 ID。fetch_scene 按需传入；internet_edge 为地域，NAT 为实例 ID，VPC 带宽场景为防火墙组 ID；vpc_cluster 的 connections 汇总场景会忽略该参数。</p>
                     * 
                     */
                    std::string GetSelectionId() const;

                    /**
                     * 设置<p>二级下拉选项 ID。fetch_scene 按需传入；internet_edge 为地域，NAT 为实例 ID，VPC 带宽场景为防火墙组 ID；vpc_cluster 的 connections 汇总场景会忽略该参数。</p>
                     * @param _selectionId <p>二级下拉选项 ID。fetch_scene 按需传入；internet_edge 为地域，NAT 为实例 ID，VPC 带宽场景为防火墙组 ID；vpc_cluster 的 connections 汇总场景会忽略该参数。</p>
                     * 
                     */
                    void SetSelectionId(const std::string& _selectionId);

                    /**
                     * 判断参数 SelectionId 是否已赋值
                     * @return SelectionId 是否已赋值
                     * 
                     */
                    bool SelectionIdHasBeenSet() const;

                    /**
                     * 获取<p>二级下拉显示名称。可替代 SelectionId 按名称匹配。</p>
                     * @return SelectionName <p>二级下拉显示名称。可替代 SelectionId 按名称匹配。</p>
                     * 
                     */
                    std::string GetSelectionName() const;

                    /**
                     * 设置<p>二级下拉显示名称。可替代 SelectionId 按名称匹配。</p>
                     * @param _selectionName <p>二级下拉显示名称。可替代 SelectionId 按名称匹配。</p>
                     * 
                     */
                    void SetSelectionName(const std::string& _selectionName);

                    /**
                     * 判断参数 SelectionName 是否已赋值
                     * @return SelectionName 是否已赋值
                     * 
                     */
                    bool SelectionNameHasBeenSet() const;

                    /**
                     * 获取<p>引擎实例 ID。主要用于 vpc_ha 下一个防火墙组对应多个实例的场景。</p>
                     * @return SelectionInstanceId <p>引擎实例 ID。主要用于 vpc_ha 下一个防火墙组对应多个实例的场景。</p>
                     * 
                     */
                    std::string GetSelectionInstanceId() const;

                    /**
                     * 设置<p>引擎实例 ID。主要用于 vpc_ha 下一个防火墙组对应多个实例的场景。</p>
                     * @param _selectionInstanceId <p>引擎实例 ID。主要用于 vpc_ha 下一个防火墙组对应多个实例的场景。</p>
                     * 
                     */
                    void SetSelectionInstanceId(const std::string& _selectionInstanceId);

                    /**
                     * 判断参数 SelectionInstanceId 是否已赋值
                     * @return SelectionInstanceId 是否已赋值
                     * 
                     */
                    bool SelectionInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>指标页签。fetch_scene 可传；不传时使用该场景默认值。支持 bandwidth、connections。</p>
                     * @return Metric <p>指标页签。fetch_scene 可传；不传时使用该场景默认值。支持 bandwidth、connections。</p>
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置<p>指标页签。fetch_scene 可传；不传时使用该场景默认值。支持 bandwidth、connections。</p>
                     * @param _metric <p>指标页签。fetch_scene 可传；不传时使用该场景默认值。支持 bandwidth、connections。</p>
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取<p>指标下的视角。fetch_scene 可传；不传时使用该场景默认值。支持 ip、subnet、session、switch、vpc，实际可用组合以 describe_scene 返回为准。</p>
                     * @return Perspective <p>指标下的视角。fetch_scene 可传；不传时使用该场景默认值。支持 ip、subnet、session、switch、vpc，实际可用组合以 describe_scene 返回为准。</p>
                     * 
                     */
                    std::string GetPerspective() const;

                    /**
                     * 设置<p>指标下的视角。fetch_scene 可传；不传时使用该场景默认值。支持 ip、subnet、session、switch、vpc，实际可用组合以 describe_scene 返回为准。</p>
                     * @param _perspective <p>指标下的视角。fetch_scene 可传；不传时使用该场景默认值。支持 ip、subnet、session、switch、vpc，实际可用组合以 describe_scene 返回为准。</p>
                     * 
                     */
                    void SetPerspective(const std::string& _perspective);

                    /**
                     * 判断参数 Perspective 是否已赋值
                     * @return Perspective 是否已赋值
                     * 
                     */
                    bool PerspectiveHasBeenSet() const;

                    /**
                     * 获取<p>NAT 主备连接数 IP 视角范围。external 表示外部 IP，asset 表示资产 IP；仅 nat_ha + connections + ip 使用。</p>
                     * @return IpScope <p>NAT 主备连接数 IP 视角范围。external 表示外部 IP，asset 表示资产 IP；仅 nat_ha + connections + ip 使用。</p>
                     * 
                     */
                    std::string GetIpScope() const;

                    /**
                     * 设置<p>NAT 主备连接数 IP 视角范围。external 表示外部 IP，asset 表示资产 IP；仅 nat_ha + connections + ip 使用。</p>
                     * @param _ipScope <p>NAT 主备连接数 IP 视角范围。external 表示外部 IP，asset 表示资产 IP；仅 nat_ha + connections + ip 使用。</p>
                     * 
                     */
                    void SetIpScope(const std::string& _ipScope);

                    /**
                     * 判断参数 IpScope 是否已赋值
                     * @return IpScope 是否已赋值
                     * 
                     */
                    bool IpScopeHasBeenSet() const;

                    /**
                     * 获取<p>预设时间范围。默认 24h；fetch_scene 使用。支持 5m、15m、30m、1h、6h、24h、3d、7d、30d、today、yesterday、day_before_yesterday、this_week、last_week、this_month。</p>
                     * @return TimePreset <p>预设时间范围。默认 24h；fetch_scene 使用。支持 5m、15m、30m、1h、6h、24h、3d、7d、30d、today、yesterday、day_before_yesterday、this_week、last_week、this_month。</p>
                     * 
                     */
                    std::string GetTimePreset() const;

                    /**
                     * 设置<p>预设时间范围。默认 24h；fetch_scene 使用。支持 5m、15m、30m、1h、6h、24h、3d、7d、30d、today、yesterday、day_before_yesterday、this_week、last_week、this_month。</p>
                     * @param _timePreset <p>预设时间范围。默认 24h；fetch_scene 使用。支持 5m、15m、30m、1h、6h、24h、3d、7d、30d、today、yesterday、day_before_yesterday、this_week、last_week、this_month。</p>
                     * 
                     */
                    void SetTimePreset(const std::string& _timePreset);

                    /**
                     * 判断参数 TimePreset 是否已赋值
                     * @return TimePreset 是否已赋值
                     * 
                     */
                    bool TimePresetHasBeenSet() const;

                    /**
                     * 获取<p>自定义开始时间。格式 YYYY-MM-DD HH:MM:SS；必须与 EndTime 同时传，最大跨度 30 天。</p>
                     * @return StartTime <p>自定义开始时间。格式 YYYY-MM-DD HH:MM:SS；必须与 EndTime 同时传，最大跨度 30 天。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>自定义开始时间。格式 YYYY-MM-DD HH:MM:SS；必须与 EndTime 同时传，最大跨度 30 天。</p>
                     * @param _startTime <p>自定义开始时间。格式 YYYY-MM-DD HH:MM:SS；必须与 EndTime 同时传，最大跨度 30 天。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>自定义结束时间。格式 YYYY-MM-DD HH:MM:SS；必须与 StartTime 同时传，最大跨度 30 天。</p>
                     * @return EndTime <p>自定义结束时间。格式 YYYY-MM-DD HH:MM:SS；必须与 StartTime 同时传，最大跨度 30 天。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>自定义结束时间。格式 YYYY-MM-DD HH:MM:SS；必须与 StartTime 同时传，最大跨度 30 天。</p>
                     * @param _endTime <p>自定义结束时间。格式 YYYY-MM-DD HH:MM:SS；必须与 StartTime 同时传，最大跨度 30 天。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>页码，从 1 开始。默认 1；fetch_scene 列表视角使用。</p>
                     * @return Page <p>页码，从 1 开始。默认 1；fetch_scene 列表视角使用。</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页码，从 1 开始。默认 1；fetch_scene 列表视角使用。</p>
                     * @param _page <p>页码，从 1 开始。默认 1；fetch_scene 列表视角使用。</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页条数。默认 10，最大 100；fetch_scene 列表视角使用。</p>
                     * @return Limit <p>每页条数。默认 10，最大 100；fetch_scene 列表视角使用。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页条数。默认 10，最大 100；fetch_scene 列表视角使用。</p>
                     * @param _limit <p>每页条数。默认 10，最大 100；fetch_scene 列表视角使用。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>是否只获取概览数据。true 时 fetch_scene 只请求 overview，跳过 table/detail，适合只看场景快照汇总。</p>
                     * @return OverviewOnly <p>是否只获取概览数据。true 时 fetch_scene 只请求 overview，跳过 table/detail，适合只看场景快照汇总。</p>
                     * 
                     */
                    bool GetOverviewOnly() const;

                    /**
                     * 设置<p>是否只获取概览数据。true 时 fetch_scene 只请求 overview，跳过 table/detail，适合只看场景快照汇总。</p>
                     * @param _overviewOnly <p>是否只获取概览数据。true 时 fetch_scene 只请求 overview，跳过 table/detail，适合只看场景快照汇总。</p>
                     * 
                     */
                    void SetOverviewOnly(const bool& _overviewOnly);

                    /**
                     * 判断参数 OverviewOnly 是否已赋值
                     * @return OverviewOnly 是否已赋值
                     * 
                     */
                    bool OverviewOnlyHasBeenSet() const;

                    /**
                     * 获取<p>原始偏移量覆盖。可选，传入后覆盖 Page 计算结果；必须大于等于 0 且不超过安全上限。</p>
                     * @return Offset <p>原始偏移量覆盖。可选，传入后覆盖 Page 计算结果；必须大于等于 0 且不超过安全上限。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>原始偏移量覆盖。可选，传入后覆盖 Page 计算结果；必须大于等于 0 且不超过安全上限。</p>
                     * @param _offset <p>原始偏移量覆盖。可选，传入后覆盖 Page 计算结果；必须大于等于 0 且不超过安全上限。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>排序字段。可选，只接受当前场景后端允许的安全字段。</p>
                     * @return SortBy <p>排序字段。可选，只接受当前场景后端允许的安全字段。</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序字段。可选，只接受当前场景后端允许的安全字段。</p>
                     * @param _sortBy <p>排序字段。可选，只接受当前场景后端允许的安全字段。</p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>排序方向。默认 desc；支持 asc、desc。</p>
                     * @return SortOrder <p>排序方向。默认 desc；支持 asc、desc。</p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>排序方向。默认 desc；支持 asc、desc。</p>
                     * @param _sortOrder <p>排序方向。默认 desc；支持 asc、desc。</p>
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件列表。可选，最多 5 个；是否支持以及字段名以具体 fetch_scene 场景为准。</p>
                     * @return Filters <p>过滤条件列表。可选，最多 5 个；是否支持以及字段名以具体 fetch_scene 场景为准。</p>
                     * 
                     */
                    std::vector<CfwStatusMonitorFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件列表。可选，最多 5 个；是否支持以及字段名以具体 fetch_scene 场景为准。</p>
                     * @param _filters <p>过滤条件列表。可选，最多 5 个；是否支持以及字段名以具体 fetch_scene 场景为准。</p>
                     * 
                     */
                    void SetFilters(const std::vector<CfwStatusMonitorFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>操作类型。describe_scene 表示发现场景和二级下拉选项；fetch_scene 表示获取具体场景快照。必填。</p>
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * <p>防火墙场景类型。支持 internet_edge（互联网边界防火墙）、nat_cluster（NAT边界防火墙-集群）、nat_ha（NAT边界防火墙-主备）、vpc_cluster（VPC边界防火墙-集群）、vpc_ha（VPC边界防火墙-主备）。必填。</p>
                     */
                    std::string m_firewallType;
                    bool m_firewallTypeHasBeenSet;

                    /**
                     * <p>二级下拉选项 ID。fetch_scene 按需传入；internet_edge 为地域，NAT 为实例 ID，VPC 带宽场景为防火墙组 ID；vpc_cluster 的 connections 汇总场景会忽略该参数。</p>
                     */
                    std::string m_selectionId;
                    bool m_selectionIdHasBeenSet;

                    /**
                     * <p>二级下拉显示名称。可替代 SelectionId 按名称匹配。</p>
                     */
                    std::string m_selectionName;
                    bool m_selectionNameHasBeenSet;

                    /**
                     * <p>引擎实例 ID。主要用于 vpc_ha 下一个防火墙组对应多个实例的场景。</p>
                     */
                    std::string m_selectionInstanceId;
                    bool m_selectionInstanceIdHasBeenSet;

                    /**
                     * <p>指标页签。fetch_scene 可传；不传时使用该场景默认值。支持 bandwidth、connections。</p>
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * <p>指标下的视角。fetch_scene 可传；不传时使用该场景默认值。支持 ip、subnet、session、switch、vpc，实际可用组合以 describe_scene 返回为准。</p>
                     */
                    std::string m_perspective;
                    bool m_perspectiveHasBeenSet;

                    /**
                     * <p>NAT 主备连接数 IP 视角范围。external 表示外部 IP，asset 表示资产 IP；仅 nat_ha + connections + ip 使用。</p>
                     */
                    std::string m_ipScope;
                    bool m_ipScopeHasBeenSet;

                    /**
                     * <p>预设时间范围。默认 24h；fetch_scene 使用。支持 5m、15m、30m、1h、6h、24h、3d、7d、30d、today、yesterday、day_before_yesterday、this_week、last_week、this_month。</p>
                     */
                    std::string m_timePreset;
                    bool m_timePresetHasBeenSet;

                    /**
                     * <p>自定义开始时间。格式 YYYY-MM-DD HH:MM:SS；必须与 EndTime 同时传，最大跨度 30 天。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>自定义结束时间。格式 YYYY-MM-DD HH:MM:SS；必须与 StartTime 同时传，最大跨度 30 天。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>页码，从 1 开始。默认 1；fetch_scene 列表视角使用。</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页条数。默认 10，最大 100；fetch_scene 列表视角使用。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>是否只获取概览数据。true 时 fetch_scene 只请求 overview，跳过 table/detail，适合只看场景快照汇总。</p>
                     */
                    bool m_overviewOnly;
                    bool m_overviewOnlyHasBeenSet;

                    /**
                     * <p>原始偏移量覆盖。可选，传入后覆盖 Page 计算结果；必须大于等于 0 且不超过安全上限。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序字段。可选，只接受当前场景后端允许的安全字段。</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>排序方向。默认 desc；支持 asc、desc。</p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * <p>过滤条件列表。可选，最多 5 个；是否支持以及字段名以具体 fetch_scene 场景为准。</p>
                     */
                    std::vector<CfwStatusMonitorFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORREQUEST_H_
