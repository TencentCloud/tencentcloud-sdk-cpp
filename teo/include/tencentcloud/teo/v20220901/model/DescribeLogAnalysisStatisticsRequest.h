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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISSTATISTICSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLogAnalysisStatistics请求参数结构体
                */
                class DescribeLogAnalysisStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeLogAnalysisStatisticsRequest();
                    ~DescribeLogAnalysisStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>数据归属地区，可选值：</p><ul><li>mainland：中国大陆境内；</li><li>overseas：全球（不含中国大陆）。</li></ul>注意：若站点服务区域为“全球可用区”，获取全部数据需要分别查询 mainland 和 overseas 的数据。<p></p>
                     * @return Area <p>数据归属地区，可选值：</p><ul><li>mainland：中国大陆境内；</li><li>overseas：全球（不含中国大陆）。</li></ul>注意：若站点服务区域为“全球可用区”，获取全部数据需要分别查询 mainland 和 overseas 的数据。<p></p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>数据归属地区，可选值：</p><ul><li>mainland：中国大陆境内；</li><li>overseas：全球（不含中国大陆）。</li></ul>注意：若站点服务区域为“全球可用区”，获取全部数据需要分别查询 mainland 和 overseas 的数据。<p></p>
                     * @param _area <p>数据归属地区，可选值：</p><ul><li>mainland：中国大陆境内；</li><li>overseas：全球（不含中国大陆）。</li></ul>注意：若站点服务区域为“全球可用区”，获取全部数据需要分别查询 mainland 和 overseas 的数据。<p></p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>日志类型，可选值：</p><ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul>默认为 l7-access-logs 。<p></p>
                     * @return LogType <p>日志类型，可选值：</p><ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul>默认为 l7-access-logs 。<p></p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型，可选值：</p><ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul>默认为 l7-access-logs 。<p></p>
                     * @param _logType <p>日志类型，可选值：</p><ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul>默认为 l7-access-logs 。<p></p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>开始时间，示例值：2020-04-29T00:00:00Z。套餐版本不同，支持的可查询开始时间至今的最大时间跨度不同，详情请见 <a href="https://cloud.tencent.com/document/product/1552/94165#45435466-9103-4ff6-be22-e31717044fb2">套餐选型对比</a>。</p>
                     * @return StartTime <p>开始时间，示例值：2020-04-29T00:00:00Z。套餐版本不同，支持的可查询开始时间至今的最大时间跨度不同，详情请见 <a href="https://cloud.tencent.com/document/product/1552/94165#45435466-9103-4ff6-be22-e31717044fb2">套餐选型对比</a>。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间，示例值：2020-04-29T00:00:00Z。套餐版本不同，支持的可查询开始时间至今的最大时间跨度不同，详情请见 <a href="https://cloud.tencent.com/document/product/1552/94165#45435466-9103-4ff6-be22-e31717044fb2">套餐选型对比</a>。</p>
                     * @param _startTime <p>开始时间，示例值：2020-04-29T00:00:00Z。套餐版本不同，支持的可查询开始时间至今的最大时间跨度不同，详情请见 <a href="https://cloud.tencent.com/document/product/1552/94165#45435466-9103-4ff6-be22-e31717044fb2">套餐选型对比</a>。</p>
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
                     * 获取<p>结束时间，示例值：2020-04-30T00:00:00Z。单次查询的开始时间到结束时间跨度最大为 31 天。</p>
                     * @return EndTime <p>结束时间，示例值：2020-04-30T00:00:00Z。单次查询的开始时间到结束时间跨度最大为 31 天。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，示例值：2020-04-30T00:00:00Z。单次查询的开始时间到结束时间跨度最大为 31 天。</p>
                     * @param _endTime <p>结束时间，示例值：2020-04-30T00:00:00Z。单次查询的开始时间到结束时间跨度最大为 31 天。</p>
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
                     * 获取<p>统计查询语句，由 [<a href="https://cloud.tencent.com/document/product/1552/124662">检索条件</a>] | [<a href="https://cloud.tencent.com/document/product/1552/124662">SQL语句</a>] 构成，管道符 “|” 后的 SQL 段必填；检索条件段可为空（如 | SELECT ...），表示在全量数据上聚合。长度上限 12KB，SQL 默认 Limit 100，最大 Limit 10000 。<br>示例：</p><p>带检索条件： <code>${EdgeCacheStatus} in [&#39;miss&#39;,&#39;other&#39;] | select EdgeCacheStatus as status, count(\*) as cnt group by status limit 2</code></p><p>不带检索条件：<code>| select EdgeCacheStatus as status, count(\*) as cnt group by status</code></p>
                     * @return Query <p>统计查询语句，由 [<a href="https://cloud.tencent.com/document/product/1552/124662">检索条件</a>] | [<a href="https://cloud.tencent.com/document/product/1552/124662">SQL语句</a>] 构成，管道符 “|” 后的 SQL 段必填；检索条件段可为空（如 | SELECT ...），表示在全量数据上聚合。长度上限 12KB，SQL 默认 Limit 100，最大 Limit 10000 。<br>示例：</p><p>带检索条件： <code>${EdgeCacheStatus} in [&#39;miss&#39;,&#39;other&#39;] | select EdgeCacheStatus as status, count(\*) as cnt group by status limit 2</code></p><p>不带检索条件：<code>| select EdgeCacheStatus as status, count(\*) as cnt group by status</code></p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>统计查询语句，由 [<a href="https://cloud.tencent.com/document/product/1552/124662">检索条件</a>] | [<a href="https://cloud.tencent.com/document/product/1552/124662">SQL语句</a>] 构成，管道符 “|” 后的 SQL 段必填；检索条件段可为空（如 | SELECT ...），表示在全量数据上聚合。长度上限 12KB，SQL 默认 Limit 100，最大 Limit 10000 。<br>示例：</p><p>带检索条件： <code>${EdgeCacheStatus} in [&#39;miss&#39;,&#39;other&#39;] | select EdgeCacheStatus as status, count(\*) as cnt group by status limit 2</code></p><p>不带检索条件：<code>| select EdgeCacheStatus as status, count(\*) as cnt group by status</code></p>
                     * @param _query <p>统计查询语句，由 [<a href="https://cloud.tencent.com/document/product/1552/124662">检索条件</a>] | [<a href="https://cloud.tencent.com/document/product/1552/124662">SQL语句</a>] 构成，管道符 “|” 后的 SQL 段必填；检索条件段可为空（如 | SELECT ...），表示在全量数据上聚合。长度上限 12KB，SQL 默认 Limit 100，最大 Limit 10000 。<br>示例：</p><p>带检索条件： <code>${EdgeCacheStatus} in [&#39;miss&#39;,&#39;other&#39;] | select EdgeCacheStatus as status, count(\*) as cnt group by status limit 2</code></p><p>不带检索条件：<code>| select EdgeCacheStatus as status, count(\*) as cnt group by status</code></p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>数据归属地区，可选值：</p><ul><li>mainland：中国大陆境内；</li><li>overseas：全球（不含中国大陆）。</li></ul>注意：若站点服务区域为“全球可用区”，获取全部数据需要分别查询 mainland 和 overseas 的数据。<p></p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>日志类型，可选值：</p><ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul>默认为 l7-access-logs 。<p></p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>开始时间，示例值：2020-04-29T00:00:00Z。套餐版本不同，支持的可查询开始时间至今的最大时间跨度不同，详情请见 <a href="https://cloud.tencent.com/document/product/1552/94165#45435466-9103-4ff6-be22-e31717044fb2">套餐选型对比</a>。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，示例值：2020-04-30T00:00:00Z。单次查询的开始时间到结束时间跨度最大为 31 天。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>统计查询语句，由 [<a href="https://cloud.tencent.com/document/product/1552/124662">检索条件</a>] | [<a href="https://cloud.tencent.com/document/product/1552/124662">SQL语句</a>] 构成，管道符 “|” 后的 SQL 段必填；检索条件段可为空（如 | SELECT ...），表示在全量数据上聚合。长度上限 12KB，SQL 默认 Limit 100，最大 Limit 10000 。<br>示例：</p><p>带检索条件： <code>${EdgeCacheStatus} in [&#39;miss&#39;,&#39;other&#39;] | select EdgeCacheStatus as status, count(\*) as cnt group by status limit 2</code></p><p>不带检索条件：<code>| select EdgeCacheStatus as status, count(\*) as cnt group by status</code></p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISSTATISTICSREQUEST_H_
