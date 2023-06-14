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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFORESPONSE_H_

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
                * DescribeVulScanInfo返回参数结构体
                */
                class DescribeVulScanInfoResponse : public AbstractModel
                {
                public:
                    DescribeVulScanInfoResponse();
                    ~DescribeVulScanInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次扫描的本地镜像总数
                     * @return LocalImageScanCount 本次扫描的本地镜像总数
                     * 
                     */
                    int64_t GetLocalImageScanCount() const;

                    /**
                     * 判断参数 LocalImageScanCount 是否已赋值
                     * @return LocalImageScanCount 是否已赋值
                     * 
                     */
                    bool LocalImageScanCountHasBeenSet() const;

                    /**
                     * 获取忽略的漏洞数量
                     * @return IgnoreVulCount 忽略的漏洞数量
                     * 
                     */
                    int64_t GetIgnoreVulCount() const;

                    /**
                     * 判断参数 IgnoreVulCount 是否已赋值
                     * @return IgnoreVulCount 是否已赋值
                     * 
                     */
                    bool IgnoreVulCountHasBeenSet() const;

                    /**
                     * 获取漏洞扫描的开始时间
                     * @return ScanStartTime 漏洞扫描的开始时间
                     * 
                     */
                    std::string GetScanStartTime() const;

                    /**
                     * 判断参数 ScanStartTime 是否已赋值
                     * @return ScanStartTime 是否已赋值
                     * 
                     */
                    bool ScanStartTimeHasBeenSet() const;

                    /**
                     * 获取漏洞扫描的结束时间
                     * @return ScanEndTime 漏洞扫描的结束时间
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
                     * 获取发现风险镜像数量
                     * @return FoundRiskImageCount 发现风险镜像数量
                     * 
                     */
                    int64_t GetFoundRiskImageCount() const;

                    /**
                     * 判断参数 FoundRiskImageCount 是否已赋值
                     * @return FoundRiskImageCount 是否已赋值
                     * 
                     */
                    bool FoundRiskImageCountHasBeenSet() const;

                    /**
                     * 获取本地发现漏洞数量
                     * @return FoundVulCount 本地发现漏洞数量
                     * 
                     */
                    int64_t GetFoundVulCount() const;

                    /**
                     * 判断参数 FoundVulCount 是否已赋值
                     * @return FoundVulCount 是否已赋值
                     * 
                     */
                    bool FoundVulCountHasBeenSet() const;

                    /**
                     * 获取扫描进度
                     * @return ScanProgress 扫描进度
                     * 
                     */
                    double GetScanProgress() const;

                    /**
                     * 判断参数 ScanProgress 是否已赋值
                     * @return ScanProgress 是否已赋值
                     * 
                     */
                    bool ScanProgressHasBeenSet() const;

                    /**
                     * 获取本次扫描的仓库镜像总数
                     * @return RegistryImageScanCount 本次扫描的仓库镜像总数
                     * 
                     */
                    int64_t GetRegistryImageScanCount() const;

                    /**
                     * 判断参数 RegistryImageScanCount 是否已赋值
                     * @return RegistryImageScanCount 是否已赋值
                     * 
                     */
                    bool RegistryImageScanCountHasBeenSet() const;

                    /**
                     * 获取本地镜像最近一次的漏洞任务扫描ID
                     * @return LocalTaskID 本地镜像最近一次的漏洞任务扫描ID
                     * 
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 判断参数 LocalTaskID 是否已赋值
                     * @return LocalTaskID 是否已赋值
                     * 
                     */
                    bool LocalTaskIDHasBeenSet() const;

                    /**
                     * 获取扫描状态:NOT_SCAN:未扫描，SCANNING:扫描中,SCANNED:完成，CANCELED：扫描停止
                     * @return Status 扫描状态:NOT_SCAN:未扫描，SCANNING:扫描中,SCANNED:完成，CANCELED：扫描停止
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
                     * 获取剩余时间，秒
                     * @return RemainingTime 剩余时间，秒
                     * 
                     */
                    double GetRemainingTime() const;

                    /**
                     * 判断参数 RemainingTime 是否已赋值
                     * @return RemainingTime 是否已赋值
                     * 
                     */
                    bool RemainingTimeHasBeenSet() const;

                    /**
                     * 获取仓库镜像最近一次的漏洞任务扫描ID
                     * @return RegistryTaskID 仓库镜像最近一次的漏洞任务扫描ID
                     * 
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 判断参数 RegistryTaskID 是否已赋值
                     * @return RegistryTaskID 是否已赋值
                     * 
                     */
                    bool RegistryTaskIDHasBeenSet() const;

                    /**
                     * 获取仓库发现漏洞数量
                     * @return RegistryFoundVulCount 仓库发现漏洞数量
                     * 
                     */
                    int64_t GetRegistryFoundVulCount() const;

                    /**
                     * 判断参数 RegistryFoundVulCount 是否已赋值
                     * @return RegistryFoundVulCount 是否已赋值
                     * 
                     */
                    bool RegistryFoundVulCountHasBeenSet() const;

                private:

                    /**
                     * 本次扫描的本地镜像总数
                     */
                    int64_t m_localImageScanCount;
                    bool m_localImageScanCountHasBeenSet;

                    /**
                     * 忽略的漏洞数量
                     */
                    int64_t m_ignoreVulCount;
                    bool m_ignoreVulCountHasBeenSet;

                    /**
                     * 漏洞扫描的开始时间
                     */
                    std::string m_scanStartTime;
                    bool m_scanStartTimeHasBeenSet;

                    /**
                     * 漏洞扫描的结束时间
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * 发现风险镜像数量
                     */
                    int64_t m_foundRiskImageCount;
                    bool m_foundRiskImageCountHasBeenSet;

                    /**
                     * 本地发现漏洞数量
                     */
                    int64_t m_foundVulCount;
                    bool m_foundVulCountHasBeenSet;

                    /**
                     * 扫描进度
                     */
                    double m_scanProgress;
                    bool m_scanProgressHasBeenSet;

                    /**
                     * 本次扫描的仓库镜像总数
                     */
                    int64_t m_registryImageScanCount;
                    bool m_registryImageScanCountHasBeenSet;

                    /**
                     * 本地镜像最近一次的漏洞任务扫描ID
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * 扫描状态:NOT_SCAN:未扫描，SCANNING:扫描中,SCANNED:完成，CANCELED：扫描停止
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 剩余时间，秒
                     */
                    double m_remainingTime;
                    bool m_remainingTimeHasBeenSet;

                    /**
                     * 仓库镜像最近一次的漏洞任务扫描ID
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                    /**
                     * 仓库发现漏洞数量
                     */
                    int64_t m_registryFoundVulCount;
                    bool m_registryFoundVulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFORESPONSE_H_
