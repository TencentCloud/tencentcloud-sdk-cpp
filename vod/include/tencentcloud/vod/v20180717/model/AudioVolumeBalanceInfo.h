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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOVOLUMEBALANCEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOVOLUMEBALANCEINFO_H_

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
                * 音量均衡配置。
                */
                class AudioVolumeBalanceInfo : public AbstractModel
                {
                public:
                    AudioVolumeBalanceInfo();
                    ~AudioVolumeBalanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音量均衡控制开关，可选值：
<li>ON：开启音量均衡；</li>
<li>OFF：关闭音量均衡。</li>
                     * @return Switch 音量均衡控制开关，可选值：
<li>ON：开启音量均衡；</li>
<li>OFF：关闭音量均衡。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置音量均衡控制开关，可选值：
<li>ON：开启音量均衡；</li>
<li>OFF：关闭音量均衡。</li>
                     * @param _switch 音量均衡控制开关，可选值：
<li>ON：开启音量均衡；</li>
<li>OFF：关闭音量均衡。</li>
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
                     * 获取类型，可选值：
<li>loudNorm：响度标准化</li>
<li>gainControl：减小突变</li>
默认值：loudNorm。
                     * @return Type 类型，可选值：
<li>loudNorm：响度标准化</li>
<li>gainControl：减小突变</li>
默认值：loudNorm。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，可选值：
<li>loudNorm：响度标准化</li>
<li>gainControl：减小突变</li>
默认值：loudNorm。
                     * @param _type 类型，可选值：
<li>loudNorm：响度标准化</li>
<li>gainControl：减小突变</li>
默认值：loudNorm。
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
                     * 音量均衡控制开关，可选值：
<li>ON：开启音量均衡；</li>
<li>OFF：关闭音量均衡。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 类型，可选值：
<li>loudNorm：响度标准化</li>
<li>gainControl：减小突变</li>
默认值：loudNorm。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOVOLUMEBALANCEINFO_H_
