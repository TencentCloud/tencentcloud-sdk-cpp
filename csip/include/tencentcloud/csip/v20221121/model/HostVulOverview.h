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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULOVERVIEW_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机漏洞概要
                */
                class HostVulOverview : public AbstractModel
                {
                public:
                    HostVulOverview();
                    ~HostVulOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>需立即修复漏洞数（VPR 评级为 URGENT 的漏洞数量）</p>
                     * @return UrgentRepairCount <p>需立即修复漏洞数（VPR 评级为 URGENT 的漏洞数量）</p>
                     * 
                     */
                    uint64_t GetUrgentRepairCount() const;

                    /**
                     * 设置<p>需立即修复漏洞数（VPR 评级为 URGENT 的漏洞数量）</p>
                     * @param _urgentRepairCount <p>需立即修复漏洞数（VPR 评级为 URGENT 的漏洞数量）</p>
                     * 
                     */
                    void SetUrgentRepairCount(const uint64_t& _urgentRepairCount);

                    /**
                     * 判断参数 UrgentRepairCount 是否已赋值
                     * @return UrgentRepairCount 是否已赋值
                     * 
                     */
                    bool UrgentRepairCountHasBeenSet() const;

                    /**
                     * 获取<p>已开启漏洞防御的主机数</p>
                     * @return DefendHostCount <p>已开启漏洞防御的主机数</p>
                     * 
                     */
                    uint64_t GetDefendHostCount() const;

                    /**
                     * 设置<p>已开启漏洞防御的主机数</p>
                     * @param _defendHostCount <p>已开启漏洞防御的主机数</p>
                     * 
                     */
                    void SetDefendHostCount(const uint64_t& _defendHostCount);

                    /**
                     * 判断参数 DefendHostCount 是否已赋值
                     * @return DefendHostCount 是否已赋值
                     * 
                     */
                    bool DefendHostCountHasBeenSet() const;

                    /**
                     * 获取<p>主机总数</p>
                     * @return TotalHostCount <p>主机总数</p>
                     * 
                     */
                    uint64_t GetTotalHostCount() const;

                    /**
                     * 设置<p>主机总数</p>
                     * @param _totalHostCount <p>主机总数</p>
                     * 
                     */
                    void SetTotalHostCount(const uint64_t& _totalHostCount);

                    /**
                     * 判断参数 TotalHostCount 是否已赋值
                     * @return TotalHostCount 是否已赋值
                     * 
                     */
                    bool TotalHostCountHasBeenSet() const;

                    /**
                     * 获取<p>已修复漏洞总次数</p>
                     * @return FixedVulCount <p>已修复漏洞总次数</p>
                     * 
                     */
                    uint64_t GetFixedVulCount() const;

                    /**
                     * 设置<p>已修复漏洞总次数</p>
                     * @param _fixedVulCount <p>已修复漏洞总次数</p>
                     * 
                     */
                    void SetFixedVulCount(const uint64_t& _fixedVulCount);

                    /**
                     * 判断参数 FixedVulCount 是否已赋值
                     * @return FixedVulCount 是否已赋值
                     * 
                     */
                    bool FixedVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Linux 软件漏洞数</p>
                     * @return LinuxVulCount <p>Linux 软件漏洞数</p>
                     * 
                     */
                    uint64_t GetLinuxVulCount() const;

                    /**
                     * 设置<p>Linux 软件漏洞数</p>
                     * @param _linuxVulCount <p>Linux 软件漏洞数</p>
                     * 
                     */
                    void SetLinuxVulCount(const uint64_t& _linuxVulCount);

                    /**
                     * 判断参数 LinuxVulCount 是否已赋值
                     * @return LinuxVulCount 是否已赋值
                     * 
                     */
                    bool LinuxVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Windows 系统补丁数</p>
                     * @return WindowVulCount <p>Windows 系统补丁数</p>
                     * 
                     */
                    uint64_t GetWindowVulCount() const;

                    /**
                     * 设置<p>Windows 系统补丁数</p>
                     * @param _windowVulCount <p>Windows 系统补丁数</p>
                     * 
                     */
                    void SetWindowVulCount(const uint64_t& _windowVulCount);

                    /**
                     * 判断参数 WindowVulCount 是否已赋值
                     * @return WindowVulCount 是否已赋值
                     * 
                     */
                    bool WindowVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Web-CMS 漏洞数</p>
                     * @return WebCMSVulCount <p>Web-CMS 漏洞数</p>
                     * 
                     */
                    uint64_t GetWebCMSVulCount() const;

                    /**
                     * 设置<p>Web-CMS 漏洞数</p>
                     * @param _webCMSVulCount <p>Web-CMS 漏洞数</p>
                     * 
                     */
                    void SetWebCMSVulCount(const uint64_t& _webCMSVulCount);

                    /**
                     * 判断参数 WebCMSVulCount 是否已赋值
                     * @return WebCMSVulCount 是否已赋值
                     * 
                     */
                    bool WebCMSVulCountHasBeenSet() const;

                    /**
                     * 获取<p>应用漏洞数</p>
                     * @return AppVulCount <p>应用漏洞数</p>
                     * 
                     */
                    uint64_t GetAppVulCount() const;

                    /**
                     * 设置<p>应用漏洞数</p>
                     * @param _appVulCount <p>应用漏洞数</p>
                     * 
                     */
                    void SetAppVulCount(const uint64_t& _appVulCount);

                    /**
                     * 判断参数 AppVulCount 是否已赋值
                     * @return AppVulCount 是否已赋值
                     * 
                     */
                    bool AppVulCountHasBeenSet() const;

                    /**
                     * 获取<p>应急漏洞数</p>
                     * @return EmergencyCount <p>应急漏洞数</p>
                     * 
                     */
                    uint64_t GetEmergencyCount() const;

                    /**
                     * 设置<p>应急漏洞数</p>
                     * @param _emergencyCount <p>应急漏洞数</p>
                     * 
                     */
                    void SetEmergencyCount(const uint64_t& _emergencyCount);

                    /**
                     * 判断参数 EmergencyCount 是否已赋值
                     * @return EmergencyCount 是否已赋值
                     * 
                     */
                    bool EmergencyCountHasBeenSet() const;

                    /**
                     * 获取<p>漏洞知识库总数</p>
                     * @return VulItemCount <p>漏洞知识库总数</p>
                     * 
                     */
                    uint64_t GetVulItemCount() const;

                    /**
                     * 设置<p>漏洞知识库总数</p>
                     * @param _vulItemCount <p>漏洞知识库总数</p>
                     * 
                     */
                    void SetVulItemCount(const uint64_t& _vulItemCount);

                    /**
                     * 判断参数 VulItemCount 是否已赋值
                     * @return VulItemCount 是否已赋值
                     * 
                     */
                    bool VulItemCountHasBeenSet() const;

                    /**
                     * 获取<p>最近扫描时间</p><p>参数格式：YYYY-MM-DDTHH:mm:ssZ</p>
                     * @return LatestScanTime <p>最近扫描时间</p><p>参数格式：YYYY-MM-DDTHH:mm:ssZ</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置<p>最近扫描时间</p><p>参数格式：YYYY-MM-DDTHH:mm:ssZ</p>
                     * @param _latestScanTime <p>最近扫描时间</p><p>参数格式：YYYY-MM-DDTHH:mm:ssZ</p>
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启周期扫描</p><p>枚举值：</p><ul><li>1： 开启</li><li>0： 未开启</li></ul>
                     * @return EnableTimingScan <p>是否开启周期扫描</p><p>枚举值：</p><ul><li>1： 开启</li><li>0： 未开启</li></ul>
                     * 
                     */
                    uint64_t GetEnableTimingScan() const;

                    /**
                     * 设置<p>是否开启周期扫描</p><p>枚举值：</p><ul><li>1： 开启</li><li>0： 未开启</li></ul>
                     * @param _enableTimingScan <p>是否开启周期扫描</p><p>枚举值：</p><ul><li>1： 开启</li><li>0： 未开启</li></ul>
                     * 
                     */
                    void SetEnableTimingScan(const uint64_t& _enableTimingScan);

                    /**
                     * 判断参数 EnableTimingScan 是否已赋值
                     * @return EnableTimingScan 是否已赋值
                     * 
                     */
                    bool EnableTimingScanHasBeenSet() const;

                    /**
                     * 获取<p>严重修复数</p>
                     * @return CriticalRepairCount <p>严重修复数</p>
                     * 
                     */
                    uint64_t GetCriticalRepairCount() const;

                    /**
                     * 设置<p>严重修复数</p>
                     * @param _criticalRepairCount <p>严重修复数</p>
                     * 
                     */
                    void SetCriticalRepairCount(const uint64_t& _criticalRepairCount);

                    /**
                     * 判断参数 CriticalRepairCount 是否已赋值
                     * @return CriticalRepairCount 是否已赋值
                     * 
                     */
                    bool CriticalRepairCountHasBeenSet() const;

                    /**
                     * 获取<p>严重修复Linux漏洞数</p>
                     * @return CriticalRepairLinuxVulCount <p>严重修复Linux漏洞数</p>
                     * 
                     */
                    uint64_t GetCriticalRepairLinuxVulCount() const;

                    /**
                     * 设置<p>严重修复Linux漏洞数</p>
                     * @param _criticalRepairLinuxVulCount <p>严重修复Linux漏洞数</p>
                     * 
                     */
                    void SetCriticalRepairLinuxVulCount(const uint64_t& _criticalRepairLinuxVulCount);

                    /**
                     * 判断参数 CriticalRepairLinuxVulCount 是否已赋值
                     * @return CriticalRepairLinuxVulCount 是否已赋值
                     * 
                     */
                    bool CriticalRepairLinuxVulCountHasBeenSet() const;

                    /**
                     * 获取<p>严重修复应用漏洞数</p>
                     * @return CriticalRepairAppVulCount <p>严重修复应用漏洞数</p>
                     * 
                     */
                    uint64_t GetCriticalRepairAppVulCount() const;

                    /**
                     * 设置<p>严重修复应用漏洞数</p>
                     * @param _criticalRepairAppVulCount <p>严重修复应用漏洞数</p>
                     * 
                     */
                    void SetCriticalRepairAppVulCount(const uint64_t& _criticalRepairAppVulCount);

                    /**
                     * 判断参数 CriticalRepairAppVulCount 是否已赋值
                     * @return CriticalRepairAppVulCount 是否已赋值
                     * 
                     */
                    bool CriticalRepairAppVulCountHasBeenSet() const;

                    /**
                     * 获取<p>严重修复Web-CMS漏洞数</p>
                     * @return CriticalRepairWebCMSVulCount <p>严重修复Web-CMS漏洞数</p>
                     * 
                     */
                    uint64_t GetCriticalRepairWebCMSVulCount() const;

                    /**
                     * 设置<p>严重修复Web-CMS漏洞数</p>
                     * @param _criticalRepairWebCMSVulCount <p>严重修复Web-CMS漏洞数</p>
                     * 
                     */
                    void SetCriticalRepairWebCMSVulCount(const uint64_t& _criticalRepairWebCMSVulCount);

                    /**
                     * 判断参数 CriticalRepairWebCMSVulCount 是否已赋值
                     * @return CriticalRepairWebCMSVulCount 是否已赋值
                     * 
                     */
                    bool CriticalRepairWebCMSVulCountHasBeenSet() const;

                    /**
                     * 获取<p>严重修复紧急漏洞数</p>
                     * @return CriticalRepairEmergencyCount <p>严重修复紧急漏洞数</p>
                     * 
                     */
                    uint64_t GetCriticalRepairEmergencyCount() const;

                    /**
                     * 设置<p>严重修复紧急漏洞数</p>
                     * @param _criticalRepairEmergencyCount <p>严重修复紧急漏洞数</p>
                     * 
                     */
                    void SetCriticalRepairEmergencyCount(const uint64_t& _criticalRepairEmergencyCount);

                    /**
                     * 判断参数 CriticalRepairEmergencyCount 是否已赋值
                     * @return CriticalRepairEmergencyCount 是否已赋值
                     * 
                     */
                    bool CriticalRepairEmergencyCountHasBeenSet() const;

                private:

                    /**
                     * <p>需立即修复漏洞数（VPR 评级为 URGENT 的漏洞数量）</p>
                     */
                    uint64_t m_urgentRepairCount;
                    bool m_urgentRepairCountHasBeenSet;

                    /**
                     * <p>已开启漏洞防御的主机数</p>
                     */
                    uint64_t m_defendHostCount;
                    bool m_defendHostCountHasBeenSet;

                    /**
                     * <p>主机总数</p>
                     */
                    uint64_t m_totalHostCount;
                    bool m_totalHostCountHasBeenSet;

                    /**
                     * <p>已修复漏洞总次数</p>
                     */
                    uint64_t m_fixedVulCount;
                    bool m_fixedVulCountHasBeenSet;

                    /**
                     * <p>Linux 软件漏洞数</p>
                     */
                    uint64_t m_linuxVulCount;
                    bool m_linuxVulCountHasBeenSet;

                    /**
                     * <p>Windows 系统补丁数</p>
                     */
                    uint64_t m_windowVulCount;
                    bool m_windowVulCountHasBeenSet;

                    /**
                     * <p>Web-CMS 漏洞数</p>
                     */
                    uint64_t m_webCMSVulCount;
                    bool m_webCMSVulCountHasBeenSet;

                    /**
                     * <p>应用漏洞数</p>
                     */
                    uint64_t m_appVulCount;
                    bool m_appVulCountHasBeenSet;

                    /**
                     * <p>应急漏洞数</p>
                     */
                    uint64_t m_emergencyCount;
                    bool m_emergencyCountHasBeenSet;

                    /**
                     * <p>漏洞知识库总数</p>
                     */
                    uint64_t m_vulItemCount;
                    bool m_vulItemCountHasBeenSet;

                    /**
                     * <p>最近扫描时间</p><p>参数格式：YYYY-MM-DDTHH:mm:ssZ</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>是否开启周期扫描</p><p>枚举值：</p><ul><li>1： 开启</li><li>0： 未开启</li></ul>
                     */
                    uint64_t m_enableTimingScan;
                    bool m_enableTimingScanHasBeenSet;

                    /**
                     * <p>严重修复数</p>
                     */
                    uint64_t m_criticalRepairCount;
                    bool m_criticalRepairCountHasBeenSet;

                    /**
                     * <p>严重修复Linux漏洞数</p>
                     */
                    uint64_t m_criticalRepairLinuxVulCount;
                    bool m_criticalRepairLinuxVulCountHasBeenSet;

                    /**
                     * <p>严重修复应用漏洞数</p>
                     */
                    uint64_t m_criticalRepairAppVulCount;
                    bool m_criticalRepairAppVulCountHasBeenSet;

                    /**
                     * <p>严重修复Web-CMS漏洞数</p>
                     */
                    uint64_t m_criticalRepairWebCMSVulCount;
                    bool m_criticalRepairWebCMSVulCountHasBeenSet;

                    /**
                     * <p>严重修复紧急漏洞数</p>
                     */
                    uint64_t m_criticalRepairEmergencyCount;
                    bool m_criticalRepairEmergencyCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULOVERVIEW_H_
