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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RESPONSESPEEDLIMITPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RESPONSESPEEDLIMITPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 单连接下载限速配置参数。
                */
                class ResponseSpeedLimitParameters : public AbstractModel
                {
                public:
                    ResponseSpeedLimitParameters();
                    ~ResponseSpeedLimitParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下载限速模式，取值有：
<li>LimitUponDownload：全过程下载限速；</li>
<li>LimitAfterSpecificBytesDownloaded：全速下载特定字节后开始限速；</li>
<li>LimitAfterSpecificSecondsDownloaded：全速下载特定时间后开始限速。</li>
                     * @return Mode 下载限速模式，取值有：
<li>LimitUponDownload：全过程下载限速；</li>
<li>LimitAfterSpecificBytesDownloaded：全速下载特定字节后开始限速；</li>
<li>LimitAfterSpecificSecondsDownloaded：全速下载特定时间后开始限速。</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置下载限速模式，取值有：
<li>LimitUponDownload：全过程下载限速；</li>
<li>LimitAfterSpecificBytesDownloaded：全速下载特定字节后开始限速；</li>
<li>LimitAfterSpecificSecondsDownloaded：全速下载特定时间后开始限速。</li>
                     * @param _mode 下载限速模式，取值有：
<li>LimitUponDownload：全过程下载限速；</li>
<li>LimitAfterSpecificBytesDownloaded：全速下载特定字节后开始限速；</li>
<li>LimitAfterSpecificSecondsDownloaded：全速下载特定时间后开始限速。</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取限速值，指定限速大小，填写含单位的数值或变量。当前支持单位有：KB/s。
                     * @return MaxSpeed 限速值，指定限速大小，填写含单位的数值或变量。当前支持单位有：KB/s。
                     * 
                     */
                    std::string GetMaxSpeed() const;

                    /**
                     * 设置限速值，指定限速大小，填写含单位的数值或变量。当前支持单位有：KB/s。
                     * @param _maxSpeed 限速值，指定限速大小，填写含单位的数值或变量。当前支持单位有：KB/s。
                     * 
                     */
                    void SetMaxSpeed(const std::string& _maxSpeed);

                    /**
                     * 判断参数 MaxSpeed 是否已赋值
                     * @return MaxSpeed 是否已赋值
                     * 
                     */
                    bool MaxSpeedHasBeenSet() const;

                    /**
                     * 获取限速开始值，可以为下载大小或指定时长，填写含单位的数值或变量，指定下载大小或指定时长。

- 当Mode 取值为 LimitAfterSpecificBytesDownloaded 时，单位取值有： KB；

- 当Mode 取值为 LimitAfterSpecificSecondsDownloaded 时，单位取值有： s。

                     * @return StartAt 限速开始值，可以为下载大小或指定时长，填写含单位的数值或变量，指定下载大小或指定时长。

- 当Mode 取值为 LimitAfterSpecificBytesDownloaded 时，单位取值有： KB；

- 当Mode 取值为 LimitAfterSpecificSecondsDownloaded 时，单位取值有： s。

                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置限速开始值，可以为下载大小或指定时长，填写含单位的数值或变量，指定下载大小或指定时长。

- 当Mode 取值为 LimitAfterSpecificBytesDownloaded 时，单位取值有： KB；

- 当Mode 取值为 LimitAfterSpecificSecondsDownloaded 时，单位取值有： s。

                     * @param _startAt 限速开始值，可以为下载大小或指定时长，填写含单位的数值或变量，指定下载大小或指定时长。

- 当Mode 取值为 LimitAfterSpecificBytesDownloaded 时，单位取值有： KB；

- 当Mode 取值为 LimitAfterSpecificSecondsDownloaded 时，单位取值有： s。

                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                private:

                    /**
                     * 下载限速模式，取值有：
<li>LimitUponDownload：全过程下载限速；</li>
<li>LimitAfterSpecificBytesDownloaded：全速下载特定字节后开始限速；</li>
<li>LimitAfterSpecificSecondsDownloaded：全速下载特定时间后开始限速。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 限速值，指定限速大小，填写含单位的数值或变量。当前支持单位有：KB/s。
                     */
                    std::string m_maxSpeed;
                    bool m_maxSpeedHasBeenSet;

                    /**
                     * 限速开始值，可以为下载大小或指定时长，填写含单位的数值或变量，指定下载大小或指定时长。

- 当Mode 取值为 LimitAfterSpecificBytesDownloaded 时，单位取值有： KB；

- 当Mode 取值为 LimitAfterSpecificSecondsDownloaded 时，单位取值有： s。

                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RESPONSESPEEDLIMITPARAMETERS_H_
