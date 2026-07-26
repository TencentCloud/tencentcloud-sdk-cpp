/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TIMERCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TIMERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/TimerPushConfig.h>
#include <tencentcloud/adp/v20260520/model/TimerScheduleConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * TimerConfig
                */
                class TimerConfig : public AbstractModel
                {
                public:
                    TimerConfig();
                    ~TimerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推送配置
                     * @return PushConfig 推送配置
                     * 
                     */
                    TimerPushConfig GetPushConfig() const;

                    /**
                     * 设置推送配置
                     * @param _pushConfig 推送配置
                     * 
                     */
                    void SetPushConfig(const TimerPushConfig& _pushConfig);

                    /**
                     * 判断参数 PushConfig 是否已赋值
                     * @return PushConfig 是否已赋值
                     * 
                     */
                    bool PushConfigHasBeenSet() const;

                    /**
                     * 获取定时配置
                     * @return Schedule 定时配置
                     * 
                     */
                    TimerScheduleConfig GetSchedule() const;

                    /**
                     * 设置定时配置
                     * @param _schedule 定时配置
                     * 
                     */
                    void SetSchedule(const TimerScheduleConfig& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                private:

                    /**
                     * 推送配置
                     */
                    TimerPushConfig m_pushConfig;
                    bool m_pushConfigHasBeenSet;

                    /**
                     * 定时配置
                     */
                    TimerScheduleConfig m_schedule;
                    bool m_scheduleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TIMERCONFIG_H_
