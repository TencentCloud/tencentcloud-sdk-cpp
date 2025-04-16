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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_BATCHSQLTASK_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_BATCHSQLTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * SparkSQL批任务信息
                */
                class BatchSqlTask : public AbstractModel
                {
                public:
                    BatchSqlTask();
                    ~BatchSqlTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SQL子任务唯一标识
                     * @return TaskId SQL子任务唯一标识
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置SQL子任务唯一标识
                     * @param _taskId SQL子任务唯一标识
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取运行SQL
                     * @return ExecuteSQL 运行SQL
                     * 
                     */
                    std::string GetExecuteSQL() const;

                    /**
                     * 设置运行SQL
                     * @param _executeSQL 运行SQL
                     * 
                     */
                    void SetExecuteSQL(const std::string& _executeSQL);

                    /**
                     * 判断参数 ExecuteSQL 是否已赋值
                     * @return ExecuteSQL 是否已赋值
                     * 
                     */
                    bool ExecuteSQLHasBeenSet() const;

                    /**
                     * 获取任务信息，成功则返回：Task Success!，失败则返回异常信息
                     * @return Message 任务信息，成功则返回：Task Success!，失败则返回异常信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置任务信息，成功则返回：Task Success!，失败则返回异常信息
                     * @param _message 任务信息，成功则返回：Task Success!，失败则返回异常信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * SQL子任务唯一标识
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 运行SQL
                     */
                    std::string m_executeSQL;
                    bool m_executeSQLHasBeenSet;

                    /**
                     * 任务信息，成功则返回：Task Success!，失败则返回异常信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_BATCHSQLTASK_H_
