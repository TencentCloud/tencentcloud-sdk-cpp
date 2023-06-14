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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEATTENDANCERESULTRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEATTENDANCERESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/AbsenceInfo.h>
#include <tencentcloud/tci/v20190318/model/AttendanceInfo.h>
#include <tencentcloud/tci/v20190318/model/SuspectedInfo.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DescribeAttendanceResult返回参数结构体
                */
                class DescribeAttendanceResultResponse : public AbstractModel
                {
                public:
                    DescribeAttendanceResultResponse();
                    ~DescribeAttendanceResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取缺失人员的ID列表(只针对请求中的libids字段)
                     * @return AbsenceSetInLibs 缺失人员的ID列表(只针对请求中的libids字段)
                     * 
                     */
                    std::vector<AbsenceInfo> GetAbsenceSetInLibs() const;

                    /**
                     * 判断参数 AbsenceSetInLibs 是否已赋值
                     * @return AbsenceSetInLibs 是否已赋值
                     * 
                     */
                    bool AbsenceSetInLibsHasBeenSet() const;

                    /**
                     * 获取确定出勤人员列表
                     * @return AttendanceSet 确定出勤人员列表
                     * 
                     */
                    std::vector<AttendanceInfo> GetAttendanceSet() const;

                    /**
                     * 判断参数 AttendanceSet 是否已赋值
                     * @return AttendanceSet 是否已赋值
                     * 
                     */
                    bool AttendanceSetHasBeenSet() const;

                    /**
                     * 获取疑似出勤人员列表
                     * @return SuspectedSet 疑似出勤人员列表
                     * 
                     */
                    std::vector<SuspectedInfo> GetSuspectedSet() const;

                    /**
                     * 判断参数 SuspectedSet 是否已赋值
                     * @return SuspectedSet 是否已赋值
                     * 
                     */
                    bool SuspectedSetHasBeenSet() const;

                    /**
                     * 获取缺失人员的ID列表(只针对请求中的personids字段)
                     * @return AbsenceSet 缺失人员的ID列表(只针对请求中的personids字段)
                     * 
                     */
                    std::vector<std::string> GetAbsenceSet() const;

                    /**
                     * 判断参数 AbsenceSet 是否已赋值
                     * @return AbsenceSet 是否已赋值
                     * 
                     */
                    bool AbsenceSetHasBeenSet() const;

                    /**
                     * 获取请求处理进度
                     * @return Progress 请求处理进度
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * 缺失人员的ID列表(只针对请求中的libids字段)
                     */
                    std::vector<AbsenceInfo> m_absenceSetInLibs;
                    bool m_absenceSetInLibsHasBeenSet;

                    /**
                     * 确定出勤人员列表
                     */
                    std::vector<AttendanceInfo> m_attendanceSet;
                    bool m_attendanceSetHasBeenSet;

                    /**
                     * 疑似出勤人员列表
                     */
                    std::vector<SuspectedInfo> m_suspectedSet;
                    bool m_suspectedSetHasBeenSet;

                    /**
                     * 缺失人员的ID列表(只针对请求中的personids字段)
                     */
                    std::vector<std::string> m_absenceSet;
                    bool m_absenceSetHasBeenSet;

                    /**
                     * 请求处理进度
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEATTENDANCERESULTRESPONSE_H_
