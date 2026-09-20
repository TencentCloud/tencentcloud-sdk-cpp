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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWREQUEST_H_

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
                * DescribeAppStatisticsOverview请求参数结构体
                */
                class DescribeAppStatisticsOverviewRequest : public AbstractModel
                {
                public:
                    DescribeAppStatisticsOverviewRequest();
                    ~DescribeAppStatisticsOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用类型。可选值：APP_TYPE_RAG（RAG）、APP_TYPE_WORKFLOW（Workflow）、APP_TYPE_CLAW（Claw）、APP_TYPE_MULTIAGENT（MultiAgent）；本期仅 APP_TYPE_RAG 生效，其余为预留值，传入将返回 InvalidParameter</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TYPE_UNSPECIFIED</td><td>0</td><td>未指定（无效值，请求勿传）</td></tr><tr><td>APP_TYPE_RAG</td><td>1</td><td>RAG（本期唯一支持）</td></tr><tr><td>APP_TYPE_WORKFLOW</td><td>2</td><td>Workflow（预留，暂不支持）</td></tr><tr><td>APP_TYPE_CLAW</td><td>3</td><td>Claw（预留，暂不支持）</td></tr><tr><td>APP_TYPE_MULTIAGENT</td><td>4</td><td>MultiAgent（预留，暂不支持）</td></tr></tbody></table>
                     * @return AppType <p>应用类型。可选值：APP_TYPE_RAG（RAG）、APP_TYPE_WORKFLOW（Workflow）、APP_TYPE_CLAW（Claw）、APP_TYPE_MULTIAGENT（MultiAgent）；本期仅 APP_TYPE_RAG 生效，其余为预留值，传入将返回 InvalidParameter</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TYPE_UNSPECIFIED</td><td>0</td><td>未指定（无效值，请求勿传）</td></tr><tr><td>APP_TYPE_RAG</td><td>1</td><td>RAG（本期唯一支持）</td></tr><tr><td>APP_TYPE_WORKFLOW</td><td>2</td><td>Workflow（预留，暂不支持）</td></tr><tr><td>APP_TYPE_CLAW</td><td>3</td><td>Claw（预留，暂不支持）</td></tr><tr><td>APP_TYPE_MULTIAGENT</td><td>4</td><td>MultiAgent（预留，暂不支持）</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetAppType() const;

                    /**
                     * 设置<p>应用类型。可选值：APP_TYPE_RAG（RAG）、APP_TYPE_WORKFLOW（Workflow）、APP_TYPE_CLAW（Claw）、APP_TYPE_MULTIAGENT（MultiAgent）；本期仅 APP_TYPE_RAG 生效，其余为预留值，传入将返回 InvalidParameter</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TYPE_UNSPECIFIED</td><td>0</td><td>未指定（无效值，请求勿传）</td></tr><tr><td>APP_TYPE_RAG</td><td>1</td><td>RAG（本期唯一支持）</td></tr><tr><td>APP_TYPE_WORKFLOW</td><td>2</td><td>Workflow（预留，暂不支持）</td></tr><tr><td>APP_TYPE_CLAW</td><td>3</td><td>Claw（预留，暂不支持）</td></tr><tr><td>APP_TYPE_MULTIAGENT</td><td>4</td><td>MultiAgent（预留，暂不支持）</td></tr></tbody></table>
                     * @param _appType <p>应用类型。可选值：APP_TYPE_RAG（RAG）、APP_TYPE_WORKFLOW（Workflow）、APP_TYPE_CLAW（Claw）、APP_TYPE_MULTIAGENT（MultiAgent）；本期仅 APP_TYPE_RAG 生效，其余为预留值，传入将返回 InvalidParameter</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TYPE_UNSPECIFIED</td><td>0</td><td>未指定（无效值，请求勿传）</td></tr><tr><td>APP_TYPE_RAG</td><td>1</td><td>RAG（本期唯一支持）</td></tr><tr><td>APP_TYPE_WORKFLOW</td><td>2</td><td>Workflow（预留，暂不支持）</td></tr><tr><td>APP_TYPE_CLAW</td><td>3</td><td>Claw（预留，暂不支持）</td></tr><tr><td>APP_TYPE_MULTIAGENT</td><td>4</td><td>MultiAgent（预留，暂不支持）</td></tr></tbody></table>
                     * 
                     */
                    void SetAppType(const int64_t& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

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
                     * 获取<p>视图范围：应用视图（VIEW_TYPE_APP），scope_id 填应用 ID（uint64 雪花 ID 的十进制字符串）</p>
                     * @return ViewScope <p>视图范围：应用视图（VIEW_TYPE_APP），scope_id 填应用 ID（uint64 雪花 ID 的十进制字符串）</p>
                     * 
                     */
                    ViewScope GetViewScope() const;

                    /**
                     * 设置<p>视图范围：应用视图（VIEW_TYPE_APP），scope_id 填应用 ID（uint64 雪花 ID 的十进制字符串）</p>
                     * @param _viewScope <p>视图范围：应用视图（VIEW_TYPE_APP），scope_id 填应用 ID（uint64 雪花 ID 的十进制字符串）</p>
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
                     * 获取<p>空间 ID</p><p>参数格式：<p>空间 ID</p></p><p>默认值：default_space</p>
                     * @return SpaceId <p>空间 ID</p><p>参数格式：<p>空间 ID</p></p><p>默认值：default_space</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>空间 ID</p><p>参数格式：<p>空间 ID</p></p><p>默认值：default_space</p>
                     * @param _spaceId <p>空间 ID</p><p>参数格式：<p>空间 ID</p></p><p>默认值：default_space</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>应用 ID</p><p>参数格式：</p><p>应用 ID</p><p></p><p>参考值：2099767969573745984</p>
                     * @return AppId <p>应用 ID</p><p>参数格式：</p><p>应用 ID</p><p></p><p>参考值：2099767969573745984</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p><p>参数格式：</p><p>应用 ID</p><p></p><p>参考值：2099767969573745984</p>
                     * @param _appId <p>应用 ID</p><p>参数格式：</p><p>应用 ID</p><p></p><p>参考值：2099767969573745984</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>扩展过滤。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：space_id（空间 ID）、channel_type（调用方式/渠道类型，取值参考 trpc.adp.common.v2.ChannelType 枚举名）；channel_type 不传时按全部渠道聚合</p>
                     * @return FilterList <p>扩展过滤。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：space_id（空间 ID）、channel_type（调用方式/渠道类型，取值参考 trpc.adp.common.v2.ChannelType 枚举名）；channel_type 不传时按全部渠道聚合</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>扩展过滤。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：space_id（空间 ID）、channel_type（调用方式/渠道类型，取值参考 trpc.adp.common.v2.ChannelType 枚举名）；channel_type 不传时按全部渠道聚合</p>
                     * @param _filterList <p>扩展过滤。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：space_id（空间 ID）、channel_type（调用方式/渠道类型，取值参考 trpc.adp.common.v2.ChannelType 枚举名）；channel_type 不传时按全部渠道聚合</p>
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
                     * <p>应用类型。可选值：APP_TYPE_RAG（RAG）、APP_TYPE_WORKFLOW（Workflow）、APP_TYPE_CLAW（Claw）、APP_TYPE_MULTIAGENT（MultiAgent）；本期仅 APP_TYPE_RAG 生效，其余为预留值，传入将返回 InvalidParameter</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TYPE_UNSPECIFIED</td><td>0</td><td>未指定（无效值，请求勿传）</td></tr><tr><td>APP_TYPE_RAG</td><td>1</td><td>RAG（本期唯一支持）</td></tr><tr><td>APP_TYPE_WORKFLOW</td><td>2</td><td>Workflow（预留，暂不支持）</td></tr><tr><td>APP_TYPE_CLAW</td><td>3</td><td>Claw（预留，暂不支持）</td></tr><tr><td>APP_TYPE_MULTIAGENT</td><td>4</td><td>MultiAgent（预留，暂不支持）</td></tr></tbody></table>
                     */
                    int64_t m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * <p>查询时间范围（Unix 秒）</p>
                     */
                    TimeRange m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * <p>视图范围：应用视图（VIEW_TYPE_APP），scope_id 填应用 ID（uint64 雪花 ID 的十进制字符串）</p>
                     */
                    ViewScope m_viewScope;
                    bool m_viewScopeHasBeenSet;

                    /**
                     * <p>空间 ID</p><p>参数格式：<p>空间 ID</p></p><p>默认值：default_space</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>应用 ID</p><p>参数格式：</p><p>应用 ID</p><p></p><p>参考值：2099767969573745984</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>扩展过滤。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：space_id（空间 ID）、channel_type（调用方式/渠道类型，取值参考 trpc.adp.common.v2.ChannelType 枚举名）；channel_type 不传时按全部渠道聚合</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWREQUEST_H_
