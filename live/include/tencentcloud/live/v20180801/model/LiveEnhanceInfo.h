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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEENHANCEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEENHANCEINFO_H_

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
                * 直播增强计费信息。
                */
                class LiveEnhanceInfo : public AbstractModel
                {
                public:
                    LiveEnhanceInfo();
                    ~LiveEnhanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名。
                     * @return Domain 域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名。
                     * @param _domain 域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取时间。
                     * @return Time 时间。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间。
                     * @param _time 时间。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取计费时长，单位分钟。
                     * @return Duration 计费时长，单位分钟。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置计费时长，单位分钟。
                     * @param _duration 计费时长，单位分钟。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取帧率。
                     * @return Fps 帧率。
                     * 
                     */
                    std::string GetFps() const;

                    /**
                     * 设置帧率。
                     * @param _fps 帧率。
                     * 
                     */
                    void SetFps(const std::string& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

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

                    /**
                     * 获取增强服务类型。
                     * @return Type 增强服务类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置增强服务类型。
                     * @param _type 增强服务类型。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 时间。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 计费时长，单位分钟。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 帧率。
                     */
                    std::string m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 分辨率。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 增强服务类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEENHANCEINFO_H_
