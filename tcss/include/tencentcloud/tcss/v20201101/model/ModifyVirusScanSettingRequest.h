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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSSCANSETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSSCANSETTINGREQUEST_H_

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
                * ModifyVirusScanSetting请求参数结构体
                */
                class ModifyVirusScanSettingRequest : public AbstractModel
                {
                public:
                    ModifyVirusScanSettingRequest();
                    ~ModifyVirusScanSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启定期扫描
                     * @return EnableScan 是否开启定期扫描
                     * 
                     */
                    bool GetEnableScan() const;

                    /**
                     * 设置是否开启定期扫描
                     * @param _enableScan 是否开启定期扫描
                     * 
                     */
                    void SetEnableScan(const bool& _enableScan);

                    /**
                     * 判断参数 EnableScan 是否已赋值
                     * @return EnableScan 是否已赋值
                     * 
                     */
                    bool EnableScanHasBeenSet() const;

                    /**
                     * 获取检测周期每隔多少天(1|3|7)
                     * @return Cycle 检测周期每隔多少天(1|3|7)
                     * 
                     */
                    uint64_t GetCycle() const;

                    /**
                     * 设置检测周期每隔多少天(1|3|7)
                     * @param _cycle 检测周期每隔多少天(1|3|7)
                     * 
                     */
                    void SetCycle(const uint64_t& _cycle);

                    /**
                     * 判断参数 Cycle 是否已赋值
                     * @return Cycle 是否已赋值
                     * 
                     */
                    bool CycleHasBeenSet() const;

                    /**
                     * 获取扫描开始时间
                     * @return BeginScanAt 扫描开始时间
                     * 
                     */
                    std::string GetBeginScanAt() const;

                    /**
                     * 设置扫描开始时间
                     * @param _beginScanAt 扫描开始时间
                     * 
                     */
                    void SetBeginScanAt(const std::string& _beginScanAt);

                    /**
                     * 判断参数 BeginScanAt 是否已赋值
                     * @return BeginScanAt 是否已赋值
                     * 
                     */
                    bool BeginScanAtHasBeenSet() const;

                    /**
                     * 获取扫描全部路径(true:全选,false:自选)
                     * @return ScanPathAll 扫描全部路径(true:全选,false:自选)
                     * 
                     */
                    bool GetScanPathAll() const;

                    /**
                     * 设置扫描全部路径(true:全选,false:自选)
                     * @param _scanPathAll 扫描全部路径(true:全选,false:自选)
                     * 
                     */
                    void SetScanPathAll(const bool& _scanPathAll);

                    /**
                     * 判断参数 ScanPathAll 是否已赋值
                     * @return ScanPathAll 是否已赋值
                     * 
                     */
                    bool ScanPathAllHasBeenSet() const;

                    /**
                     * 获取当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径
                     * @return ScanPathType 当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径
                     * 
                     */
                    uint64_t GetScanPathType() const;

                    /**
                     * 设置当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径
                     * @param _scanPathType 当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径
                     * 
                     */
                    void SetScanPathType(const uint64_t& _scanPathType);

                    /**
                     * 判断参数 ScanPathType 是否已赋值
                     * @return ScanPathType 是否已赋值
                     * 
                     */
                    bool ScanPathTypeHasBeenSet() const;

                    /**
                     * 获取超时时长(5~24h)
                     * @return Timeout 超时时长(5~24h)
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置超时时长(5~24h)
                     * @param _timeout 超时时长(5~24h)
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取扫描范围0容器1主机节点
                     * @return ScanRangeType 扫描范围0容器1主机节点
                     * 
                     */
                    uint64_t GetScanRangeType() const;

                    /**
                     * 设置扫描范围0容器1主机节点
                     * @param _scanRangeType 扫描范围0容器1主机节点
                     * 
                     */
                    void SetScanRangeType(const uint64_t& _scanRangeType);

                    /**
                     * 判断参数 ScanRangeType 是否已赋值
                     * @return ScanRangeType 是否已赋值
                     * 
                     */
                    bool ScanRangeTypeHasBeenSet() const;

                    /**
                     * 获取true 全选，false 自选
                     * @return ScanRangeAll true 全选，false 自选
                     * 
                     */
                    bool GetScanRangeAll() const;

                    /**
                     * 设置true 全选，false 自选
                     * @param _scanRangeAll true 全选，false 自选
                     * 
                     */
                    void SetScanRangeAll(const bool& _scanRangeAll);

                    /**
                     * 判断参数 ScanRangeAll 是否已赋值
                     * @return ScanRangeAll 是否已赋值
                     * 
                     */
                    bool ScanRangeAllHasBeenSet() const;

                    /**
                     * 获取自选扫描范围的容器id或者主机id 根据ScanRangeType决定
                     * @return ScanIds 自选扫描范围的容器id或者主机id 根据ScanRangeType决定
                     * 
                     */
                    std::vector<std::string> GetScanIds() const;

                    /**
                     * 设置自选扫描范围的容器id或者主机id 根据ScanRangeType决定
                     * @param _scanIds 自选扫描范围的容器id或者主机id 根据ScanRangeType决定
                     * 
                     */
                    void SetScanIds(const std::vector<std::string>& _scanIds);

                    /**
                     * 判断参数 ScanIds 是否已赋值
                     * @return ScanIds 是否已赋值
                     * 
                     */
                    bool ScanIdsHasBeenSet() const;

                    /**
                     * 获取扫描路径
                     * @return ScanPath 扫描路径
                     * 
                     */
                    std::vector<std::string> GetScanPath() const;

                    /**
                     * 设置扫描路径
                     * @param _scanPath 扫描路径
                     * 
                     */
                    void SetScanPath(const std::vector<std::string>& _scanPath);

                    /**
                     * 判断参数 ScanPath 是否已赋值
                     * @return ScanPath 是否已赋值
                     * 
                     */
                    bool ScanPathHasBeenSet() const;

                    /**
                     * 获取扫描路径模式：
SCAN_PATH_ALL：全部路径
SCAN_PATH_DEFAULT：默认路径
SCAN_PATH_USER_DEFINE：用户自定义路径

                     * @return ScanPathMode 扫描路径模式：
SCAN_PATH_ALL：全部路径
SCAN_PATH_DEFAULT：默认路径
SCAN_PATH_USER_DEFINE：用户自定义路径

                     * 
                     */
                    std::string GetScanPathMode() const;

                    /**
                     * 设置扫描路径模式：
SCAN_PATH_ALL：全部路径
SCAN_PATH_DEFAULT：默认路径
SCAN_PATH_USER_DEFINE：用户自定义路径

                     * @param _scanPathMode 扫描路径模式：
SCAN_PATH_ALL：全部路径
SCAN_PATH_DEFAULT：默认路径
SCAN_PATH_USER_DEFINE：用户自定义路径

                     * 
                     */
                    void SetScanPathMode(const std::string& _scanPathMode);

                    /**
                     * 判断参数 ScanPathMode 是否已赋值
                     * @return ScanPathMode 是否已赋值
                     * 
                     */
                    bool ScanPathModeHasBeenSet() const;

                private:

                    /**
                     * 是否开启定期扫描
                     */
                    bool m_enableScan;
                    bool m_enableScanHasBeenSet;

                    /**
                     * 检测周期每隔多少天(1|3|7)
                     */
                    uint64_t m_cycle;
                    bool m_cycleHasBeenSet;

                    /**
                     * 扫描开始时间
                     */
                    std::string m_beginScanAt;
                    bool m_beginScanAtHasBeenSet;

                    /**
                     * 扫描全部路径(true:全选,false:自选)
                     */
                    bool m_scanPathAll;
                    bool m_scanPathAllHasBeenSet;

                    /**
                     * 当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径
                     */
                    uint64_t m_scanPathType;
                    bool m_scanPathTypeHasBeenSet;

                    /**
                     * 超时时长(5~24h)
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 扫描范围0容器1主机节点
                     */
                    uint64_t m_scanRangeType;
                    bool m_scanRangeTypeHasBeenSet;

                    /**
                     * true 全选，false 自选
                     */
                    bool m_scanRangeAll;
                    bool m_scanRangeAllHasBeenSet;

                    /**
                     * 自选扫描范围的容器id或者主机id 根据ScanRangeType决定
                     */
                    std::vector<std::string> m_scanIds;
                    bool m_scanIdsHasBeenSet;

                    /**
                     * 扫描路径
                     */
                    std::vector<std::string> m_scanPath;
                    bool m_scanPathHasBeenSet;

                    /**
                     * 扫描路径模式：
SCAN_PATH_ALL：全部路径
SCAN_PATH_DEFAULT：默认路径
SCAN_PATH_USER_DEFINE：用户自定义路径

                     */
                    std::string m_scanPathMode;
                    bool m_scanPathModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSSCANSETTINGREQUEST_H_
