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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_GENERATELIVEAVATARSCRIPTBROADCASTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_GENERATELIVEAVATARSCRIPTBROADCASTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * GenerateLiveAvatarScriptBroadcast返回参数结构体
                */
                class GenerateLiveAvatarScriptBroadcastResponse : public AbstractModel
                {
                public:
                    GenerateLiveAvatarScriptBroadcastResponse();
                    ~GenerateLiveAvatarScriptBroadcastResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取音频播报 URL。
                     * @return PreviewAudioUrl 音频播报 URL。
                     * 
                     */
                    std::string GetPreviewAudioUrl() const;

                    /**
                     * 判断参数 PreviewAudioUrl 是否已赋值
                     * @return PreviewAudioUrl 是否已赋值
                     * 
                     */
                    bool PreviewAudioUrlHasBeenSet() const;

                private:

                    /**
                     * 音频播报 URL。
                     */
                    std::string m_previewAudioUrl;
                    bool m_previewAudioUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_GENERATELIVEAVATARSCRIPTBROADCASTRESPONSE_H_
