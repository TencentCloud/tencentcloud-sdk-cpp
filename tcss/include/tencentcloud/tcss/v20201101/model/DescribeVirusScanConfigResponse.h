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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANCONFIGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ScanRangeInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVirusScanConfig返回参数结构体
                */
                class DescribeVirusScanConfigResponse : public AbstractModel
                {
                public:
                    DescribeVirusScanConfigResponse();
                    ~DescribeVirusScanConfigResponse() = default;
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
                     * 获取SCAN_NODE:扫描节点
SCAN_CONTAINER:扫描容器
                     * @return ScanRangeType SCAN_NODE:扫描节点
SCAN_CONTAINER:扫描容器
                     * 
                     */
                    std::string GetScanRangeType() const;

                    /**
                     * 判断参数 ScanRangeType 是否已赋值
                     * @return ScanRangeType 是否已赋值
                     * 
                     */
                    bool ScanRangeTypeHasBeenSet() const;

                    /**
                     * 获取自选扫描范围的容器id或者节点id 
                     * @return ScanIDs 自选扫描范围的容器id或者节点id 
                     * 
                     */
                    std::vector<ScanRangeInfo> GetScanIDs() const;

                    /**
                     * 判断参数 ScanIDs 是否已赋值
                     * @return ScanIDs 是否已赋值
                     * 
                     */
                    bool ScanIDsHasBeenSet() const;

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

                    /**
                     * 获取true:包含路径
false:排除路径
                     * @return IsIncludePath true:包含路径
false:排除路径
                     * 
                     */
                    bool GetIsIncludePath() const;

                    /**
                     * 判断参数 IsIncludePath 是否已赋值
                     * @return IsIncludePath 是否已赋值
                     * 
                     */
                    bool IsIncludePathHasBeenSet() const;

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
                     * 超时时长，单位小时
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * SCAN_NODE:扫描节点
SCAN_CONTAINER:扫描容器
                     */
                    std::string m_scanRangeType;
                    bool m_scanRangeTypeHasBeenSet;

                    /**
                     * 自选扫描范围的容器id或者节点id 
                     */
                    std::vector<ScanRangeInfo> m_scanIDs;
                    bool m_scanIDsHasBeenSet;

                    /**
                     * 自选排除或扫描的地址
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

                    /**
                     * true:包含路径
false:排除路径
                     */
                    bool m_isIncludePath;
                    bool m_isIncludePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANCONFIGRESPONSE_H_
