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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBTITLEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBTITLEITEM_H_

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
                * 字幕信息。
                */
                class MediaSubtitleItem : public AbstractModel
                {
                public:
                    MediaSubtitleItem();
                    ~MediaSubtitleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字幕的唯一标识。
                     * @return Id 字幕的唯一标识。
                     */
                    std::string GetId() const;

                    /**
                     * 设置字幕的唯一标识。
                     * @param Id 字幕的唯一标识。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取字幕名字。
                     * @return Name 字幕名字。
                     */
                    std::string GetName() const;

                    /**
                     * 设置字幕名字。
                     * @param Name 字幕名字。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取字幕语言。常见的取值如下：
<li>cn：中文</li>
<li>ja：日文</li>
<li>en-US：英文</li>
其他取值参考 [RFC5646](https://tools.ietf.org/html/rfc5646)
                     * @return Language 字幕语言。常见的取值如下：
<li>cn：中文</li>
<li>ja：日文</li>
<li>en-US：英文</li>
其他取值参考 [RFC5646](https://tools.ietf.org/html/rfc5646)
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置字幕语言。常见的取值如下：
<li>cn：中文</li>
<li>ja：日文</li>
<li>en-US：英文</li>
其他取值参考 [RFC5646](https://tools.ietf.org/html/rfc5646)
                     * @param Language 字幕语言。常见的取值如下：
<li>cn：中文</li>
<li>ja：日文</li>
<li>en-US：英文</li>
其他取值参考 [RFC5646](https://tools.ietf.org/html/rfc5646)
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取字幕格式。取值范围如下：
<li>vtt</li>
                     * @return Format 字幕格式。取值范围如下：
<li>vtt</li>
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置字幕格式。取值范围如下：
<li>vtt</li>
                     * @param Format 字幕格式。取值范围如下：
<li>vtt</li>
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取字幕 URL。
                     * @return Url 字幕 URL。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置字幕 URL。
                     * @param Url 字幕 URL。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 字幕的唯一标识。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 字幕名字。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字幕语言。常见的取值如下：
<li>cn：中文</li>
<li>ja：日文</li>
<li>en-US：英文</li>
其他取值参考 [RFC5646](https://tools.ietf.org/html/rfc5646)
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 字幕格式。取值范围如下：
<li>vtt</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 字幕 URL。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBTITLEITEM_H_
