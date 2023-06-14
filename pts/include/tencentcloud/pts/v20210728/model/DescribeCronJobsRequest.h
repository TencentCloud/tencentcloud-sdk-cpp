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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBECRONJOBSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBECRONJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeCronJobs请求参数结构体
                */
                class DescribeCronJobsRequest : public AbstractModel
                {
                public:
                    DescribeCronJobsRequest();
                    ~DescribeCronJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID数组
                     * @return ProjectIds 项目ID数组
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID数组
                     * @param _projectIds 项目ID数组
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回数量
                     * @return Limit 返回数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量
                     * @param _limit 返回数量
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
                     * 获取定时任务ID数组
                     * @return CronJobIds 定时任务ID数组
                     * 
                     */
                    std::vector<std::string> GetCronJobIds() const;

                    /**
                     * 设置定时任务ID数组
                     * @param _cronJobIds 定时任务ID数组
                     * 
                     */
                    void SetCronJobIds(const std::vector<std::string>& _cronJobIds);

                    /**
                     * 判断参数 CronJobIds 是否已赋值
                     * @return CronJobIds 是否已赋值
                     * 
                     */
                    bool CronJobIdsHasBeenSet() const;

                    /**
                     * 获取定时任务名字，模糊查询
                     * @return CronJobName 定时任务名字，模糊查询
                     * 
                     */
                    std::string GetCronJobName() const;

                    /**
                     * 设置定时任务名字，模糊查询
                     * @param _cronJobName 定时任务名字，模糊查询
                     * 
                     */
                    void SetCronJobName(const std::string& _cronJobName);

                    /**
                     * 判断参数 CronJobName 是否已赋值
                     * @return CronJobName 是否已赋值
                     * 
                     */
                    bool CronJobNameHasBeenSet() const;

                    /**
                     * 获取定时任务状态数组
                     * @return CronJobStatus 定时任务状态数组
                     * 
                     */
                    std::vector<int64_t> GetCronJobStatus() const;

                    /**
                     * 设置定时任务状态数组
                     * @param _cronJobStatus 定时任务状态数组
                     * 
                     */
                    void SetCronJobStatus(const std::vector<int64_t>& _cronJobStatus);

                    /**
                     * 判断参数 CronJobStatus 是否已赋值
                     * @return CronJobStatus 是否已赋值
                     * 
                     */
                    bool CronJobStatusHasBeenSet() const;

                    /**
                     * 获取排序的列
                     * @return OrderBy 排序的列
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序的列
                     * @param _orderBy 排序的列
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取是否正序
                     * @return Ascend 是否正序
                     * 
                     */
                    bool GetAscend() const;

                    /**
                     * 设置是否正序
                     * @param _ascend 是否正序
                     * 
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     * 
                     */
                    bool AscendHasBeenSet() const;

                private:

                    /**
                     * 项目ID数组
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 定时任务ID数组
                     */
                    std::vector<std::string> m_cronJobIds;
                    bool m_cronJobIdsHasBeenSet;

                    /**
                     * 定时任务名字，模糊查询
                     */
                    std::string m_cronJobName;
                    bool m_cronJobNameHasBeenSet;

                    /**
                     * 定时任务状态数组
                     */
                    std::vector<int64_t> m_cronJobStatus;
                    bool m_cronJobStatusHasBeenSet;

                    /**
                     * 排序的列
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 是否正序
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBECRONJOBSREQUEST_H_
