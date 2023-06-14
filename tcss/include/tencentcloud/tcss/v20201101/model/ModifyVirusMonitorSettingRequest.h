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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSMONITORSETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSMONITORSETTINGREQUEST_H_

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
                * ModifyVirusMonitorSetting请求参数结构体
                */
                class ModifyVirusMonitorSettingRequest : public AbstractModel
                {
                public:
                    ModifyVirusMonitorSettingRequest();
                    ~ModifyVirusMonitorSettingRequest() = default;
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
                     * 获取扫描全部路径
                     * @return ScanPathAll 扫描全部路径
                     * 
                     */
                    bool GetScanPathAll() const;

                    /**
                     * 设置扫描全部路径
                     * @param _scanPathAll 扫描全部路径
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
                     * 获取当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径(扫描范围只能小于等于1)
                     * @return ScanPathType 当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径(扫描范围只能小于等于1)
                     * 
                     */
                    uint64_t GetScanPathType() const;

                    /**
                     * 设置当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径(扫描范围只能小于等于1)
                     * @param _scanPathType 当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径(扫描范围只能小于等于1)
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
                     * 获取自选排除或扫描的地址
                     * @return ScanPath 自选排除或扫描的地址
                     * 
                     */
                    std::vector<std::string> GetScanPath() const;

                    /**
                     * 设置自选排除或扫描的地址
                     * @param _scanPath 自选排除或扫描的地址
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
                     * 扫描全部路径
                     */
                    bool m_scanPathAll;
                    bool m_scanPathAllHasBeenSet;

                    /**
                     * 当ScanPathAll为true 生效 0扫描以下路径 1、扫描除以下路径(扫描范围只能小于等于1)
                     */
                    uint64_t m_scanPathType;
                    bool m_scanPathTypeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSMONITORSETTINGREQUEST_H_
