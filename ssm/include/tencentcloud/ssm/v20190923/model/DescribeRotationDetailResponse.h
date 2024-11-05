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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONDETAILRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DescribeRotationDetail返回参数结构体
                */
                class DescribeRotationDetailResponse : public AbstractModel
                {
                public:
                    DescribeRotationDetailResponse();
                    ~DescribeRotationDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取否允许轮转，true表示开启轮转，false表示禁止轮转。
                     * @return EnableRotation 否允许轮转，true表示开启轮转，false表示禁止轮转。
                     * 
                     */
                    bool GetEnableRotation() const;

                    /**
                     * 判断参数 EnableRotation 是否已赋值
                     * @return EnableRotation 是否已赋值
                     * 
                     */
                    bool EnableRotationHasBeenSet() const;

                    /**
                     * 获取轮转的频率，以天为单位，默认为1天。
                     * @return Frequency 轮转的频率，以天为单位，默认为1天。
                     * 
                     */
                    int64_t GetFrequency() const;

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取最近一次轮转的时间，显式可见的时间字符串，格式 2006-01-02 15:04:05。
                     * @return LatestRotateTime 最近一次轮转的时间，显式可见的时间字符串，格式 2006-01-02 15:04:05。
                     * 
                     */
                    std::string GetLatestRotateTime() const;

                    /**
                     * 判断参数 LatestRotateTime 是否已赋值
                     * @return LatestRotateTime 是否已赋值
                     * 
                     */
                    bool LatestRotateTimeHasBeenSet() const;

                    /**
                     * 获取下一次开始轮转的时间，显式可见的时间字符串，格式 2006-01-02 15:04:05。
                     * @return NextRotateBeginTime 下一次开始轮转的时间，显式可见的时间字符串，格式 2006-01-02 15:04:05。
                     * 
                     */
                    std::string GetNextRotateBeginTime() const;

                    /**
                     * 判断参数 NextRotateBeginTime 是否已赋值
                     * @return NextRotateBeginTime 是否已赋值
                     * 
                     */
                    bool NextRotateBeginTimeHasBeenSet() const;

                private:

                    /**
                     * 否允许轮转，true表示开启轮转，false表示禁止轮转。
                     */
                    bool m_enableRotation;
                    bool m_enableRotationHasBeenSet;

                    /**
                     * 轮转的频率，以天为单位，默认为1天。
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 最近一次轮转的时间，显式可见的时间字符串，格式 2006-01-02 15:04:05。
                     */
                    std::string m_latestRotateTime;
                    bool m_latestRotateTimeHasBeenSet;

                    /**
                     * 下一次开始轮转的时间，显式可见的时间字符串，格式 2006-01-02 15:04:05。
                     */
                    std::string m_nextRotateBeginTime;
                    bool m_nextRotateBeginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONDETAILRESPONSE_H_
