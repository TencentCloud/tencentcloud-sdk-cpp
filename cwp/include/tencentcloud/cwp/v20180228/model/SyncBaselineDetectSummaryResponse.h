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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SYNCBASELINEDETECTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SYNCBASELINEDETECTSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SyncBaselineDetectSummary返回参数结构体
                */
                class SyncBaselineDetectSummaryResponse : public AbstractModel
                {
                public:
                    SyncBaselineDetectSummaryResponse();
                    ~SyncBaselineDetectSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取处理进度
                     * @return ProgressRate 处理进度
                     * 
                     */
                    int64_t GetProgressRate() const;

                    /**
                     * 判断参数 ProgressRate 是否已赋值
                     * @return ProgressRate 是否已赋值
                     * 
                     */
                    bool ProgressRateHasBeenSet() const;

                    /**
                     * 获取未通过策略总数
                     * @return NotPassPolicyCount 未通过策略总数
                     * 
                     */
                    int64_t GetNotPassPolicyCount() const;

                    /**
                     * 判断参数 NotPassPolicyCount 是否已赋值
                     * @return NotPassPolicyCount 是否已赋值
                     * 
                     */
                    bool NotPassPolicyCountHasBeenSet() const;

                    /**
                     * 获取主机总数
                     * @return HostCount 主机总数
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取1:即将进行首次扫描   0:已经扫描过了
                     * @return WillFirstScan 1:即将进行首次扫描   0:已经扫描过了
                     * 
                     */
                    int64_t GetWillFirstScan() const;

                    /**
                     * 判断参数 WillFirstScan 是否已赋值
                     * @return WillFirstScan 是否已赋值
                     * 
                     */
                    bool WillFirstScanHasBeenSet() const;

                    /**
                     * 获取正在检测的任务ID
                     * @return DetectingTaskIds 正在检测的任务ID
                     * 
                     */
                    std::vector<int64_t> GetDetectingTaskIds() const;

                    /**
                     * 判断参数 DetectingTaskIds 是否已赋值
                     * @return DetectingTaskIds 是否已赋值
                     * 
                     */
                    bool DetectingTaskIdsHasBeenSet() const;

                    /**
                     * 获取扫描中剩余时间(分钟)
                     * @return LeftMins 扫描中剩余时间(分钟)
                     * 
                     */
                    int64_t GetLeftMins() const;

                    /**
                     * 判断参数 LeftMins 是否已赋值
                     * @return LeftMins 是否已赋值
                     * 
                     */
                    bool LeftMinsHasBeenSet() const;

                private:

                    /**
                     * 处理进度
                     */
                    int64_t m_progressRate;
                    bool m_progressRateHasBeenSet;

                    /**
                     * 未通过策略总数
                     */
                    int64_t m_notPassPolicyCount;
                    bool m_notPassPolicyCountHasBeenSet;

                    /**
                     * 主机总数
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 1:即将进行首次扫描   0:已经扫描过了
                     */
                    int64_t m_willFirstScan;
                    bool m_willFirstScanHasBeenSet;

                    /**
                     * 正在检测的任务ID
                     */
                    std::vector<int64_t> m_detectingTaskIds;
                    bool m_detectingTaskIdsHasBeenSet;

                    /**
                     * 扫描中剩余时间(分钟)
                     */
                    int64_t m_leftMins;
                    bool m_leftMinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SYNCBASELINEDETECTSUMMARYRESPONSE_H_
