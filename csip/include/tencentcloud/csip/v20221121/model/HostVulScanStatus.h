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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULSCANSTATUS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULSCANSTATUS_H_

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
                * 主机漏洞扫描状态
                */
                class HostVulScanStatus : public AbstractModel
                {
                public:
                    HostVulScanStatus();
                    ~HostVulScanStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否发起过漏洞扫描
枚举值：
true：已发起过漏洞扫描
false：从未发起过漏洞扫描
                     * @return HasScanned 是否发起过漏洞扫描
枚举值：
true：已发起过漏洞扫描
false：从未发起过漏洞扫描
                     * 
                     */
                    bool GetHasScanned() const;

                    /**
                     * 设置是否发起过漏洞扫描
枚举值：
true：已发起过漏洞扫描
false：从未发起过漏洞扫描
                     * @param _hasScanned 是否发起过漏洞扫描
枚举值：
true：已发起过漏洞扫描
false：从未发起过漏洞扫描
                     * 
                     */
                    void SetHasScanned(const bool& _hasScanned);

                    /**
                     * 判断参数 HasScanned 是否已赋值
                     * @return HasScanned 是否已赋值
                     * 
                     */
                    bool HasScannedHasBeenSet() const;

                    /**
                     * 获取是否处于首次漏洞扫描判断场景
枚举值：
true：处于首次漏洞扫描判断场景
false：不处于首次漏洞扫描判断场景
                     * @return IsFirstScan 是否处于首次漏洞扫描判断场景
枚举值：
true：处于首次漏洞扫描判断场景
false：不处于首次漏洞扫描判断场景
                     * 
                     */
                    bool GetIsFirstScan() const;

                    /**
                     * 设置是否处于首次漏洞扫描判断场景
枚举值：
true：处于首次漏洞扫描判断场景
false：不处于首次漏洞扫描判断场景
                     * @param _isFirstScan 是否处于首次漏洞扫描判断场景
枚举值：
true：处于首次漏洞扫描判断场景
false：不处于首次漏洞扫描判断场景
                     * 
                     */
                    void SetIsFirstScan(const bool& _isFirstScan);

                    /**
                     * 判断参数 IsFirstScan 是否已赋值
                     * @return IsFirstScan 是否已赋值
                     * 
                     */
                    bool IsFirstScanHasBeenSet() const;

                    /**
                     * 获取最近一次扫描任务状态
枚举值：
SCANNING：扫描中
SUCCESS：扫描成功
PARTIAL_FAILED：部分扫描失败
ALL_FAILED：全部扫描失败
STOPPED：停止扫描
                     * @return ScanTaskStatus 最近一次扫描任务状态
枚举值：
SCANNING：扫描中
SUCCESS：扫描成功
PARTIAL_FAILED：部分扫描失败
ALL_FAILED：全部扫描失败
STOPPED：停止扫描
                     * 
                     */
                    std::string GetScanTaskStatus() const;

                    /**
                     * 设置最近一次扫描任务状态
枚举值：
SCANNING：扫描中
SUCCESS：扫描成功
PARTIAL_FAILED：部分扫描失败
ALL_FAILED：全部扫描失败
STOPPED：停止扫描
                     * @param _scanTaskStatus 最近一次扫描任务状态
枚举值：
SCANNING：扫描中
SUCCESS：扫描成功
PARTIAL_FAILED：部分扫描失败
ALL_FAILED：全部扫描失败
STOPPED：停止扫描
                     * 
                     */
                    void SetScanTaskStatus(const std::string& _scanTaskStatus);

                    /**
                     * 判断参数 ScanTaskStatus 是否已赋值
                     * @return ScanTaskStatus 是否已赋值
                     * 
                     */
                    bool ScanTaskStatusHasBeenSet() const;

                    /**
                     * 获取页面业务状态
枚举值：
NEVER_SCANNED：从未扫描过漏洞
SCANNING：扫描中
FIRST_SCAN_FAILED：首次漏洞扫描失败
FIRST_SCAN_HAS_FIXABLE_VUL：首次扫描完成，存在可修复漏洞
FIRST_SCAN_NO_FIXABLE_VUL：首次扫描完成，有漏洞但无可修复漏洞
FIRST_SCAN_NO_VUL：首次扫描完成，没有漏洞
SCANNED_HAS_FIXABLE_VUL：非首次扫描，存在可修复漏洞
SCANNED_NO_FIXABLE_VUL：非首次扫描，有漏洞但无可修复漏洞
SCANNED_NO_VUL：非首次扫描，没有漏洞
                     * @return ScanScene 页面业务状态
枚举值：
NEVER_SCANNED：从未扫描过漏洞
SCANNING：扫描中
FIRST_SCAN_FAILED：首次漏洞扫描失败
FIRST_SCAN_HAS_FIXABLE_VUL：首次扫描完成，存在可修复漏洞
FIRST_SCAN_NO_FIXABLE_VUL：首次扫描完成，有漏洞但无可修复漏洞
FIRST_SCAN_NO_VUL：首次扫描完成，没有漏洞
SCANNED_HAS_FIXABLE_VUL：非首次扫描，存在可修复漏洞
SCANNED_NO_FIXABLE_VUL：非首次扫描，有漏洞但无可修复漏洞
SCANNED_NO_VUL：非首次扫描，没有漏洞
                     * 
                     */
                    std::string GetScanScene() const;

                    /**
                     * 设置页面业务状态
枚举值：
NEVER_SCANNED：从未扫描过漏洞
SCANNING：扫描中
FIRST_SCAN_FAILED：首次漏洞扫描失败
FIRST_SCAN_HAS_FIXABLE_VUL：首次扫描完成，存在可修复漏洞
FIRST_SCAN_NO_FIXABLE_VUL：首次扫描完成，有漏洞但无可修复漏洞
FIRST_SCAN_NO_VUL：首次扫描完成，没有漏洞
SCANNED_HAS_FIXABLE_VUL：非首次扫描，存在可修复漏洞
SCANNED_NO_FIXABLE_VUL：非首次扫描，有漏洞但无可修复漏洞
SCANNED_NO_VUL：非首次扫描，没有漏洞
                     * @param _scanScene 页面业务状态
枚举值：
NEVER_SCANNED：从未扫描过漏洞
SCANNING：扫描中
FIRST_SCAN_FAILED：首次漏洞扫描失败
FIRST_SCAN_HAS_FIXABLE_VUL：首次扫描完成，存在可修复漏洞
FIRST_SCAN_NO_FIXABLE_VUL：首次扫描完成，有漏洞但无可修复漏洞
FIRST_SCAN_NO_VUL：首次扫描完成，没有漏洞
SCANNED_HAS_FIXABLE_VUL：非首次扫描，存在可修复漏洞
SCANNED_NO_FIXABLE_VUL：非首次扫描，有漏洞但无可修复漏洞
SCANNED_NO_VUL：非首次扫描，没有漏洞
                     * 
                     */
                    void SetScanScene(const std::string& _scanScene);

                    /**
                     * 判断参数 ScanScene 是否已赋值
                     * @return ScanScene 是否已赋值
                     * 
                     */
                    bool ScanSceneHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
从未扫描时返回空字符串。
                     * @return LatestScanTime 最近扫描时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
从未扫描时返回空字符串。
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置最近扫描时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
从未扫描时返回空字符串。
                     * @param _latestScanTime 最近扫描时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
从未扫描时返回空字符串。
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
                     * 获取当前待处理漏洞总数
包含普通主机漏洞和最新 Windows KB 待处理风险。
                     * @return TotalVulCount 当前待处理漏洞总数
包含普通主机漏洞和最新 Windows KB 待处理风险。
                     * 
                     */
                    int64_t GetTotalVulCount() const;

                    /**
                     * 设置当前待处理漏洞总数
包含普通主机漏洞和最新 Windows KB 待处理风险。
                     * @param _totalVulCount 当前待处理漏洞总数
包含普通主机漏洞和最新 Windows KB 待处理风险。
                     * 
                     */
                    void SetTotalVulCount(const int64_t& _totalVulCount);

                    /**
                     * 判断参数 TotalVulCount 是否已赋值
                     * @return TotalVulCount 是否已赋值
                     * 
                     */
                    bool TotalVulCountHasBeenSet() const;

                    /**
                     * 获取当前可修复漏洞数
包含支持一键修复的普通主机漏洞和最新 Windows KB 待处理风险。
                     * @return FixableVulCount 当前可修复漏洞数
包含支持一键修复的普通主机漏洞和最新 Windows KB 待处理风险。
                     * 
                     */
                    int64_t GetFixableVulCount() const;

                    /**
                     * 设置当前可修复漏洞数
包含支持一键修复的普通主机漏洞和最新 Windows KB 待处理风险。
                     * @param _fixableVulCount 当前可修复漏洞数
包含支持一键修复的普通主机漏洞和最新 Windows KB 待处理风险。
                     * 
                     */
                    void SetFixableVulCount(const int64_t& _fixableVulCount);

                    /**
                     * 判断参数 FixableVulCount 是否已赋值
                     * @return FixableVulCount 是否已赋值
                     * 
                     */
                    bool FixableVulCountHasBeenSet() const;

                    /**
                     * 获取当前可修复应急漏洞数
应急漏洞优先归类：应急漏洞仅计入该字段，不再计入 Linux 软件漏洞数。
                     * @return FixableEmergencyCount 当前可修复应急漏洞数
应急漏洞优先归类：应急漏洞仅计入该字段，不再计入 Linux 软件漏洞数。
                     * 
                     */
                    int64_t GetFixableEmergencyCount() const;

                    /**
                     * 设置当前可修复应急漏洞数
应急漏洞优先归类：应急漏洞仅计入该字段，不再计入 Linux 软件漏洞数。
                     * @param _fixableEmergencyCount 当前可修复应急漏洞数
应急漏洞优先归类：应急漏洞仅计入该字段，不再计入 Linux 软件漏洞数。
                     * 
                     */
                    void SetFixableEmergencyCount(const int64_t& _fixableEmergencyCount);

                    /**
                     * 判断参数 FixableEmergencyCount 是否已赋值
                     * @return FixableEmergencyCount 是否已赋值
                     * 
                     */
                    bool FixableEmergencyCountHasBeenSet() const;

                    /**
                     * 获取当前可修复 Linux 软件漏洞数
仅统计非应急 Linux 软件漏洞。
                     * @return FixableLinuxVulCount 当前可修复 Linux 软件漏洞数
仅统计非应急 Linux 软件漏洞。
                     * 
                     */
                    int64_t GetFixableLinuxVulCount() const;

                    /**
                     * 设置当前可修复 Linux 软件漏洞数
仅统计非应急 Linux 软件漏洞。
                     * @param _fixableLinuxVulCount 当前可修复 Linux 软件漏洞数
仅统计非应急 Linux 软件漏洞。
                     * 
                     */
                    void SetFixableLinuxVulCount(const int64_t& _fixableLinuxVulCount);

                    /**
                     * 判断参数 FixableLinuxVulCount 是否已赋值
                     * @return FixableLinuxVulCount 是否已赋值
                     * 
                     */
                    bool FixableLinuxVulCountHasBeenSet() const;

                    /**
                     * 获取当前可修复 Windows 系统补丁数
统计最新 Windows KB 待处理风险。
                     * @return FixableWindowVulCount 当前可修复 Windows 系统补丁数
统计最新 Windows KB 待处理风险。
                     * 
                     */
                    int64_t GetFixableWindowVulCount() const;

                    /**
                     * 设置当前可修复 Windows 系统补丁数
统计最新 Windows KB 待处理风险。
                     * @param _fixableWindowVulCount 当前可修复 Windows 系统补丁数
统计最新 Windows KB 待处理风险。
                     * 
                     */
                    void SetFixableWindowVulCount(const int64_t& _fixableWindowVulCount);

                    /**
                     * 判断参数 FixableWindowVulCount 是否已赋值
                     * @return FixableWindowVulCount 是否已赋值
                     * 
                     */
                    bool FixableWindowVulCountHasBeenSet() const;

                private:

                    /**
                     * 是否发起过漏洞扫描
枚举值：
true：已发起过漏洞扫描
false：从未发起过漏洞扫描
                     */
                    bool m_hasScanned;
                    bool m_hasScannedHasBeenSet;

                    /**
                     * 是否处于首次漏洞扫描判断场景
枚举值：
true：处于首次漏洞扫描判断场景
false：不处于首次漏洞扫描判断场景
                     */
                    bool m_isFirstScan;
                    bool m_isFirstScanHasBeenSet;

                    /**
                     * 最近一次扫描任务状态
枚举值：
SCANNING：扫描中
SUCCESS：扫描成功
PARTIAL_FAILED：部分扫描失败
ALL_FAILED：全部扫描失败
STOPPED：停止扫描
                     */
                    std::string m_scanTaskStatus;
                    bool m_scanTaskStatusHasBeenSet;

                    /**
                     * 页面业务状态
枚举值：
NEVER_SCANNED：从未扫描过漏洞
SCANNING：扫描中
FIRST_SCAN_FAILED：首次漏洞扫描失败
FIRST_SCAN_HAS_FIXABLE_VUL：首次扫描完成，存在可修复漏洞
FIRST_SCAN_NO_FIXABLE_VUL：首次扫描完成，有漏洞但无可修复漏洞
FIRST_SCAN_NO_VUL：首次扫描完成，没有漏洞
SCANNED_HAS_FIXABLE_VUL：非首次扫描，存在可修复漏洞
SCANNED_NO_FIXABLE_VUL：非首次扫描，有漏洞但无可修复漏洞
SCANNED_NO_VUL：非首次扫描，没有漏洞
                     */
                    std::string m_scanScene;
                    bool m_scanSceneHasBeenSet;

                    /**
                     * 最近扫描时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
从未扫描时返回空字符串。
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * 当前待处理漏洞总数
包含普通主机漏洞和最新 Windows KB 待处理风险。
                     */
                    int64_t m_totalVulCount;
                    bool m_totalVulCountHasBeenSet;

                    /**
                     * 当前可修复漏洞数
包含支持一键修复的普通主机漏洞和最新 Windows KB 待处理风险。
                     */
                    int64_t m_fixableVulCount;
                    bool m_fixableVulCountHasBeenSet;

                    /**
                     * 当前可修复应急漏洞数
应急漏洞优先归类：应急漏洞仅计入该字段，不再计入 Linux 软件漏洞数。
                     */
                    int64_t m_fixableEmergencyCount;
                    bool m_fixableEmergencyCountHasBeenSet;

                    /**
                     * 当前可修复 Linux 软件漏洞数
仅统计非应急 Linux 软件漏洞。
                     */
                    int64_t m_fixableLinuxVulCount;
                    bool m_fixableLinuxVulCountHasBeenSet;

                    /**
                     * 当前可修复 Windows 系统补丁数
统计最新 Windows KB 待处理风险。
                     */
                    int64_t m_fixableWindowVulCount;
                    bool m_fixableWindowVulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULSCANSTATUS_H_
