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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETRANSRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETRANSRESULTITEM_H_

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
                * 字幕翻译输出结果
                */
                class SubtitleTransResultItem : public AbstractModel
                {
                public:
                    SubtitleTransResultItem();
                    ~SubtitleTransResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>翻译标识：</p><ul><li>Success</li><li>Error</li></ul>
                     * @return Status <p>翻译标识：</p><ul><li>Success</li><li>Error</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>翻译标识：</p><ul><li>Success</li><li>Error</li></ul>
                     * @param _status <p>翻译标识：</p><ul><li>Success</li><li>Error</li></ul>
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
                     * 获取<p>源语言（如&quot;en&quot;）</p>
                     * @return TransSrc <p>源语言（如&quot;en&quot;）</p>
                     * 
                     */
                    std::string GetTransSrc() const;

                    /**
                     * 设置<p>源语言（如&quot;en&quot;）</p>
                     * @param _transSrc <p>源语言（如&quot;en&quot;）</p>
                     * 
                     */
                    void SetTransSrc(const std::string& _transSrc);

                    /**
                     * 判断参数 TransSrc 是否已赋值
                     * @return TransSrc 是否已赋值
                     * 
                     */
                    bool TransSrcHasBeenSet() const;

                    /**
                     * 获取<p>目标语言（如&quot;zh&quot;）</p>
                     * @return TransDst <p>目标语言（如&quot;zh&quot;）</p>
                     * 
                     */
                    std::string GetTransDst() const;

                    /**
                     * 设置<p>目标语言（如&quot;zh&quot;）</p>
                     * @param _transDst <p>目标语言（如&quot;zh&quot;）</p>
                     * 
                     */
                    void SetTransDst(const std::string& _transDst);

                    /**
                     * 判断参数 TransDst 是否已赋值
                     * @return TransDst 是否已赋值
                     * 
                     */
                    bool TransDstHasBeenSet() const;

                    /**
                     * 获取<p>字幕文件地址</p>
                     * @return Path <p>字幕文件地址</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>字幕文件地址</p>
                     * @param _path <p>字幕文件地址</p>
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
                     * 获取<p>翻译字幕压制视频路径。</p>
                     * @return SubtitleEmbedPath <p>翻译字幕压制视频路径。</p>
                     * 
                     */
                    std::string GetSubtitleEmbedPath() const;

                    /**
                     * 设置<p>翻译字幕压制视频路径。</p>
                     * @param _subtitleEmbedPath <p>翻译字幕压制视频路径。</p>
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
                     * <p>翻译标识：</p><ul><li>Success</li><li>Error</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>源语言（如&quot;en&quot;）</p>
                     */
                    std::string m_transSrc;
                    bool m_transSrcHasBeenSet;

                    /**
                     * <p>目标语言（如&quot;zh&quot;）</p>
                     */
                    std::string m_transDst;
                    bool m_transDstHasBeenSet;

                    /**
                     * <p>字幕文件地址</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>翻译字幕压制视频路径。</p>
                     */
                    std::string m_subtitleEmbedPath;
                    bool m_subtitleEmbedPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETRANSRESULTITEM_H_
