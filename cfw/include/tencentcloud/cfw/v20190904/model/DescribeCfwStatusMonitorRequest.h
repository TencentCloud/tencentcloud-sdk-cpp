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
                     * 获取操作类型。describe_scene 表示发现场景和二级下拉选项；fetch_scene 表示获取具体场景快照。必填。
                     * @return Op 操作类型。describe_scene 表示发现场景和二级下拉选项；fetch_scene 表示获取具体场景快照。必填。
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置操作类型。describe_scene 表示发现场景和二级下拉选项；fetch_scene 表示获取具体场景快照。必填。
                     * @param _op 操作类型。describe_scene 表示发现场景和二级下拉选项；fetch_scene 表示获取具体场景快照。必填。
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
                     * 获取防火墙场景类型。支持 internet_edge（互联网边界防火墙）、nat_cluster（NAT边界防火墙-集群）、nat_ha（NAT边界防火墙-主备）、vpc_cluster（VPC边界防火墙-集群）、vpc_ha（VPC边界防火墙-主备）。必填。
                     * @return FirewallType 防火墙场景类型。支持 internet_edge（互联网边界防火墙）、nat_cluster（NAT边界防火墙-集群）、nat_ha（NAT边界防火墙-主备）、vpc_cluster（VPC边界防火墙-集群）、vpc_ha（VPC边界防火墙-主备）。必填。
                     * 
                     */
                    std::string GetFirewallType() const;

                    /**
                     * 设置防火墙场景类型。支持 internet_edge（互联网边界防火墙）、nat_cluster（NAT边界防火墙-集群）、nat_ha（NAT边界防火墙-主备）、vpc_cluster（VPC边界防火墙-集群）、vpc_ha（VPC边界防火墙-主备）。必填。
                     * @param _firewallType 防火墙场景类型。支持 internet_edge（互联网边界防火墙）、nat_cluster（NAT边界防火墙-集群）、nat_ha（NAT边界防火墙-主备）、vpc_cluster（VPC边界防火墙-集群）、vpc_ha（VPC边界防火墙-主备）。必填。
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
                     * 获取二级下拉选项 ID。fetch_scene 按需传入，值来自 describe_scene 返回的 selection.available_options[].id；internet_edge 为地域，NAT 为实例 ID，VPC 带宽场景为防火墙组 ID；vpc_cluster 的 connections 汇总场景会忽略该参数。
                     * @return SelectionId 二级下拉选项 ID。fetch_scene 按需传入，值来自 describe_scene 返回的 selection.available_options[].id；internet_edge 为地域，NAT 为实例 ID，VPC 带宽场景为防火墙组 ID；vpc_cluster 的 connections 汇总场景会忽略该参数。
                     * 
                     */
                    std::string GetSelectionId() const;

                    /**
                     * 设置二级下拉选项 ID。fetch_scene 按需传入，值来自 describe_scene 返回的 selection.available_options[].id；internet_edge 为地域，NAT 为实例 ID，VPC 带宽场景为防火墙组 ID；vpc_cluster 的 connections 汇总场景会忽略该参数。
                     * @param _selectionId 二级下拉选项 ID。fetch_scene 按需传入，值来自 describe_scene 返回的 selection.available_options[].id；internet_edge 为地域，NAT 为实例 ID，VPC 带宽场景为防火墙组 ID；vpc_cluster 的 connections 汇总场景会忽略该参数。
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
                     * 获取二级下拉显示名称。可替代 SelectionId 按名称匹配，值来自 describe_scene 返回的 selection.available_options[].name。
                     * @return SelectionName 二级下拉显示名称。可替代 SelectionId 按名称匹配，值来自 describe_scene 返回的 selection.available_options[].name。
                     * 
                     */
                    std::string GetSelectionName() const;

                    /**
                     * 设置二级下拉显示名称。可替代 SelectionId 按名称匹配，值来自 describe_scene 返回的 selection.available_options[].name。
                     * @param _selectionName 二级下拉显示名称。可替代 SelectionId 按名称匹配，值来自 describe_scene 返回的 selection.available_options[].name。
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
                     * 获取引擎实例 ID。主要用于 vpc_ha 下一个防火墙组对应多个实例的场景，优先使用 describe_scene 返回的 selection.available_options[].instance_id；如只有 instance_ids，则从数组中选择一个字符串值。
                     * @return SelectionInstanceId 引擎实例 ID。主要用于 vpc_ha 下一个防火墙组对应多个实例的场景，优先使用 describe_scene 返回的 selection.available_options[].instance_id；如只有 instance_ids，则从数组中选择一个字符串值。
                     * 
                     */
                    std::string GetSelectionInstanceId() const;

                    /**
                     * 设置引擎实例 ID。主要用于 vpc_ha 下一个防火墙组对应多个实例的场景，优先使用 describe_scene 返回的 selection.available_options[].instance_id；如只有 instance_ids，则从数组中选择一个字符串值。
                     * @param _selectionInstanceId 引擎实例 ID。主要用于 vpc_ha 下一个防火墙组对应多个实例的场景，优先使用 describe_scene 返回的 selection.available_options[].instance_id；如只有 instance_ids，则从数组中选择一个字符串值。
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
                     * 获取指标页签。fetch_scene 可传；不传时使用该场景默认值。支持 bandwidth、connections。
                     * @return Metric 指标页签。fetch_scene 可传；不传时使用该场景默认值。支持 bandwidth、connections。
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标页签。fetch_scene 可传；不传时使用该场景默认值。支持 bandwidth、connections。
                     * @param _metric 指标页签。fetch_scene 可传；不传时使用该场景默认值。支持 bandwidth、connections。
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
                     * 获取指标下的视角。fetch_scene 可传；不传时使用该场景默认值。支持 ip、subnet、session、switch、vpc，实际可用组合以 describe_scene 返回为准。
                     * @return Perspective 指标下的视角。fetch_scene 可传；不传时使用该场景默认值。支持 ip、subnet、session、switch、vpc，实际可用组合以 describe_scene 返回为准。
                     * 
                     */
                    std::string GetPerspective() const;

                    /**
                     * 设置指标下的视角。fetch_scene 可传；不传时使用该场景默认值。支持 ip、subnet、session、switch、vpc，实际可用组合以 describe_scene 返回为准。
                     * @param _perspective 指标下的视角。fetch_scene 可传；不传时使用该场景默认值。支持 ip、subnet、session、switch、vpc，实际可用组合以 describe_scene 返回为准。
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
                     * 获取NAT 主备连接数 IP 视角范围。external 表示外部 IP，asset 表示资产 IP；仅 nat_ha + connections + ip 使用，其他组合传入将返回 InvalidParameter。
                     * @return IpScope NAT 主备连接数 IP 视角范围。external 表示外部 IP，asset 表示资产 IP；仅 nat_ha + connections + ip 使用，其他组合传入将返回 InvalidParameter。
                     * 
                     */
                    std::string GetIpScope() const;

                    /**
                     * 设置NAT 主备连接数 IP 视角范围。external 表示外部 IP，asset 表示资产 IP；仅 nat_ha + connections + ip 使用，其他组合传入将返回 InvalidParameter。
                     * @param _ipScope NAT 主备连接数 IP 视角范围。external 表示外部 IP，asset 表示资产 IP；仅 nat_ha + connections + ip 使用，其他组合传入将返回 InvalidParameter。
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
                     * 获取预设时间范围。默认 24h；fetch_scene 使用。支持 5m、15m、30m、1h、6h、24h、3d、7d、30d、today、yesterday、day_before_yesterday、this_week、last_week、this_month。
                     * @return TimePreset 预设时间范围。默认 24h；fetch_scene 使用。支持 5m、15m、30m、1h、6h、24h、3d、7d、30d、today、yesterday、day_before_yesterday、this_week、last_week、this_month。
                     * 
                     */
                    std::string GetTimePreset() const;

                    /**
                     * 设置预设时间范围。默认 24h；fetch_scene 使用。支持 5m、15m、30m、1h、6h、24h、3d、7d、30d、today、yesterday、day_before_yesterday、this_week、last_week、this_month。
                     * @param _timePreset 预设时间范围。默认 24h；fetch_scene 使用。支持 5m、15m、30m、1h、6h、24h、3d、7d、30d、today、yesterday、day_before_yesterday、this_week、last_week、this_month。
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
                     * 获取自定义开始时间。格式 YYYY-MM-DD HH:MM:SS；必须与 EndTime 同时传，最大跨度 30 天。
                     * @return StartTime 自定义开始时间。格式 YYYY-MM-DD HH:MM:SS；必须与 EndTime 同时传，最大跨度 30 天。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置自定义开始时间。格式 YYYY-MM-DD HH:MM:SS；必须与 EndTime 同时传，最大跨度 30 天。
                     * @param _startTime 自定义开始时间。格式 YYYY-MM-DD HH:MM:SS；必须与 EndTime 同时传，最大跨度 30 天。
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
                     * 获取自定义结束时间。格式 YYYY-MM-DD HH:MM:SS；必须与 StartTime 同时传，最大跨度 30 天。
                     * @return EndTime 自定义结束时间。格式 YYYY-MM-DD HH:MM:SS；必须与 StartTime 同时传，最大跨度 30 天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置自定义结束时间。格式 YYYY-MM-DD HH:MM:SS；必须与 StartTime 同时传，最大跨度 30 天。
                     * @param _endTime 自定义结束时间。格式 YYYY-MM-DD HH:MM:SS；必须与 StartTime 同时传，最大跨度 30 天。
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
                     * 获取页码，从 1 开始。默认 1；fetch_scene 列表视角使用。
                     * @return Page 页码，从 1 开始。默认 1；fetch_scene 列表视角使用。
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页码，从 1 开始。默认 1；fetch_scene 列表视角使用。
                     * @param _page 页码，从 1 开始。默认 1；fetch_scene 列表视角使用。
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
                     * 获取每页条数。默认 10，取值 1 至 100；fetch_scene 列表视角使用。
                     * @return Limit 每页条数。默认 10，取值 1 至 100；fetch_scene 列表视角使用。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数。默认 10，取值 1 至 100；fetch_scene 列表视角使用。
                     * @param _limit 每页条数。默认 10，取值 1 至 100；fetch_scene 列表视角使用。
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
                     * 获取是否只获取概览数据。true 时 fetch_scene 只请求 overview，跳过 table/detail，适合只看场景快照汇总。
                     * @return OverviewOnly 是否只获取概览数据。true 时 fetch_scene 只请求 overview，跳过 table/detail，适合只看场景快照汇总。
                     * 
                     */
                    bool GetOverviewOnly() const;

                    /**
                     * 设置是否只获取概览数据。true 时 fetch_scene 只请求 overview，跳过 table/detail，适合只看场景快照汇总。
                     * @param _overviewOnly 是否只获取概览数据。true 时 fetch_scene 只请求 overview，跳过 table/detail，适合只看场景快照汇总。
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
                     * 获取原始偏移量覆盖。可选，传入后覆盖 Page 计算结果；取值 0 至 10000。
                     * @return Offset 原始偏移量覆盖。可选，传入后覆盖 Page 计算结果；取值 0 至 10000。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置原始偏移量覆盖。可选，传入后覆盖 Page 计算结果；取值 0 至 10000。
                     * @param _offset 原始偏移量覆盖。可选，传入后覆盖 Page 计算结果；取值 0 至 10000。
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
                     * 获取排序字段。可选。互联网边界 IP、NAT IP/子网视角支持 InputMax、OutputMax；VPC switch 视角支持 SwitchName；VPC ip/vpc 视角支持 FlowMax；其他组合不要传。
                     * @return SortBy 排序字段。可选。互联网边界 IP、NAT IP/子网视角支持 InputMax、OutputMax；VPC switch 视角支持 SwitchName；VPC ip/vpc 视角支持 FlowMax；其他组合不要传。
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段。可选。互联网边界 IP、NAT IP/子网视角支持 InputMax、OutputMax；VPC switch 视角支持 SwitchName；VPC ip/vpc 视角支持 FlowMax；其他组合不要传。
                     * @param _sortBy 排序字段。可选。互联网边界 IP、NAT IP/子网视角支持 InputMax、OutputMax；VPC switch 视角支持 SwitchName；VPC ip/vpc 视角支持 FlowMax；其他组合不要传。
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
                     * 获取排序方向。默认 desc；支持 asc、desc。
                     * @return SortOrder 排序方向。默认 desc；支持 asc、desc。
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序方向。默认 desc；支持 asc、desc。
                     * @param _sortOrder 排序方向。默认 desc；支持 asc、desc。
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
                     * 获取过滤条件列表。保留字段；当前公开 fetch_scene 场景均不支持，调用方不要传。
                     * @return Filters 过滤条件列表。保留字段；当前公开 fetch_scene 场景均不支持，调用方不要传。
                     * 
                     */
                    std::vector<CfwStatusMonitorFilter> GetFilters() const;

                    /**
                     * 设置过滤条件列表。保留字段；当前公开 fetch_scene 场景均不支持，调用方不要传。
                     * @param _filters 过滤条件列表。保留字段；当前公开 fetch_scene 场景均不支持，调用方不要传。
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
                     * 操作类型。describe_scene 表示发现场景和二级下拉选项；fetch_scene 表示获取具体场景快照。必填。
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * 防火墙场景类型。支持 internet_edge（互联网边界防火墙）、nat_cluster（NAT边界防火墙-集群）、nat_ha（NAT边界防火墙-主备）、vpc_cluster（VPC边界防火墙-集群）、vpc_ha（VPC边界防火墙-主备）。必填。
                     */
                    std::string m_firewallType;
                    bool m_firewallTypeHasBeenSet;

                    /**
                     * 二级下拉选项 ID。fetch_scene 按需传入，值来自 describe_scene 返回的 selection.available_options[].id；internet_edge 为地域，NAT 为实例 ID，VPC 带宽场景为防火墙组 ID；vpc_cluster 的 connections 汇总场景会忽略该参数。
                     */
                    std::string m_selectionId;
                    bool m_selectionIdHasBeenSet;

                    /**
                     * 二级下拉显示名称。可替代 SelectionId 按名称匹配，值来自 describe_scene 返回的 selection.available_options[].name。
                     */
                    std::string m_selectionName;
                    bool m_selectionNameHasBeenSet;

                    /**
                     * 引擎实例 ID。主要用于 vpc_ha 下一个防火墙组对应多个实例的场景，优先使用 describe_scene 返回的 selection.available_options[].instance_id；如只有 instance_ids，则从数组中选择一个字符串值。
                     */
                    std::string m_selectionInstanceId;
                    bool m_selectionInstanceIdHasBeenSet;

                    /**
                     * 指标页签。fetch_scene 可传；不传时使用该场景默认值。支持 bandwidth、connections。
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 指标下的视角。fetch_scene 可传；不传时使用该场景默认值。支持 ip、subnet、session、switch、vpc，实际可用组合以 describe_scene 返回为准。
                     */
                    std::string m_perspective;
                    bool m_perspectiveHasBeenSet;

                    /**
                     * NAT 主备连接数 IP 视角范围。external 表示外部 IP，asset 表示资产 IP；仅 nat_ha + connections + ip 使用，其他组合传入将返回 InvalidParameter。
                     */
                    std::string m_ipScope;
                    bool m_ipScopeHasBeenSet;

                    /**
                     * 预设时间范围。默认 24h；fetch_scene 使用。支持 5m、15m、30m、1h、6h、24h、3d、7d、30d、today、yesterday、day_before_yesterday、this_week、last_week、this_month。
                     */
                    std::string m_timePreset;
                    bool m_timePresetHasBeenSet;

                    /**
                     * 自定义开始时间。格式 YYYY-MM-DD HH:MM:SS；必须与 EndTime 同时传，最大跨度 30 天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 自定义结束时间。格式 YYYY-MM-DD HH:MM:SS；必须与 StartTime 同时传，最大跨度 30 天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 页码，从 1 开始。默认 1；fetch_scene 列表视角使用。
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页条数。默认 10，取值 1 至 100；fetch_scene 列表视角使用。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否只获取概览数据。true 时 fetch_scene 只请求 overview，跳过 table/detail，适合只看场景快照汇总。
                     */
                    bool m_overviewOnly;
                    bool m_overviewOnlyHasBeenSet;

                    /**
                     * 原始偏移量覆盖。可选，传入后覆盖 Page 计算结果；取值 0 至 10000。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段。可选。互联网边界 IP、NAT IP/子网视角支持 InputMax、OutputMax；VPC switch 视角支持 SwitchName；VPC ip/vpc 视角支持 FlowMax；其他组合不要传。
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 排序方向。默认 desc；支持 asc、desc。
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * 过滤条件列表。保留字段；当前公开 fetch_scene 场景均不支持，调用方不要传。
                     */
                    std::vector<CfwStatusMonitorFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORREQUEST_H_
