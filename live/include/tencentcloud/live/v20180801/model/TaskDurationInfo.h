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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TASKDURATIONINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TASKDURATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 拉流转推任务的时长分布信息
                */
                class TaskDurationInfo : public AbstractModel
                {
                public:
                    TaskDurationInfo();
                    ~TaskDurationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拉流转推任务的时间点
                     * @return Time 拉流转推任务的时间点
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置拉流转推任务的时间点
                     * @param _time 拉流转推任务的时间点
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取拉流转推任务的时长，单位为分钟
                     * @return Duration 拉流转推任务的时长，单位为分钟
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置拉流转推任务的时长，单位为分钟
                     * @param _duration 拉流转推任务的时长，单位为分钟
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取拉流转推任务的时长，单位为秒
                     * @return DurationSecond 拉流转推任务的时长，单位为秒
                     * 
                     */
                    uint64_t GetDurationSecond() const;

                    /**
                     * 设置拉流转推任务的时长，单位为秒
                     * @param _durationSecond 拉流转推任务的时长，单位为秒
                     * 
                     */
                    void SetDurationSecond(const uint64_t& _durationSecond);

                    /**
                     * 判断参数 DurationSecond 是否已赋值
                     * @return DurationSecond 是否已赋值
                     * 
                     */
                    bool DurationSecondHasBeenSet() const;

                private:

                    /**
                     * 拉流转推任务的时间点
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 拉流转推任务的时长，单位为分钟
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 拉流转推任务的时长，单位为秒
                     */
                    uint64_t m_durationSecond;
                    bool m_durationSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TASKDURATIONINFO_H_
