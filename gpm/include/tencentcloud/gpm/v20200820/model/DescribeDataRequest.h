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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEDATAREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * DescribeData请求参数结构体
                */
                class DescribeDataRequest : public AbstractModel
                {
                public:
                    DescribeDataRequest();
                    ~DescribeDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间，单位：秒
                     * @return StartTime 起始时间，单位：秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间，单位：秒
                     * @param _startTime 起始时间，单位：秒
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取截止时间，单位：秒
                     * @return EndTime 截止时间，单位：秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置截止时间，单位：秒
                     * @param _endTime 截止时间，单位：秒
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取时间粒度，1表示1天；2表示1小时；3表示1分钟；4表示10分钟；5表示30分钟
                     * @return TimeType 时间粒度，1表示1天；2表示1小时；3表示1分钟；4表示10分钟；5表示30分钟
                     * 
                     */
                    int64_t GetTimeType() const;

                    /**
                     * 设置时间粒度，1表示1天；2表示1小时；3表示1分钟；4表示10分钟；5表示30分钟
                     * @param _timeType 时间粒度，1表示1天；2表示1小时；3表示1分钟；4表示10分钟；5表示30分钟
                     * 
                     */
                    void SetTimeType(const int64_t& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                    /**
                     * 获取匹配code
                     * @return MatchCode 匹配code
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置匹配code
                     * @param _matchCode 匹配code
                     * 
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     * 
                     */
                    bool MatchCodeHasBeenSet() const;

                private:

                    /**
                     * 起始时间，单位：秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 截止时间，单位：秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 时间粒度，1表示1天；2表示1小时；3表示1分钟；4表示10分钟；5表示30分钟
                     */
                    int64_t m_timeType;
                    bool m_timeTypeHasBeenSet;

                    /**
                     * 匹配code
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEDATAREQUEST_H_
