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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_TRANSDETAIL_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_TRANSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tmt/v20180321/model/BoundingBox.h>
#include <tencentcloud/tmt/v20180321/model/RotateParagraphRect.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 大模型图片翻译详情信息
                */
                class TransDetail : public AbstractModel
                {
                public:
                    TransDetail();
                    ~TransDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前行的原文本</p>
                     * @return SourceLineText <p>当前行的原文本</p>
                     * 
                     */
                    std::string GetSourceLineText() const;

                    /**
                     * 设置<p>当前行的原文本</p>
                     * @param _sourceLineText <p>当前行的原文本</p>
                     * 
                     */
                    void SetSourceLineText(const std::string& _sourceLineText);

                    /**
                     * 判断参数 SourceLineText 是否已赋值
                     * @return SourceLineText 是否已赋值
                     * 
                     */
                    bool SourceLineTextHasBeenSet() const;

                    /**
                     * 获取<p>当前行的译文</p>
                     * @return TargetLineText <p>当前行的译文</p>
                     * 
                     */
                    std::string GetTargetLineText() const;

                    /**
                     * 设置<p>当前行的译文</p>
                     * @param _targetLineText <p>当前行的译文</p>
                     * 
                     */
                    void SetTargetLineText(const std::string& _targetLineText);

                    /**
                     * 判断参数 TargetLineText 是否已赋值
                     * @return TargetLineText 是否已赋值
                     * 
                     */
                    bool TargetLineTextHasBeenSet() const;

                    /**
                     * 获取<p>段落文本框位置</p>
                     * @return BoundingBox <p>段落文本框位置</p>
                     * 
                     */
                    BoundingBox GetBoundingBox() const;

                    /**
                     * 设置<p>段落文本框位置</p>
                     * @param _boundingBox <p>段落文本框位置</p>
                     * 
                     */
                    void SetBoundingBox(const BoundingBox& _boundingBox);

                    /**
                     * 判断参数 BoundingBox 是否已赋值
                     * @return BoundingBox 是否已赋值
                     * 
                     */
                    bool BoundingBoxHasBeenSet() const;

                    /**
                     * 获取<p>行数</p>
                     * @return LinesCount <p>行数</p>
                     * 
                     */
                    int64_t GetLinesCount() const;

                    /**
                     * 设置<p>行数</p>
                     * @param _linesCount <p>行数</p>
                     * 
                     */
                    void SetLinesCount(const int64_t& _linesCount);

                    /**
                     * 判断参数 LinesCount 是否已赋值
                     * @return LinesCount 是否已赋值
                     * 
                     */
                    bool LinesCountHasBeenSet() const;

                    /**
                     * 获取<p>行高</p><p>单位：px</p>
                     * @return LineHeight <p>行高</p><p>单位：px</p>
                     * 
                     */
                    int64_t GetLineHeight() const;

                    /**
                     * 设置<p>行高</p><p>单位：px</p>
                     * @param _lineHeight <p>行高</p><p>单位：px</p>
                     * 
                     */
                    void SetLineHeight(const int64_t& _lineHeight);

                    /**
                     * 判断参数 LineHeight 是否已赋值
                     * @return LineHeight 是否已赋值
                     * 
                     */
                    bool LineHeightHasBeenSet() const;

                    /**
                     * 获取<p>正常段落spam_code字段为0；如果存在spam_code字段且值大于0（1: 命中垃圾检查；2: 命中安全策略；3: 其他。），则命中安全检查被过滤。</p>
                     * @return SpamCode <p>正常段落spam_code字段为0；如果存在spam_code字段且值大于0（1: 命中垃圾检查；2: 命中安全策略；3: 其他。），则命中安全检查被过滤。</p>
                     * 
                     */
                    int64_t GetSpamCode() const;

                    /**
                     * 设置<p>正常段落spam_code字段为0；如果存在spam_code字段且值大于0（1: 命中垃圾检查；2: 命中安全策略；3: 其他。），则命中安全检查被过滤。</p>
                     * @param _spamCode <p>正常段落spam_code字段为0；如果存在spam_code字段且值大于0（1: 命中垃圾检查；2: 命中安全策略；3: 其他。），则命中安全检查被过滤。</p>
                     * 
                     */
                    void SetSpamCode(const int64_t& _spamCode);

                    /**
                     * 判断参数 SpamCode 是否已赋值
                     * @return SpamCode 是否已赋值
                     * 
                     */
                    bool SpamCodeHasBeenSet() const;

                    /**
                     * 获取<p>段落文本旋转信息，只在valid为true时表示坐标有效</p>
                     * @return RotateParagraphRect <p>段落文本旋转信息，只在valid为true时表示坐标有效</p>
                     * 
                     */
                    RotateParagraphRect GetRotateParagraphRect() const;

                    /**
                     * 设置<p>段落文本旋转信息，只在valid为true时表示坐标有效</p>
                     * @param _rotateParagraphRect <p>段落文本旋转信息，只在valid为true时表示坐标有效</p>
                     * 
                     */
                    void SetRotateParagraphRect(const RotateParagraphRect& _rotateParagraphRect);

                    /**
                     * 判断参数 RotateParagraphRect 是否已赋值
                     * @return RotateParagraphRect 是否已赋值
                     * 
                     */
                    bool RotateParagraphRectHasBeenSet() const;

                private:

                    /**
                     * <p>当前行的原文本</p>
                     */
                    std::string m_sourceLineText;
                    bool m_sourceLineTextHasBeenSet;

                    /**
                     * <p>当前行的译文</p>
                     */
                    std::string m_targetLineText;
                    bool m_targetLineTextHasBeenSet;

                    /**
                     * <p>段落文本框位置</p>
                     */
                    BoundingBox m_boundingBox;
                    bool m_boundingBoxHasBeenSet;

                    /**
                     * <p>行数</p>
                     */
                    int64_t m_linesCount;
                    bool m_linesCountHasBeenSet;

                    /**
                     * <p>行高</p><p>单位：px</p>
                     */
                    int64_t m_lineHeight;
                    bool m_lineHeightHasBeenSet;

                    /**
                     * <p>正常段落spam_code字段为0；如果存在spam_code字段且值大于0（1: 命中垃圾检查；2: 命中安全策略；3: 其他。），则命中安全检查被过滤。</p>
                     */
                    int64_t m_spamCode;
                    bool m_spamCodeHasBeenSet;

                    /**
                     * <p>段落文本旋转信息，只在valid为true时表示坐标有效</p>
                     */
                    RotateParagraphRect m_rotateParagraphRect;
                    bool m_rotateParagraphRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_TRANSDETAIL_H_
