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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DAYREPEATSTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DAYREPEATSTRATEGY_H_

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
                * 弹性扩缩容按天重复任务描述
                */
                class DayRepeatStrategy : public AbstractModel
                {
                public:
                    DayRepeatStrategy();
                    ~DayRepeatStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重复任务执行的具体时刻，例如"01:02:00"
                     * @return ExecuteAtTimeOfDay 重复任务执行的具体时刻，例如"01:02:00"
                     * 
                     */
                    std::string GetExecuteAtTimeOfDay() const;

                    /**
                     * 设置重复任务执行的具体时刻，例如"01:02:00"
                     * @param _executeAtTimeOfDay 重复任务执行的具体时刻，例如"01:02:00"
                     * 
                     */
                    void SetExecuteAtTimeOfDay(const std::string& _executeAtTimeOfDay);

                    /**
                     * 判断参数 ExecuteAtTimeOfDay 是否已赋值
                     * @return ExecuteAtTimeOfDay 是否已赋值
                     * 
                     */
                    bool ExecuteAtTimeOfDayHasBeenSet() const;

                    /**
                     * 获取每隔Step天执行一次
                     * @return Step 每隔Step天执行一次
                     * 
                     */
                    uint64_t GetStep() const;

                    /**
                     * 设置每隔Step天执行一次
                     * @param _step 每隔Step天执行一次
                     * 
                     */
                    void SetStep(const uint64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                private:

                    /**
                     * 重复任务执行的具体时刻，例如"01:02:00"
                     */
                    std::string m_executeAtTimeOfDay;
                    bool m_executeAtTimeOfDayHasBeenSet;

                    /**
                     * 每隔Step天执行一次
                     */
                    uint64_t m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DAYREPEATSTRATEGY_H_
