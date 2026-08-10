/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulScanTaskDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulScanTaskDetail返回参数结构体
                */
                class DescribeVulScanTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeVulScanTaskDetailResponse();
                    ~DescribeVulScanTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务详情列表</p>
                     * @return List <p>任务详情列表</p>
                     * 
                     */
                    std::vector<VulScanTaskDetail> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>总数</p>
                     * @return Total <p>总数</p>
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>漏洞数量</p>
                     * @return Vuls <p>漏洞数量</p>
                     * 
                     */
                    uint64_t GetVuls() const;

                    /**
                     * 判断参数 Vuls 是否已赋值
                     * @return Vuls 是否已赋值
                     * 
                     */
                    bool VulsHasBeenSet() const;

                    /**
                     * 获取<p>扫描数量</p>
                     * @return Scanned <p>扫描数量</p>
                     * 
                     */
                    uint64_t GetScanned() const;

                    /**
                     * 判断参数 Scanned 是否已赋值
                     * @return Scanned 是否已赋值
                     * 
                     */
                    bool ScannedHasBeenSet() const;

                    /**
                     * 获取<p>风险数量</p>
                     * @return Risk <p>风险数量</p>
                     * 
                     */
                    uint64_t GetRisk() const;

                    /**
                     * 判断参数 Risk 是否已赋值
                     * @return Risk 是否已赋值
                     * 
                     */
                    bool RiskHasBeenSet() const;

                    /**
                     * 获取<p>失败数量</p>
                     * @return Failed <p>失败数量</p>
                     * 
                     */
                    uint64_t GetFailed() const;

                    /**
                     * 判断参数 Failed 是否已赋值
                     * @return Failed 是否已赋值
                     * 
                     */
                    bool FailedHasBeenSet() const;

                    /**
                     * 获取<p>扫描进度（0-100）</p>
                     * @return Progress <p>扫描进度（0-100）</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>任务pdf报告地址</p>
                     * @return TaskPdf <p>任务pdf报告地址</p>
                     * 
                     */
                    std::string GetTaskPdf() const;

                    /**
                     * 判断参数 TaskPdf 是否已赋值
                     * @return TaskPdf 是否已赋值
                     * 
                     */
                    bool TaskPdfHasBeenSet() const;

                    /**
                     * 获取<p>任务excel报告地址</p>
                     * @return TaskExcel <p>任务excel报告地址</p>
                     * 
                     */
                    std::string GetTaskExcel() const;

                    /**
                     * 判断参数 TaskExcel 是否已赋值
                     * @return TaskExcel 是否已赋值
                     * 
                     */
                    bool TaskExcelHasBeenSet() const;

                    /**
                     * 获取<p>任务开始时间，格式：2006-01-02T15:04:05+08:00</p>
                     * @return StartTime <p>任务开始时间，格式：2006-01-02T15:04:05+08:00</p>
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
                     * 获取<p>任务结束时间，格式：2006-01-02T15:04:05+08:00</p>
                     * @return EndTime <p>任务结束时间，格式：2006-01-02T15:04:05+08:00</p>
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
                     * 获取<p>漏洞ID</p>
                     * @return VulId <p>漏洞ID</p>
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
                     * 获取<p>KB编号</p>
                     * @return KbNo <p>KB编号</p>
                     * 
                     */
                    std::vector<std::string> GetKbNo() const;

                    /**
                     * 判断参数 KbNo 是否已赋值
                     * @return KbNo 是否已赋值
                     * 
                     */
                    bool KbNoHasBeenSet() const;

                private:

                    /**
                     * <p>任务详情列表</p>
                     */
                    std::vector<VulScanTaskDetail> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>漏洞数量</p>
                     */
                    uint64_t m_vuls;
                    bool m_vulsHasBeenSet;

                    /**
                     * <p>扫描数量</p>
                     */
                    uint64_t m_scanned;
                    bool m_scannedHasBeenSet;

                    /**
                     * <p>风险数量</p>
                     */
                    uint64_t m_risk;
                    bool m_riskHasBeenSet;

                    /**
                     * <p>失败数量</p>
                     */
                    uint64_t m_failed;
                    bool m_failedHasBeenSet;

                    /**
                     * <p>扫描进度（0-100）</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>任务pdf报告地址</p>
                     */
                    std::string m_taskPdf;
                    bool m_taskPdfHasBeenSet;

                    /**
                     * <p>任务excel报告地址</p>
                     */
                    std::string m_taskExcel;
                    bool m_taskExcelHasBeenSet;

                    /**
                     * <p>任务开始时间，格式：2006-01-02T15:04:05+08:00</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务结束时间，格式：2006-01-02T15:04:05+08:00</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>漏洞ID</p>
                     */
                    std::vector<uint64_t> m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>KB编号</p>
                     */
                    std::vector<std::string> m_kbNo;
                    bool m_kbNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKDETAILRESPONSE_H_
