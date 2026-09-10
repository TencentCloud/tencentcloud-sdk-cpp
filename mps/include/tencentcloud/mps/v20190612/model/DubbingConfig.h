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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * dubbing任务配置
                */
                class DubbingConfig : public AbstractModel
                {
                public:
                    DubbingConfig();
                    ~DubbingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配音类型，可选值：FullAutoEmotionClone：全自动高情感克隆配音；RoleBasedSmartDubbing：按角色智能配音；SingleVoice：指定单一音色；</p>
                     * @return DubbingMode <p>配音类型，可选值：FullAutoEmotionClone：全自动高情感克隆配音；RoleBasedSmartDubbing：按角色智能配音；SingleVoice：指定单一音色；</p>
                     * 
                     */
                    std::string GetDubbingMode() const;

                    /**
                     * 设置<p>配音类型，可选值：FullAutoEmotionClone：全自动高情感克隆配音；RoleBasedSmartDubbing：按角色智能配音；SingleVoice：指定单一音色；</p>
                     * @param _dubbingMode <p>配音类型，可选值：FullAutoEmotionClone：全自动高情感克隆配音；RoleBasedSmartDubbing：按角色智能配音；SingleVoice：指定单一音色；</p>
                     * 
                     */
                    void SetDubbingMode(const std::string& _dubbingMode);

                    /**
                     * 判断参数 DubbingMode 是否已赋值
                     * @return DubbingMode 是否已赋值
                     * 
                     */
                    bool DubbingModeHasBeenSet() const;

                    /**
                     * 获取<p>背景音音量，范围0-100</p><p>默认值：80</p>
                     * @return BackgroundVolume <p>背景音音量，范围0-100</p><p>默认值：80</p>
                     * 
                     */
                    int64_t GetBackgroundVolume() const;

                    /**
                     * 设置<p>背景音音量，范围0-100</p><p>默认值：80</p>
                     * @param _backgroundVolume <p>背景音音量，范围0-100</p><p>默认值：80</p>
                     * 
                     */
                    void SetBackgroundVolume(const int64_t& _backgroundVolume);

                    /**
                     * 判断参数 BackgroundVolume 是否已赋值
                     * @return BackgroundVolume 是否已赋值
                     * 
                     */
                    bool BackgroundVolumeHasBeenSet() const;

                    /**
                     * 获取<p>二次微调开关，可选值：<br>ON: 开启二次微调；<br>OFF: 不开启二次微调；</p><p>默认值：OFF</p><p>仅 RoleBasedSmartDubbing 时允许设为 ON</p>
                     * @return SecondaryTuning <p>二次微调开关，可选值：<br>ON: 开启二次微调；<br>OFF: 不开启二次微调；</p><p>默认值：OFF</p><p>仅 RoleBasedSmartDubbing 时允许设为 ON</p>
                     * 
                     */
                    std::string GetSecondaryTuning() const;

                    /**
                     * 设置<p>二次微调开关，可选值：<br>ON: 开启二次微调；<br>OFF: 不开启二次微调；</p><p>默认值：OFF</p><p>仅 RoleBasedSmartDubbing 时允许设为 ON</p>
                     * @param _secondaryTuning <p>二次微调开关，可选值：<br>ON: 开启二次微调；<br>OFF: 不开启二次微调；</p><p>默认值：OFF</p><p>仅 RoleBasedSmartDubbing 时允许设为 ON</p>
                     * 
                     */
                    void SetSecondaryTuning(const std::string& _secondaryTuning);

                    /**
                     * 判断参数 SecondaryTuning 是否已赋值
                     * @return SecondaryTuning 是否已赋值
                     * 
                     */
                    bool SecondaryTuningHasBeenSet() const;

                    /**
                     * 获取<p>指定音色</p><p>仅 SingleVoice 时有效且 Create 必填</p>
                     * @return VoiceId <p>指定音色</p><p>仅 SingleVoice 时有效且 Create 必填</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>指定音色</p><p>仅 SingleVoice 时有效且 Create 必填</p>
                     * @param _voiceId <p>指定音色</p><p>仅 SingleVoice 时有效且 Create 必填</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>配音版本，可选值：v1，v2</p><p>默认值：v2</p><p>只在（FullAutoEmotionClone：全自动高情感克隆配音）模式下生效</p>
                     * @return DubbingVersion <p>配音版本，可选值：v1，v2</p><p>默认值：v2</p><p>只在（FullAutoEmotionClone：全自动高情感克隆配音）模式下生效</p>
                     * 
                     */
                    std::string GetDubbingVersion() const;

                    /**
                     * 设置<p>配音版本，可选值：v1，v2</p><p>默认值：v2</p><p>只在（FullAutoEmotionClone：全自动高情感克隆配音）模式下生效</p>
                     * @param _dubbingVersion <p>配音版本，可选值：v1，v2</p><p>默认值：v2</p><p>只在（FullAutoEmotionClone：全自动高情感克隆配音）模式下生效</p>
                     * 
                     */
                    void SetDubbingVersion(const std::string& _dubbingVersion);

                    /**
                     * 判断参数 DubbingVersion 是否已赋值
                     * @return DubbingVersion 是否已赋值
                     * 
                     */
                    bool DubbingVersionHasBeenSet() const;

                private:

                    /**
                     * <p>配音类型，可选值：FullAutoEmotionClone：全自动高情感克隆配音；RoleBasedSmartDubbing：按角色智能配音；SingleVoice：指定单一音色；</p>
                     */
                    std::string m_dubbingMode;
                    bool m_dubbingModeHasBeenSet;

                    /**
                     * <p>背景音音量，范围0-100</p><p>默认值：80</p>
                     */
                    int64_t m_backgroundVolume;
                    bool m_backgroundVolumeHasBeenSet;

                    /**
                     * <p>二次微调开关，可选值：<br>ON: 开启二次微调；<br>OFF: 不开启二次微调；</p><p>默认值：OFF</p><p>仅 RoleBasedSmartDubbing 时允许设为 ON</p>
                     */
                    std::string m_secondaryTuning;
                    bool m_secondaryTuningHasBeenSet;

                    /**
                     * <p>指定音色</p><p>仅 SingleVoice 时有效且 Create 必填</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>配音版本，可选值：v1，v2</p><p>默认值：v2</p><p>只在（FullAutoEmotionClone：全自动高情感克隆配音）模式下生效</p>
                     */
                    std::string m_dubbingVersion;
                    bool m_dubbingVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGCONFIG_H_
