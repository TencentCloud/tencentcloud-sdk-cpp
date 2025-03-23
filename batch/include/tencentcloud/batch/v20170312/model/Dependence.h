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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DEPENDENCE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DEPENDENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 依赖关系
                */
                class Dependence : public AbstractModel
                {
                public:
                    Dependence();
                    ~Dependence() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取依赖关系的起点任务名称
                     * @return StartTask 依赖关系的起点任务名称
                     * 
                     */
                    std::string GetStartTask() const;

                    /**
                     * 设置依赖关系的起点任务名称
                     * @param _startTask 依赖关系的起点任务名称
                     * 
                     */
                    void SetStartTask(const std::string& _startTask);

                    /**
                     * 判断参数 StartTask 是否已赋值
                     * @return StartTask 是否已赋值
                     * 
                     */
                    bool StartTaskHasBeenSet() const;

                    /**
                     * 获取依赖关系的终点任务名称
                     * @return EndTask 依赖关系的终点任务名称
                     * 
                     */
                    std::string GetEndTask() const;

                    /**
                     * 设置依赖关系的终点任务名称
                     * @param _endTask 依赖关系的终点任务名称
                     * 
                     */
                    void SetEndTask(const std::string& _endTask);

                    /**
                     * 判断参数 EndTask 是否已赋值
                     * @return EndTask 是否已赋值
                     * 
                     */
                    bool EndTaskHasBeenSet() const;

                private:

                    /**
                     * 依赖关系的起点任务名称
                     */
                    std::string m_startTask;
                    bool m_startTaskHasBeenSet;

                    /**
                     * 依赖关系的终点任务名称
                     */
                    std::string m_endTask;
                    bool m_endTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DEPENDENCE_H_
