/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取要检索分析的日志的起始时间，Unix时间戳（毫秒）
                     * @return StartTime 要检索分析的日志的起始时间，Unix时间戳（毫秒）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置要检索分析的日志的起始时间，Unix时间戳（毫秒）
                     * @param _startTime 要检索分析的日志的起始时间，Unix时间戳（毫秒）
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
                     * 获取要检索分析的日志的结束时间，Unix时间戳（毫秒）
                     * @return EndTime 要检索分析的日志的结束时间，Unix时间戳（毫秒）
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置要检索分析的日志的结束时间，Unix时间戳（毫秒）
                     * @param _endTime 要检索分析的日志的结束时间，Unix时间戳（毫秒）
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
                     * 获取检索分析语句，最大长度为12KB，查询语法可参考文档 https://cloud.tencent.com/document/product/296/50508
                     * @return QueryString 检索分析语句，最大长度为12KB，查询语法可参考文档 https://cloud.tencent.com/document/product/296/50508
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置检索分析语句，最大长度为12KB，查询语法可参考文档 https://cloud.tencent.com/document/product/296/50508
                     * @param _queryString 检索分析语句，最大长度为12KB，查询语法可参考文档 https://cloud.tencent.com/document/product/296/50508
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
                     * 获取表示单次查询返回的原始日志条数，最大值为1000，获取后续日志需使用Context参数
                     * @return Count 表示单次查询返回的原始日志条数，最大值为1000，获取后续日志需使用Context参数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置表示单次查询返回的原始日志条数，最大值为1000，获取后续日志需使用Context参数
                     * @param _count 表示单次查询返回的原始日志条数，最大值为1000，获取后续日志需使用Context参数
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
                     * 获取原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * @return Sort 原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * @param _sort 原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
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
                     * 获取透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时
                     * @return Context 透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时
                     * @param _context 透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时
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
                     * 要检索分析的日志的起始时间，Unix时间戳（毫秒）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 要检索分析的日志的结束时间，Unix时间戳（毫秒）
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 检索分析语句，最大长度为12KB，查询语法可参考文档 https://cloud.tencent.com/document/product/296/50508
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * 表示单次查询返回的原始日志条数，最大值为1000，获取后续日志需使用Context参数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGREQUEST_H_
