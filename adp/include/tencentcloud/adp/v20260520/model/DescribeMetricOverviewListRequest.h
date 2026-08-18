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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMETRICOVERVIEWLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMETRICOVERVIEWLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/TimeRange.h>
#include <tencentcloud/adp/v20260520/model/ViewScope.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeMetricOverviewList请求参数结构体
                */
                class DescribeMetricOverviewListRequest : public AbstractModel
                {
                public:
                    DescribeMetricOverviewListRequest();
                    ~DescribeMetricOverviewListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>看板域，必填，决定返回哪个域的 KPI 数据</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>RESOURCE_TYPE_MODEL</td><td>1</td><td>模型用量</td></tr><tr><td>RESOURCE_TYPE_PLUGIN</td><td>2</td><td>插件用量</td></tr><tr><td>RESOURCE_TYPE_PLATFORM</td><td>3</td><td>平台功能用量</td></tr><tr><td>RESOURCE_TYPE_MODEL_CONCURRENCY</td><td>4</td><td>模型并发超限</td></tr><tr><td>RESOURCE_TYPE_KB_CAPACITY</td><td>5</td><td>知识库容量</td></tr><tr><td>RESOURCE_TYPE_USAGE_SUMMARY</td><td>6</td><td>用量汇总</td></tr><tr><td>RESOURCE_TYPE_RESOURCE_CONSUME</td><td>7</td><td>资源消耗（计费明细）</td></tr></tbody></table>
                     * @return ResourceType <p>看板域，必填，决定返回哪个域的 KPI 数据</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>RESOURCE_TYPE_MODEL</td><td>1</td><td>模型用量</td></tr><tr><td>RESOURCE_TYPE_PLUGIN</td><td>2</td><td>插件用量</td></tr><tr><td>RESOURCE_TYPE_PLATFORM</td><td>3</td><td>平台功能用量</td></tr><tr><td>RESOURCE_TYPE_MODEL_CONCURRENCY</td><td>4</td><td>模型并发超限</td></tr><tr><td>RESOURCE_TYPE_KB_CAPACITY</td><td>5</td><td>知识库容量</td></tr><tr><td>RESOURCE_TYPE_USAGE_SUMMARY</td><td>6</td><td>用量汇总</td></tr><tr><td>RESOURCE_TYPE_RESOURCE_CONSUME</td><td>7</td><td>资源消耗（计费明细）</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置<p>看板域，必填，决定返回哪个域的 KPI 数据</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>RESOURCE_TYPE_MODEL</td><td>1</td><td>模型用量</td></tr><tr><td>RESOURCE_TYPE_PLUGIN</td><td>2</td><td>插件用量</td></tr><tr><td>RESOURCE_TYPE_PLATFORM</td><td>3</td><td>平台功能用量</td></tr><tr><td>RESOURCE_TYPE_MODEL_CONCURRENCY</td><td>4</td><td>模型并发超限</td></tr><tr><td>RESOURCE_TYPE_KB_CAPACITY</td><td>5</td><td>知识库容量</td></tr><tr><td>RESOURCE_TYPE_USAGE_SUMMARY</td><td>6</td><td>用量汇总</td></tr><tr><td>RESOURCE_TYPE_RESOURCE_CONSUME</td><td>7</td><td>资源消耗（计费明细）</td></tr></tbody></table>
                     * @param _resourceType <p>看板域，必填，决定返回哪个域的 KPI 数据</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>RESOURCE_TYPE_MODEL</td><td>1</td><td>模型用量</td></tr><tr><td>RESOURCE_TYPE_PLUGIN</td><td>2</td><td>插件用量</td></tr><tr><td>RESOURCE_TYPE_PLATFORM</td><td>3</td><td>平台功能用量</td></tr><tr><td>RESOURCE_TYPE_MODEL_CONCURRENCY</td><td>4</td><td>模型并发超限</td></tr><tr><td>RESOURCE_TYPE_KB_CAPACITY</td><td>5</td><td>知识库容量</td></tr><tr><td>RESOURCE_TYPE_USAGE_SUMMARY</td><td>6</td><td>用量汇总</td></tr><tr><td>RESOURCE_TYPE_RESOURCE_CONSUME</td><td>7</td><td>资源消耗（计费明细）</td></tr></tbody></table>
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>查询时间范围（Unix 秒）</p>
                     * @return TimeRange <p>查询时间范围（Unix 秒）</p>
                     * 
                     */
                    TimeRange GetTimeRange() const;

                    /**
                     * 设置<p>查询时间范围（Unix 秒）</p>
                     * @param _timeRange <p>查询时间范围（Unix 秒）</p>
                     * 
                     */
                    void SetTimeRange(const TimeRange& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取<p>视图范围：企业视图 / 空间视图</p>
                     * @return ViewScope <p>视图范围：企业视图 / 空间视图</p>
                     * 
                     */
                    ViewScope GetViewScope() const;

                    /**
                     * 设置<p>视图范围：企业视图 / 空间视图</p>
                     * @param _viewScope <p>视图范围：企业视图 / 空间视图</p>
                     * 
                     */
                    void SetViewScope(const ViewScope& _viewScope);

                    /**
                     * 判断参数 ViewScope 是否已赋值
                     * @return ViewScope 是否已赋值
                     * 
                     */
                    bool ViewScopeHasBeenSet() const;

                    /**
                     * 获取<p>扩展过滤（resource_type=MODEL）。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：model_name（模型名）、user_id（用户ID）、space_id（空间ID）、resource_id/source_id（来源ID）、metric_source_type（METRIC_SOURCE_TYPE_* 枚举名或整数）</p>
                     * @return FilterList <p>扩展过滤（resource_type=MODEL）。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：model_name（模型名）、user_id（用户ID）、space_id（空间ID）、resource_id/source_id（来源ID）、metric_source_type（METRIC_SOURCE_TYPE_* 枚举名或整数）</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>扩展过滤（resource_type=MODEL）。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：model_name（模型名）、user_id（用户ID）、space_id（空间ID）、resource_id/source_id（来源ID）、metric_source_type（METRIC_SOURCE_TYPE_* 枚举名或整数）</p>
                     * @param _filterList <p>扩展过滤（resource_type=MODEL）。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：model_name（模型名）、user_id（用户ID）、space_id（空间ID）、resource_id/source_id（来源ID）、metric_source_type（METRIC_SOURCE_TYPE_* 枚举名或整数）</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                private:

                    /**
                     * <p>看板域，必填，决定返回哪个域的 KPI 数据</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>RESOURCE_TYPE_MODEL</td><td>1</td><td>模型用量</td></tr><tr><td>RESOURCE_TYPE_PLUGIN</td><td>2</td><td>插件用量</td></tr><tr><td>RESOURCE_TYPE_PLATFORM</td><td>3</td><td>平台功能用量</td></tr><tr><td>RESOURCE_TYPE_MODEL_CONCURRENCY</td><td>4</td><td>模型并发超限</td></tr><tr><td>RESOURCE_TYPE_KB_CAPACITY</td><td>5</td><td>知识库容量</td></tr><tr><td>RESOURCE_TYPE_USAGE_SUMMARY</td><td>6</td><td>用量汇总</td></tr><tr><td>RESOURCE_TYPE_RESOURCE_CONSUME</td><td>7</td><td>资源消耗（计费明细）</td></tr></tbody></table>
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>查询时间范围（Unix 秒）</p>
                     */
                    TimeRange m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * <p>视图范围：企业视图 / 空间视图</p>
                     */
                    ViewScope m_viewScope;
                    bool m_viewScopeHasBeenSet;

                    /**
                     * <p>扩展过滤（resource_type=MODEL）。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：model_name（模型名）、user_id（用户ID）、space_id（空间ID）、resource_id/source_id（来源ID）、metric_source_type（METRIC_SOURCE_TYPE_* 枚举名或整数）</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMETRICOVERVIEWLISTREQUEST_H_
