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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SearchLog请求参数结构体
                */
                class SearchLogRequest : public AbstractModel
                {
                public:
                    SearchLogRequest();
                    ~SearchLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>要检索分析的日志的起始时间，Unix时间戳（毫秒）</p>
                     * @return StartTime <p>要检索分析的日志的起始时间，Unix时间戳（毫秒）</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>要检索分析的日志的起始时间，Unix时间戳（毫秒）</p>
                     * @param _startTime <p>要检索分析的日志的起始时间，Unix时间戳（毫秒）</p>
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
                     * 获取<p>要检索分析的日志的结束时间，Unix时间戳（毫秒）</p>
                     * @return EndTime <p>要检索分析的日志的结束时间，Unix时间戳（毫秒）</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>要检索分析的日志的结束时间，Unix时间戳（毫秒）</p>
                     * @param _endTime <p>要检索分析的日志的结束时间，Unix时间戳（毫秒）</p>
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
                     * 获取<p>检索分析语句，最大长度为12KB，查询语法可参考文档 https://cloud.tencent.com/document/product/296/50508</p>
                     * @return QueryString <p>检索分析语句，最大长度为12KB，查询语法可参考文档 https://cloud.tencent.com/document/product/296/50508</p>
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置<p>检索分析语句，最大长度为12KB，查询语法可参考文档 https://cloud.tencent.com/document/product/296/50508</p>
                     * @param _queryString <p>检索分析语句，最大长度为12KB，查询语法可参考文档 https://cloud.tencent.com/document/product/296/50508</p>
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取<p>表示单次查询返回的原始日志条数，最大值为1000，获取后续日志需使用Context参数</p>
                     * @return Count <p>表示单次查询返回的原始日志条数，最大值为1000，获取后续日志需使用Context参数</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>表示单次查询返回的原始日志条数，最大值为1000，获取后续日志需使用Context参数</p>
                     * @param _count <p>表示单次查询返回的原始日志条数，最大值为1000，获取后续日志需使用Context参数</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc</p>
                     * @return Sort <p>原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc</p>
                     * @param _sort <p>原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc</p>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时</p>
                     * @return Context <p>透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时</p>
                     * @param _context <p>透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时</p>
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * <p>要检索分析的日志的起始时间，Unix时间戳（毫秒）</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>要检索分析的日志的结束时间，Unix时间戳（毫秒）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>检索分析语句，最大长度为12KB，查询语法可参考文档 https://cloud.tencent.com/document/product/296/50508</p>
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * <p>表示单次查询返回的原始日志条数，最大值为1000，获取后续日志需使用Context参数</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGREQUEST_H_
