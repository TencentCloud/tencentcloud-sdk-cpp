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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_VOICEMESSAGECONF_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_VOICEMESSAGECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 离线语音服务配置数据
                */
                class VoiceMessageConf : public AbstractModel
                {
                public:
                    VoiceMessageConf();
                    ~VoiceMessageConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取离线语音服务开关，取值：open/close
                     * @return Status 离线语音服务开关，取值：open/close
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置离线语音服务开关，取值：open/close
                     * @param _status 离线语音服务开关，取值：open/close
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取离线语音支持语种，取值： all-全部，cnen-中英文。默认为中英文
                     * @return Language 离线语音支持语种，取值： all-全部，cnen-中英文。默认为中英文
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置离线语音支持语种，取值： all-全部，cnen-中英文。默认为中英文
                     * @param _language 离线语音支持语种，取值： all-全部，cnen-中英文。默认为中英文
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                private:

                    /**
                     * 离线语音服务开关，取值：open/close
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 离线语音支持语种，取值： all-全部，cnen-中英文。默认为中英文
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_VOICEMESSAGECONF_H_
