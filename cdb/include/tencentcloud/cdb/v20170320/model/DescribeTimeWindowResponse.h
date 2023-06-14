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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETIMEWINDOWRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETIMEWINDOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeTimeWindow返回参数结构体
                */
                class DescribeTimeWindowResponse : public AbstractModel
                {
                public:
                    DescribeTimeWindowResponse();
                    ~DescribeTimeWindowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取星期一的可维护时间列表。
                     * @return Monday 星期一的可维护时间列表。
                     * 
                     */
                    std::vector<std::string> GetMonday() const;

                    /**
                     * 判断参数 Monday 是否已赋值
                     * @return Monday 是否已赋值
                     * 
                     */
                    bool MondayHasBeenSet() const;

                    /**
                     * 获取星期二的可维护时间列表。
                     * @return Tuesday 星期二的可维护时间列表。
                     * 
                     */
                    std::vector<std::string> GetTuesday() const;

                    /**
                     * 判断参数 Tuesday 是否已赋值
                     * @return Tuesday 是否已赋值
                     * 
                     */
                    bool TuesdayHasBeenSet() const;

                    /**
                     * 获取星期三的可维护时间列表。
                     * @return Wednesday 星期三的可维护时间列表。
                     * 
                     */
                    std::vector<std::string> GetWednesday() const;

                    /**
                     * 判断参数 Wednesday 是否已赋值
                     * @return Wednesday 是否已赋值
                     * 
                     */
                    bool WednesdayHasBeenSet() const;

                    /**
                     * 获取星期四的可维护时间列表。
                     * @return Thursday 星期四的可维护时间列表。
                     * 
                     */
                    std::vector<std::string> GetThursday() const;

                    /**
                     * 判断参数 Thursday 是否已赋值
                     * @return Thursday 是否已赋值
                     * 
                     */
                    bool ThursdayHasBeenSet() const;

                    /**
                     * 获取星期五的可维护时间列表。
                     * @return Friday 星期五的可维护时间列表。
                     * 
                     */
                    std::vector<std::string> GetFriday() const;

                    /**
                     * 判断参数 Friday 是否已赋值
                     * @return Friday 是否已赋值
                     * 
                     */
                    bool FridayHasBeenSet() const;

                    /**
                     * 获取星期六的可维护时间列表。
                     * @return Saturday 星期六的可维护时间列表。
                     * 
                     */
                    std::vector<std::string> GetSaturday() const;

                    /**
                     * 判断参数 Saturday 是否已赋值
                     * @return Saturday 是否已赋值
                     * 
                     */
                    bool SaturdayHasBeenSet() const;

                    /**
                     * 获取星期日的可维护时间列表。
                     * @return Sunday 星期日的可维护时间列表。
                     * 
                     */
                    std::vector<std::string> GetSunday() const;

                    /**
                     * 判断参数 Sunday 是否已赋值
                     * @return Sunday 是否已赋值
                     * 
                     */
                    bool SundayHasBeenSet() const;

                    /**
                     * 获取最大数据延迟阈值
                     * @return MaxDelayTime 最大数据延迟阈值
                     * 
                     */
                    uint64_t GetMaxDelayTime() const;

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                private:

                    /**
                     * 星期一的可维护时间列表。
                     */
                    std::vector<std::string> m_monday;
                    bool m_mondayHasBeenSet;

                    /**
                     * 星期二的可维护时间列表。
                     */
                    std::vector<std::string> m_tuesday;
                    bool m_tuesdayHasBeenSet;

                    /**
                     * 星期三的可维护时间列表。
                     */
                    std::vector<std::string> m_wednesday;
                    bool m_wednesdayHasBeenSet;

                    /**
                     * 星期四的可维护时间列表。
                     */
                    std::vector<std::string> m_thursday;
                    bool m_thursdayHasBeenSet;

                    /**
                     * 星期五的可维护时间列表。
                     */
                    std::vector<std::string> m_friday;
                    bool m_fridayHasBeenSet;

                    /**
                     * 星期六的可维护时间列表。
                     */
                    std::vector<std::string> m_saturday;
                    bool m_saturdayHasBeenSet;

                    /**
                     * 星期日的可维护时间列表。
                     */
                    std::vector<std::string> m_sunday;
                    bool m_sundayHasBeenSet;

                    /**
                     * 最大数据延迟阈值
                     */
                    uint64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETIMEWINDOWRESPONSE_H_
