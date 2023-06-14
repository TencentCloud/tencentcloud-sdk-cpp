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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_SEARCHCLSLOGREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_SEARCHCLSLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * SearchClsLog请求参数结构体
                */
                class SearchClsLogRequest : public AbstractModel
                {
                public:
                    SearchClsLogRequest();
                    ~SearchClsLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境唯一ID
                     * @return EnvId 环境唯一ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境唯一ID
                     * @param _envId 环境唯一ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取查询起始时间条件
                     * @return StartTime 查询起始时间条件
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间条件
                     * @param _startTime 查询起始时间条件
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
                     * 获取查询结束时间条件
                     * @return EndTime 查询结束时间条件
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间条件
                     * @param _endTime 查询结束时间条件
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
                     * 获取查询语句，详情参考 https://cloud.tencent.com/document/product/614/47044
                     * @return QueryString 查询语句，详情参考 https://cloud.tencent.com/document/product/614/47044
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置查询语句，详情参考 https://cloud.tencent.com/document/product/614/47044
                     * @param _queryString 查询语句，详情参考 https://cloud.tencent.com/document/product/614/47044
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
                     * 获取单次要返回的日志条数，单次返回的最大条数为100
                     * @return Limit 单次要返回的日志条数，单次返回的最大条数为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次要返回的日志条数，单次返回的最大条数为100
                     * @param _limit 单次要返回的日志条数，单次返回的最大条数为100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取加载更多使用，透传上次返回的 context 值，获取后续的日志内容，通过游标最多可获取10000条，请尽可能缩小时间范围
                     * @return Context 加载更多使用，透传上次返回的 context 值，获取后续的日志内容，通过游标最多可获取10000条，请尽可能缩小时间范围
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置加载更多使用，透传上次返回的 context 值，获取后续的日志内容，通过游标最多可获取10000条，请尽可能缩小时间范围
                     * @param _context 加载更多使用，透传上次返回的 context 值，获取后续的日志内容，通过游标最多可获取10000条，请尽可能缩小时间范围
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取按时间排序 asc（升序）或者 desc（降序），默认为 desc
                     * @return Sort 按时间排序 asc（升序）或者 desc（降序），默认为 desc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置按时间排序 asc（升序）或者 desc（降序），默认为 desc
                     * @param _sort 按时间排序 asc（升序）或者 desc（降序），默认为 desc
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
                     * 获取是否使用Lucene语法，默认为false
                     * @return UseLucene 是否使用Lucene语法，默认为false
                     * 
                     */
                    bool GetUseLucene() const;

                    /**
                     * 设置是否使用Lucene语法，默认为false
                     * @param _useLucene 是否使用Lucene语法，默认为false
                     * 
                     */
                    void SetUseLucene(const bool& _useLucene);

                    /**
                     * 判断参数 UseLucene 是否已赋值
                     * @return UseLucene 是否已赋值
                     * 
                     */
                    bool UseLuceneHasBeenSet() const;

                private:

                    /**
                     * 环境唯一ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 查询起始时间条件
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间条件
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询语句，详情参考 https://cloud.tencent.com/document/product/614/47044
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * 单次要返回的日志条数，单次返回的最大条数为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 加载更多使用，透传上次返回的 context 值，获取后续的日志内容，通过游标最多可获取10000条，请尽可能缩小时间范围
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 按时间排序 asc（升序）或者 desc（降序），默认为 desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 是否使用Lucene语法，默认为false
                     */
                    bool m_useLucene;
                    bool m_useLuceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_SEARCHCLSLOGREQUEST_H_
