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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DELETECRONJOBSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DELETECRONJOBSREQUEST_H_

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
                * DeleteCronJobs请求参数结构体
                */
                class DeleteCronJobsRequest : public AbstractModel
                {
                public:
                    DeleteCronJobsRequest();
                    ~DeleteCronJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

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

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 定时任务ID数组
                     */
                    std::vector<std::string> m_cronJobIds;
                    bool m_cronJobIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DELETECRONJOBSREQUEST_H_
