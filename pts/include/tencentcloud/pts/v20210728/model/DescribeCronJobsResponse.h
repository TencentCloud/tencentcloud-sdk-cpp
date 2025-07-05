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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBECRONJOBSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBECRONJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/CronJob.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeCronJobs返回参数结构体
                */
                class DescribeCronJobsResponse : public AbstractModel
                {
                public:
                    DescribeCronJobsResponse();
                    ~DescribeCronJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取定时任务总数
                     * @return Total 定时任务总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取定时任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronJobSet 定时任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CronJob> GetCronJobSet() const;

                    /**
                     * 判断参数 CronJobSet 是否已赋值
                     * @return CronJobSet 是否已赋值
                     * 
                     */
                    bool CronJobSetHasBeenSet() const;

                private:

                    /**
                     * 定时任务总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 定时任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CronJob> m_cronJobSet;
                    bool m_cronJobSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBECRONJOBSRESPONSE_H_
