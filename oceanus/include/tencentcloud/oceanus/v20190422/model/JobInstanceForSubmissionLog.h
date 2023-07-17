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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBINSTANCEFORSUBMISSIONLOG_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBINSTANCEFORSUBMISSIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 搜索启动日志时返回的作业实例
                */
                class JobInstanceForSubmissionLog : public AbstractModel
                {
                public:
                    JobInstanceForSubmissionLog();
                    ~JobInstanceForSubmissionLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例的Id, 按照启动的时间顺序，从1开始
                     * @return RunningOrderId 实例的Id, 按照启动的时间顺序，从1开始
                     * 
                     */
                    int64_t GetRunningOrderId() const;

                    /**
                     * 设置实例的Id, 按照启动的时间顺序，从1开始
                     * @param _runningOrderId 实例的Id, 按照启动的时间顺序，从1开始
                     * 
                     */
                    void SetRunningOrderId(const int64_t& _runningOrderId);

                    /**
                     * 判断参数 RunningOrderId 是否已赋值
                     * @return RunningOrderId 是否已赋值
                     * 
                     */
                    bool RunningOrderIdHasBeenSet() const;

                    /**
                     * 获取作业实例的启动时间
                     * @return JobInstanceStartTime 作业实例的启动时间
                     * 
                     */
                    std::string GetJobInstanceStartTime() const;

                    /**
                     * 设置作业实例的启动时间
                     * @param _jobInstanceStartTime 作业实例的启动时间
                     * 
                     */
                    void SetJobInstanceStartTime(const std::string& _jobInstanceStartTime);

                    /**
                     * 判断参数 JobInstanceStartTime 是否已赋值
                     * @return JobInstanceStartTime 是否已赋值
                     * 
                     */
                    bool JobInstanceStartTimeHasBeenSet() const;

                    /**
                     * 获取作业实例启动的时间（毫秒）
                     * @return StartingMillis 作业实例启动的时间（毫秒）
                     * 
                     */
                    int64_t GetStartingMillis() const;

                    /**
                     * 设置作业实例启动的时间（毫秒）
                     * @param _startingMillis 作业实例启动的时间（毫秒）
                     * 
                     */
                    void SetStartingMillis(const int64_t& _startingMillis);

                    /**
                     * 判断参数 StartingMillis 是否已赋值
                     * @return StartingMillis 是否已赋值
                     * 
                     */
                    bool StartingMillisHasBeenSet() const;

                private:

                    /**
                     * 实例的Id, 按照启动的时间顺序，从1开始
                     */
                    int64_t m_runningOrderId;
                    bool m_runningOrderIdHasBeenSet;

                    /**
                     * 作业实例的启动时间
                     */
                    std::string m_jobInstanceStartTime;
                    bool m_jobInstanceStartTimeHasBeenSet;

                    /**
                     * 作业实例启动的时间（毫秒）
                     */
                    int64_t m_startingMillis;
                    bool m_startingMillisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBINSTANCEFORSUBMISSIONLOG_H_
