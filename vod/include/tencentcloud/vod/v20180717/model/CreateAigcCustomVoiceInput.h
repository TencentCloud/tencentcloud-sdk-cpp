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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICEINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICEINPUT_H_

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
                * 创建自定义音色回调输入信息。
                */
                class CreateAigcCustomVoiceInput : public AbstractModel
                {
                public:
                    CreateAigcCustomVoiceInput();
                    ~CreateAigcCustomVoiceInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>音色名称。</p>
                     * @return VoiceName <p>音色名称。</p>
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置<p>音色名称。</p>
                     * @param _voiceName <p>音色名称。</p>
                     * 
                     */
                    void SetVoiceName(const std::string& _voiceName);

                    /**
                     * 判断参数 VoiceName 是否已赋值
                     * @return VoiceName 是否已赋值
                     * 
                     */
                    bool VoiceNameHasBeenSet() const;

                    /**
                     * 获取<p>音色数据文件获取链接。</p>
                     * @return VoiceUrl <p>音色数据文件获取链接。</p>
                     * 
                     */
                    std::string GetVoiceUrl() const;

                    /**
                     * 设置<p>音色数据文件获取链接。</p>
                     * @param _voiceUrl <p>音色数据文件获取链接。</p>
                     * 
                     */
                    void SetVoiceUrl(const std::string& _voiceUrl);

                    /**
                     * 判断参数 VoiceUrl 是否已赋值
                     * @return VoiceUrl 是否已赋值
                     * 
                     */
                    bool VoiceUrlHasBeenSet() const;

                    /**
                     * 获取<p>历史作品 ID，可通过引用历史作品提供音频素材。</p>
                     * @return VideoId <p>历史作品 ID，可通过引用历史作品提供音频素材。</p>
                     * 
                     */
                    std::string GetVideoId() const;

                    /**
                     * 设置<p>历史作品 ID，可通过引用历史作品提供音频素材。</p>
                     * @param _videoId <p>历史作品 ID，可通过引用历史作品提供音频素材。</p>
                     * 
                     */
                    void SetVideoId(const std::string& _videoId);

                    /**
                     * 判断参数 VideoId 是否已赋值
                     * @return VideoId 是否已赋值
                     * 
                     */
                    bool VideoIdHasBeenSet() const;

                private:

                    /**
                     * <p>音色名称。</p>
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * <p>音色数据文件获取链接。</p>
                     */
                    std::string m_voiceUrl;
                    bool m_voiceUrlHasBeenSet;

                    /**
                     * <p>历史作品 ID，可通过引用历史作品提供音频素材。</p>
                     */
                    std::string m_videoId;
                    bool m_videoIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICEINPUT_H_
