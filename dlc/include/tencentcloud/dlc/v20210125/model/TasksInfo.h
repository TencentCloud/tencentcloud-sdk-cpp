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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASKSINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASKSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 批量顺序执行任务集合
                */
                class TasksInfo : public AbstractModel
                {
                public:
                    TasksInfo();
                    ~TasksInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务类型，SQLTask：SQL查询任务。SparkSQLTask：Spark SQL查询任务
                     * @return TaskType 任务类型，SQLTask：SQL查询任务。SparkSQLTask：Spark SQL查询任务
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型，SQLTask：SQL查询任务。SparkSQLTask：Spark SQL查询任务
                     * @param _taskType 任务类型，SQLTask：SQL查询任务。SparkSQLTask：Spark SQL查询任务
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取容错策略。Proceed：前面任务出错/取消后继续执行后面的任务。Terminate：前面的任务出错/取消之后终止后面任务的执行，后面的任务全部标记为已取消。
                     * @return FailureTolerance 容错策略。Proceed：前面任务出错/取消后继续执行后面的任务。Terminate：前面的任务出错/取消之后终止后面任务的执行，后面的任务全部标记为已取消。
                     * 
                     */
                    std::string GetFailureTolerance() const;

                    /**
                     * 设置容错策略。Proceed：前面任务出错/取消后继续执行后面的任务。Terminate：前面的任务出错/取消之后终止后面任务的执行，后面的任务全部标记为已取消。
                     * @param _failureTolerance 容错策略。Proceed：前面任务出错/取消后继续执行后面的任务。Terminate：前面的任务出错/取消之后终止后面任务的执行，后面的任务全部标记为已取消。
                     * 
                     */
                    void SetFailureTolerance(const std::string& _failureTolerance);

                    /**
                     * 判断参数 FailureTolerance 是否已赋值
                     * @return FailureTolerance 是否已赋值
                     * 
                     */
                    bool FailureToleranceHasBeenSet() const;

                    /**
                     * 获取base64加密后的SQL语句，用";"号分隔每个SQL语句，一次最多提交50个任务。严格按照前后顺序执行
                     * @return SQL base64加密后的SQL语句，用";"号分隔每个SQL语句，一次最多提交50个任务。严格按照前后顺序执行
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置base64加密后的SQL语句，用";"号分隔每个SQL语句，一次最多提交50个任务。严格按照前后顺序执行
                     * @param _sQL base64加密后的SQL语句，用";"号分隔每个SQL语句，一次最多提交50个任务。严格按照前后顺序执行
                     * 
                     */
                    void SetSQL(const std::string& _sQL);

                    /**
                     * 判断参数 SQL 是否已赋值
                     * @return SQL 是否已赋值
                     * 
                     */
                    bool SQLHasBeenSet() const;

                    /**
                     * 获取任务的配置信息，当前仅支持SparkSQLTask任务。
                     * @return Config 任务的配置信息，当前仅支持SparkSQLTask任务。
                     * 
                     */
                    std::vector<KVPair> GetConfig() const;

                    /**
                     * 设置任务的配置信息，当前仅支持SparkSQLTask任务。
                     * @param _config 任务的配置信息，当前仅支持SparkSQLTask任务。
                     * 
                     */
                    void SetConfig(const std::vector<KVPair>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取任务的用户自定义参数信息
                     * @return Params 任务的用户自定义参数信息
                     * 
                     */
                    std::vector<KVPair> GetParams() const;

                    /**
                     * 设置任务的用户自定义参数信息
                     * @param _params 任务的用户自定义参数信息
                     * 
                     */
                    void SetParams(const std::vector<KVPair>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 任务类型，SQLTask：SQL查询任务。SparkSQLTask：Spark SQL查询任务
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 容错策略。Proceed：前面任务出错/取消后继续执行后面的任务。Terminate：前面的任务出错/取消之后终止后面任务的执行，后面的任务全部标记为已取消。
                     */
                    std::string m_failureTolerance;
                    bool m_failureToleranceHasBeenSet;

                    /**
                     * base64加密后的SQL语句，用";"号分隔每个SQL语句，一次最多提交50个任务。严格按照前后顺序执行
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * 任务的配置信息，当前仅支持SparkSQLTask任务。
                     */
                    std::vector<KVPair> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 任务的用户自定义参数信息
                     */
                    std::vector<KVPair> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKSINFO_H_
