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
                     * 获取<p>是否开启定期扫描</p>
                     * @return EnableScan <p>是否开启定期扫描</p>
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
                     * 获取<p>检测周期每隔多少天</p>
                     * @return Cycle <p>检测周期每隔多少天</p>
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
                     * 获取<p>扫描开始时间</p>
                     * @return BeginScanAt <p>扫描开始时间</p>
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
                     * 获取<p>超时时长，单位小时</p>
                     * @return Timeout <p>超时时长，单位小时</p>
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
                     * 获取<p>SCAN_NODE:扫描节点<br>SCAN_CONTAINER:扫描容器</p>
                     * @return ScanRangeType <p>SCAN_NODE:扫描节点<br>SCAN_CONTAINER:扫描容器</p>
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
                     * 获取<p>自选扫描范围的容器id或者节点id</p>
                     * @return ScanIDs <p>自选扫描范围的容器id或者节点id</p>
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
                     * 获取<p>自选排除或扫描的地址</p>
                     * @return ScanPath <p>自选排除或扫描的地址</p>
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
                     * 获取<p>扫描路径模式：<br>SCAN_PATH_ALL：全部路径<br>SCAN_PATH_DEFAULT：默认路径<br>SCAN_PATH_USER_DEFINE：用户自定义路径</p>
                     * @return ScanPathMode <p>扫描路径模式：<br>SCAN_PATH_ALL：全部路径<br>SCAN_PATH_DEFAULT：默认路径<br>SCAN_PATH_USER_DEFINE：用户自定义路径</p>
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
                     * 获取<p>true:包含路径<br>false:排除路径</p>
                     * @return IsIncludePath <p>true:包含路径<br>false:排除路径</p>
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
                     * <p>是否开启定期扫描</p>
                     */
                    bool m_enableScan;
                    bool m_enableScanHasBeenSet;

                    /**
                     * <p>检测周期每隔多少天</p>
                     */
                    uint64_t m_cycle;
                    bool m_cycleHasBeenSet;

                    /**
                     * <p>扫描开始时间</p>
                     */
                    std::string m_beginScanAt;
                    bool m_beginScanAtHasBeenSet;

                    /**
                     * <p>超时时长，单位小时</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>SCAN_NODE:扫描节点<br>SCAN_CONTAINER:扫描容器</p>
                     */
                    std::string m_scanRangeType;
                    bool m_scanRangeTypeHasBeenSet;

                    /**
                     * <p>自选扫描范围的容器id或者节点id</p>
                     */
                    std::vector<ScanRangeInfo> m_scanIDs;
                    bool m_scanIDsHasBeenSet;

                    /**
                     * <p>自选排除或扫描的地址</p>
                     */
                    std::vector<std::string> m_scanPath;
                    bool m_scanPathHasBeenSet;

                    /**
                     * <p>扫描路径模式：<br>SCAN_PATH_ALL：全部路径<br>SCAN_PATH_DEFAULT：默认路径<br>SCAN_PATH_USER_DEFINE：用户自定义路径</p>
                     */
                    std::string m_scanPathMode;
                    bool m_scanPathModeHasBeenSet;

                    /**
                     * <p>true:包含路径<br>false:排除路径</p>
                     */
                    bool m_isIncludePath;
                    bool m_isIncludePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANCONFIGRESPONSE_H_
