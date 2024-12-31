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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 调度任务详情
                */
                class SchedulerTaskDetail : public AbstractModel
                {
                public:
                    SchedulerTaskDetail();
                    ~SchedulerTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤
                     * @return Step 步骤
                     * 
                     */
                    std::string GetStep() const;

                    /**
                     * 设置步骤
                     * @param _step 步骤
                     * 
                     */
                    void SetStep(const std::string& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取进度
                     * @return Progress 进度
                     * 
                     */
                    std::string GetProgress() const;

                    /**
                     * 设置进度
                     * @param _progress 进度
                     * 
                     */
                    void SetProgress(const std::string& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取失败信息
                     * @return FailReason 失败信息
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败信息
                     * @param _failReason 失败信息
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取用来获取详情的id
                     * @return JobId 用来获取详情的id
                     * 
                     */
                    uint64_t GetJobId() const;

                    /**
                     * 设置用来获取详情的id
                     * @param _jobId 用来获取详情的id
                     * 
                     */
                    void SetJobId(const uint64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 步骤
                     */
                    std::string m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * 进度
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 失败信息
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 用来获取详情的id
                     */
                    uint64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKDETAIL_H_
