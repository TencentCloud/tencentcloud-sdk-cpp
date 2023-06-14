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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASK_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SQLTask.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 任务类型，任务如SQL查询等。
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SQL查询任务
                     * @return SQLTask SQL查询任务
                     * 
                     */
                    SQLTask GetSQLTask() const;

                    /**
                     * 设置SQL查询任务
                     * @param _sQLTask SQL查询任务
                     * 
                     */
                    void SetSQLTask(const SQLTask& _sQLTask);

                    /**
                     * 判断参数 SQLTask 是否已赋值
                     * @return SQLTask 是否已赋值
                     * 
                     */
                    bool SQLTaskHasBeenSet() const;

                    /**
                     * 获取Spark SQL查询任务
                     * @return SparkSQLTask Spark SQL查询任务
                     * 
                     */
                    SQLTask GetSparkSQLTask() const;

                    /**
                     * 设置Spark SQL查询任务
                     * @param _sparkSQLTask Spark SQL查询任务
                     * 
                     */
                    void SetSparkSQLTask(const SQLTask& _sparkSQLTask);

                    /**
                     * 判断参数 SparkSQLTask 是否已赋值
                     * @return SparkSQLTask 是否已赋值
                     * 
                     */
                    bool SparkSQLTaskHasBeenSet() const;

                private:

                    /**
                     * SQL查询任务
                     */
                    SQLTask m_sQLTask;
                    bool m_sQLTaskHasBeenSet;

                    /**
                     * Spark SQL查询任务
                     */
                    SQLTask m_sparkSQLTask;
                    bool m_sparkSQLTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASK_H_
