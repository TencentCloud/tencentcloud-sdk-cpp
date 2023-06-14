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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVirusScanTaskStatus返回参数结构体
                */
                class DescribeVirusScanTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeVirusScanTaskStatusResponse();
                    ~DescribeVirusScanTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查杀容器个数
                     * @return ContainerTotal 查杀容器个数
                     * 
                     */
                    uint64_t GetContainerTotal() const;

                    /**
                     * 判断参数 ContainerTotal 是否已赋值
                     * @return ContainerTotal 是否已赋值
                     * 
                     */
                    bool ContainerTotalHasBeenSet() const;

                    /**
                     * 获取风险容器个数
                     * @return RiskContainerCnt 风险容器个数
                     * 
                     */
                    uint64_t GetRiskContainerCnt() const;

                    /**
                     * 判断参数 RiskContainerCnt 是否已赋值
                     * @return RiskContainerCnt 是否已赋值
                     * 
                     */
                    bool RiskContainerCntHasBeenSet() const;

                    /**
                     * 获取扫描状态 任务状态:
SCAN_NONE:无， 
SCAN_SCANNING:正在扫描中，
SCAN_FINISH：扫描完成， 
SCAN_TIMEOUT：扫描超时
SCAN_CANCELING: 取消中
SCAN_CANCELED:已取消
                     * @return Status 扫描状态 任务状态:
SCAN_NONE:无， 
SCAN_SCANNING:正在扫描中，
SCAN_FINISH：扫描完成， 
SCAN_TIMEOUT：扫描超时
SCAN_CANCELING: 取消中
SCAN_CANCELED:已取消
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取扫描进度 I
                     * @return Schedule 扫描进度 I
                     * 
                     */
                    uint64_t GetSchedule() const;

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取已经扫描了的容器个数
                     * @return ContainerScanCnt 已经扫描了的容器个数
                     * 
                     */
                    uint64_t GetContainerScanCnt() const;

                    /**
                     * 判断参数 ContainerScanCnt 是否已赋值
                     * @return ContainerScanCnt 是否已赋值
                     * 
                     */
                    bool ContainerScanCntHasBeenSet() const;

                    /**
                     * 获取风险个数
                     * @return RiskCnt 风险个数
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取剩余扫描时间
                     * @return LeftSeconds 剩余扫描时间
                     * 
                     */
                    uint64_t GetLeftSeconds() const;

                    /**
                     * 判断参数 LeftSeconds 是否已赋值
                     * @return LeftSeconds 是否已赋值
                     * 
                     */
                    bool LeftSecondsHasBeenSet() const;

                    /**
                     * 获取扫描开始时间
                     * @return StartTime 扫描开始时间
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
                     * 获取扫描结束时间
                     * @return EndTime 扫描结束时间
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
                     * 获取扫描类型，"CYCLE"：周期扫描， "MANUAL"：手动扫描
                     * @return ScanType 扫描类型，"CYCLE"：周期扫描， "MANUAL"：手动扫描
                     * 
                     */
                    std::string GetScanType() const;

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                private:

                    /**
                     * 查杀容器个数
                     */
                    uint64_t m_containerTotal;
                    bool m_containerTotalHasBeenSet;

                    /**
                     * 风险容器个数
                     */
                    uint64_t m_riskContainerCnt;
                    bool m_riskContainerCntHasBeenSet;

                    /**
                     * 扫描状态 任务状态:
SCAN_NONE:无， 
SCAN_SCANNING:正在扫描中，
SCAN_FINISH：扫描完成， 
SCAN_TIMEOUT：扫描超时
SCAN_CANCELING: 取消中
SCAN_CANCELED:已取消
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 扫描进度 I
                     */
                    uint64_t m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * 已经扫描了的容器个数
                     */
                    uint64_t m_containerScanCnt;
                    bool m_containerScanCntHasBeenSet;

                    /**
                     * 风险个数
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * 剩余扫描时间
                     */
                    uint64_t m_leftSeconds;
                    bool m_leftSecondsHasBeenSet;

                    /**
                     * 扫描开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 扫描结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 扫描类型，"CYCLE"：周期扫描， "MANUAL"：手动扫描
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANTASKSTATUSRESPONSE_H_
