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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOFRAMEINTERPOLATIONINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOFRAMEINTERPOLATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能插帧控制参数
                */
                class VideoFrameInterpolationInfo : public AbstractModel
                {
                public:
                    VideoFrameInterpolationInfo();
                    ~VideoFrameInterpolationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能插帧控制开关，可选值：
<li>ON：开启智能插帧；</li>
<li>OFF：关闭智能插帧。</li>
                     * @return Switch 智能插帧控制开关，可选值：
<li>ON：开启智能插帧；</li>
<li>OFF：关闭智能插帧。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置智能插帧控制开关，可选值：
<li>ON：开启智能插帧；</li>
<li>OFF：关闭智能插帧。</li>
                     * @param _switch 智能插帧控制开关，可选值：
<li>ON：开启智能插帧；</li>
<li>OFF：关闭智能插帧。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取智能插帧帧率，帧率范围为 (0, 100]，仅当智能插帧控制开关为 ON 时有效。默认跟源文件帧率一致。
                     * @return Fps 智能插帧帧率，帧率范围为 (0, 100]，仅当智能插帧控制开关为 ON 时有效。默认跟源文件帧率一致。
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置智能插帧帧率，帧率范围为 (0, 100]，仅当智能插帧控制开关为 ON 时有效。默认跟源文件帧率一致。
                     * @param _fps 智能插帧帧率，帧率范围为 (0, 100]，仅当智能插帧控制开关为 ON 时有效。默认跟源文件帧率一致。
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * 智能插帧控制开关，可选值：
<li>ON：开启智能插帧；</li>
<li>OFF：关闭智能插帧。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 智能插帧帧率，帧率范围为 (0, 100]，仅当智能插帧控制开关为 ON 时有效。默认跟源文件帧率一致。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOFRAMEINTERPOLATIONINFO_H_
