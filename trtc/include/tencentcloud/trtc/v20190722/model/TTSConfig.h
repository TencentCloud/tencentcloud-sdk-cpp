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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TTSCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TTSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * TTS相关配置
                */
                class TTSConfig : public AbstractModel
                {
                public:
                    TTSConfig();
                    ~TTSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音色ID
                     * @return VoiceId 音色ID
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置音色ID
                     * @param _voiceId 音色ID
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
                     * 获取TTS 的模型，默认是：flow_01_turbo, 可选: [ flow_01_turbo, flow_01_ex]
                     * @return Model TTS 的模型，默认是：flow_01_turbo, 可选: [ flow_01_turbo, flow_01_ex]
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置TTS 的模型，默认是：flow_01_turbo, 可选: [ flow_01_turbo, flow_01_ex]
                     * @param _model TTS 的模型，默认是：flow_01_turbo, 可选: [ flow_01_turbo, flow_01_ex]
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * 音色ID
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * TTS 的模型，默认是：flow_01_turbo, 可选: [ flow_01_turbo, flow_01_ex]
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TTSCONFIG_H_
