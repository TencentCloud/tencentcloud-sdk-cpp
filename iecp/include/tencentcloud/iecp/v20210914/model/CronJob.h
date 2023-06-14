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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CRONJOB_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CRONJOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/Job.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CronJob配置
                */
                class CronJob : public AbstractModel
                {
                public:
                    CronJob();
                    ~CronJob() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调度配置
                     * @return Schedule 调度配置
                     * 
                     */
                    std::string GetSchedule() const;

                    /**
                     * 设置调度配置
                     * @param _schedule 调度配置
                     * 
                     */
                    void SetSchedule(const std::string& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取运行时间
                     * @return StartingDeadlineSeconds 运行时间
                     * 
                     */
                    int64_t GetStartingDeadlineSeconds() const;

                    /**
                     * 设置运行时间
                     * @param _startingDeadlineSeconds 运行时间
                     * 
                     */
                    void SetStartingDeadlineSeconds(const int64_t& _startingDeadlineSeconds);

                    /**
                     * 判断参数 StartingDeadlineSeconds 是否已赋值
                     * @return StartingDeadlineSeconds 是否已赋值
                     * 
                     */
                    bool StartingDeadlineSecondsHasBeenSet() const;

                    /**
                     * 获取job并行策略(Allow|Forbid|Replace)
                     * @return ConcurrencyPolicy job并行策略(Allow|Forbid|Replace)
                     * 
                     */
                    std::string GetConcurrencyPolicy() const;

                    /**
                     * 设置job并行策略(Allow|Forbid|Replace)
                     * @param _concurrencyPolicy job并行策略(Allow|Forbid|Replace)
                     * 
                     */
                    void SetConcurrencyPolicy(const std::string& _concurrencyPolicy);

                    /**
                     * 判断参数 ConcurrencyPolicy 是否已赋值
                     * @return ConcurrencyPolicy 是否已赋值
                     * 
                     */
                    bool ConcurrencyPolicyHasBeenSet() const;

                    /**
                     * 获取Job配置
                     * @return Job Job配置
                     * 
                     */
                    Job GetJob() const;

                    /**
                     * 设置Job配置
                     * @param _job Job配置
                     * 
                     */
                    void SetJob(const Job& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                private:

                    /**
                     * 调度配置
                     */
                    std::string m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * 运行时间
                     */
                    int64_t m_startingDeadlineSeconds;
                    bool m_startingDeadlineSecondsHasBeenSet;

                    /**
                     * job并行策略(Allow|Forbid|Replace)
                     */
                    std::string m_concurrencyPolicy;
                    bool m_concurrencyPolicyHasBeenSet;

                    /**
                     * Job配置
                     */
                    Job m_job;
                    bool m_jobHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CRONJOB_H_
