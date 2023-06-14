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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEMAINTAINPERIODRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEMAINTAINPERIODRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeMaintainPeriod返回参数结构体
                */
                class DescribeMaintainPeriodResponse : public AbstractModel
                {
                public:
                    DescribeMaintainPeriodResponse();
                    ~DescribeMaintainPeriodResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取维护week days
                     * @return MaintainWeekDays 维护week days
                     * 
                     */
                    std::vector<std::string> GetMaintainWeekDays() const;

                    /**
                     * 判断参数 MaintainWeekDays 是否已赋值
                     * @return MaintainWeekDays 是否已赋值
                     * 
                     */
                    bool MaintainWeekDaysHasBeenSet() const;

                    /**
                     * 获取维护开始时间，单位秒
                     * @return MaintainStartTime 维护开始时间，单位秒
                     * 
                     */
                    int64_t GetMaintainStartTime() const;

                    /**
                     * 判断参数 MaintainStartTime 是否已赋值
                     * @return MaintainStartTime 是否已赋值
                     * 
                     */
                    bool MaintainStartTimeHasBeenSet() const;

                    /**
                     * 获取维护时长，单位秒
                     * @return MaintainDuration 维护时长，单位秒
                     * 
                     */
                    int64_t GetMaintainDuration() const;

                    /**
                     * 判断参数 MaintainDuration 是否已赋值
                     * @return MaintainDuration 是否已赋值
                     * 
                     */
                    bool MaintainDurationHasBeenSet() const;

                private:

                    /**
                     * 维护week days
                     */
                    std::vector<std::string> m_maintainWeekDays;
                    bool m_maintainWeekDaysHasBeenSet;

                    /**
                     * 维护开始时间，单位秒
                     */
                    int64_t m_maintainStartTime;
                    bool m_maintainStartTimeHasBeenSet;

                    /**
                     * 维护时长，单位秒
                     */
                    int64_t m_maintainDuration;
                    bool m_maintainDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEMAINTAINPERIODRESPONSE_H_
