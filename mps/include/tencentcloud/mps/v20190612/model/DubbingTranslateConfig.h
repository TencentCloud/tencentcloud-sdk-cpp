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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGTRANSLATECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGTRANSLATECONFIG_H_

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
                * dubbing任务翻译配置
                */
                class DubbingTranslateConfig : public AbstractModel
                {
                public:
                    DubbingTranslateConfig();
                    ~DubbingTranslateConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>源语言。</p>
                     * @return VideoSrcLanguage <p>源语言。</p>
                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置<p>源语言。</p>
                     * @param _videoSrcLanguage <p>源语言。</p>
                     * 
                     */
                    void SetVideoSrcLanguage(const std::string& _videoSrcLanguage);

                    /**
                     * 判断参数 VideoSrcLanguage 是否已赋值
                     * @return VideoSrcLanguage 是否已赋值
                     * 
                     */
                    bool VideoSrcLanguageHasBeenSet() const;

                    /**
                     * 获取<p>翻译目标语言。</p>
                     * @return TranslateDstLanguage <p>翻译目标语言。</p>
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置<p>翻译目标语言。</p>
                     * @param _translateDstLanguage <p>翻译目标语言。</p>
                     * 
                     */
                    void SetTranslateDstLanguage(const std::string& _translateDstLanguage);

                    /**
                     * 判断参数 TranslateDstLanguage 是否已赋值
                     * @return TranslateDstLanguage 是否已赋值
                     * 
                     */
                    bool TranslateDstLanguageHasBeenSet() const;

                    /**
                     * 获取<p>智能简化译文。</p><p>枚举值：</p><ul><li>ON： 开启智能简化译文。</li><li>OFF： 关闭智能简化译文。</li></ul><p>默认值：OFF</p>
                     * @return SimplifyTranslation <p>智能简化译文。</p><p>枚举值：</p><ul><li>ON： 开启智能简化译文。</li><li>OFF： 关闭智能简化译文。</li></ul><p>默认值：OFF</p>
                     * 
                     */
                    std::string GetSimplifyTranslation() const;

                    /**
                     * 设置<p>智能简化译文。</p><p>枚举值：</p><ul><li>ON： 开启智能简化译文。</li><li>OFF： 关闭智能简化译文。</li></ul><p>默认值：OFF</p>
                     * @param _simplifyTranslation <p>智能简化译文。</p><p>枚举值：</p><ul><li>ON： 开启智能简化译文。</li><li>OFF： 关闭智能简化译文。</li></ul><p>默认值：OFF</p>
                     * 
                     */
                    void SetSimplifyTranslation(const std::string& _simplifyTranslation);

                    /**
                     * 判断参数 SimplifyTranslation 是否已赋值
                     * @return SimplifyTranslation 是否已赋值
                     * 
                     */
                    bool SimplifyTranslationHasBeenSet() const;

                private:

                    /**
                     * <p>源语言。</p>
                     */
                    std::string m_videoSrcLanguage;
                    bool m_videoSrcLanguageHasBeenSet;

                    /**
                     * <p>翻译目标语言。</p>
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * <p>智能简化译文。</p><p>枚举值：</p><ul><li>ON： 开启智能简化译文。</li><li>OFF： 关闭智能简化译文。</li></ul><p>默认值：OFF</p>
                     */
                    std::string m_simplifyTranslation;
                    bool m_simplifyTranslationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGTRANSLATECONFIG_H_
