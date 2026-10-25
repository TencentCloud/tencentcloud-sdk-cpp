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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTRANKREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTRANKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMEventRank请求参数结构体
                */
                class DescribeTDEMEventRankRequest : public AbstractModel
                {
                public:
                    DescribeTDEMEventRankRequest();
                    ~DescribeTDEMEventRankRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID（必填）</p>
                     * @return AppId <p>应用 ID（必填）</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID（必填）</p>
                     * @param _appId <p>应用 ID（必填）</p>
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
                     * 获取<p>开始时间 Unix 毫秒（必填）</p>
                     * @return StartTime <p>开始时间 Unix 毫秒（必填）</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间 Unix 毫秒（必填）</p>
                     * @param _startTime <p>开始时间 Unix 毫秒（必填）</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间 Unix 毫秒（必填）</p>
                     * @return EndTime <p>结束时间 Unix 毫秒（必填）</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间 Unix 毫秒（必填）</p>
                     * @param _endTime <p>结束时间 Unix 毫秒（必填）</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>排行类型：error/api/resource/api_page/resource_page/api_status/api_status_top/resource_status/tag；exception_dimension 为异常维度同源统计，使用 ExceptionDistribution 返回结果。</p>
                     * @return Kind <p>排行类型：error/api/resource/api_page/resource_page/api_status/api_status_top/resource_status/tag；exception_dimension 为异常维度同源统计，使用 ExceptionDistribution 返回结果。</p>
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>排行类型：error/api/resource/api_page/resource_page/api_status/api_status_top/resource_status/tag；exception_dimension 为异常维度同源统计，使用 ExceptionDistribution 返回结果。</p>
                     * @param _kind <p>排行类型：error/api/resource/api_page/resource_page/api_status/api_status_top/resource_status/tag；exception_dimension 为异常维度同源统计，使用 ExceptionDistribution 返回结果。</p>
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取<p>旧 Kind 保持既有错误类型过滤规则；Kind=exception_dimension 标签模式必填，允许 js_error、promise_error、api_error、resource_error、blank_screen、log、native_crash、crash、no_response、lag_detected、app_launch。合法重复值去重，未知值拒绝；普通维度模式不传。</p>
                     * @return EventTypes <p>旧 Kind 保持既有错误类型过滤规则；Kind=exception_dimension 标签模式必填，允许 js_error、promise_error、api_error、resource_error、blank_screen、log、native_crash、crash、no_response、lag_detected、app_launch。合法重复值去重，未知值拒绝；普通维度模式不传。</p>
                     * 
                     */
                    std::vector<std::string> GetEventTypes() const;

                    /**
                     * 设置<p>旧 Kind 保持既有错误类型过滤规则；Kind=exception_dimension 标签模式必填，允许 js_error、promise_error、api_error、resource_error、blank_screen、log、native_crash、crash、no_response、lag_detected、app_launch。合法重复值去重，未知值拒绝；普通维度模式不传。</p>
                     * @param _eventTypes <p>旧 Kind 保持既有错误类型过滤规则；Kind=exception_dimension 标签模式必填，允许 js_error、promise_error、api_error、resource_error、blank_screen、log、native_crash、crash、no_response、lag_detected、app_launch。合法重复值去重，未知值拒绝；普通维度模式不传。</p>
                     * 
                     */
                    void SetEventTypes(const std::vector<std::string>& _eventTypes);

                    /**
                     * 判断参数 EventTypes 是否已赋值
                     * @return EventTypes 是否已赋值
                     * 
                     */
                    bool EventTypesHasBeenSet() const;

                    /**
                     * 获取<p>旧 Kind=tag 保持既有标签查询；Kind=exception_dimension 标签模式必填，与 GroupBy 二选一。使用既有标签名规范，长度 1–64，允许字母数字及 _-.；标签值保留原始内容。</p>
                     * @return TagKey <p>旧 Kind=tag 保持既有标签查询；Kind=exception_dimension 标签模式必填，与 GroupBy 二选一。使用既有标签名规范，长度 1–64，允许字母数字及 _-.；标签值保留原始内容。</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>旧 Kind=tag 保持既有标签查询；Kind=exception_dimension 标签模式必填，与 GroupBy 二选一。使用既有标签名规范，长度 1–64，允许字母数字及 _-.；标签值保留原始内容。</p>
                     * @param _tagKey <p>旧 Kind=tag 保持既有标签查询；Kind=exception_dimension 标签模式必填，与 GroupBy 二选一。使用既有标签名规范，长度 1–64，允许字母数字及 _-.；标签值保留原始内容。</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>返回条数，上限100。旧 Kind 缺省50；Kind=exception_dimension 缺省100，显式值为1–100，限制完整归一化维度行数，不裁剪分类向量。</p>
                     * @return Limit <p>返回条数，上限100。旧 Kind 缺省50；Kind=exception_dimension 缺省100，显式值为1–100，限制完整归一化维度行数，不裁剪分类向量。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回条数，上限100。旧 Kind 缺省50；Kind=exception_dimension 缺省100，显式值为1–100，限制完整归一化维度行数，不裁剪分类向量。</p>
                     * @param _limit <p>返回条数，上限100。旧 Kind 缺省50；Kind=exception_dimension 缺省100，显式值为1–100，限制完整归一化维度行数，不裁剪分类向量。</p>
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
                     * 获取<p>旧 Kind 可选粒度5m/1h/1d；Kind=exception_dimension 不支持，传非空值返回 InvalidParameter。</p>
                     * @return Granularity <p>旧 Kind 可选粒度5m/1h/1d；Kind=exception_dimension 不支持，传非空值返回 InvalidParameter。</p>
                     * 
                     */
                    std::string GetGranularity() const;

                    /**
                     * 设置<p>旧 Kind 可选粒度5m/1h/1d；Kind=exception_dimension 不支持，传非空值返回 InvalidParameter。</p>
                     * @param _granularity <p>旧 Kind 可选粒度5m/1h/1d；Kind=exception_dimension 不支持，传非空值返回 InvalidParameter。</p>
                     * 
                     */
                    void SetGranularity(const std::string& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件 JSON 字符串，走 events 表白名单</p>
                     * @return Filters <p>筛选条件 JSON 字符串，走 events 表白名单</p>
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置<p>筛选条件 JSON 字符串，走 events 表白名单</p>
                     * @param _filters <p>筛选条件 JSON 字符串，走 events 表白名单</p>
                     * 
                     */
                    void SetFilters(const std::string& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>旧 Kind 耗时口径 avg/p50/p75/p95/p99；Kind=exception_dimension 不支持，传非空值返回 InvalidParameter。</p>
                     * @return CostType <p>旧 Kind 耗时口径 avg/p50/p75/p95/p99；Kind=exception_dimension 不支持，传非空值返回 InvalidParameter。</p>
                     * 
                     */
                    std::string GetCostType() const;

                    /**
                     * 设置<p>旧 Kind 耗时口径 avg/p50/p75/p95/p99；Kind=exception_dimension 不支持，传非空值返回 InvalidParameter。</p>
                     * @param _costType <p>旧 Kind 耗时口径 avg/p50/p75/p95/p99；Kind=exception_dimension 不支持，传非空值返回 InvalidParameter。</p>
                     * 
                     */
                    void SetCostType(const std::string& _costType);

                    /**
                     * 判断参数 CostType 是否已赋值
                     * @return CostType 是否已赋值
                     * 
                     */
                    bool CostTypeHasBeenSet() const;

                    /**
                     * 获取<p>异常分布的聚合维度，仅 Kind=exception_dimension 的普通维度模式使用且必填。标签模式只传 TagKey，不传 GroupBy。</p><p>枚举值：</p><ul><li>device_type： 设备型号</li><li>os： 操作系统</li><li>browser： 浏览器</li><li>app_version： 应用版本</li><li>province： 省份</li><li>platform： 平台</li><li>network_type： 网络类型</li></ul>
                     * @return GroupBy <p>异常分布的聚合维度，仅 Kind=exception_dimension 的普通维度模式使用且必填。标签模式只传 TagKey，不传 GroupBy。</p><p>枚举值：</p><ul><li>device_type： 设备型号</li><li>os： 操作系统</li><li>browser： 浏览器</li><li>app_version： 应用版本</li><li>province： 省份</li><li>platform： 平台</li><li>network_type： 网络类型</li></ul>
                     * 
                     */
                    std::string GetGroupBy() const;

                    /**
                     * 设置<p>异常分布的聚合维度，仅 Kind=exception_dimension 的普通维度模式使用且必填。标签模式只传 TagKey，不传 GroupBy。</p><p>枚举值：</p><ul><li>device_type： 设备型号</li><li>os： 操作系统</li><li>browser： 浏览器</li><li>app_version： 应用版本</li><li>province： 省份</li><li>platform： 平台</li><li>network_type： 网络类型</li></ul>
                     * @param _groupBy <p>异常分布的聚合维度，仅 Kind=exception_dimension 的普通维度模式使用且必填。标签模式只传 TagKey，不传 GroupBy。</p><p>枚举值：</p><ul><li>device_type： 设备型号</li><li>os： 操作系统</li><li>browser： 浏览器</li><li>app_version： 应用版本</li><li>province： 省份</li><li>platform： 平台</li><li>network_type： 网络类型</li></ul>
                     * 
                     */
                    void SetGroupBy(const std::string& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取<p>仅 Kind=exception_dimension 普通维度模式必填。允许 web、android、ios，须与应用平台及 CategoryKeys 目录一致。标签模式不传。</p>
                     * @return ProjectType <p>仅 Kind=exception_dimension 普通维度模式必填。允许 web、android、ios，须与应用平台及 CategoryKeys 目录一致。标签模式不传。</p>
                     * 
                     */
                    std::string GetProjectType() const;

                    /**
                     * 设置<p>仅 Kind=exception_dimension 普通维度模式必填。允许 web、android、ios，须与应用平台及 CategoryKeys 目录一致。标签模式不传。</p>
                     * @param _projectType <p>仅 Kind=exception_dimension 普通维度模式必填。允许 web、android、ios，须与应用平台及 CategoryKeys 目录一致。标签模式不传。</p>
                     * 
                     */
                    void SetProjectType(const std::string& _projectType);

                    /**
                     * 判断参数 ProjectType 是否已赋值
                     * @return ProjectType 是否已赋值
                     * 
                     */
                    bool ProjectTypeHasBeenSet() const;

                    /**
                     * 获取<p>仅 Kind=exception_dimension 普通维度模式必填，为页面实际有效的异常目录 key 非空去重集合。仅接受对应 ProjectType 的固定目录，包含项须同时选择父项；未知、重复、空目录及互斥参数组合返回 InvalidParameter。标签模式不传。</p>
                     * @return CategoryKeys <p>仅 Kind=exception_dimension 普通维度模式必填，为页面实际有效的异常目录 key 非空去重集合。仅接受对应 ProjectType 的固定目录，包含项须同时选择父项；未知、重复、空目录及互斥参数组合返回 InvalidParameter。标签模式不传。</p>
                     * 
                     */
                    std::vector<std::string> GetCategoryKeys() const;

                    /**
                     * 设置<p>仅 Kind=exception_dimension 普通维度模式必填，为页面实际有效的异常目录 key 非空去重集合。仅接受对应 ProjectType 的固定目录，包含项须同时选择父项；未知、重复、空目录及互斥参数组合返回 InvalidParameter。标签模式不传。</p>
                     * @param _categoryKeys <p>仅 Kind=exception_dimension 普通维度模式必填，为页面实际有效的异常目录 key 非空去重集合。仅接受对应 ProjectType 的固定目录，包含项须同时选择父项；未知、重复、空目录及互斥参数组合返回 InvalidParameter。标签模式不传。</p>
                     * 
                     */
                    void SetCategoryKeys(const std::vector<std::string>& _categoryKeys);

                    /**
                     * 判断参数 CategoryKeys 是否已赋值
                     * @return CategoryKeys 是否已赋值
                     * 
                     */
                    bool CategoryKeysHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（必填）</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>开始时间 Unix 毫秒（必填）</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间 Unix 毫秒（必填）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>排行类型：error/api/resource/api_page/resource_page/api_status/api_status_top/resource_status/tag；exception_dimension 为异常维度同源统计，使用 ExceptionDistribution 返回结果。</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>旧 Kind 保持既有错误类型过滤规则；Kind=exception_dimension 标签模式必填，允许 js_error、promise_error、api_error、resource_error、blank_screen、log、native_crash、crash、no_response、lag_detected、app_launch。合法重复值去重，未知值拒绝；普通维度模式不传。</p>
                     */
                    std::vector<std::string> m_eventTypes;
                    bool m_eventTypesHasBeenSet;

                    /**
                     * <p>旧 Kind=tag 保持既有标签查询；Kind=exception_dimension 标签模式必填，与 GroupBy 二选一。使用既有标签名规范，长度 1–64，允许字母数字及 _-.；标签值保留原始内容。</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>返回条数，上限100。旧 Kind 缺省50；Kind=exception_dimension 缺省100，显式值为1–100，限制完整归一化维度行数，不裁剪分类向量。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>旧 Kind 可选粒度5m/1h/1d；Kind=exception_dimension 不支持，传非空值返回 InvalidParameter。</p>
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * <p>筛选条件 JSON 字符串，走 events 表白名单</p>
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>旧 Kind 耗时口径 avg/p50/p75/p95/p99；Kind=exception_dimension 不支持，传非空值返回 InvalidParameter。</p>
                     */
                    std::string m_costType;
                    bool m_costTypeHasBeenSet;

                    /**
                     * <p>异常分布的聚合维度，仅 Kind=exception_dimension 的普通维度模式使用且必填。标签模式只传 TagKey，不传 GroupBy。</p><p>枚举值：</p><ul><li>device_type： 设备型号</li><li>os： 操作系统</li><li>browser： 浏览器</li><li>app_version： 应用版本</li><li>province： 省份</li><li>platform： 平台</li><li>network_type： 网络类型</li></ul>
                     */
                    std::string m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * <p>仅 Kind=exception_dimension 普通维度模式必填。允许 web、android、ios，须与应用平台及 CategoryKeys 目录一致。标签模式不传。</p>
                     */
                    std::string m_projectType;
                    bool m_projectTypeHasBeenSet;

                    /**
                     * <p>仅 Kind=exception_dimension 普通维度模式必填，为页面实际有效的异常目录 key 非空去重集合。仅接受对应 ProjectType 的固定目录，包含项须同时选择父项；未知、重复、空目录及互斥参数组合返回 InvalidParameter。标签模式不传。</p>
                     */
                    std::vector<std::string> m_categoryKeys;
                    bool m_categoryKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTRANKREQUEST_H_
