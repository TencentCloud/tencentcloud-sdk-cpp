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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUETRENDREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUETRENDREQUEST_H_

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
                * DescribeIssueTrend请求参数结构体
                */
                class DescribeIssueTrendRequest : public AbstractModel
                {
                public:
                    DescribeIssueTrendRequest();
                    ~DescribeIssueTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
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
                     * 获取<p>Issue ID</p>
                     * @return IssueId <p>Issue ID</p>
                     * 
                     */
                    std::string GetIssueId() const;

                    /**
                     * 设置<p>Issue ID</p>
                     * @param _issueId <p>Issue ID</p>
                     * 
                     */
                    void SetIssueId(const std::string& _issueId);

                    /**
                     * 判断参数 IssueId 是否已赋值
                     * @return IssueId 是否已赋值
                     * 
                     */
                    bool IssueIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间，Unix 毫秒时间戳</p>
                     * @return StartTime <p>开始时间，Unix 毫秒时间戳</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间，Unix 毫秒时间戳</p>
                     * @param _startTime <p>开始时间，Unix 毫秒时间戳</p>
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
                     * 获取<p>结束时间，Unix 毫秒时间戳</p>
                     * @return EndTime <p>结束时间，Unix 毫秒时间戳</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间，Unix 毫秒时间戳</p>
                     * @param _endTime <p>结束时间，Unix 毫秒时间戳</p>
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
                     * 获取<p>趋势分桶，可选值：auto、1m、10m、1h、1d</p>
                     * @return Bucket <p>趋势分桶，可选值：auto、1m、10m、1h、1d</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>趋势分桶，可选值：auto、1m、10m、1h、1d</p>
                     * @param _bucket <p>趋势分桶，可选值：auto、1m、10m、1h、1d</p>
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取<p>环境。可选。为空表示全部环境。</p>
                     * @return Env <p>环境。可选。为空表示全部环境。</p>
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>环境。可选。为空表示全部环境。</p>
                     * @param _env <p>环境。可选。为空表示全部环境。</p>
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>关键字。可选。不传表示不过滤。</p>
                     * @return Keyword <p>关键字。可选。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键字。可选。不传表示不过滤。</p>
                     * @param _keyword <p>关键字。可选。不传表示不过滤。</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。可选。不传表示不附加这组筛选。</p>
                     * @return Filters <p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。可选。不传表示不附加这组筛选。</p>
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置<p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。可选。不传表示不附加这组筛选。</p>
                     * @param _filters <p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。可选。不传表示不附加这组筛选。</p>
                     * 
                     */
                    void SetFilters(const std::string& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Issue ID</p>
                     */
                    std::string m_issueId;
                    bool m_issueIdHasBeenSet;

                    /**
                     * <p>开始时间，Unix 毫秒时间戳</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，Unix 毫秒时间戳</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>趋势分桶，可选值：auto、1m、10m、1h、1d</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>环境。可选。为空表示全部环境。</p>
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>关键字。可选。不传表示不过滤。</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。可选。不传表示不附加这组筛选。</p>
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUETRENDREQUEST_H_
