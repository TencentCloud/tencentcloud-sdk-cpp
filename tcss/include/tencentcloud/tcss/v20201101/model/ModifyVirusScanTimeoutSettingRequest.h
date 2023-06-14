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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSSCANTIMEOUTSETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSSCANTIMEOUTSETTINGREQUEST_H_

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
                * ModifyVirusScanTimeoutSetting请求参数结构体
                */
                class ModifyVirusScanTimeoutSettingRequest : public AbstractModel
                {
                public:
                    ModifyVirusScanTimeoutSettingRequest();
                    ~ModifyVirusScanTimeoutSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取超时时长单位小时(5~24h)
                     * @return Timeout 超时时长单位小时(5~24h)
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置超时时长单位小时(5~24h)
                     * @param _timeout 超时时长单位小时(5~24h)
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
                     * 获取设置类型0一键检测，1定时检测
                     * @return ScanType 设置类型0一键检测，1定时检测
                     * 
                     */
                    uint64_t GetScanType() const;

                    /**
                     * 设置设置类型0一键检测，1定时检测
                     * @param _scanType 设置类型0一键检测，1定时检测
                     * 
                     */
                    void SetScanType(const uint64_t& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                private:

                    /**
                     * 超时时长单位小时(5~24h)
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 设置类型0一键检测，1定时检测
                     */
                    uint64_t m_scanType;
                    bool m_scanTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSSCANTIMEOUTSETTINGREQUEST_H_
