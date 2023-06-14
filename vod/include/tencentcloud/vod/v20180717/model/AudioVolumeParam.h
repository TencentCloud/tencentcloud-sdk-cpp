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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOVOLUMEPARAM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOVOLUMEPARAM_H_

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
                * 音频增益调节参数
                */
                class AudioVolumeParam : public AbstractModel
                {
                public:
                    AudioVolumeParam();
                    ~AudioVolumeParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否静音，取值范围0或1。
<li>0表示不静音。</li>
<li>1表示静音。</li>
默认是0。
                     * @return Mute 是否静音，取值范围0或1。
<li>0表示不静音。</li>
<li>1表示静音。</li>
默认是0。
                     * 
                     */
                    int64_t GetMute() const;

                    /**
                     * 设置是否静音，取值范围0或1。
<li>0表示不静音。</li>
<li>1表示静音。</li>
默认是0。
                     * @param _mute 是否静音，取值范围0或1。
<li>0表示不静音。</li>
<li>1表示静音。</li>
默认是0。
                     * 
                     */
                    void SetMute(const int64_t& _mute);

                    /**
                     * 判断参数 Mute 是否已赋值
                     * @return Mute 是否已赋值
                     * 
                     */
                    bool MuteHasBeenSet() const;

                    /**
                     * 获取音频增益，取值范围0~10。
<li>大于1表示增加音量。</li>
<li>小于1表示降低音量。</li>
<li>0和1：表示不改变。</li>
默认是0。
                     * @return Gain 音频增益，取值范围0~10。
<li>大于1表示增加音量。</li>
<li>小于1表示降低音量。</li>
<li>0和1：表示不改变。</li>
默认是0。
                     * 
                     */
                    double GetGain() const;

                    /**
                     * 设置音频增益，取值范围0~10。
<li>大于1表示增加音量。</li>
<li>小于1表示降低音量。</li>
<li>0和1：表示不改变。</li>
默认是0。
                     * @param _gain 音频增益，取值范围0~10。
<li>大于1表示增加音量。</li>
<li>小于1表示降低音量。</li>
<li>0和1：表示不改变。</li>
默认是0。
                     * 
                     */
                    void SetGain(const double& _gain);

                    /**
                     * 判断参数 Gain 是否已赋值
                     * @return Gain 是否已赋值
                     * 
                     */
                    bool GainHasBeenSet() const;

                private:

                    /**
                     * 是否静音，取值范围0或1。
<li>0表示不静音。</li>
<li>1表示静音。</li>
默认是0。
                     */
                    int64_t m_mute;
                    bool m_muteHasBeenSet;

                    /**
                     * 音频增益，取值范围0~10。
<li>大于1表示增加音量。</li>
<li>小于1表示降低音量。</li>
<li>0和1：表示不改变。</li>
默认是0。
                     */
                    double m_gain;
                    bool m_gainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOVOLUMEPARAM_H_
