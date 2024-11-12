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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANSTATERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANSTATERESPONSE_H_

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
                * DescribeScanState返回参数结构体
                */
                class DescribeScanStateResponse : public AbstractModel
                {
                public:
                    DescribeScanStateResponse();
                    ~DescribeScanStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0 从未扫描过、 1 扫描中、 2扫描完成、 3停止中、 4停止完成
                     * @return ScanState 0 从未扫描过、 1 扫描中、 2扫描完成、 3停止中、 4停止完成
                     * 
                     */
                    uint64_t GetScanState() const;

                    /**
                     * 判断参数 ScanState 是否已赋值
                     * @return ScanState 是否已赋值
                     * 
                     */
                    bool ScanStateHasBeenSet() const;

                    /**
                     * 获取扫描进度
                     * @return Schedule 扫描进度
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
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务扫描的漏洞id
                     * @return VulId 任务扫描的漏洞id
                     * 
                     */
                    std::vector<uint64_t> GetVulId() const;

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取0一键检测 1定时检测
                     * @return Type 0一键检测 1定时检测
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取开始扫描时间
                     * @return ScanBeginTime 开始扫描时间
                     * 
                     */
                    std::string GetScanBeginTime() const;

                    /**
                     * 判断参数 ScanBeginTime 是否已赋值
                     * @return ScanBeginTime 是否已赋值
                     * 
                     */
                    bool ScanBeginTimeHasBeenSet() const;

                    /**
                     * 获取扫描漏洞数
                     * @return RiskEventCount 扫描漏洞数
                     * 
                     */
                    uint64_t GetRiskEventCount() const;

                    /**
                     * 判断参数 RiskEventCount 是否已赋值
                     * @return RiskEventCount 是否已赋值
                     * 
                     */
                    bool RiskEventCountHasBeenSet() const;

                    /**
                     * 获取扫描结束时间
                     * @return ScanEndTime 扫描结束时间
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                private:

                    /**
                     * 0 从未扫描过、 1 扫描中、 2扫描完成、 3停止中、 4停止完成
                     */
                    uint64_t m_scanState;
                    bool m_scanStateHasBeenSet;

                    /**
                     * 扫描进度
                     */
                    uint64_t m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * 任务Id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务扫描的漏洞id
                     */
                    std::vector<uint64_t> m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 0一键检测 1定时检测
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 开始扫描时间
                     */
                    std::string m_scanBeginTime;
                    bool m_scanBeginTimeHasBeenSet;

                    /**
                     * 扫描漏洞数
                     */
                    uint64_t m_riskEventCount;
                    bool m_riskEventCountHasBeenSet;

                    /**
                     * 扫描结束时间
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANSTATERESPONSE_H_
