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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULHOSTCOUNTSCANTIMERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULHOSTCOUNTSCANTIMERESPONSE_H_

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
                * DescribeVulHostCountScanTime返回参数结构体
                */
                class DescribeVulHostCountScanTimeResponse : public AbstractModel
                {
                public:
                    DescribeVulHostCountScanTimeResponse();
                    ~DescribeVulHostCountScanTimeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总漏洞数
                     * @return TotalVulCount 总漏洞数
                     * 
                     */
                    uint64_t GetTotalVulCount() const;

                    /**
                     * 判断参数 TotalVulCount 是否已赋值
                     * @return TotalVulCount 是否已赋值
                     * 
                     */
                    bool TotalVulCountHasBeenSet() const;

                    /**
                     * 获取漏洞影响主机数
                     * @return VulHostCount 漏洞影响主机数
                     * 
                     */
                    uint64_t GetVulHostCount() const;

                    /**
                     * 判断参数 VulHostCount 是否已赋值
                     * @return VulHostCount 是否已赋值
                     * 
                     */
                    bool VulHostCountHasBeenSet() const;

                    /**
                     * 获取扫描时间
                     * @return ScanTime 扫描时间
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取是否第一次检测
                     * @return IfFirstScan 是否第一次检测
                     * 
                     */
                    bool GetIfFirstScan() const;

                    /**
                     * 判断参数 IfFirstScan 是否已赋值
                     * @return IfFirstScan 是否已赋值
                     * 
                     */
                    bool IfFirstScanHasBeenSet() const;

                    /**
                     * 获取运行中的任务号, 没有任务则为0
                     * @return TaskId 运行中的任务号, 没有任务则为0
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
                     * 获取最后一次修复漏洞的时间
                     * @return LastFixTime 最后一次修复漏洞的时间
                     * 
                     */
                    std::string GetLastFixTime() const;

                    /**
                     * 判断参数 LastFixTime 是否已赋值
                     * @return LastFixTime 是否已赋值
                     * 
                     */
                    bool LastFixTimeHasBeenSet() const;

                    /**
                     * 获取是否有支持自动修复的漏洞事件
                     * @return hadAutoFixVul 是否有支持自动修复的漏洞事件
                     * 
                     */
                    bool GethadAutoFixVul() const;

                    /**
                     * 判断参数 hadAutoFixVul 是否已赋值
                     * @return hadAutoFixVul 是否已赋值
                     * 
                     */
                    bool hadAutoFixVulHasBeenSet() const;

                private:

                    /**
                     * 总漏洞数
                     */
                    uint64_t m_totalVulCount;
                    bool m_totalVulCountHasBeenSet;

                    /**
                     * 漏洞影响主机数
                     */
                    uint64_t m_vulHostCount;
                    bool m_vulHostCountHasBeenSet;

                    /**
                     * 扫描时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 是否第一次检测
                     */
                    bool m_ifFirstScan;
                    bool m_ifFirstScanHasBeenSet;

                    /**
                     * 运行中的任务号, 没有任务则为0
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 最后一次修复漏洞的时间
                     */
                    std::string m_lastFixTime;
                    bool m_lastFixTimeHasBeenSet;

                    /**
                     * 是否有支持自动修复的漏洞事件
                     */
                    bool m_hadAutoFixVul;
                    bool m_hadAutoFixVulHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULHOSTCOUNTSCANTIMERESPONSE_H_
