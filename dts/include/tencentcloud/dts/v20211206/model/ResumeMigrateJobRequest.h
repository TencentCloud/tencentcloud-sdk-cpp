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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_RESUMEMIGRATEJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_RESUMEMIGRATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ResumeMigrateJob请求参数结构体
                */
                class ResumeMigrateJobRequest : public AbstractModel
                {
                public:
                    ResumeMigrateJobRequest();
                    ~ResumeMigrateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据迁移任务ID
                     * @return JobId 数据迁移任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置数据迁移任务ID
                     * @param _jobId 数据迁移任务ID
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
                     * 获取恢复任务的模式，目前的取值有：clearData 清空目标实例数据，overwrite 以覆盖写的方式执行任务，normal 跟正常流程一样，不做额外动作；注意，clearData、overwrite仅对redis生效，normal仅针对非redis链路生效
                     * @return ResumeOption 恢复任务的模式，目前的取值有：clearData 清空目标实例数据，overwrite 以覆盖写的方式执行任务，normal 跟正常流程一样，不做额外动作；注意，clearData、overwrite仅对redis生效，normal仅针对非redis链路生效
                     * 
                     */
                    std::string GetResumeOption() const;

                    /**
                     * 设置恢复任务的模式，目前的取值有：clearData 清空目标实例数据，overwrite 以覆盖写的方式执行任务，normal 跟正常流程一样，不做额外动作；注意，clearData、overwrite仅对redis生效，normal仅针对非redis链路生效
                     * @param _resumeOption 恢复任务的模式，目前的取值有：clearData 清空目标实例数据，overwrite 以覆盖写的方式执行任务，normal 跟正常流程一样，不做额外动作；注意，clearData、overwrite仅对redis生效，normal仅针对非redis链路生效
                     * 
                     */
                    void SetResumeOption(const std::string& _resumeOption);

                    /**
                     * 判断参数 ResumeOption 是否已赋值
                     * @return ResumeOption 是否已赋值
                     * 
                     */
                    bool ResumeOptionHasBeenSet() const;

                private:

                    /**
                     * 数据迁移任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 恢复任务的模式，目前的取值有：clearData 清空目标实例数据，overwrite 以覆盖写的方式执行任务，normal 跟正常流程一样，不做额外动作；注意，clearData、overwrite仅对redis生效，normal仅针对非redis链路生效
                     */
                    std::string m_resumeOption;
                    bool m_resumeOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RESUMEMIGRATEJOBREQUEST_H_
