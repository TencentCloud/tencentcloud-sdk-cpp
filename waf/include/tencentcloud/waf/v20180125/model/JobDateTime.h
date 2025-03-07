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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_JOBDATETIME_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_JOBDATETIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/TimedJob.h>
#include <tencentcloud/waf/v20180125/model/CronJob.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 规则执行的时间结构体
                */
                class JobDateTime : public AbstractModel
                {
                public:
                    JobDateTime();
                    ~JobDateTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时执行的时间参数
                     * @return Timed 定时执行的时间参数
                     * 
                     */
                    std::vector<TimedJob> GetTimed() const;

                    /**
                     * 设置定时执行的时间参数
                     * @param _timed 定时执行的时间参数
                     * 
                     */
                    void SetTimed(const std::vector<TimedJob>& _timed);

                    /**
                     * 判断参数 Timed 是否已赋值
                     * @return Timed 是否已赋值
                     * 
                     */
                    bool TimedHasBeenSet() const;

                    /**
                     * 获取周期执行的时间参数
                     * @return Cron 周期执行的时间参数
                     * 
                     */
                    std::vector<CronJob> GetCron() const;

                    /**
                     * 设置周期执行的时间参数
                     * @param _cron 周期执行的时间参数
                     * 
                     */
                    void SetCron(const std::vector<CronJob>& _cron);

                    /**
                     * 判断参数 Cron 是否已赋值
                     * @return Cron 是否已赋值
                     * 
                     */
                    bool CronHasBeenSet() const;

                    /**
                     * 获取时区
                     * @return TimeTZone 时区
                     * 
                     */
                    std::string GetTimeTZone() const;

                    /**
                     * 设置时区
                     * @param _timeTZone 时区
                     * 
                     */
                    void SetTimeTZone(const std::string& _timeTZone);

                    /**
                     * 判断参数 TimeTZone 是否已赋值
                     * @return TimeTZone 是否已赋值
                     * 
                     */
                    bool TimeTZoneHasBeenSet() const;

                private:

                    /**
                     * 定时执行的时间参数
                     */
                    std::vector<TimedJob> m_timed;
                    bool m_timedHasBeenSet;

                    /**
                     * 周期执行的时间参数
                     */
                    std::vector<CronJob> m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * 时区
                     */
                    std::string m_timeTZone;
                    bool m_timeTZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_JOBDATETIME_H_
