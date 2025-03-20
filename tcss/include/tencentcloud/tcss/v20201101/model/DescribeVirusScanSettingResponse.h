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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANSETTINGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANSETTINGRESPONSE_H_

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
                * DescribeVirusScanSetting返回参数结构体
                */
                class DescribeVirusScanSettingResponse : public AbstractModel
                {
                public:
                    DescribeVirusScanSettingResponse();
                    ~DescribeVirusScanSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启定期扫描
                     * @return EnableScan 是否开启定期扫描
                     * 
                     */
                    bool GetEnableScan() const;

                    /**
                     * 判断参数 EnableScan 是否已赋值
                     * @return EnableScan 是否已赋值
                     * 
                     */
                    bool EnableScanHasBeenSet() const;

                    /**
                     * 获取检测周期每隔多少天
                     * @return Cycle 检测周期每隔多少天
                     * 
                     */
                    uint64_t GetCycle() const;

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
                     * 判断参数 BeginScanAt 是否已赋值
                     * @return BeginScanAt 是否已赋值
                     * 
                     */
                    bool BeginScanAtHasBeenSet() const;

                    /**
                     * 获取扫描全部路径
                     * @return ScanPathAll 扫描全部路径
                     * 
                     */
                    bool GetScanPathAll() const;

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
                     * 判断参数 ScanPathType 是否已赋值
                     * @return ScanPathType 是否已赋值
                     * 
                     */
                    bool ScanPathTypeHasBeenSet() const;

                    /**
                     * 获取超时时长，单位小时
                     * @return Timeout 超时时长，单位小时
                     * 
                     */
                    uint64_t GetTimeout() const;

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
                     * 判断参数 ScanIds 是否已赋值
                     * @return ScanIds 是否已赋值
                     * 
                     */
                    bool ScanIdsHasBeenSet() const;

                    /**
                     * 获取自选排除或扫描的地址
                     * @return ScanPath 自选排除或扫描的地址
                     * 
                     */
                    std::vector<std::string> GetScanPath() const;

                    /**
                     * 判断参数 ScanPath 是否已赋值
                     * @return ScanPath 是否已赋值
                     * 
                     */
                    bool ScanPathHasBeenSet() const;

                    /**
                     * 获取一键检测的超时设置
                     * @return ClickTimeout 一键检测的超时设置
                     * 
                     */
                    uint64_t GetClickTimeout() const;

                    /**
                     * 判断参数 ClickTimeout 是否已赋值
                     * @return ClickTimeout 是否已赋值
                     * 
                     */
                    bool ClickTimeoutHasBeenSet() const;

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
                     * 检测周期每隔多少天
                     */
                    uint64_t m_cycle;
                    bool m_cycleHasBeenSet;

                    /**
                     * 扫描开始时间
                     */
                    std::string m_beginScanAt;
                    bool m_beginScanAtHasBeenSet;

                    /**
                     * 扫描全部路径
                     */
                    bool m_scanPathAll;
                    bool m_scanPathAllHasBeenSet;

                    /**
                     * 当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径
                     */
                    uint64_t m_scanPathType;
                    bool m_scanPathTypeHasBeenSet;

                    /**
                     * 超时时长，单位小时
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
                     * 自选排除或扫描的地址
                     */
                    std::vector<std::string> m_scanPath;
                    bool m_scanPathHasBeenSet;

                    /**
                     * 一键检测的超时设置
                     */
                    uint64_t m_clickTimeout;
                    bool m_clickTimeoutHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANSETTINGRESPONSE_H_
