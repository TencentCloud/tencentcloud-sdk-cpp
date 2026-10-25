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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEFIELDVALUESREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEFIELDVALUESREQUEST_H_

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
                * DescribeFieldValues请求参数结构体
                */
                class DescribeFieldValuesRequest : public AbstractModel
                {
                public:
                    DescribeFieldValuesRequest();
                    ~DescribeFieldValuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return AppId <p>应用id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _appId <p>应用id</p>
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
                     * 获取<p>开始时间</p><p>单位：毫秒</p>
                     * @return StartTime <p>开始时间</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p><p>单位：毫秒</p>
                     * @param _startTime <p>开始时间</p><p>单位：毫秒</p>
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
                     * 获取<p>结束时间</p><p>单位：毫秒</p>
                     * @return EndTime <p>结束时间</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p><p>单位：毫秒</p>
                     * @param _endTime <p>结束时间</p><p>单位：毫秒</p>
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
                     * 获取<p>字段名</p>
                     * @return FieldName <p>字段名</p>
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置<p>字段名</p>
                     * @param _fieldName <p>字段名</p>
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取<p>数量限制</p>
                     * @return Limit <p>数量限制</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>数量限制</p>
                     * @param _limit <p>数量限制</p>
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
                     * 获取<p>过滤条件</p>
                     * @return Filters <p>过滤条件</p>
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filters <p>过滤条件</p>
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
                     * 获取<p>事件分类</p>
                     * @return Category <p>事件分类</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>事件分类</p>
                     * @param _category <p>事件分类</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>可选。按前缀过滤字段去重结果。查询 user_id 或 device_id 且开启 StrictPiiPrefix 时必填，去除首尾空格后长度须不少于 2。</p>
                     * @return Prefix <p>可选。按前缀过滤字段去重结果。查询 user_id 或 device_id 且开启 StrictPiiPrefix 时必填，去除首尾空格后长度须不少于 2。</p>
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置<p>可选。按前缀过滤字段去重结果。查询 user_id 或 device_id 且开启 StrictPiiPrefix 时必填，去除首尾空格后长度须不少于 2。</p>
                     * @param _prefix <p>可选。按前缀过滤字段去重结果。查询 user_id 或 device_id 且开启 StrictPiiPrefix 时必填，去除首尾空格后长度须不少于 2。</p>
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取<p>用于采样配置，是否对 user_id、device_id 强制前缀匹配。为 true 时必须同时传入合法 Prefix，否则返回 InvalidParameter，且不会返回无前缀的全量去重列表。为 false 或不传时，按字段返回热门去重值，行为与历史接口一致。</p><p>默认值：false</p>
                     * @return StrictPiiPrefix <p>用于采样配置，是否对 user_id、device_id 强制前缀匹配。为 true 时必须同时传入合法 Prefix，否则返回 InvalidParameter，且不会返回无前缀的全量去重列表。为 false 或不传时，按字段返回热门去重值，行为与历史接口一致。</p><p>默认值：false</p>
                     * 
                     */
                    bool GetStrictPiiPrefix() const;

                    /**
                     * 设置<p>用于采样配置，是否对 user_id、device_id 强制前缀匹配。为 true 时必须同时传入合法 Prefix，否则返回 InvalidParameter，且不会返回无前缀的全量去重列表。为 false 或不传时，按字段返回热门去重值，行为与历史接口一致。</p><p>默认值：false</p>
                     * @param _strictPiiPrefix <p>用于采样配置，是否对 user_id、device_id 强制前缀匹配。为 true 时必须同时传入合法 Prefix，否则返回 InvalidParameter，且不会返回无前缀的全量去重列表。为 false 或不传时，按字段返回热门去重值，行为与历史接口一致。</p><p>默认值：false</p>
                     * 
                     */
                    void SetStrictPiiPrefix(const bool& _strictPiiPrefix);

                    /**
                     * 判断参数 StrictPiiPrefix 是否已赋值
                     * @return StrictPiiPrefix 是否已赋值
                     * 
                     */
                    bool StrictPiiPrefixHasBeenSet() const;

                    /**
                     * 获取<p>查询口径。可选。只允许空或 event。Issue 标签分布传 event。为 event 时不能同时传 HasError、MinDuration、MaxDuration，也不能把 Category 设为 session。</p>
                     * @return Scope <p>查询口径。可选。只允许空或 event。Issue 标签分布传 event。为 event 时不能同时传 HasError、MinDuration、MaxDuration，也不能把 Category 设为 session。</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>查询口径。可选。只允许空或 event。Issue 标签分布传 event。为 event 时不能同时传 HasError、MinDuration、MaxDuration，也不能把 Category 设为 session。</p>
                     * @param _scope <p>查询口径。可选。只允许空或 event。Issue 标签分布传 event。为 event 时不能同时传 HasError、MinDuration、MaxDuration，也不能把 Category 设为 session。</p>
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>是否只看有错误的会话。可选。不传表示不过滤。Scope 为 event 时不能传。</p>
                     * @return HasError <p>是否只看有错误的会话。可选。不传表示不过滤。Scope 为 event 时不能传。</p>
                     * 
                     */
                    bool GetHasError() const;

                    /**
                     * 设置<p>是否只看有错误的会话。可选。不传表示不过滤。Scope 为 event 时不能传。</p>
                     * @param _hasError <p>是否只看有错误的会话。可选。不传表示不过滤。Scope 为 event 时不能传。</p>
                     * 
                     */
                    void SetHasError(const bool& _hasError);

                    /**
                     * 判断参数 HasError 是否已赋值
                     * @return HasError 是否已赋值
                     * 
                     */
                    bool HasErrorHasBeenSet() const;

                    /**
                     * 获取<p>会话最短时长，单位毫秒。可选。0 或不传表示不限制。Scope 为 event 时不能传。</p>
                     * @return MinDuration <p>会话最短时长，单位毫秒。可选。0 或不传表示不限制。Scope 为 event 时不能传。</p>
                     * 
                     */
                    int64_t GetMinDuration() const;

                    /**
                     * 设置<p>会话最短时长，单位毫秒。可选。0 或不传表示不限制。Scope 为 event 时不能传。</p>
                     * @param _minDuration <p>会话最短时长，单位毫秒。可选。0 或不传表示不限制。Scope 为 event 时不能传。</p>
                     * 
                     */
                    void SetMinDuration(const int64_t& _minDuration);

                    /**
                     * 判断参数 MinDuration 是否已赋值
                     * @return MinDuration 是否已赋值
                     * 
                     */
                    bool MinDurationHasBeenSet() const;

                    /**
                     * 获取<p>会话最长时长，单位毫秒。可选。0 或不传表示不限制。Scope 为 event 时不能传。</p>
                     * @return MaxDuration <p>会话最长时长，单位毫秒。可选。0 或不传表示不限制。Scope 为 event 时不能传。</p>
                     * 
                     */
                    int64_t GetMaxDuration() const;

                    /**
                     * 设置<p>会话最长时长，单位毫秒。可选。0 或不传表示不限制。Scope 为 event 时不能传。</p>
                     * @param _maxDuration <p>会话最长时长，单位毫秒。可选。0 或不传表示不限制。Scope 为 event 时不能传。</p>
                     * 
                     */
                    void SetMaxDuration(const int64_t& _maxDuration);

                    /**
                     * 判断参数 MaxDuration 是否已赋值
                     * @return MaxDuration 是否已赋值
                     * 
                     */
                    bool MaxDurationHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>开始时间</p><p>单位：毫秒</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p><p>单位：毫秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>字段名</p>
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * <p>数量限制</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>事件分类</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>可选。按前缀过滤字段去重结果。查询 user_id 或 device_id 且开启 StrictPiiPrefix 时必填，去除首尾空格后长度须不少于 2。</p>
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * <p>用于采样配置，是否对 user_id、device_id 强制前缀匹配。为 true 时必须同时传入合法 Prefix，否则返回 InvalidParameter，且不会返回无前缀的全量去重列表。为 false 或不传时，按字段返回热门去重值，行为与历史接口一致。</p><p>默认值：false</p>
                     */
                    bool m_strictPiiPrefix;
                    bool m_strictPiiPrefixHasBeenSet;

                    /**
                     * <p>查询口径。可选。只允许空或 event。Issue 标签分布传 event。为 event 时不能同时传 HasError、MinDuration、MaxDuration，也不能把 Category 设为 session。</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>是否只看有错误的会话。可选。不传表示不过滤。Scope 为 event 时不能传。</p>
                     */
                    bool m_hasError;
                    bool m_hasErrorHasBeenSet;

                    /**
                     * <p>会话最短时长，单位毫秒。可选。0 或不传表示不限制。Scope 为 event 时不能传。</p>
                     */
                    int64_t m_minDuration;
                    bool m_minDurationHasBeenSet;

                    /**
                     * <p>会话最长时长，单位毫秒。可选。0 或不传表示不限制。Scope 为 event 时不能传。</p>
                     */
                    int64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEFIELDVALUESREQUEST_H_
