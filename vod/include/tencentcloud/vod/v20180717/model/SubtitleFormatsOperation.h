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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEFORMATSOPERATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEFORMATSOPERATION_H_

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
                * 字幕格式列表操作。
                */
                class SubtitleFormatsOperation : public AbstractModel
                {
                public:
                    SubtitleFormatsOperation();
                    ~SubtitleFormatsOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作类型，取值范围：
<li>add：添加 Formats 指定的格式列表；</li>
<li>delete：删除 Formats 指定的格式列表；<l/i>
<li>reset：将已配置的格式列表重置为  Formats 指定的格式列表。</li>
                     * @return Type 操作类型，取值范围：
<li>add：添加 Formats 指定的格式列表；</li>
<li>delete：删除 Formats 指定的格式列表；<l/i>
<li>reset：将已配置的格式列表重置为  Formats 指定的格式列表。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置操作类型，取值范围：
<li>add：添加 Formats 指定的格式列表；</li>
<li>delete：删除 Formats 指定的格式列表；<l/i>
<li>reset：将已配置的格式列表重置为  Formats 指定的格式列表。</li>
                     * @param _type 操作类型，取值范围：
<li>add：添加 Formats 指定的格式列表；</li>
<li>delete：删除 Formats 指定的格式列表；<l/i>
<li>reset：将已配置的格式列表重置为  Formats 指定的格式列表。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取字幕格式列表，取值范围：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li>
                     * @return Formats 字幕格式列表，取值范围：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li>
                     * 
                     */
                    std::vector<std::string> GetFormats() const;

                    /**
                     * 设置字幕格式列表，取值范围：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li>
                     * @param _formats 字幕格式列表，取值范围：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li>
                     * 
                     */
                    void SetFormats(const std::vector<std::string>& _formats);

                    /**
                     * 判断参数 Formats 是否已赋值
                     * @return Formats 是否已赋值
                     * 
                     */
                    bool FormatsHasBeenSet() const;

                private:

                    /**
                     * 操作类型，取值范围：
<li>add：添加 Formats 指定的格式列表；</li>
<li>delete：删除 Formats 指定的格式列表；<l/i>
<li>reset：将已配置的格式列表重置为  Formats 指定的格式列表。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字幕格式列表，取值范围：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li>
                     */
                    std::vector<std::string> m_formats;
                    bool m_formatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEFORMATSOPERATION_H_
