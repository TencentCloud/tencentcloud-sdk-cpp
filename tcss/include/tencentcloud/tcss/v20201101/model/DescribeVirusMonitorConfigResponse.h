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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMONITORCONFIGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMONITORCONFIGRESPONSE_H_

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
                * DescribeVirusMonitorConfig返回参数结构体
                */
                class DescribeVirusMonitorConfigResponse : public AbstractModel
                {
                public:
                    DescribeVirusMonitorConfigResponse();
                    ~DescribeVirusMonitorConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启实时监控
                     * @return EnableScan 是否开启实时监控
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
                     * 获取true:包含路径 false:排除路径
                     * @return IsIncludePath true:包含路径 false:排除路径
                     * 
                     */
                    bool GetIsIncludePath() const;

                    /**
                     * 判断参数 IsIncludePath 是否已赋值
                     * @return IsIncludePath 是否已赋值
                     * 
                     */
                    bool IsIncludePathHasBeenSet() const;

                    /**
                     * 获取自选排除或扫描的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScanPath 自选排除或扫描的地址
注意：此字段可能返回 null，表示取不到有效值。
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

                private:

                    /**
                     * 是否开启实时监控
                     */
                    bool m_enableScan;
                    bool m_enableScanHasBeenSet;

                    /**
                     * true:包含路径 false:排除路径
                     */
                    bool m_isIncludePath;
                    bool m_isIncludePathHasBeenSet;

                    /**
                     * 自选排除或扫描的地址
注意：此字段可能返回 null，表示取不到有效值。
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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMONITORCONFIGRESPONSE_H_
