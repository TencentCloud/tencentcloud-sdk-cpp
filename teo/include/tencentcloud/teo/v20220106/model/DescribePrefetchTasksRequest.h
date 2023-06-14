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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEPREFETCHTASKSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEPREFETCHTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribePrefetchTasks请求参数结构体
                */
                class DescribePrefetchTasksRequest : public AbstractModel
                {
                public:
                    DescribePrefetchTasksRequest();
                    ~DescribePrefetchTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return JobId 任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务ID
                     * @param _jobId 任务ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

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
                     * 获取查询起始偏移量
                     * @return Offset 查询起始偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询起始偏移量
                     * @param _offset 查询起始偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询最大返回的结果条数
                     * @return Limit 查询最大返回的结果条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询最大返回的结果条数
                     * @param _limit 查询最大返回的结果条数
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
                     * 获取查询的状态
允许的值为：processing、success、failed、timeout、invalid
                     * @return Statuses 查询的状态
允许的值为：processing、success、failed、timeout、invalid
                     * 
                     */
                    std::vector<std::string> GetStatuses() const;

                    /**
                     * 设置查询的状态
允许的值为：processing、success、failed、timeout、invalid
                     * @param _statuses 查询的状态
允许的值为：processing、success、failed、timeout、invalid
                     * 
                     */
                    void SetStatuses(const std::vector<std::string>& _statuses);

                    /**
                     * 判断参数 Statuses 是否已赋值
                     * @return Statuses 是否已赋值
                     * 
                     */
                    bool StatusesHasBeenSet() const;

                    /**
                     * 获取zone id
                     * @return ZoneId zone id
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置zone id
                     * @param _zoneId zone id
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
                     * 获取查询的域名列表
                     * @return Domains 查询的域名列表
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置查询的域名列表
                     * @param _domains 查询的域名列表
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取查询的资源
                     * @return Target 查询的资源
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置查询的资源
                     * @param _target 查询的资源
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

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
                     * 查询起始偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询最大返回的结果条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询的状态
允许的值为：processing、success、failed、timeout、invalid
                     */
                    std::vector<std::string> m_statuses;
                    bool m_statusesHasBeenSet;

                    /**
                     * zone id
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 查询的域名列表
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 查询的资源
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEPREFETCHTASKSREQUEST_H_
