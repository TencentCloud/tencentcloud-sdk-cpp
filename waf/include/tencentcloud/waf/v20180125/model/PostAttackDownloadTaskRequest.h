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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_POSTATTACKDOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_POSTATTACKDOWNLOADTASKREQUEST_H_

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
                * PostAttackDownloadTask请求参数结构体
                */
                class PostAttackDownloadTaskRequest : public AbstractModel
                {
                public:
                    PostAttackDownloadTaskRequest();
                    ~PostAttackDownloadTaskRequest() = default;
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
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

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
                     * 获取下载的日志条数
                     * @return Count 下载的日志条数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置下载的日志条数
                     * @param _count 下载的日志条数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

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
                     * Lucene语法
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 默认为desc，可以取值desc和asc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 下载的日志条数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_POSTATTACKDOWNLOADTASKREQUEST_H_
