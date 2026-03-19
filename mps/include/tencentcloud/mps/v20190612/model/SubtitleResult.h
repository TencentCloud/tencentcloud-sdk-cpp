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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLERESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLERESULT_H_

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
                * 智能字幕结果
                */
                class SubtitleResult : public AbstractModel
                {
                public:
                    SubtitleResult();
                    ~SubtitleResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字幕文件语言</p>
                     * @return Language <p>字幕文件语言</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>字幕文件语言</p>
                     * @param _language <p>字幕文件语言</p>
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
                     * 获取<p>处理是否成功</p>
                     * @return Status <p>处理是否成功</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>处理是否成功</p>
                     * @param _status <p>处理是否成功</p>
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
                     * 获取<p>字幕文件路径。</p>
                     * @return Path <p>字幕文件路径。</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>字幕文件路径。</p>
                     * @param _path <p>字幕文件路径。</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>字幕压制视频路径。</p>
                     * @return SubtitleEmbedPath <p>字幕压制视频路径。</p>
                     * 
                     */
                    std::string GetSubtitleEmbedPath() const;

                    /**
                     * 设置<p>字幕压制视频路径。</p>
                     * @param _subtitleEmbedPath <p>字幕压制视频路径。</p>
                     * 
                     */
                    void SetSubtitleEmbedPath(const std::string& _subtitleEmbedPath);

                    /**
                     * 判断参数 SubtitleEmbedPath 是否已赋值
                     * @return SubtitleEmbedPath 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedPathHasBeenSet() const;

                private:

                    /**
                     * <p>字幕文件语言</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>处理是否成功</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>字幕文件路径。</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>字幕压制视频路径。</p>
                     */
                    std::string m_subtitleEmbedPath;
                    bool m_subtitleEmbedPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLERESULT_H_
