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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERRUNTIMEINSTANCECNTBYSTATUSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERRUNTIMEINSTANCECNTBYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeSchedulerRunTimeInstanceCntByStatus请求参数结构体
                */
                class DescribeSchedulerRunTimeInstanceCntByStatusRequest : public AbstractModel
                {
                public:
                    DescribeSchedulerRunTimeInstanceCntByStatusRequest();
                    ~DescribeSchedulerRunTimeInstanceCntByStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取周期类型
                     * @return CycleUnit 周期类型
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置周期类型
                     * @param _cycleUnit 周期类型
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取时间单元 eg: 12h
                     * @return TimeUnit 时间单元 eg: 12h
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单元 eg: 12h
                     * @param _timeUnit 时间单元 eg: 12h
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取开始日期：2023-03-02
                     * @return StartTime 开始日期：2023-03-02
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始日期：2023-03-02
                     * @param _startTime 开始日期：2023-03-02
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束日前：2023-03-20
                     * @return EndTime 结束日前：2023-03-20
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束日前：2023-03-20
                     * @param _endTime 结束日前：2023-03-20
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 周期类型
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * 时间单元 eg: 12h
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 开始日期：2023-03-02
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束日前：2023-03-20
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERRUNTIMEINSTANCECNTBYSTATUSREQUEST_H_
