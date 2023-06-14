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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EXECUTION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EXECUTION_H_

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
                * 执行动作。
                */
                class Execution : public AbstractModel
                {
                public:
                    Execution();
                    ~Execution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务类型，目前支持以下类型。
1. “MR”，将通过hadoop jar的方式提交。
2. "HIVE"，将通过hive -f的方式提交。
3. "SPARK"，将通过spark-submit的方式提交。
                     * @return JobType 任务类型，目前支持以下类型。
1. “MR”，将通过hadoop jar的方式提交。
2. "HIVE"，将通过hive -f的方式提交。
3. "SPARK"，将通过spark-submit的方式提交。
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置任务类型，目前支持以下类型。
1. “MR”，将通过hadoop jar的方式提交。
2. "HIVE"，将通过hive -f的方式提交。
3. "SPARK"，将通过spark-submit的方式提交。
                     * @param _jobType 任务类型，目前支持以下类型。
1. “MR”，将通过hadoop jar的方式提交。
2. "HIVE"，将通过hive -f的方式提交。
3. "SPARK"，将通过spark-submit的方式提交。
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取任务参数，提供除提交指令以外的参数。
                     * @return Args 任务参数，提供除提交指令以外的参数。
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置任务参数，提供除提交指令以外的参数。
                     * @param _args 任务参数，提供除提交指令以外的参数。
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                private:

                    /**
                     * 任务类型，目前支持以下类型。
1. “MR”，将通过hadoop jar的方式提交。
2. "HIVE"，将通过hive -f的方式提交。
3. "SPARK"，将通过spark-submit的方式提交。
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 任务参数，提供除提交指令以外的参数。
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EXECUTION_H_
