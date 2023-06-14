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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMNAME_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMNAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 流名称列表。
                */
                class StreamName : public AbstractModel
                {
                public:
                    StreamName();
                    ~StreamName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取推流域名。
                     * @return DomainName 推流域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
                     * @param _domainName 推流域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取推流开始时间。
UTC格式时间，例如：2019-01-07T12:00:00Z。
                     * @return StreamStartTime 推流开始时间。
UTC格式时间，例如：2019-01-07T12:00:00Z。
                     * 
                     */
                    std::string GetStreamStartTime() const;

                    /**
                     * 设置推流开始时间。
UTC格式时间，例如：2019-01-07T12:00:00Z。
                     * @param _streamStartTime 推流开始时间。
UTC格式时间，例如：2019-01-07T12:00:00Z。
                     * 
                     */
                    void SetStreamStartTime(const std::string& _streamStartTime);

                    /**
                     * 判断参数 StreamStartTime 是否已赋值
                     * @return StreamStartTime 是否已赋值
                     * 
                     */
                    bool StreamStartTimeHasBeenSet() const;

                    /**
                     * 获取推流结束时间。
UTC格式时间，例如：2019-01-07T15:00:00Z。
                     * @return StreamEndTime 推流结束时间。
UTC格式时间，例如：2019-01-07T15:00:00Z。
                     * 
                     */
                    std::string GetStreamEndTime() const;

                    /**
                     * 设置推流结束时间。
UTC格式时间，例如：2019-01-07T15:00:00Z。
                     * @param _streamEndTime 推流结束时间。
UTC格式时间，例如：2019-01-07T15:00:00Z。
                     * 
                     */
                    void SetStreamEndTime(const std::string& _streamEndTime);

                    /**
                     * 判断参数 StreamEndTime 是否已赋值
                     * @return StreamEndTime 是否已赋值
                     * 
                     */
                    bool StreamEndTimeHasBeenSet() const;

                    /**
                     * 获取停止原因。
                     * @return StopReason 停止原因。
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置停止原因。
                     * @param _stopReason 停止原因。
                     * 
                     */
                    void SetStopReason(const std::string& _stopReason);

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     * 
                     */
                    bool StopReasonHasBeenSet() const;

                    /**
                     * 获取推流持续时长，单位：秒。
                     * @return Duration 推流持续时长，单位：秒。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置推流持续时长，单位：秒。
                     * @param _duration 推流持续时长，单位：秒。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取主播 IP。
                     * @return ClientIp 主播 IP。
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置主播 IP。
                     * @param _clientIp 主播 IP。
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取分辨率。
                     * @return Resolution 分辨率。
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率。
                     * @param _resolution 分辨率。
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 推流域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 推流开始时间。
UTC格式时间，例如：2019-01-07T12:00:00Z。
                     */
                    std::string m_streamStartTime;
                    bool m_streamStartTimeHasBeenSet;

                    /**
                     * 推流结束时间。
UTC格式时间，例如：2019-01-07T15:00:00Z。
                     */
                    std::string m_streamEndTime;
                    bool m_streamEndTimeHasBeenSet;

                    /**
                     * 停止原因。
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * 推流持续时长，单位：秒。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 主播 IP。
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 分辨率。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMNAME_H_
