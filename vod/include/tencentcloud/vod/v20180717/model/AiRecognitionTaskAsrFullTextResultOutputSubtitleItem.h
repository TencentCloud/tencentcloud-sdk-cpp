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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUTSUBTITLEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUTSUBTITLEITEM_H_

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
                class AiRecognitionTaskAsrFullTextResultOutputSubtitleItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrFullTextResultOutputSubtitleItem();
                    ~AiRecognitionTaskAsrFullTextResultOutputSubtitleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒资字幕 ID，用于媒资字幕管理，仅当 Format 为 vtt 时有效。
<font color=red>注意：</font>2024-11-01T10:00:00Z 之前的任务返回此字段无效。
                     * @return Id 媒资字幕 ID，用于媒资字幕管理，仅当 Format 为 vtt 时有效。
<font color=red>注意：</font>2024-11-01T10:00:00Z 之前的任务返回此字段无效。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置媒资字幕 ID，用于媒资字幕管理，仅当 Format 为 vtt 时有效。
<font color=red>注意：</font>2024-11-01T10:00:00Z 之前的任务返回此字段无效。
                     * @param _id 媒资字幕 ID，用于媒资字幕管理，仅当 Format 为 vtt 时有效。
<font color=red>注意：</font>2024-11-01T10:00:00Z 之前的任务返回此字段无效。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取媒资字幕名字，用于播放器展示，仅当 Format 为 vtt 时有效。
<font color=red>注意：</font>2024-11-01T10:00:00Z 之前的任务返回此字段无效。
                     * @return Name 媒资字幕名字，用于播放器展示，仅当 Format 为 vtt 时有效。
<font color=red>注意：</font>2024-11-01T10:00:00Z 之前的任务返回此字段无效。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒资字幕名字，用于播放器展示，仅当 Format 为 vtt 时有效。
<font color=red>注意：</font>2024-11-01T10:00:00Z 之前的任务返回此字段无效。
                     * @param _name 媒资字幕名字，用于播放器展示，仅当 Format 为 vtt 时有效。
<font color=red>注意：</font>2024-11-01T10:00:00Z 之前的任务返回此字段无效。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取字幕语言。
                     * @return Language 字幕语言。
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置字幕语言。
                     * @param _language 字幕语言。
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取字幕文件格式，取值范围：
<li>vtt：WebVTT 字幕文件；</li>
<li>srt：SRT 字幕文件。</li>
                     * @return Format 字幕文件格式，取值范围：
<li>vtt：WebVTT 字幕文件；</li>
<li>srt：SRT 字幕文件。</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置字幕文件格式，取值范围：
<li>vtt：WebVTT 字幕文件；</li>
<li>srt：SRT 字幕文件。</li>
                     * @param _format 字幕文件格式，取值范围：
<li>vtt：WebVTT 字幕文件；</li>
<li>srt：SRT 字幕文件。</li>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取字幕文件 Url。
                     * @return Url 字幕文件 Url。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置字幕文件 Url。
                     * @param _url 字幕文件 Url。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 媒资字幕 ID，用于媒资字幕管理，仅当 Format 为 vtt 时有效。
<font color=red>注意：</font>2024-11-01T10:00:00Z 之前的任务返回此字段无效。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 媒资字幕名字，用于播放器展示，仅当 Format 为 vtt 时有效。
<font color=red>注意：</font>2024-11-01T10:00:00Z 之前的任务返回此字段无效。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字幕语言。
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 字幕文件格式，取值范围：
<li>vtt：WebVTT 字幕文件；</li>
<li>srt：SRT 字幕文件。</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 字幕文件 Url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUTSUBTITLEITEM_H_
