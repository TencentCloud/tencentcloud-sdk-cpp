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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CUSTOMVOICEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CUSTOMVOICEINFO_H_

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
                * 自定义音色信息。
                */
                class CustomVoiceInfo : public AbstractModel
                {
                public:
                    CustomVoiceInfo();
                    ~CustomVoiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>音色 ID。</p>
                     * @return VoiceId <p>音色 ID。</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>音色 ID。</p>
                     * @param _voiceId <p>音色 ID。</p>
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
                     * 获取<p>音色信息。</p>
                     * @return VoiceInfo <p>音色信息。</p>
                     * 
                     */
                    std::string GetVoiceInfo() const;

                    /**
                     * 设置<p>音色信息。</p>
                     * @param _voiceInfo <p>音色信息。</p>
                     * 
                     */
                    void SetVoiceInfo(const std::string& _voiceInfo);

                    /**
                     * 判断参数 VoiceInfo 是否已赋值
                     * @return VoiceInfo 是否已赋值
                     * 
                     */
                    bool VoiceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>音色 ID。</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>音色信息。</p>
                     */
                    std::string m_voiceInfo;
                    bool m_voiceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CUSTOMVOICEINFO_H_
