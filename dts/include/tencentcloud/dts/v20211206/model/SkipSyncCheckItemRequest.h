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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SKIPSYNCCHECKITEMREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SKIPSYNCCHECKITEMREQUEST_H_

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
                * SkipSyncCheckItem请求参数结构体
                */
                class SkipSyncCheckItemRequest : public AbstractModel
                {
                public:
                    SkipSyncCheckItemRequest();
                    ~SkipSyncCheckItemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id，如：sync-4ddgid2
                     * @return JobId 任务id，如：sync-4ddgid2
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务id，如：sync-4ddgid2
                     * @param _jobId 任务id，如：sync-4ddgid2
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
                     * 获取需要跳过校验项的步骤id，需要通过`DescribeCheckSyncJobResult`接口返回StepInfos[i].StepId字段获取，例如：["OptimizeCheck"]
                     * @return StepIds 需要跳过校验项的步骤id，需要通过`DescribeCheckSyncJobResult`接口返回StepInfos[i].StepId字段获取，例如：["OptimizeCheck"]
                     * 
                     */
                    std::vector<std::string> GetStepIds() const;

                    /**
                     * 设置需要跳过校验项的步骤id，需要通过`DescribeCheckSyncJobResult`接口返回StepInfos[i].StepId字段获取，例如：["OptimizeCheck"]
                     * @param _stepIds 需要跳过校验项的步骤id，需要通过`DescribeCheckSyncJobResult`接口返回StepInfos[i].StepId字段获取，例如：["OptimizeCheck"]
                     * 
                     */
                    void SetStepIds(const std::vector<std::string>& _stepIds);

                    /**
                     * 判断参数 StepIds 是否已赋值
                     * @return StepIds 是否已赋值
                     * 
                     */
                    bool StepIdsHasBeenSet() const;

                private:

                    /**
                     * 任务id，如：sync-4ddgid2
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 需要跳过校验项的步骤id，需要通过`DescribeCheckSyncJobResult`接口返回StepInfos[i].StepId字段获取，例如：["OptimizeCheck"]
                     */
                    std::vector<std::string> m_stepIds;
                    bool m_stepIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SKIPSYNCCHECKITEMREQUEST_H_
