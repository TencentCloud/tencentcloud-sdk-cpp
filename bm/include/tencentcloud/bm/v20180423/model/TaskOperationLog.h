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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_TASKOPERATIONLOG_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_TASKOPERATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 维修任务操作日志
                */
                class TaskOperationLog : public AbstractModel
                {
                public:
                    TaskOperationLog();
                    ~TaskOperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作步骤
                     * @return TaskStep 操作步骤
                     * 
                     */
                    std::string GetTaskStep() const;

                    /**
                     * 设置操作步骤
                     * @param _taskStep 操作步骤
                     * 
                     */
                    void SetTaskStep(const std::string& _taskStep);

                    /**
                     * 判断参数 TaskStep 是否已赋值
                     * @return TaskStep 是否已赋值
                     * 
                     */
                    bool TaskStepHasBeenSet() const;

                    /**
                     * 获取操作人
                     * @return Operator 操作人
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人
                     * @param _operator 操作人
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取操作描述
                     * @return OperationDetail 操作描述
                     * 
                     */
                    std::string GetOperationDetail() const;

                    /**
                     * 设置操作描述
                     * @param _operationDetail 操作描述
                     * 
                     */
                    void SetOperationDetail(const std::string& _operationDetail);

                    /**
                     * 判断参数 OperationDetail 是否已赋值
                     * @return OperationDetail 是否已赋值
                     * 
                     */
                    bool OperationDetailHasBeenSet() const;

                    /**
                     * 获取操作时间
                     * @return OperationTime 操作时间
                     * 
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 设置操作时间
                     * @param _operationTime 操作时间
                     * 
                     */
                    void SetOperationTime(const std::string& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     * 
                     */
                    bool OperationTimeHasBeenSet() const;

                private:

                    /**
                     * 操作步骤
                     */
                    std::string m_taskStep;
                    bool m_taskStepHasBeenSet;

                    /**
                     * 操作人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 操作描述
                     */
                    std::string m_operationDetail;
                    bool m_operationDetailHasBeenSet;

                    /**
                     * 操作时间
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_TASKOPERATIONLOG_H_
