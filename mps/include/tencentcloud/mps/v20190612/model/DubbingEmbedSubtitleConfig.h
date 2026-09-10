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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGEMBEDSUBTITLECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGEMBEDSUBTITLECONFIG_H_

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
                * dubbing任务压制字幕配置
                */
                class DubbingEmbedSubtitleConfig : public AbstractModel
                {
                public:
                    DubbingEmbedSubtitleConfig();
                    ~DubbingEmbedSubtitleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>压制字幕id。</p>
                     * @return SubtitleEmbedId <p>压制字幕id。</p>
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置<p>压制字幕id。</p>
                     * @param _subtitleEmbedId <p>压制字幕id。</p>
                     * 
                     */
                    void SetSubtitleEmbedId(const int64_t& _subtitleEmbedId);

                    /**
                     * 判断参数 SubtitleEmbedId 是否已赋值
                     * @return SubtitleEmbedId 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedIdHasBeenSet() const;

                    /**
                     * 获取<p>沿用原字幕位置。</p><p>默认值：1</p>
                     * @return UseOriginalPos <p>沿用原字幕位置。</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetUseOriginalPos() const;

                    /**
                     * 设置<p>沿用原字幕位置。</p><p>默认值：1</p>
                     * @param _useOriginalPos <p>沿用原字幕位置。</p><p>默认值：1</p>
                     * 
                     */
                    void SetUseOriginalPos(const int64_t& _useOriginalPos);

                    /**
                     * 判断参数 UseOriginalPos 是否已赋值
                     * @return UseOriginalPos 是否已赋值
                     * 
                     */
                    bool UseOriginalPosHasBeenSet() const;

                    /**
                     * 获取<p>沿用原字幕字号。</p><p>默认值：1</p>
                     * @return UseOriginalSize <p>沿用原字幕字号。</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetUseOriginalSize() const;

                    /**
                     * 设置<p>沿用原字幕字号。</p><p>默认值：1</p>
                     * @param _useOriginalSize <p>沿用原字幕字号。</p><p>默认值：1</p>
                     * 
                     */
                    void SetUseOriginalSize(const int64_t& _useOriginalSize);

                    /**
                     * 判断参数 UseOriginalSize 是否已赋值
                     * @return UseOriginalSize 是否已赋值
                     * 
                     */
                    bool UseOriginalSizeHasBeenSet() const;

                private:

                    /**
                     * <p>压制字幕id。</p>
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * <p>沿用原字幕位置。</p><p>默认值：1</p>
                     */
                    int64_t m_useOriginalPos;
                    bool m_useOriginalPosHasBeenSet;

                    /**
                     * <p>沿用原字幕字号。</p><p>默认值：1</p>
                     */
                    int64_t m_useOriginalSize;
                    bool m_useOriginalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGEMBEDSUBTITLECONFIG_H_
