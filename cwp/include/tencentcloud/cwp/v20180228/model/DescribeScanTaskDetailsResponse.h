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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKDETAILSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ScanTaskDetails.h>
#include <tencentcloud/cwp/v20180228/model/VulDetailInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScanTaskDetails返回参数结构体
                */
                class DescribeScanTaskDetailsResponse : public AbstractModel
                {
                public:
                    DescribeScanTaskDetailsResponse();
                    ~DescribeScanTaskDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取扫描任务信息列表
                     * @return ScanTaskDetailList 扫描任务信息列表
                     * 
                     */
                    std::vector<ScanTaskDetails> GetScanTaskDetailList() const;

                    /**
                     * 判断参数 ScanTaskDetailList 是否已赋值
                     * @return ScanTaskDetailList 是否已赋值
                     * 
                     */
                    bool ScanTaskDetailListHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取扫描机器总数
                     * @return ScanMachineCount 扫描机器总数
                     * 
                     */
                    uint64_t GetScanMachineCount() const;

                    /**
                     * 判断参数 ScanMachineCount 是否已赋值
                     * @return ScanMachineCount 是否已赋值
                     * 
                     */
                    bool ScanMachineCountHasBeenSet() const;

                    /**
                     * 获取发现风险机器数
                     * @return RiskMachineCount 发现风险机器数
                     * 
                     */
                    uint64_t GetRiskMachineCount() const;

                    /**
                     * 判断参数 RiskMachineCount 是否已赋值
                     * @return RiskMachineCount 是否已赋值
                     * 
                     */
                    bool RiskMachineCountHasBeenSet() const;

                    /**
                     * 获取扫描开始时间
                     * @return ScanBeginTime 扫描开始时间
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

                    /**
                     * 获取检测时间
                     * @return ScanTime 检测时间
                     * 
                     */
                    uint64_t GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取扫描进度
                     * @return ScanProgress 扫描进度
                     * 
                     */
                    uint64_t GetScanProgress() const;

                    /**
                     * 判断参数 ScanProgress 是否已赋值
                     * @return ScanProgress 是否已赋值
                     * 
                     */
                    bool ScanProgressHasBeenSet() const;

                    /**
                     * 获取扫描剩余时间
                     * @return ScanLeftTime 扫描剩余时间
                     * 
                     */
                    uint64_t GetScanLeftTime() const;

                    /**
                     * 判断参数 ScanLeftTime 是否已赋值
                     * @return ScanLeftTime 是否已赋值
                     * 
                     */
                    bool ScanLeftTimeHasBeenSet() const;

                    /**
                     * 获取扫描内容
                     * @return ScanContent 扫描内容
                     * 
                     */
                    std::vector<std::string> GetScanContent() const;

                    /**
                     * 判断参数 ScanContent 是否已赋值
                     * @return ScanContent 是否已赋值
                     * 
                     */
                    bool ScanContentHasBeenSet() const;

                    /**
                     * 获取漏洞信息
                     * @return VulInfo 漏洞信息
                     * 
                     */
                    std::vector<VulDetailInfo> GetVulInfo() const;

                    /**
                     * 判断参数 VulInfo 是否已赋值
                     * @return VulInfo 是否已赋值
                     * 
                     */
                    bool VulInfoHasBeenSet() const;

                    /**
                     * 获取风险事件个数
                     * @return RiskEventCount 风险事件个数
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
                     * 获取任务是否全部正在被停止 ture是
                     * @return StoppingAll 任务是否全部正在被停止 ture是
                     * 
                     */
                    bool GetStoppingAll() const;

                    /**
                     * 判断参数 StoppingAll 是否已赋值
                     * @return StoppingAll 是否已赋值
                     * 
                     */
                    bool StoppingAllHasBeenSet() const;

                    /**
                     * 获取扫描出漏洞个数
                     * @return VulCount 扫描出漏洞个数
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                private:

                    /**
                     * 扫描任务信息列表
                     */
                    std::vector<ScanTaskDetails> m_scanTaskDetailList;
                    bool m_scanTaskDetailListHasBeenSet;

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 扫描机器总数
                     */
                    uint64_t m_scanMachineCount;
                    bool m_scanMachineCountHasBeenSet;

                    /**
                     * 发现风险机器数
                     */
                    uint64_t m_riskMachineCount;
                    bool m_riskMachineCountHasBeenSet;

                    /**
                     * 扫描开始时间
                     */
                    std::string m_scanBeginTime;
                    bool m_scanBeginTimeHasBeenSet;

                    /**
                     * 扫描结束时间
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * 检测时间
                     */
                    uint64_t m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 扫描进度
                     */
                    uint64_t m_scanProgress;
                    bool m_scanProgressHasBeenSet;

                    /**
                     * 扫描剩余时间
                     */
                    uint64_t m_scanLeftTime;
                    bool m_scanLeftTimeHasBeenSet;

                    /**
                     * 扫描内容
                     */
                    std::vector<std::string> m_scanContent;
                    bool m_scanContentHasBeenSet;

                    /**
                     * 漏洞信息
                     */
                    std::vector<VulDetailInfo> m_vulInfo;
                    bool m_vulInfoHasBeenSet;

                    /**
                     * 风险事件个数
                     */
                    uint64_t m_riskEventCount;
                    bool m_riskEventCountHasBeenSet;

                    /**
                     * 0一键检测 1定时检测
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 任务是否全部正在被停止 ture是
                     */
                    bool m_stoppingAll;
                    bool m_stoppingAllHasBeenSet;

                    /**
                     * 扫描出漏洞个数
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKDETAILSRESPONSE_H_
