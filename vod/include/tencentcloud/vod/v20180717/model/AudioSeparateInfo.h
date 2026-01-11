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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOSEPARATEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOSEPARATEINFO_H_

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
                * 音频分离配置。
                */
                class AudioSeparateInfo : public AbstractModel
                {
                public:
                    AudioSeparateInfo();
                    ~AudioSeparateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频分离控制开关，可选值：
<li>ON：开启音频分离；</li>
<li>OFF：关闭音频分离。</li>
                     * @return Switch 音频分离控制开关，可选值：
<li>ON：开启音频分离；</li>
<li>OFF：关闭音频分离。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置音频分离控制开关，可选值：
<li>ON：开启音频分离；</li>
<li>OFF：关闭音频分离。</li>
                     * @param _switch 音频分离控制开关，可选值：
<li>ON：开启音频分离；</li>
<li>OFF：关闭音频分离。</li>
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
                     * 获取场景类型，可选值：
<li>normal：人声背景声场景</li>
<li>music：演唱伴奏场景</li>
默认值：normal。
                     * @return Type 场景类型，可选值：
<li>normal：人声背景声场景</li>
<li>music：演唱伴奏场景</li>
默认值：normal。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置场景类型，可选值：
<li>normal：人声背景声场景</li>
<li>music：演唱伴奏场景</li>
默认值：normal。
                     * @param _type 场景类型，可选值：
<li>normal：人声背景声场景</li>
<li>music：演唱伴奏场景</li>
默认值：normal。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取输出音轨，可选值：
<li>vocal：输出人声</li>
<li>background：应用场景为normal时输出背景声，应用场景为music时输出伴奏</li>
默认值：vocal。
                     * @return Track 输出音轨，可选值：
<li>vocal：输出人声</li>
<li>background：应用场景为normal时输出背景声，应用场景为music时输出伴奏</li>
默认值：vocal。
                     * 
                     */
                    std::string GetTrack() const;

                    /**
                     * 设置输出音轨，可选值：
<li>vocal：输出人声</li>
<li>background：应用场景为normal时输出背景声，应用场景为music时输出伴奏</li>
默认值：vocal。
                     * @param _track 输出音轨，可选值：
<li>vocal：输出人声</li>
<li>background：应用场景为normal时输出背景声，应用场景为music时输出伴奏</li>
默认值：vocal。
                     * 
                     */
                    void SetTrack(const std::string& _track);

                    /**
                     * 判断参数 Track 是否已赋值
                     * @return Track 是否已赋值
                     * 
                     */
                    bool TrackHasBeenSet() const;

                private:

                    /**
                     * 音频分离控制开关，可选值：
<li>ON：开启音频分离；</li>
<li>OFF：关闭音频分离。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 场景类型，可选值：
<li>normal：人声背景声场景</li>
<li>music：演唱伴奏场景</li>
默认值：normal。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 输出音轨，可选值：
<li>vocal：输出人声</li>
<li>background：应用场景为normal时输出背景声，应用场景为music时输出伴奏</li>
默认值：vocal。
                     */
                    std::string m_track;
                    bool m_trackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOSEPARATEINFO_H_
