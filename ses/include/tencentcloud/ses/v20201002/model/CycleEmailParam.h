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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_CYCLEEMAILPARAM_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_CYCLEEMAILPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 创建重复周期发送邮件任务的参数
                */
                class CycleEmailParam : public AbstractModel
                {
                public:
                    CycleEmailParam();
                    ~CycleEmailParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务开始时间
                     * @return BeginTime 任务开始时间
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置任务开始时间
                     * @param _beginTime 任务开始时间
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取任务周期 小时维度
                     * @return IntervalTime 任务周期 小时维度
                     * 
                     */
                    uint64_t GetIntervalTime() const;

                    /**
                     * 设置任务周期 小时维度
                     * @param _intervalTime 任务周期 小时维度
                     * 
                     */
                    void SetIntervalTime(const uint64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取是否终止周期，用于任务更新 0否1是
                     * @return TermCycle 是否终止周期，用于任务更新 0否1是
                     * 
                     */
                    uint64_t GetTermCycle() const;

                    /**
                     * 设置是否终止周期，用于任务更新 0否1是
                     * @param _termCycle 是否终止周期，用于任务更新 0否1是
                     * 
                     */
                    void SetTermCycle(const uint64_t& _termCycle);

                    /**
                     * 判断参数 TermCycle 是否已赋值
                     * @return TermCycle 是否已赋值
                     * 
                     */
                    bool TermCycleHasBeenSet() const;

                private:

                    /**
                     * 任务开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 任务周期 小时维度
                     */
                    uint64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 是否终止周期，用于任务更新 0否1是
                     */
                    uint64_t m_termCycle;
                    bool m_termCycleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_CYCLEEMAILPARAM_H_
