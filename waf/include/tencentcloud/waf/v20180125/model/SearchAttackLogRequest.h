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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SearchAttackLog请求参数结构体
                */
                class SearchAttackLogRequest : public AbstractModel
                {
                public:
                    SearchAttackLogRequest();
                    ~SearchAttackLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的域名，所有域名使用all
                     * @return Domain 查询的域名，所有域名使用all
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置查询的域名，所有域名使用all
                     * @param _domain 查询的域名，所有域名使用all
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取查询起始时间
                     * @return StartTime 查询起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间
                     * @param _startTime 查询起始时间
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
                     * 获取查询结束时间
                     * @return EndTime 查询结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _endTime 查询结束时间
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
                     * 获取接口升级，这个字段传空字符串,翻页使用Page字段
                     * @return Context 接口升级，这个字段传空字符串,翻页使用Page字段
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置接口升级，这个字段传空字符串,翻页使用Page字段
                     * @param _context 接口升级，这个字段传空字符串,翻页使用Page字段
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
                     * 获取Lucene语法
                     * @return QueryString Lucene语法
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置Lucene语法
                     * @param _queryString Lucene语法
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
                     * 获取查询的数量，默认10条，最多100条
                     * @return Count 查询的数量，默认10条，最多100条
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置查询的数量，默认10条，最多100条
                     * @param _count 查询的数量，默认10条，最多100条
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
                     * 获取默认为desc，可以取值desc和asc
                     * @return Sort 默认为desc，可以取值desc和asc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置默认为desc，可以取值desc和asc
                     * @param _sort 默认为desc，可以取值desc和asc
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
                     * 获取第几页，从0开始
                     * @return Page 第几页，从0开始
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置第几页，从0开始
                     * @param _page 第几页，从0开始
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 查询的域名，所有域名使用all
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 查询起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 接口升级，这个字段传空字符串,翻页使用Page字段
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Lucene语法
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * 查询的数量，默认10条，最多100条
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 默认为desc，可以取值desc和asc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 第几页，从0开始
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGREQUEST_H_
