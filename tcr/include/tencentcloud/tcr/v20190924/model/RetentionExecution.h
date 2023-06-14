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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONEXECUTION_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONEXECUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 版本保留规则执行
                */
                class RetentionExecution : public AbstractModel
                {
                public:
                    RetentionExecution();
                    ~RetentionExecution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行Id
                     * @return ExecutionId 执行Id
                     * 
                     */
                    int64_t GetExecutionId() const;

                    /**
                     * 设置执行Id
                     * @param _executionId 执行Id
                     * 
                     */
                    void SetExecutionId(const int64_t& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取所属规则id
                     * @return RetentionId 所属规则id
                     * 
                     */
                    int64_t GetRetentionId() const;

                    /**
                     * 设置所属规则id
                     * @param _retentionId 所属规则id
                     * 
                     */
                    void SetRetentionId(const int64_t& _retentionId);

                    /**
                     * 判断参数 RetentionId 是否已赋值
                     * @return RetentionId 是否已赋值
                     * 
                     */
                    bool RetentionIdHasBeenSet() const;

                    /**
                     * 获取执行的开始时间
                     * @return StartTime 执行的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置执行的开始时间
                     * @param _startTime 执行的开始时间
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
                     * 获取执行的结束时间
                     * @return EndTime 执行的结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置执行的结束时间
                     * @param _endTime 执行的结束时间
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
                     * 获取执行的状态，Failed, Succeed, Stopped, InProgress
                     * @return Status 执行的状态，Failed, Succeed, Stopped, InProgress
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置执行的状态，Failed, Succeed, Stopped, InProgress
                     * @param _status 执行的状态，Failed, Succeed, Stopped, InProgress
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 执行Id
                     */
                    int64_t m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * 所属规则id
                     */
                    int64_t m_retentionId;
                    bool m_retentionIdHasBeenSet;

                    /**
                     * 执行的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 执行的结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 执行的状态，Failed, Succeed, Stopped, InProgress
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONEXECUTION_H_
