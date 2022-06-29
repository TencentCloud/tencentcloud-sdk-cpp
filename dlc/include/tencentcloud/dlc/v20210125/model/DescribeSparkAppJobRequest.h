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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSparkAppJob请求参数结构体
                */
                class DescribeSparkAppJobRequest : public AbstractModel
                {
                public:
                    DescribeSparkAppJobRequest();
                    ~DescribeSparkAppJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取spark作业Id，与JobName同时存在时，JobName无效
                     * @return JobId spark作业Id，与JobName同时存在时，JobName无效
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置spark作业Id，与JobName同时存在时，JobName无效
                     * @param JobId spark作业Id，与JobName同时存在时，JobName无效
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取spark作业名
                     * @return JobName spark作业名
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置spark作业名
                     * @param JobName spark作业名
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                private:

                    /**
                     * spark作业Id，与JobName同时存在时，JobName无效
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * spark作业名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBREQUEST_H_
